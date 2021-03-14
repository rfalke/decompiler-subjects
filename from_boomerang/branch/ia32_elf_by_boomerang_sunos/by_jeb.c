
int __deregister_frame_info(int param0) {
    int result;
    unsigned int* ptr0 = (unsigned int*)&objects;
    if(!objects) {
    loc_8049311:
        /*NO_RETURN*/ →abort();
    }
    do {
        int* ptr1 = *ptr0;
        if(*(ptr1 + 2) == param0) {
            *ptr0 = *(ptr1 + 5);
            if(*ptr1) {
                →free(*(void**)(ptr1 + 3));
            }
            return result;
        }
        ptr0 = (unsigned int*)(ptr1 + 5);
        if(!*(ptr1 + 5)) {
            goto loc_8049311;
        }
    }
    while(1);
    return result;
}

int __frame_state_for(int param0, int param1) {
    char* ptr0;
    int v0;
    int v1;
    char v2;
    int v3;
    int result = find_fde(param0);
    int v4 = result;
    if(result) {
        unsigned int* ptr1 = &ptr0;
        result = (int)extract_cie_info(v4, &ptr0);
        char* ptr2 = (char*)result;
        if(ptr2) {
            void* ptr3 = &v2;
            →memset(&v2, 0, 116);
            short v5 = (unsigned short)v0;
            int v6 = v3;
            int* ptr4 = (int*)(v4 - (*(int*)(v4 + 4) - 4));
            int* ptr5 = (int*)(*ptr4 + (int)ptr4) + 1;
            if((unsigned int)ptr2 < (unsigned int)ptr5) {
                int v7 = (int)ptr1;
                char* ptr6 = (char*)ptr3;
                do {
                    ptr2 = execute_cfa_insn(ptr2, ptr6, v7, NULL);
                }
                while((unsigned int)ptr2 < (unsigned int)ptr5);
            }
            char* ptr7 = (char*)(v4 + 16);
            if(*ptr0 == 122) {
                int v8 = decode_uleb128((int)ptr7, (int)&v1);
                ptr7 = (char*)(v8 + v1);
            }
            unsigned int v9 = (unsigned int)(*(int*)v4 + v4 + 4);
            unsigned int v10 = *(unsigned int*)(v4 + 8);
            if((unsigned int)ptr7 < v9) {
                void* ptr8 = &v10;
                while(v10 <= (unsigned int)param0) {
                    ptr7 = execute_cfa_insn(ptr7, (char*)&v2, (int)&ptr0, ptr8);
                    if((unsigned int)ptr7 >= v9) {
                        break;
                    }
                }
            }
            int v11 = param1;
            void* ptr9 = &v2;
            for(int i = 28; i != 0; --i) {
                *(int*)v11 = *(int*)ptr9;
                ptr9 = (void*)((int)ptr9 + 4);
                v11 += 4;
            }
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

unsigned int add_fdes(int param0, int param1, int* param2, unsigned int* param3, unsigned int* param4) {
    unsigned int result;
    int v0;
    int v1 = &loc_8048B86;
    int v2 = param0;
    int v3 = *param2;
    unsigned int v4 = *param3;
    unsigned int v5 = *param4;
    if(*(int*)v2) {
        do {
            if(*(int*)(v2 + 4) && *(int*)(v2 + 8)) {
                v1 = v2;
                int v6 = v3;
                ++v3;
                fde_insert(param1, v6, v1);
                unsigned int v7 = *(unsigned int*)(v2 + 8);
                if(v7 < v4) {
                    v4 = v7;
                }
                result = (unsigned int)(*(int*)(v2 + 12) + v7);
                if(result > v5) {
                    v5 = result;
                }
            }
            v0 = *(int*)v2 + v2;
            v2 = v0 + 4;
        }
        while(*(int*)(v0 + 4));
    }
    *param2 = v3;
    *param3 = v4;
    *param4 = v5;
    return result;
}

int count_fdes(int* param0) {
    int* ptr0;
    int* ptr1 = param0;
    int result = 0;
    if(*ptr1) {
        do {
            if(*(ptr1 + 1) && *(ptr1 + 2)) {
                ++result;
            }
            ptr0 = (int*)(*ptr1 + (int)ptr1);
            ptr1 = ptr0 + 1;
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

char* execute_cfa_insn(char* param0, char* param1, int param2, void* param3) {
    char* ptr0;
    char* ptr1;
    int v0;
    int v1;
    char* ptr2;
    unsigned int v2 = (unsigned int)*param0;
    ++param0;
    int v3 = v2 & 0x40;
    if((v2 & 0x40)) {
        *(int*)param3 = (v2 & 0x3f) * *(int*)(param2 + 8) + *(int*)param3;
    }
    else if((unsigned char)v2 < 0) {
        ptr1 = (char*)(v2 & 0x3f);
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v0;
    }
    else if(((unsigned char)v2 & 0xc0)) {
        *(char*)((int*)((int)(char*)(v2 & 0x3f) + (int)param1) + 23) = (unsigned char)v3;
    }
    else if(v2 == 1) {
        char* ptr3 = param0;
        *(int*)param3 = *(int*)ptr3;
        param0 = ptr3 + 4;
    }
    else if(v2 == 2) {
        char* ptr4 = param0;
        *(int*)param3 = (unsigned int)*ptr4 + *(int*)param3;
        param0 = ptr4 + 1;
    }
    else if(v2 == 3) {
        char* ptr5 = param0;
        *(int*)param3 = (unsigned int)*(short*)ptr5 + *(int*)param3;
        param0 = ptr5 + 2;
    }
    else if(v2 == 4) {
        char* ptr6 = param0;
        *(int*)param3 = *(int*)ptr6 + *(int*)param3;
        param0 = ptr6 + 4;
    }
    else if(v2 == 5) {
        int v4 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v4, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        char* ptr7 = param1;
        *(char*)((int*)((int)ptr7 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr7) + 4) = v0;
    }
    else if(v2 == 6) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 0;
    }
    else if(v2 == 9) {
        int v5 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v5, (int)&v1);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 2;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v1;
    }
    else if(v2 == 10) {
        void* ptr8 = →malloc(116);
        void* ptr9 = ptr8;
        char* ptr10 = param1;
        for(int i = 29; i != 0; --i) {
            *(int*)ptr9 = *(int*)ptr10;
            ptr10 += 4;
            ptr9 = (void*)((int)ptr9 + 4);
        }
        *(void**)(param1 + 112) = ptr8;
    }
    else if(v2 == 11) {
        void* __ptr = *(void**)(param1 + 112);
        char* ptr11 = param1;
        void* ptr12 = __ptr;
        for(int j = 29; j != 0; --j) {
            *(int*)ptr11 = *(int*)ptr12;
            ptr12 = (void*)((int)ptr12 + 4);
            ptr11 += 4;
        }
        →free(__ptr);
    }
    else if(v2 == 12) {
        int v6 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v6, (int)&v0);
        ptr0 = param1;
        *(short*)(ptr0 + 88) = (unsigned short)ptr1;
        *(int*)(ptr0 + 8) = v0;
    }
    else if(v2 == 13) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(short*)(param1 + 88) = (unsigned short)ptr1;
    }
    else if(v2 == 14) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 8) = v0;
    }
    else if(v2 >= 15 && v2 <= 44) {
    loc_8049228:
        /*NO_RETURN*/ →abort();
    }
    else if(v2 == 45) {
        ptr1 = (char*)0x10;
        do {
            *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 1;
            *(void**)((int*)((int)(int*)((int)ptr1 * 4) + (int)param1) + 4) = (void*)((int*)((int)ptr1 * 4) - 16);
            ptr2 = ptr1 + 1;
            ++ptr1;
        }
        while((unsigned int)ptr2 <= 31);
    }
    else if(v2 == 46) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 12) = v0;
    }
    else if(v2 != 0 && v2 != 7 && v2 != 8) {
        goto loc_8049228;
    }
    return param0;
}

