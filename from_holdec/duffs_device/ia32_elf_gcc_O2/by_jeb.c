
void __i686.get_pc_thunk.bx() {
}

short* copy1_eight_times(short* param0, short* param1, int param2) {
    int v0;
    short* ptr0 = param0;
    int v1 = v0;
    short* result = param1;
    int v2 = (param2 + 7 < 0 ? param2 + 14: param2 + 7) >> 3;
    switch((unsigned int)(((((param2 >> 31) >>> 29) + param2) & 0x7) - ((param2 >> 31) >>> 29))) {
        case 0: {
            break;
        }
        case 1: {
        loc_80484FB:
            --v2;
            *ptr0 = *result;
            if(v2 <= 0) {
                return result;
            }
            ++ptr0;
            ++result;
            break;
        }
        case 2: {
            short v3 = *result;
            ++result;
            *ptr0 = v3;
            ++ptr0;
            goto loc_80484FB;
        }
        case 3: {
        loc_80484E0:
            short v4 = *result;
            ++result;
            *ptr0 = v4;
            ++ptr0;
            short v3 = *result;
            ++result;
            *ptr0 = v3;
            ++ptr0;
            goto loc_80484FB;
        }
        case 4: {
        loc_80484D4:
            short v5 = *result;
            ++result;
            *ptr0 = v5;
            ++ptr0;
            short v4 = *result;
            ++result;
            *ptr0 = v4;
            ++ptr0;
            short v3 = *result;
            ++result;
            *ptr0 = v3;
            ++ptr0;
            goto loc_80484FB;
        }
        case 5: {
        loc_80484C8:
            short v6 = *result;
            ++result;
            *ptr0 = v6;
            ++ptr0;
            short v5 = *result;
            ++result;
            *ptr0 = v5;
            ++ptr0;
            goto loc_80484E0;
        }
        case 6: {
        loc_80484BC:
            short v7 = *result;
            ++result;
            *ptr0 = v7;
            ++ptr0;
            short v6 = *result;
            ++result;
            *ptr0 = v6;
            ++ptr0;
            goto loc_80484D4;
        }
        case 7: {
            short v8 = *result;
            ++result;
            *ptr0 = v8;
            ++ptr0;
            short v7 = *result;
            ++result;
            *ptr0 = v7;
            ++ptr0;
            goto loc_80484C8;
        }
        default: {
            return result;
        }
    }
    short v9 = *result;
    ++result;
    *ptr0 = v9;
    ++ptr0;
    short v8 = *result;
    ++result;
    *ptr0 = v8;
    ++ptr0;
    goto loc_80484BC;
}

int copy1_four_times(short* param0, short* param1, int param2) {
    int v0;
    short* ptr0 = param0;
    int v1 = v0;
    short* ptr1 = param1;
    int result = ((((param2 >> 31) >>> 30) + param2) & 0x3) - ((param2 >> 31) >>> 30);
    int v2 = (param2 + 3 < 0 ? param2 + 6: param2 + 3) >> 2;
    switch(result) {
        case 1: {
            goto loc_8048430;
        }
        case 2: {
            break;
        }
        case 3: {
            short v3 = *ptr1;
            ++ptr1;
            *ptr0 = v3;
            ++ptr0;
            break;
        }
        default: {
            if(result >= 1) {
                return result;
            }
            else if(!result) {
                short* ptr2 = ptr1 + 1;
                *ptr0 = *ptr1;
                ptr1 = ptr2 + 1;
                *(ptr0 + 1) = *ptr2;
                ptr0 += 2;
            }
            else {
                return result;
            }
        }
    }
loc_8048424:
    short v4 = *ptr1;
    ++ptr1;
    *ptr0 = v4;
    ++ptr0;
loc_8048430:
    result = (unsigned int)*ptr1;
    --v2;
    *ptr0 = (unsigned short)result;
    if(v2 <= 0) {
        return result;
    }
    ++ptr0;
    ++ptr1;
    short* ptr2 = ptr1 + 1;
    *ptr0 = *ptr1;
    ptr1 = ptr2 + 1;
    *(ptr0 + 1) = *ptr2;
    ptr0 += 2;
    goto loc_8048424;
}

short* copy2_eight_times(short* param0, short* param1, int param2) {
    int v0;
    short* result = param0;
    int v1 = v0;
    short* ptr0 = param1;
    if(param2 > 0) {
        unsigned int v2 = (unsigned int)(8 - param2);
        int v3 = 16 - param2 + ((param2 - 8) & 0xfffffff8);
    loc_804863C:
        switch(v2) {
            case 1: {
                short v4 = *ptr0;
                ++ptr0;
                *result = v4;
                ++result;
            }
            case 2: {
                short v5 = *ptr0;
                ++ptr0;
                *result = v5;
                ++result;
            }
            case 3: {
                short v6 = *ptr0;
                ++ptr0;
                *result = v6;
                ++result;
            }
            case 4: {
                short v7 = *ptr0;
                ++ptr0;
                *result = v7;
                ++result;
            }
            case 5: {
                short v8 = *ptr0;
                ++ptr0;
                *result = v8;
                ++result;
            }
            case 6: {
                short v9 = *ptr0;
                ++ptr0;
                *result = v9;
                ++result;
            }
            case 7: {
                break;
            }
            default: {
                short v10 = *ptr0;
                ++ptr0;
                *result = v10;
                ++result;
            }
        }
        v2 += 8;
        *result = *ptr0;
        if(v2 != v3) {
            ++result;
            ++ptr0;
            goto loc_804863C;
        }
    }
    return result;
}

short* copy2_four_times(short* param0, short* param1, int param2) {
    int v0;
    short* result = param0;
    int v1 = v0;
    short* ptr0 = param1;
    if(param2 > 0) {
        int v2 = 4 - param2;
        int v3 = 8 - param2 + ((param2 - 4) & 0xfffffffc);
        while(1) {
            if(v2 == 3) {
                goto loc_804858C;
            }
            else if(v2 != 2) {
                if(v2 != 1) {
                    short v4 = *ptr0;
                    ++ptr0;
                    *result = v4;
                    ++result;
                }
                short v5 = *ptr0;
                ++ptr0;
                *result = v5;
                ++result;
            }
            short v6 = *ptr0;
            ++ptr0;
            *result = v6;
            ++result;
        loc_804858C:
            v2 += 4;
            *result = *ptr0;
            if(v2 == v3) {
                return result;
            }
            ++result;
            ++ptr0;
        }
    }
    return result;
}

int main() {
    int v0;
    int v1;
    char v2 = &v0 == 48;
    char v3 = (unsigned int)&v1 < 24;
    short* ptr0 = (short*)→malloc(200);
    void* ptr1 = →malloc(200);
    short* ptr2 = (short*)ptr1;
    copy1_four_times((short*)ptr1, ptr0, 100);
    copy1_eight_times(ptr2, ptr0, 100);
    copy2_four_times(ptr2, ptr0, 100);
    copy2_eight_times(ptr2, ptr0, 100);
    int v4 = 200;
    while(v4 != 0) {
        v2 = *(char*)&ptr0[0] == *(char*)&ptr2[0];
        v3 = *(char*)&ptr0[0] < *(char*)&ptr2[0];
        ptr0 = (short*)((char*)ptr0 + 1);
        ptr2 = (short*)((char*)ptr2 + 1);
        --v4;
        if(!v2) {
            break;
        }
    }
    return (int)((v3 || v2 ? 0: 1) - (v3 ? 1: 0));
}

void sub_80482C4() {
    jump gvar_804997C;
}
