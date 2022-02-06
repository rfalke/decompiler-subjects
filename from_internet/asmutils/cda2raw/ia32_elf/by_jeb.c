
int sub_804804C() {
    char* ptr0;
    int result = (unsigned int)*ptr0 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
    if(*ptr0) {
        int v0 = (unsigned int)*(ptr0 + 1) | ((unsigned int)(unsigned char)result << 8) | ((unsigned int)(unsigned short)(result >>> 16) << 16);
        result = (unsigned int)*(ptr0 + 1) | ((unsigned int)((unsigned char)(v0 >>> 8) - 48) << 8) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
        if((unsigned char)(v0 >>> 8) >= 48) {
            unsigned char v1 = (unsigned char)result;
            result = (unsigned int)((unsigned char)result - 48) | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
            return v1 >= 48 && (unsigned char)(result >>> 8) <= 9 && (unsigned char)result <= 9 ? (unsigned int)(unsigned short)((unsigned char)(result >>> 8) * 10 + (unsigned char)result) | ((unsigned int)(unsigned short)(result >>> 16) << 16): result;
        }
    }
    return result;
}