int* extract_cie_info(int param0, unsigned int* param1) {
    int* result;
    int v0;
    int v1 = &loc_8048DA2;
    int* ptr0 = (int*)(param0 - (*(int*)(param0 + 4) - 4));
    char* ptr1 = (char*)((char*)ptr0 + 9);
    char* ptr2 = (char*)((char*)ptr0 + 9);
    *param1 = ptr1;
    char* ptr3 = (char*)0x80495BC;
    int v2 = 1;
    char* ptr4 = (char*)0x80495BC;
    char v3 = 1;
    while(v2 != 0) {
        v3 = *ptr1 == *ptr4;
        ++ptr1;
        ++ptr4;
        --v2;
        if(!v3) {
            break;
        }
    }
    if(!v3) {
        char* ptr5 = ptr2;
        char* ptr6 = (char*)0x80495BD;
        int v4 = 3;
        char v5 = 1;
        while(v4 != 0) {
            v5 = *ptr5 == *ptr6;
            ++ptr5;
            ++ptr6;
            --v4;
            if(!v5) {
                break;
            }
        }
        if(v5 || *(char*)((char*)ptr0 + 9) == 122) {
            goto loc_8048E03;
        }
        else {
            result = NULL;
        }
    }
    else {
    loc_8048E03:
        char* ptr7 = *param1;
        ptr3 = *param1;
        char* ptr8 = ptr7;
        int v6 = -1;
        while(v6 != 0) {
            char v7 = *ptr8 == 0;
            ++ptr8;
            --v6;
            if(!~v7) {
                break;
            }
        }
        char* ptr9 = (char*)((char*)(~v6 + (int)ptr7) - 1);
        ptr2 = (char*)((char*)(~v6 + (int)ptr7) - 1);
        int* ptr10 = (int*)(ptr9 + 1);
        char* ptr11 = ptr7;
        char* ptr12 = (char*)0x80495BD;
        ptr3 = (char*)0x80495BD;
        int v8 = 3;
        char v9 = 1;
        while(v8 != 0) {
            v9 = *ptr11 == *ptr12;
            ++ptr11;
            ++ptr12;
            --v8;
            if(!v9) {
                break;
            }
        }
        if(v9) {
            *(int*)(param1 + 1) = *(int*)(ptr9 + 1);
            ptr10 = (int*)(ptr2 + 5);
        }
        else {
            *(int*)(param1 + 1) = 0;
        }
        char* ptr13 = (char*)decode_uleb128((int)ptr10, (int)(int*)(param1 + 2));
        char* ptr14 = decode_sleb128(ptr13, param1 + 3);
        *(int*)(param1 + 4) = (unsigned int)ptr14[0];
        ptr0 = (int*)(ptr14 + 1);
        if(**param1 == 122) {
            int v10 = decode_uleb128((int)ptr0, (int)&v0);
            ptr0 = (int*)(v10 + v0);
        }
        result = ptr0;
    }
    return result;
}

int fde_insert(int param0, int param1, int param2) {
    int result;
    int counter = param1;
    int v0 = param0;
    *(int*)(counter * 4 + v0) = param2;
    if(counter) {
        int* ptr0 = (int*)(counter * 4 + v0);
        do {
            int v1 = *ptr0;
            int v2 = *ptr0;
            int v3 = *(int*)(counter * 4 + param0 - 4);
            int v4 = *(int*)(counter * 4 + param0 - 4);
            result = *(int*)(v1 + 8) - *(int*)(v3 + 8);
            if(result >= 0) {
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
    int v0 = &loc_8048D02;
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
        unsigned int v1 = 0;
        int v2 = ptr0[4];
        int v3 = ptr0[4];
        if((unsigned int)v2 <= 0) {
            return 0;
        }
        int v4 = ptr0[3];
        do {
            int v5 = (v1 + v3) >>> 1;
            v2 = *(int*)(v5 * 4 + v4);
            int result = *(int*)(v5 * 4 + v4);
            int v6 = *(int*)(v2 + 8);
            if((unsigned int)v6 > (unsigned int)param0) {
                v3 = v5;
                goto loc_8048D85;
            }
            if((unsigned int)(*(int*)(result + 12) + v6) < (unsigned int)param0) {
                v1 = (unsigned int)(v5 + 1);
            loc_8048D85:
                if(v1 >= (unsigned int)v3) {
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
    int v0;
    int v1 = &loc_8048C16;
    unsigned int* ptr0 = *(unsigned int*)(param0 + 3);
    if(ptr0) {
        unsigned int* ptr1 = ptr0;
        v0 = 0;
        if(*ptr1) {
            do {
                int v2 = count_fdes(*ptr1);
                v0 += v2;
                ++ptr1;
            }
            while(*ptr1);
        }
    }
    else {
        v0 = count_fdes(*(int**)(param0 + 2));
    }
    *(param0 + 4) = v0;
    void* ptr2 = →malloc((size_t)(v0 * 4));
    int v3 = -1;
    int result = 0;
    v0 = 0;
    int* ptr3 = *(unsigned int*)(param0 + 3);
    if(ptr3) {
        int* ptr4 = ptr3;
        if(*ptr4) {
            unsigned int* ptr5 = &result;
            do {
                add_fdes(*ptr4, (int)ptr2, &v0, &v3, ptr5);
                ++ptr4;
            }
            while(*ptr4);
        }
    }
    else {
        add_fdes(*(param0 + 2), (int)ptr2, &v0, &v3, &result);
    }
    *(void**)(param0 + 3) = ptr2;
    *param0 = v3;
    *(param0 + 1) = result;
    return result;
}

void init_dummy() {
}

void init_dummy2() {
}

int main() {
    int v0;
    unsigned int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    →scanf((char*)&gvar_8049528, &v0, v4, v5);
    →scanf((char*)&gvar_8049528, &v1, v2, v3);
    if(v0 == 5) {
        →printf("Equal\n");
    }
    if(v0 != 5) {
        →printf("Not Equal\n");
        if(v0 < 5) {
            →printf("Greater\n");
            if(v0 < 5) {
                goto loc_80489C8;
            }
        }
        goto loc_80489B6;
    }
    else {
    loc_80489B6:
        →printf("Less or Equal\n");
        if(v0 <= 5) {
        loc_80489C8:
            →printf("Greater or Equal\n");
            if(v0 <= 5) {
                goto loc_80489E5;
            }
        }
        →printf("Less\n");
    }
loc_80489E5:
    if(v1 < 5) {
        →printf("Greater Unsigned\n");
        if(v1 < 5) {
            goto loc_8048A10;
        }
        else {
            goto loc_80489FE;
        }
    }
    else {
    loc_80489FE:
        →printf("Less or Equal Unsigned\n");
        if(v1 <= 5) {
        loc_8048A10:
            →printf("Carry Clear\n");
            if(v1 <= 5) {
                goto loc_8048A2F;
            }
        }
        →printf("Carry Set\n");
    }
loc_8048A2F:
    if(v0 <= 5) {
        →printf("Minus\n");
        if(v0 > 5) {
            →printf("Plus\n");
            return 0;
        }
    }
    else {
        →printf("Plus\n");
    }
    return 0;
}

int sub_8048791() {
    jump gvar_804A5C8;
}

int sub_80488A0() {
    call();
    hlt();
}

char* execute_cfa_insn(char* param0, char* param1, int param2, void* param3) {
    char* ptr0;
    char* ptr1;
    int v0;
    int v1;
    char* ptr2;
    unsigned int v2 = (unsigned int)*param0;
    ++param0;
    int v3 = v2 & 0x40;
    if((v2 & 0x40)) {
        *(int*)param3 = (v2 & 0x3f) * *(int*)(param2 + 8) + *(int*)param3;
    }
    else if((unsigned char)v2 < 0) {
        ptr1 = (char*)(v2 & 0x3f);
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v0;
    }
    else if(((unsigned char)v2 & 0xc0)) {
        *(char*)((int*)((int)(char*)(v2 & 0x3f) + (int)param1) + 23) = (unsigned char)v3;
    }
    else if(v2 == 1) {
        char* ptr3 = param0;
        *(int*)param3 = *(int*)ptr3;
        param0 = ptr3 + 4;
    }
    else if(v2 == 2) {
        char* ptr4 = param0;
        *(int*)param3 = (unsigned int)*ptr4 + *(int*)param3;
        param0 = ptr4 + 1;
    }
    else if(v2 == 3) {
        char* ptr5 = param0;
        *(int*)param3 = (unsigned int)*(short*)ptr5 + *(int*)param3;
        param0 = ptr5 + 2;
    }
    else if(v2 == 4) {
        char* ptr6 = param0;
        *(int*)param3 = *(int*)ptr6 + *(int*)param3;
        param0 = ptr6 + 4;
    }
    else if(v2 == 5) {
        int v4 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v4, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        char* ptr7 = param1;
        *(char*)((int*)((int)ptr7 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr7) + 4) = v0;
    }
    else if(v2 == 6) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 0;
    }
    else if(v2 == 9) {
        int v5 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v5, (int)&v1);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 2;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v1;
    }
    else if(v2 == 10) {
        void* ptr8 = →malloc(116);
        void* ptr9 = ptr8;
        char* ptr10 = param1;
        for(int i = 29; i != 0; --i) {
            *(int*)ptr9 = *(int*)ptr10;
            ptr10 += 4;
            ptr9 = (void*)((int)ptr9 + 4);
        }
        *(void**)(param1 + 112) = ptr8;
    }
    else if(v2 == 11) {
        void* __ptr = *(void**)(param1 + 112);
        char* ptr11 = param1;
        void* ptr12 = __ptr;
        for(int j = 29; j != 0; --j) {
            *(int*)ptr11 = *(int*)ptr12;
            ptr12 = (void*)((int)ptr12 + 4);
            ptr11 += 4;
        }
        →free(__ptr);
    }
    else if(v2 == 12) {
        int v6 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v6, (int)&v0);
        ptr0 = param1;
        *(short*)(ptr0 + 88) = (unsigned short)ptr1;
        *(int*)(ptr0 + 8) = v0;
    }
    else if(v2 == 13) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(short*)(param1 + 88) = (unsigned short)ptr1;
    }
    else if(v2 == 14) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 8) = v0;
    }
    else if(v2 >= 15 && v2 <= 44) {
    loc_8049228:
        /*NO_RETURN*/ →abort();
    }
    else if(v2 == 45) {
        ptr1 = (char*)0x10;
        do {
            *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 1;
            *(void**)((int*)((int)(int*)((int)ptr1 * 4) + (int)param1) + 4) = (void*)((int*)((int)ptr1 * 4) - 16);
            ptr2 = ptr1 + 1;
            ++ptr1;
        }
        while((unsigned int)ptr2 <= 31);
    }
    else if(v2 == 46) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 12) = v0;
    }
    else if(v2 != 0 && v2 != 7 && v2 != 8) {
        goto loc_8049228;
    }
    return param0;
}

