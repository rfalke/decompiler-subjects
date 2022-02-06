
char sub_80480B1(int param0, int param1) {
    int v0;
    char v1;
    unsigned int v2;
    char result = (unsigned int)v1 | ((unsigned int)v0 << 8);
    unsigned char* ptr0 = (unsigned char*)(param1 + v2 - 1);
    while(ptr0 != v2) {
        char v3 = *ptr0 == 47;
        --ptr0;
        if(!v3) {
            return result;
        }
    }
    return result;
}
