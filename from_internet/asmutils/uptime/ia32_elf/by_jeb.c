
int sub_804804C() {
    char* ptr0;
    int v0;
    if((v0 / 10)) {
        *ptr0 = (unsigned char)v0 / 10 + 48;
        ++ptr0;
    }
    *ptr0 = (unsigned char)v0 % 10 + 48;
    return v0 % 10 + 48;
}

int sub_804805F() {
    char* ptr0;
    int v0;
    *ptr0 = (unsigned char)v0 / 10 + 48;
    *(ptr0 + 1) = (unsigned char)v0 % 10 + 48;
    return v0 % 10 + 48;
}

int sub_804806E() {
    char* ptr0;
    sub_804804C();
    *ptr0 = 46;
    return sub_804805F();
}