char* execute_cfa_insn(char* param0, char* param1, int param2, void* param3) {
    char* ptr0;
    char* ptr1;
    int v0;
    int v1;
    char* ptr2;
    unsigned int v2 = (unsigned int)*param0;
    ++param0;
    int v3 = v2 & 0x40;
    if((v2 & 0x40)) {
        *(int*)param3 = (v2 & 0x3f) * *(int*)(param2 + 8) + *(int*)param3;
    }
    else if((unsigned char)v2 < 0) {
        ptr1 = (char*)(v2 & 0x3f);
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v0;
    }
    else if(((unsigned char)v2 & 0xc0)) {
        *(char*)((int*)((int)(char*)(v2 & 0x3f) + (int)param1) + 23) = (unsigned char)v3;
    }
    else if(v2 == 1) {
        char* ptr3 = param0;
        *(int*)param3 = *(int*)ptr3;
        param0 = ptr3 + 4;
    }
    else if(v2 == 2) {
        char* ptr4 = param0;
        *(int*)param3 = (unsigned int)*ptr4 + *(int*)param3;
        param0 = ptr4 + 1;
    }
    else if(v2 == 3) {
        char* ptr5 = param0;
        *(int*)param3 = (unsigned int)*(short*)ptr5 + *(int*)param3;
        param0 = ptr5 + 2;
    }
    else if(v2 == 4) {
        char* ptr6 = param0;
        *(int*)param3 = *(int*)ptr6 + *(int*)param3;
        param0 = ptr6 + 4;
    }
    else if(v2 == 5) {
        int v4 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v4, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        char* ptr7 = param1;
        *(char*)((int*)((int)ptr7 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr7) + 4) = v0;
    }
    else if(v2 == 6) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 0;
    }
    else if(v2 == 9) {
        int v5 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v5, (int)&v1);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 2;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v1;
    }
    else if(v2 == 10) {
        void* ptr8 = →malloc(116);
        void* ptr9 = ptr8;
        char* ptr10 = param1;
        for(int i = 29; i != 0; --i) {
            *(int*)ptr9 = *(int*)ptr10;
            ptr10 += 4;
            ptr9 = (void*)((int)ptr9 + 4);
        }
        *(void**)(param1 + 112) = ptr8;
    }
    else if(v2 == 11) {
        void* __ptr = *(void**)(param1 + 112);
        char* ptr11 = param1;
        void* ptr12 = __ptr;
        for(int j = 29; j != 0; --j) {
            *(int*)ptr11 = *(int*)ptr12;
            ptr12 = (void*)((int)ptr12 + 4);
            ptr11 += 4;
        }
        →free(__ptr);
    }
    else if(v2 == 12) {
        int v6 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v6, (int)&v0);
        ptr0 = param1;
        *(short*)(ptr0 + 88) = (unsigned short)ptr1;
        *(int*)(ptr0 + 8) = v0;
    }
    else if(v2 == 13) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(short*)(param1 + 88) = (unsigned short)ptr1;
    }
    else if(v2 == 14) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 8) = v0;
    }
    else if(v2 >= 15 && v2 <= 44) {
    loc_8049228:
        /*NO_RETURN*/ →abort();
    }
    else if(v2 == 45) {
        ptr1 = (char*)0x10;
        do {
            *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 1;
            *(void**)((int*)((int)(int*)((int)ptr1 * 4) + (int)param1) + 4) = (void*)((int*)((int)ptr1 * 4) - 16);
            ptr2 = ptr1 + 1;
            ++ptr1;
        }
        while((unsigned int)ptr2 <= 31);
    }
    else if(v2 == 46) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 12) = v0;
    }
    else if(v2 != 0 && v2 != 7 && v2 != 8) {
        goto loc_8049228;
    }
    return param0;
}

