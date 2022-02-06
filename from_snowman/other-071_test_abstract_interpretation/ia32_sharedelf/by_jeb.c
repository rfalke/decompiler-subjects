
int start() {
    short* ptr0;
    int v0 = (unsigned int)(unsigned char)*ptr0 | ((unsigned int)0x112200 << 8);
    v0 = (unsigned int)102 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
    *(int*)ptr0 = v0;
}
