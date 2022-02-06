
int main(unsigned int param0) {
    int v0;
    int v1;
    int v2;
    if(param0 > 3999999999) {
        →printf("Population exceeds %u\n", -294967296);
    }
    if(param0 <= 0xefffffff) {
        →printf("The mask is %x\n", 0xf0000000);
    }
    if(param0 > 1) {
        →printf("Arguments supplied\n", v0, v1, v2);
    }
    if((int)(unsigned int)(0 - param0) < -2) {
        →printf("Three or more arguments\n", v0, v1, v2);
    }
    return 0;
}

int sub_804824E() {
    return gvar_80495A8();
}