char* execute_cfa_insn(char* param0, char* param1, int param2, void* param3) {
    char* ptr0;
    char* ptr1;
    int v0;
    int v1;
    char* ptr2;
    unsigned int v2 = (unsigned int)*param0;
    ++param0;
    int v3 = v2 & 0x40;
    if((v2 & 0x40)) {
        *(int*)param3 = (v2 & 0x3f) * *(int*)(param2 + 8) + *(int*)param3;
    }
    else if((unsigned char)v2 < 0) {
        ptr1 = (char*)(v2 & 0x3f);
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v0;
    }
    else if(((unsigned char)v2 & 0xc0)) {
        *(char*)((int*)((int)(char*)(v2 & 0x3f) + (int)param1) + 23) = (unsigned char)v3;
    }
    else if(v2 == 1) {
        char* ptr3 = param0;
        *(int*)param3 = *(int*)ptr3;
        param0 = ptr3 + 4;
    }
    else if(v2 == 2) {
        char* ptr4 = param0;
        *(int*)param3 = (unsigned int)*ptr4 + *(int*)param3;
        param0 = ptr4 + 1;
    }
    else if(v2 == 3) {
        char* ptr5 = param0;
        *(int*)param3 = (unsigned int)*(short*)ptr5 + *(int*)param3;
        param0 = ptr5 + 2;
    }
    else if(v2 == 4) {
        char* ptr6 = param0;
        *(int*)param3 = *(int*)ptr6 + *(int*)param3;
        param0 = ptr6 + 4;
    }
    else if(v2 == 5) {
        int v4 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v4, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        char* ptr7 = param1;
        *(char*)((int*)((int)ptr7 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr7) + 4) = v0;
    }
    else if(v2 == 6) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 0;
    }
    else if(v2 == 9) {
        int v5 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v5, (int)&v1);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 2;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v1;
    }
    else if(v2 == 10) {
        void* ptr8 = →malloc(116);
        void* ptr9 = ptr8;
        char* ptr10 = param1;
        for(int i = 29; i != 0; --i) {
            *(int*)ptr9 = *(int*)ptr10;
            ptr10 += 4;
            ptr9 = (void*)((int)ptr9 + 4);
        }
        *(void**)(param1 + 112) = ptr8;
    }
    else if(v2 == 11) {
        void* __ptr = *(void**)(param1 + 112);
        char* ptr11 = param1;
        void* ptr12 = __ptr;
        for(int j = 29; j != 0; --j) {
            *(int*)ptr11 = *(int*)ptr12;
            ptr12 = (void*)((int)ptr12 + 4);
            ptr11 += 4;
        }
        →free(__ptr);
    }
    else if(v2 == 12) {
        int v6 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v6, (int)&v0);
        ptr0 = param1;
        *(short*)(ptr0 + 88) = (unsigned short)ptr1;
        *(int*)(ptr0 + 8) = v0;
    }
    else if(v2 == 13) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(short*)(param1 + 88) = (unsigned short)ptr1;
    }
    else if(v2 == 14) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 8) = v0;
    }
    else if(v2 >= 15 && v2 <= 44) {
    loc_8049228:
        /*NO_RETURN*/ →abort();
    }
    else if(v2 == 45) {
        ptr1 = (char*)0x10;
        do {
            *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 1;
            *(void**)((int*)((int)(int*)((int)ptr1 * 4) + (int)param1) + 4) = (void*)((int*)((int)ptr1 * 4) - 16);
            ptr2 = ptr1 + 1;
            ++ptr1;
        }
        while((unsigned int)ptr2 <= 31);
    }
    else if(v2 == 46) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 12) = v0;
    }
    else if(v2 != 0 && v2 != 7 && v2 != 8) {
        goto loc_8049228;
    }
    return param0;
}

char* execute_cfa_insn(char* param0, char* param1, int param2, void* param3) {
    char* ptr0;
    char* ptr1;
    int v0;
    int v1;
    char* ptr2;
    unsigned int v2 = (unsigned int)*param0;
    ++param0;
    int v3 = v2 & 0x40;
    if((v2 & 0x40)) {
        *(int*)param3 = (v2 & 0x3f) * *(int*)(param2 + 8) + *(int*)param3;
    }
    else if((unsigned char)v2 < 0) {
        ptr1 = (char*)(v2 & 0x3f);
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v0;
    }
    else if(((unsigned char)v2 & 0xc0)) {
        *(char*)((int*)((int)(char*)(v2 & 0x3f) + (int)param1) + 23) = (unsigned char)v3;
    }
    else if(v2 == 1) {
        char* ptr3 = param0;
        *(int*)param3 = *(int*)ptr3;
        param0 = ptr3 + 4;
    }
    else if(v2 == 2) {
        char* ptr4 = param0;
        *(int*)param3 = (unsigned int)*ptr4 + *(int*)param3;
        param0 = ptr4 + 1;
    }
    else if(v2 == 3) {
        char* ptr5 = param0;
        *(int*)param3 = (unsigned int)*(short*)ptr5 + *(int*)param3;
        param0 = ptr5 + 2;
    }
    else if(v2 == 4) {
        char* ptr6 = param0;
        *(int*)param3 = *(int*)ptr6 + *(int*)param3;
        param0 = ptr6 + 4;
    }
    else if(v2 == 5) {
        int v4 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v4, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        char* ptr7 = param1;
        *(char*)((int*)((int)ptr7 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr7) + 4) = v0;
    }
    else if(v2 == 6) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 0;
    }
    else if(v2 == 9) {
        int v5 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v5, (int)&v1);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 2;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v1;
    }
    else if(v2 == 10) {
        void* ptr8 = →malloc(116);
        void* ptr9 = ptr8;
        char* ptr10 = param1;
        for(int i = 29; i != 0; --i) {
            *(int*)ptr9 = *(int*)ptr10;
            ptr10 += 4;
            ptr9 = (void*)((int)ptr9 + 4);
        }
        *(void**)(param1 + 112) = ptr8;
    }
    else if(v2 == 11) {
        void* __ptr = *(void**)(param1 + 112);
        char* ptr11 = param1;
        void* ptr12 = __ptr;
        for(int j = 29; j != 0; --j) {
            *(int*)ptr11 = *(int*)ptr12;
            ptr12 = (void*)((int)ptr12 + 4);
            ptr11 += 4;
        }
        →free(__ptr);
    }
    else if(v2 == 12) {
        int v6 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v6, (int)&v0);
        ptr0 = param1;
        *(short*)(ptr0 + 88) = (unsigned short)ptr1;
        *(int*)(ptr0 + 8) = v0;
    }
    else if(v2 == 13) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(short*)(param1 + 88) = (unsigned short)ptr1;
    }
    else if(v2 == 14) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 8) = v0;
    }
    else if(v2 >= 15 && v2 <= 44) {
    loc_8049228:
        /*NO_RETURN*/ →abort();
    }
    else if(v2 == 45) {
        ptr1 = (char*)0x10;
        do {
            *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 1;
            *(void**)((int*)((int)(int*)((int)ptr1 * 4) + (int)param1) + 4) = (void*)((int*)((int)ptr1 * 4) - 16);
            ptr2 = ptr1 + 1;
            ++ptr1;
        }
        while((unsigned int)ptr2 <= 31);
    }
    else if(v2 == 46) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 12) = v0;
    }
    else if(v2 != 0 && v2 != 7 && v2 != 8) {
        goto loc_8049228;
    }
    return param0;
}

