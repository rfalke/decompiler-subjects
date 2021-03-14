
long vowels(char* param0) {
    char* ptr0 = param0;
    int v0 = 0;
    while(*ptr0) {
        long v1 = (unsigned long)(int)*ptr0;
        if((unsigned int)v1 != 111) {
            if((unsigned int)v1 <= 111) {
                if((unsigned int)v1 != 101) {
                    if((unsigned int)v1 <= 101) {
                        if(!(unsigned int)v1) {
                            return 0xffffffffL;
                        }
                        else if((unsigned int)v1 != 97) {
                            goto loc_4001A2;
                        }
                    }
                    else if((unsigned int)v1 != 105) {
                        goto loc_4001A2;
                    }
                }
            }
            else if((unsigned int)v1 != 117 && (unsigned int)v1 != 121 && (unsigned int)v1 != 114) {
                goto loc_4001A2;
            }
        }
        ++v0;
    loc_4001A2:
        ++ptr0;
    }
    return (unsigned long)v0;
}
