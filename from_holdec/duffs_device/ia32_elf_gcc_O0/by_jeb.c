
void __i686.get_pc_thunk.bx() {
}

short* copy1_eight_times(short* param0, short* param1, int param2) {
    short* result;
    int v0 = (param2 + 7 < 0 ? param2 + 14: param2 + 7) >> 3;
    switch((unsigned int)(((((param2 >> 31) >>> 29) + param2) & 0x7) - ((param2 >> 31) >>> 29))) {
        case 0: {
            *param0 = *param1;
            ++param0;
            ++param1;
            *param0 = *param1;
            ++param0;
            ++param1;
            *param0 = *param1;
            ++param0;
            ++param1;
            *param0 = *param1;
            ++param0;
            ++param1;
            *param0 = *param1;
            ++param0;
            ++param1;
            goto loc_8048543;
        }
        case 1: {
        loc_8048562:
            result = param1;
            *param0 = *result;
            ++param0;
            ++param1;
            --v0;
            if(v0 > 0) {
                *param0 = *param1;
                ++param0;
                ++param1;
                *param0 = *param1;
                ++param0;
                ++param1;
                *param0 = *param1;
                ++param0;
                ++param1;
                *param0 = *param1;
                ++param0;
                ++param1;
                goto loc_804852F;
            }
            else {
                return result;
            }
        }
        case 2: {
            *param0 = *param1;
            ++param0;
            ++param1;
            goto loc_8048562;
        }
        case 3: {
        loc_8048543:
            *param0 = *param1;
            ++param0;
            ++param1;
            *param0 = *param1;
            ++param0;
            ++param1;
            goto loc_8048562;
        }
        case 4: {
        loc_804852F:
            *param0 = *param1;
            ++param0;
            ++param1;
            *param0 = *param1;
            ++param0;
            ++param1;
            *param0 = *param1;
            ++param0;
            ++param1;
            goto loc_8048562;
        }
        case 5: {
            *param0 = *param1;
            ++param0;
            ++param1;
            goto loc_804852F;
        }
        case 6: {
            *param0 = *param1;
            ++param0;
            ++param1;
            *param0 = *param1;
            ++param0;
            ++param1;
            goto loc_804852F;
        }
        case 7: {
            *param0 = *param1;
            ++param0;
            ++param1;
            *param0 = *param1;
            ++param0;
            ++param1;
            *param0 = *param1;
            ++param0;
            ++param1;
            goto loc_804852F;
        }
        default: {
            return result;
        }
    }
}

short* copy1_four_times(short* param0, short* param1, int param2) {
    int v0 = (param2 + 3 < 0 ? param2 + 6: param2 + 3) >> 2;
    short* result = (short*)(((((param2 >> 31) >>> 30) + param2) & 0x3) - ((param2 >> 31) >>> 30));
    if(result != 1) {
        if((int)result <= 1) {
            if(!result) {
                goto loc_8048445;
            }
            else {
                return result;
            }
        }
        if(result != 2) {
            if(result != 3) {
                return result;
            loc_8048445:
                *param0 = *param1;
                ++param0;
                ++param1;
            }
            *param0 = *param1;
            ++param0;
            ++param1;
        }
        *param0 = *param1;
        ++param0;
        ++param1;
        goto loc_804847E;
    }
    else {
    loc_804847E:
        result = param0;
        *result = *param1;
        ++param0;
        ++param1;
        --v0;
        if(v0 > 0) {
            goto loc_8048445;
        }
    }
    return result;
}

unsigned int copy2_eight_times(short* param0, short* param1, int param2) {
    unsigned int result;
    if(param2 > 0) {
        while(param2) {
            result = (unsigned int)(8 - param2);
            switch(result) {
                case 7: {
                    break;
                }
                default: {
                    *param0 = *param1;
                    ++param0;
                    ++param1;
                }
            }
            *param0 = *param1;
            ++param0;
            ++param1;
            param2 -= 8;
        }
    }
    return result;
}

short* copy2_four_times(short* param0, short* param1, int param2) {
    short* result;
    if(param2 > 0) {
        while(param2) {
            int v0 = 4 - param2;
            if(v0 == 2) {
            loc_80485E3:
                *param0 = *param1;
                ++param0;
                ++param1;
            }
            else if(v0 != 3) {
                if(v0 != 1) {
                    *param0 = *param1;
                    ++param0;
                    ++param1;
                }
                *param0 = *param1;
                ++param0;
                ++param1;
                goto loc_80485E3;
            }
            result = param0;
            *result = *param1;
            ++param0;
            ++param1;
            param2 -= 4;
        }
    }
    return result;
}

int main() {
    size_t __n = 200;
    short* __s1 = (short*)→malloc(200);
    short* __s2 = (short*)→malloc(200);
    copy1_four_times(__s2, __s1, 100);
    copy1_eight_times(__s2, __s1, 100);
    copy2_four_times(__s2, __s1, 100);
    copy2_eight_times(__s2, __s1, 100);
    return →memcmp(__s1, __s2, __n);
}

void sub_80482E4() {
    jump gvar_8049A5C;
}