char* execute_cfa_insn(char* param0, char* param1, int param2, void* param3) {
    char* ptr0;
    char* ptr1;
    int v0;
    int v1;
    char* ptr2;
    unsigned int v2 = (unsigned int)*param0;
    ++param0;
    int v3 = v2 & 0x40;
    if((v2 & 0x40)) {
        *(int*)param3 = (v2 & 0x3f) * *(int*)(param2 + 8) + *(int*)param3;
    }
    else if((unsigned char)v2 < 0) {
        ptr1 = (char*)(v2 & 0x3f);
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v0;
    }
    else if(((unsigned char)v2 & 0xc0)) {
        *(char*)((int*)((int)(char*)(v2 & 0x3f) + (int)param1) + 23) = (unsigned char)v3;
    }
    else if(v2 == 1) {
        char* ptr3 = param0;
        *(int*)param3 = *(int*)ptr3;
        param0 = ptr3 + 4;
    }
    else if(v2 == 2) {
        char* ptr4 = param0;
        *(int*)param3 = (unsigned int)*ptr4 + *(int*)param3;
        param0 = ptr4 + 1;
    }
    else if(v2 == 3) {
        char* ptr5 = param0;
        *(int*)param3 = (unsigned int)*(short*)ptr5 + *(int*)param3;
        param0 = ptr5 + 2;
    }
    else if(v2 == 4) {
        char* ptr6 = param0;
        *(int*)param3 = *(int*)ptr6 + *(int*)param3;
        param0 = ptr6 + 4;
    }
    else if(v2 == 5) {
        int v4 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v4, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        char* ptr7 = param1;
        *(char*)((int*)((int)ptr7 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr7) + 4) = v0;
    }
    else if(v2 == 6) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 0;
    }
    else if(v2 == 9) {
        int v5 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v5, (int)&v1);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 2;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v1;
    }
    else if(v2 == 10) {
        void* ptr8 = →malloc(116);
        void* ptr9 = ptr8;
        char* ptr10 = param1;
        for(int i = 29; i != 0; --i) {
            *(int*)ptr9 = *(int*)ptr10;
            ptr10 += 4;
            ptr9 = (void*)((int)ptr9 + 4);
        }
        *(void**)(param1 + 112) = ptr8;
    }
    else if(v2 == 11) {
        void* __ptr = *(void**)(param1 + 112);
        char* ptr11 = param1;
        void* ptr12 = __ptr;
        for(int j = 29; j != 0; --j) {
            *(int*)ptr11 = *(int*)ptr12;
            ptr12 = (void*)((int)ptr12 + 4);
            ptr11 += 4;
        }
        →free(__ptr);
    }
    else if(v2 == 12) {
        int v6 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v6, (int)&v0);
        ptr0 = param1;
        *(short*)(ptr0 + 88) = (unsigned short)ptr1;
        *(int*)(ptr0 + 8) = v0;
    }
    else if(v2 == 13) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(short*)(param1 + 88) = (unsigned short)ptr1;
    }
    else if(v2 == 14) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 8) = v0;
    }
    else if(v2 >= 15 && v2 <= 44) {
    loc_8049228:
        /*NO_RETURN*/ →abort();
    }
    else if(v2 == 45) {
        ptr1 = (char*)0x10;
        do {
            *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 1;
            *(void**)((int*)((int)(int*)((int)ptr1 * 4) + (int)param1) + 4) = (void*)((int*)((int)ptr1 * 4) - 16);
            ptr2 = ptr1 + 1;
            ++ptr1;
        }
        while((unsigned int)ptr2 <= 31);
    }
    else if(v2 == 46) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 12) = v0;
    }
    else if(v2 != 0 && v2 != 7 && v2 != 8) {
        goto loc_8049228;
    }
    return param0;
}

char* execute_cfa_insn(char* param0, char* param1, int param2, void* param3) {
    char* ptr0;
    char* ptr1;
    int v0;
    int v1;
    char* ptr2;
    unsigned int v2 = (unsigned int)*param0;
    ++param0;
    int v3 = v2 & 0x40;
    if((v2 & 0x40)) {
        *(int*)param3 = (v2 & 0x3f) * *(int*)(param2 + 8) + *(int*)param3;
    }
    else if((unsigned char)v2 < 0) {
        ptr1 = (char*)(v2 & 0x3f);
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v0;
    }
    else if(((unsigned char)v2 & 0xc0)) {
        *(char*)((int*)((int)(char*)(v2 & 0x3f) + (int)param1) + 23) = (unsigned char)v3;
    }
    else if(v2 == 1) {
        char* ptr3 = param0;
        *(int*)param3 = *(int*)ptr3;
        param0 = ptr3 + 4;
    }
    else if(v2 == 2) {
        char* ptr4 = param0;
        *(int*)param3 = (unsigned int)*ptr4 + *(int*)param3;
        param0 = ptr4 + 1;
    }
    else if(v2 == 3) {
        char* ptr5 = param0;
        *(int*)param3 = (unsigned int)*(short*)ptr5 + *(int*)param3;
        param0 = ptr5 + 2;
    }
    else if(v2 == 4) {
        char* ptr6 = param0;
        *(int*)param3 = *(int*)ptr6 + *(int*)param3;
        param0 = ptr6 + 4;
    }
    else if(v2 == 5) {
        int v4 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v4, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        char* ptr7 = param1;
        *(char*)((int*)((int)ptr7 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr7) + 4) = v0;
    }
    else if(v2 == 6) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 0;
    }
    else if(v2 == 9) {
        int v5 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v5, (int)&v1);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 2;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v1;
    }
    else if(v2 == 10) {
        void* ptr8 = →malloc(116);
        void* ptr9 = ptr8;
        char* ptr10 = param1;
        for(int i = 29; i != 0; --i) {
            *(int*)ptr9 = *(int*)ptr10;
            ptr10 += 4;
            ptr9 = (void*)((int)ptr9 + 4);
        }
        *(void**)(param1 + 112) = ptr8;
    }
    else if(v2 == 11) {
        void* __ptr = *(void**)(param1 + 112);
        char* ptr11 = param1;
        void* ptr12 = __ptr;
        for(int j = 29; j != 0; --j) {
            *(int*)ptr11 = *(int*)ptr12;
            ptr12 = (void*)((int)ptr12 + 4);
            ptr11 += 4;
        }
        →free(__ptr);
    }
    else if(v2 == 12) {
        int v6 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v6, (int)&v0);
        ptr0 = param1;
        *(short*)(ptr0 + 88) = (unsigned short)ptr1;
        *(int*)(ptr0 + 8) = v0;
    }
    else if(v2 == 13) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(short*)(param1 + 88) = (unsigned short)ptr1;
    }
    else if(v2 == 14) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 8) = v0;
    }
    else if(v2 >= 15 && v2 <= 44) {
    loc_8049228:
        /*NO_RETURN*/ →abort();
    }
    else if(v2 == 45) {
        ptr1 = (char*)0x10;
        do {
            *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 1;
            *(void**)((int*)((int)(int*)((int)ptr1 * 4) + (int)param1) + 4) = (void*)((int*)((int)ptr1 * 4) - 16);
            ptr2 = ptr1 + 1;
            ++ptr1;
        }
        while((unsigned int)ptr2 <= 31);
    }
    else if(v2 == 46) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 12) = v0;
    }
    else if(v2 != 0 && v2 != 7 && v2 != 8) {
        goto loc_8049228;
    }
    return param0;
}

