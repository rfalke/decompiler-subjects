
void __i686.get_pc_thunk.bx() {
}

short* copy1_eight_times(short* param0, short* param1, int param2) {
    unsigned int v0 = (unsigned int)((param2 + 7 < 0 ? param2 + 14: param2 + 7) >> 3);
    short* result = (short*)(((((param2 >> 31) >>> 29) + param2) & 0x7) - ((param2 >> 31) >>> 29));
    if((unsigned int)(short*)(((((param2 >> 31) >>> 29) + param2) & 0x7) - ((param2 >> 31) >>> 29)) <= 7) {
        jump *(void**)((int)(int*)((int)(short*)(((((param2 >> 31) >>> 29) + param2) & 0x7) - ((param2 >> 31) >>> 29)) * 4) + (int)&gvar_8048894);
    loc_80484DF:
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
        *param0 = *param1;
        ++param0;
        ++param1;
        *param0 = *param1;
        ++param0;
        ++param1;
        result = param0;
        *result = *param1;
        ++param0;
        ++param1;
        --v0;
        if((int)v0 > 0) {
            goto loc_80484DF;
        }
    }
    return result;
}

short* copy1_four_times(short* param0, short* param1, int param2) {
    unsigned int v0 = (unsigned int)((param2 + 3 < 0 ? param2 + 6: param2 + 3) >> 2);
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
        if((int)v0 > 0) {
            goto loc_8048445;
        }
    }
    return result;
}

short* copy2_eight_times(short* param0, short* param1, unsigned int param2) {
    short* result;
    if((int)param2 > 0) {
        while(param2) {
            if((unsigned int)(8 - param2) <= 7) {
                switch(param2) {
                    case 1: {
                        goto loc_80486E6;
                    }
                    case 2: {
                        goto loc_80486D2;
                    }
                    case 3: {
                        goto loc_80486BB;
                    }
                    case 4: {
                        goto loc_80486A4;
                    }
                    case 5: {
                        goto loc_804868D;
                    }
                    case 6: {
                        goto loc_8048676;
                    }
                    case 7: {
                        goto loc_804865F;
                    }
                    case 8: {
                        break;
                    }
                    case 9: {
                    loc_80484F3:
                        *param0 = *param1;
                        ++param0;
                        ++param1;
                    loc_8048507:
                        *param0 = *param1;
                        ++param0;
                        ++param1;
                    loc_804851B:
                        *param0 = *param1;
                        ++param0;
                        ++param1;
                    loc_804852F:
                        *param0 = *param1;
                        ++param0;
                        ++param1;
                    loc_8048543:
                        *param0 = *param1;
                        ++param0;
                        ++param1;
                    loc_8048557:
                        *param0 = *param1;
                        ++param0;
                        ++param1;
                    loc_8048568:
                        result = param0;
                        *result = *param1;
                        ++param0;
                        ++param1;
                        unsigned int v0 = v0 - 1;
                        if((int)v0 > 0) {
                            *param0 = *param1;
                            ++param0;
                            ++param1;
                            goto loc_80484F3;
                        }
                        else {
                            return result;
                        }
                    }
                    case 10: {
                        goto loc_8048507;
                    }
                    case 11: {
                        goto loc_804851B;
                    }
                    case 12: {
                        goto loc_804852F;
                    }
                    case 13: {
                        goto loc_8048543;
                    }
                    case 14: {
                        goto loc_8048557;
                    }
                    case 15: {
                        goto loc_8048568;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
            *param0 = *param1;
            ++param0;
            ++param1;
        loc_804865F:
            *param0 = *param1;
            ++param0;
            ++param1;
        loc_8048676:
            *param0 = *param1;
            ++param0;
            ++param1;
        loc_804868D:
            *param0 = *param1;
            ++param0;
            ++param1;
        loc_80486A4:
            *param0 = *param1;
            ++param0;
            ++param1;
        loc_80486BB:
            *param0 = *param1;
            ++param0;
            ++param1;
        loc_80486D2:
            *param0 = *param1;
            ++param0;
            ++param1;
        loc_80486E6:
            result = param0;
            *result = *param1;
            ++param0;
            ++param1;
            param2 -= 8;
        }
    }
    return result;
}

short* copy2_four_times(short* param0, short* param1, unsigned int param2) {
    short* result;
    if((int)param2 > 0) {
        while(param2) {
            if(param2 == 2) {
            loc_80485E3:
                *param0 = *param1;
                ++param0;
                ++param1;
            }
            else if(param2 != 1) {
                if(param2 != 3) {
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

short* main() {
    short* result;
    int v0 = 200;
    →malloc(200);
    short* ptr0 = result;
    →malloc(200);
    short* ptr1 = result;
    copy1_four_times(ptr1, ptr0, 100);
    copy1_eight_times(ptr1, ptr0, 100);
    copy2_four_times(ptr1, ptr0, 100);
    copy2_eight_times(ptr1, ptr0, 100);
    →memcmp((int)ptr0, (int)ptr1, v0);
    return result;
}

int sub_80482EA() {
    return gvar_8049A5C();
}