char* execute_cfa_insn(char* param0, char* param1, int param2, void* param3) {
    char* ptr0;
    char* ptr1;
    int v0;
    int v1;
    char* ptr2;
    unsigned int v2 = (unsigned int)*param0;
    ++param0;
    int v3 = v2 & 0x40;
    if((v2 & 0x40)) {
        *(int*)param3 = (v2 & 0x3f) * *(int*)(param2 + 8) + *(int*)param3;
    }
    else if((unsigned char)v2 < 0) {
        ptr1 = (char*)(v2 & 0x3f);
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v0;
    }
    else if(((unsigned char)v2 & 0xc0)) {
        *(char*)((int*)((int)(char*)(v2 & 0x3f) + (int)param1) + 23) = (unsigned char)v3;
    }
    else if(v2 == 1) {
        char* ptr3 = param0;
        *(int*)param3 = *(int*)ptr3;
        param0 = ptr3 + 4;
    }
    else if(v2 == 2) {
        char* ptr4 = param0;
        *(int*)param3 = (unsigned int)*ptr4 + *(int*)param3;
        param0 = ptr4 + 1;
    }
    else if(v2 == 3) {
        char* ptr5 = param0;
        *(int*)param3 = (unsigned int)*(short*)ptr5 + *(int*)param3;
        param0 = ptr5 + 2;
    }
    else if(v2 == 4) {
        char* ptr6 = param0;
        *(int*)param3 = *(int*)ptr6 + *(int*)param3;
        param0 = ptr6 + 4;
    }
    else if(v2 == 5) {
        int v4 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v4, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        char* ptr7 = param1;
        *(char*)((int*)((int)ptr7 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr7) + 4) = v0;
    }
    else if(v2 == 6) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 0;
    }
    else if(v2 == 9) {
        int v5 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v5, (int)&v1);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 2;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v1;
    }
    else if(v2 == 10) {
        void* ptr8 = →malloc(116);
        void* ptr9 = ptr8;
        char* ptr10 = param1;
        for(int i = 29; i != 0; --i) {
            *(int*)ptr9 = *(int*)ptr10;
            ptr10 += 4;
            ptr9 = (void*)((int)ptr9 + 4);
        }
        *(void**)(param1 + 112) = ptr8;
    }
    else if(v2 == 11) {
        void* __ptr = *(void**)(param1 + 112);
        char* ptr11 = param1;
        void* ptr12 = __ptr;
        for(int j = 29; j != 0; --j) {
            *(int*)ptr11 = *(int*)ptr12;
            ptr12 = (void*)((int)ptr12 + 4);
            ptr11 += 4;
        }
        →free(__ptr);
    }
    else if(v2 == 12) {
        int v6 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v6, (int)&v0);
        ptr0 = param1;
        *(short*)(ptr0 + 88) = (unsigned short)ptr1;
        *(int*)(ptr0 + 8) = v0;
    }
    else if(v2 == 13) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(short*)(param1 + 88) = (unsigned short)ptr1;
    }
    else if(v2 == 14) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 8) = v0;
    }
    else if(v2 >= 15 && v2 <= 44) {
    loc_8049228:
        /*NO_RETURN*/ →abort();
    }
    else if(v2 == 45) {
        ptr1 = (char*)0x10;
        do {
            *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 1;
            *(void**)((int*)((int)(int*)((int)ptr1 * 4) + (int)param1) + 4) = (void*)((int*)((int)ptr1 * 4) - 16);
            ptr2 = ptr1 + 1;
            ++ptr1;
        }
        while((unsigned int)ptr2 <= 31);
    }
    else if(v2 == 46) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 12) = v0;
    }
    else if(v2 != 0 && v2 != 7 && v2 != 8) {
        goto loc_8049228;
    }
    return param0;
}

char* execute_cfa_insn(char* param0, char* param1, int param2, void* param3) {
    char* ptr0;
    char* ptr1;
    int v0;
    int v1;
    char* ptr2;
    unsigned int v2 = (unsigned int)*param0;
    ++param0;
    int v3 = v2 & 0x40;
    if((v2 & 0x40)) {
        *(int*)param3 = (v2 & 0x3f) * *(int*)(param2 + 8) + *(int*)param3;
    }
    else if((unsigned char)v2 < 0) {
        ptr1 = (char*)(v2 & 0x3f);
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v0;
    }
    else if(((unsigned char)v2 & 0xc0)) {
        *(char*)((int*)((int)(char*)(v2 & 0x3f) + (int)param1) + 23) = (unsigned char)v3;
    }
    else if(v2 == 1) {
        char* ptr3 = param0;
        *(int*)param3 = *(int*)ptr3;
        param0 = ptr3 + 4;
    }
    else if(v2 == 2) {
        char* ptr4 = param0;
        *(int*)param3 = (unsigned int)*ptr4 + *(int*)param3;
        param0 = ptr4 + 1;
    }
    else if(v2 == 3) {
        char* ptr5 = param0;
        *(int*)param3 = (unsigned int)*(short*)ptr5 + *(int*)param3;
        param0 = ptr5 + 2;
    }
    else if(v2 == 4) {
        char* ptr6 = param0;
        *(int*)param3 = *(int*)ptr6 + *(int*)param3;
        param0 = ptr6 + 4;
    }
    else if(v2 == 5) {
        int v4 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v4, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        char* ptr7 = param1;
        *(char*)((int*)((int)ptr7 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr7) + 4) = v0;
    }
    else if(v2 == 6) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 0;
    }
    else if(v2 == 9) {
        int v5 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v5, (int)&v1);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 2;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v1;
    }
    else if(v2 == 10) {
        void* ptr8 = →malloc(116);
        void* ptr9 = ptr8;
        char* ptr10 = param1;
        for(int i = 29; i != 0; --i) {
            *(int*)ptr9 = *(int*)ptr10;
            ptr10 += 4;
            ptr9 = (void*)((int)ptr9 + 4);
        }
        *(void**)(param1 + 112) = ptr8;
    }
    else if(v2 == 11) {
        void* __ptr = *(void**)(param1 + 112);
        char* ptr11 = param1;
        void* ptr12 = __ptr;
        for(int j = 29; j != 0; --j) {
            *(int*)ptr11 = *(int*)ptr12;
            ptr12 = (void*)((int)ptr12 + 4);
            ptr11 += 4;
        }
        →free(__ptr);
    }
    else if(v2 == 12) {
        int v6 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v6, (int)&v0);
        ptr0 = param1;
        *(short*)(ptr0 + 88) = (unsigned short)ptr1;
        *(int*)(ptr0 + 8) = v0;
    }
    else if(v2 == 13) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(short*)(param1 + 88) = (unsigned short)ptr1;
    }
    else if(v2 == 14) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 8) = v0;
    }
    else if(v2 >= 15 && v2 <= 44) {
    loc_8049228:
        /*NO_RETURN*/ →abort();
    }
    else if(v2 == 45) {
        ptr1 = (char*)0x10;
        do {
            *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 1;
            *(void**)((int*)((int)(int*)((int)ptr1 * 4) + (int)param1) + 4) = (void*)((int*)((int)ptr1 * 4) - 16);
            ptr2 = ptr1 + 1;
            ++ptr1;
        }
        while((unsigned int)ptr2 <= 31);
    }
    else if(v2 == 46) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 12) = v0;
    }
    else if(v2 != 0 && v2 != 7 && v2 != 8) {
        goto loc_8049228;
    }
    return param0;
}

char* execute_cfa_insn(char* param0, char* param1, int param2, void* param3) {
    char* ptr0;
    char* ptr1;
    int v0;
    int v1;
    char* ptr2;
    unsigned int v2 = (unsigned int)*param0;
    ++param0;
    int v3 = v2 & 0x40;
    if((v2 & 0x40)) {
        *(int*)param3 = (v2 & 0x3f) * *(int*)(param2 + 8) + *(int*)param3;
    }
    else if((unsigned char)v2 < 0) {
        ptr1 = (char*)(v2 & 0x3f);
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v0;
    }
    else if(((unsigned char)v2 & 0xc0)) {
        *(char*)((int*)((int)(char*)(v2 & 0x3f) + (int)param1) + 23) = (unsigned char)v3;
    }
    else if(v2 == 1) {
        char* ptr3 = param0;
        *(int*)param3 = *(int*)ptr3;
        param0 = ptr3 + 4;
    }
    else if(v2 == 2) {
        char* ptr4 = param0;
        *(int*)param3 = (unsigned int)*ptr4 + *(int*)param3;
        param0 = ptr4 + 1;
    }
    else if(v2 == 3) {
        char* ptr5 = param0;
        *(int*)param3 = (unsigned int)*(short*)ptr5 + *(int*)param3;
        param0 = ptr5 + 2;
    }
    else if(v2 == 4) {
        char* ptr6 = param0;
        *(int*)param3 = *(int*)ptr6 + *(int*)param3;
        param0 = ptr6 + 4;
    }
    else if(v2 == 5) {
        int v4 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v4, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        char* ptr7 = param1;
        *(char*)((int*)((int)ptr7 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr7) + 4) = v0;
    }
    else if(v2 == 6) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 0;
    }
    else if(v2 == 9) {
        int v5 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v5, (int)&v1);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 2;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v1;
    }
    else if(v2 == 10) {
        void* ptr8 = →malloc(116);
        void* ptr9 = ptr8;
        char* ptr10 = param1;
        for(int i = 29; i != 0; --i) {
            *(int*)ptr9 = *(int*)ptr10;
            ptr10 += 4;
            ptr9 = (void*)((int)ptr9 + 4);
        }
        *(void**)(param1 + 112) = ptr8;
    }
    else if(v2 == 11) {
        void* __ptr = *(void**)(param1 + 112);
        char* ptr11 = param1;
        void* ptr12 = __ptr;
        for(int j = 29; j != 0; --j) {
            *(int*)ptr11 = *(int*)ptr12;
            ptr12 = (void*)((int)ptr12 + 4);
            ptr11 += 4;
        }
        →free(__ptr);
    }
    else if(v2 == 12) {
        int v6 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v6, (int)&v0);
        ptr0 = param1;
        *(short*)(ptr0 + 88) = (unsigned short)ptr1;
        *(int*)(ptr0 + 8) = v0;
    }
    else if(v2 == 13) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(short*)(param1 + 88) = (unsigned short)ptr1;
    }
    else if(v2 == 14) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 8) = v0;
    }
    else if(v2 >= 15 && v2 <= 44) {
    loc_8049228:
        /*NO_RETURN*/ →abort();
    }
    else if(v2 == 45) {
        ptr1 = (char*)0x10;
        do {
            *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 1;
            *(void**)((int*)((int)(int*)((int)ptr1 * 4) + (int)param1) + 4) = (void*)((int*)((int)ptr1 * 4) - 16);
            ptr2 = ptr1 + 1;
            ++ptr1;
        }
        while((unsigned int)ptr2 <= 31);
    }
    else if(v2 == 46) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 12) = v0;
    }
    else if(v2 != 0 && v2 != 7 && v2 != 8) {
        goto loc_8049228;
    }
    return param0;
}

char* execute_cfa_insn(char* param0, char* param1, int param2, void* param3) {
    char* ptr0;
    char* ptr1;
    int v0;
    int v1;
    char* ptr2;
    unsigned int v2 = (unsigned int)*param0;
    ++param0;
    int v3 = v2 & 0x40;
    if((v2 & 0x40)) {
        *(int*)param3 = (v2 & 0x3f) * *(int*)(param2 + 8) + *(int*)param3;
    }
    else if((unsigned char)v2 < 0) {
        ptr1 = (char*)(v2 & 0x3f);
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v0;
    }
    else if(((unsigned char)v2 & 0xc0)) {
        *(char*)((int*)((int)(char*)(v2 & 0x3f) + (int)param1) + 23) = (unsigned char)v3;
    }
    else if(v2 == 1) {
        char* ptr3 = param0;
        *(int*)param3 = *(int*)ptr3;
        param0 = ptr3 + 4;
    }
    else if(v2 == 2) {
        char* ptr4 = param0;
        *(int*)param3 = (unsigned int)*ptr4 + *(int*)param3;
        param0 = ptr4 + 1;
    }
    else if(v2 == 3) {
        char* ptr5 = param0;
        *(int*)param3 = (unsigned int)*(short*)ptr5 + *(int*)param3;
        param0 = ptr5 + 2;
    }
    else if(v2 == 4) {
        char* ptr6 = param0;
        *(int*)param3 = *(int*)ptr6 + *(int*)param3;
        param0 = ptr6 + 4;
    }
    else if(v2 == 5) {
        int v4 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v4, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        char* ptr7 = param1;
        *(char*)((int*)((int)ptr7 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr7) + 4) = v0;
    }
    else if(v2 == 6) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 0;
    }
    else if(v2 == 9) {
        int v5 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v5, (int)&v1);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 2;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v1;
    }
    else if(v2 == 10) {
        void* ptr8 = →malloc(116);
        void* ptr9 = ptr8;
        char* ptr10 = param1;
        for(int i = 29; i != 0; --i) {
            *(int*)ptr9 = *(int*)ptr10;
            ptr10 += 4;
            ptr9 = (void*)((int)ptr9 + 4);
        }
        *(void**)(param1 + 112) = ptr8;
    }
    else if(v2 == 11) {
        void* __ptr = *(void**)(param1 + 112);
        char* ptr11 = param1;
        void* ptr12 = __ptr;
        for(int j = 29; j != 0; --j) {
            *(int*)ptr11 = *(int*)ptr12;
            ptr12 = (void*)((int)ptr12 + 4);
            ptr11 += 4;
        }
        →free(__ptr);
    }
    else if(v2 == 12) {
        int v6 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v6, (int)&v0);
        ptr0 = param1;
        *(short*)(ptr0 + 88) = (unsigned short)ptr1;
        *(int*)(ptr0 + 8) = v0;
    }
    else if(v2 == 13) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(short*)(param1 + 88) = (unsigned short)ptr1;
    }
    else if(v2 == 14) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 8) = v0;
    }
    else if(v2 >= 15 && v2 <= 44) {
    loc_8049228:
        /*NO_RETURN*/ →abort();
    }
    else if(v2 == 45) {
        ptr1 = (char*)0x10;
        do {
            *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 1;
            *(void**)((int*)((int)(int*)((int)ptr1 * 4) + (int)param1) + 4) = (void*)((int*)((int)ptr1 * 4) - 16);
            ptr2 = ptr1 + 1;
            ++ptr1;
        }
        while((unsigned int)ptr2 <= 31);
    }
    else if(v2 == 46) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 12) = v0;
    }
    else if(v2 != 0 && v2 != 7 && v2 != 8) {
        goto loc_8049228;
    }
    return param0;
}

char* execute_cfa_insn(char* param0, char* param1, int param2, void* param3) {
    char* ptr0;
    char* ptr1;
    int v0;
    int v1;
    char* ptr2;
    unsigned int v2 = (unsigned int)*param0;
    ++param0;
    int v3 = v2 & 0x40;
    if((v2 & 0x40)) {
        *(int*)param3 = (v2 & 0x3f) * *(int*)(param2 + 8) + *(int*)param3;
    }
    else if((unsigned char)v2 < 0) {
        ptr1 = (char*)(v2 & 0x3f);
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v0;
    }
    else if(((unsigned char)v2 & 0xc0)) {
        *(char*)((int*)((int)(char*)(v2 & 0x3f) + (int)param1) + 23) = (unsigned char)v3;
    }
    else if(v2 == 1) {
        char* ptr3 = param0;
        *(int*)param3 = *(int*)ptr3;
        param0 = ptr3 + 4;
    }
    else if(v2 == 2) {
        char* ptr4 = param0;
        *(int*)param3 = (unsigned int)*ptr4 + *(int*)param3;
        param0 = ptr4 + 1;
    }
    else if(v2 == 3) {
        char* ptr5 = param0;
        *(int*)param3 = (unsigned int)*(short*)ptr5 + *(int*)param3;
        param0 = ptr5 + 2;
    }
    else if(v2 == 4) {
        char* ptr6 = param0;
        *(int*)param3 = *(int*)ptr6 + *(int*)param3;
        param0 = ptr6 + 4;
    }
    else if(v2 == 5) {
        int v4 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v4, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        char* ptr7 = param1;
        *(char*)((int*)((int)ptr7 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr7) + 4) = v0;
    }
    else if(v2 == 6) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 0;
    }
    else if(v2 == 9) {
        int v5 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v5, (int)&v1);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 2;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v1;
    }
    else if(v2 == 10) {
        void* ptr8 = →malloc(116);
        void* ptr9 = ptr8;
        char* ptr10 = param1;
        for(int i = 29; i != 0; --i) {
            *(int*)ptr9 = *(int*)ptr10;
            ptr10 += 4;
            ptr9 = (void*)((int)ptr9 + 4);
        }
        *(void**)(param1 + 112) = ptr8;
    }
    else if(v2 == 11) {
        void* __ptr = *(void**)(param1 + 112);
        char* ptr11 = param1;
        void* ptr12 = __ptr;
        for(int j = 29; j != 0; --j) {
            *(int*)ptr11 = *(int*)ptr12;
            ptr12 = (void*)((int)ptr12 + 4);
            ptr11 += 4;
        }
        →free(__ptr);
    }
    else if(v2 == 12) {
        int v6 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v6, (int)&v0);
        ptr0 = param1;
        *(short*)(ptr0 + 88) = (unsigned short)ptr1;
        *(int*)(ptr0 + 8) = v0;
    }
    else if(v2 == 13) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(short*)(param1 + 88) = (unsigned short)ptr1;
    }
    else if(v2 == 14) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 8) = v0;
    }
    else if(v2 >= 15 && v2 <= 44) {
    loc_8049228:
        /*NO_RETURN*/ →abort();
    }
    else if(v2 == 45) {
        ptr1 = (char*)0x10;
        do {
            *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 1;
            *(void**)((int*)((int)(int*)((int)ptr1 * 4) + (int)param1) + 4) = (void*)((int*)((int)ptr1 * 4) - 16);
            ptr2 = ptr1 + 1;
            ++ptr1;
        }
        while((unsigned int)ptr2 <= 31);
    }
    else if(v2 == 46) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 12) = v0;
    }
    else if(v2 != 0 && v2 != 7 && v2 != 8) {
        goto loc_8049228;
    }
    return param0;
}

char* execute_cfa_insn(char* param0, char* param1, int param2, void* param3) {
    char* ptr0;
    char* ptr1;
    int v0;
    int v1;
    char* ptr2;
    unsigned int v2 = (unsigned int)*param0;
    ++param0;
    int v3 = v2 & 0x40;
    if((v2 & 0x40)) {
        *(int*)param3 = (v2 & 0x3f) * *(int*)(param2 + 8) + *(int*)param3;
    }
    else if((unsigned char)v2 < 0) {
        ptr1 = (char*)(v2 & 0x3f);
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v0;
    }
    else if(((unsigned char)v2 & 0xc0)) {
        *(char*)((int*)((int)(char*)(v2 & 0x3f) + (int)param1) + 23) = (unsigned char)v3;
    }
    else if(v2 == 1) {
        char* ptr3 = param0;
        *(int*)param3 = *(int*)ptr3;
        param0 = ptr3 + 4;
    }
    else if(v2 == 2) {
        char* ptr4 = param0;
        *(int*)param3 = (unsigned int)*ptr4 + *(int*)param3;
        param0 = ptr4 + 1;
    }
    else if(v2 == 3) {
        char* ptr5 = param0;
        *(int*)param3 = (unsigned int)*(short*)ptr5 + *(int*)param3;
        param0 = ptr5 + 2;
    }
    else if(v2 == 4) {
        char* ptr6 = param0;
        *(int*)param3 = *(int*)ptr6 + *(int*)param3;
        param0 = ptr6 + 4;
    }
    else if(v2 == 5) {
        int v4 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v4, (int)&v0);
        v0 *= *(int*)(param2 + 12);
        char* ptr7 = param1;
        *(char*)((int*)((int)ptr7 + (int)ptr1) + 23) = 1;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr7) + 4) = v0;
    }
    else if(v2 == 6) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 0;
    }
    else if(v2 == 9) {
        int v5 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v5, (int)&v1);
        ptr0 = param1;
        *(char*)((int*)((int)ptr0 + (int)ptr1) + 23) = 2;
        *((int*)((int)(void*)((int)ptr1 * 4) + (int)ptr0) + 4) = v1;
    }
    else if(v2 == 10) {
        void* ptr8 = →malloc(116);
        void* ptr9 = ptr8;
        char* ptr10 = param1;
        for(int i = 29; i != 0; --i) {
            *(int*)ptr9 = *(int*)ptr10;
            ptr10 += 4;
            ptr9 = (void*)((int)ptr9 + 4);
        }
        *(void**)(param1 + 112) = ptr8;
    }
    else if(v2 == 11) {
        void* __ptr = *(void**)(param1 + 112);
        char* ptr11 = param1;
        void* ptr12 = __ptr;
        for(int j = 29; j != 0; --j) {
            *(int*)ptr11 = *(int*)ptr12;
            ptr12 = (void*)((int)ptr12 + 4);
            ptr11 += 4;
        }
        →free(__ptr);
    }
    else if(v2 == 12) {
        int v6 = decode_uleb128((int)param0, (int)&ptr1);
        param0 = (char*)decode_uleb128(v6, (int)&v0);
        ptr0 = param1;
        *(short*)(ptr0 + 88) = (unsigned short)ptr1;
        *(int*)(ptr0 + 8) = v0;
    }
    else if(v2 == 13) {
        param0 = (char*)decode_uleb128((int)param0, (int)&ptr1);
        *(short*)(param1 + 88) = (unsigned short)ptr1;
    }
    else if(v2 == 14) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 8) = v0;
    }
    else if(v2 >= 15 && v2 <= 44) {
    loc_8049228:
        /*NO_RETURN*/ →abort();
    }
    else if(v2 == 45) {
        ptr1 = (char*)0x10;
        do {
            *(char*)((int*)((int)ptr1 + (int)param1) + 23) = 1;
            *(void**)((int*)((int)(int*)((int)ptr1 * 4) + (int)param1) + 4) = (void*)((int*)((int)ptr1 * 4) - 16);
            ptr2 = ptr1 + 1;
            ++ptr1;
        }
        while((unsigned int)ptr2 <= 31);
    }
    else if(v2 == 46) {
        param0 = (char*)decode_uleb128((int)param0, (int)&v0);
        *(int*)(param1 + 12) = v0;
    }
    else if(v2 != 0 && v2 != 7 && v2 != 8) {
        goto loc_8049228;
    }
    return param0;
}
