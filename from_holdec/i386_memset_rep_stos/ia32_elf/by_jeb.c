
char i386_memset_backward_b(char* param0, char param1, int param2) {
    char* ptr0 = param0;
    char v0 = param1;
    for(int i = param2; i != 0; --i) {
        *ptr0 = v0;
        --ptr0;
    }
    return 0;
}

int i386_memset_backward_l(int* param0, int param1, int param2) {
    int* ptr0 = param0;
    int v0 = param1;
    for(int i = param2; i != 0; --i) {
        *ptr0 = v0;
        --ptr0;
    }
    return 0;
}

short i386_memset_backward_w(short* param0, short param1, int param2) {
    short* ptr0 = param0;
    short v0 = param1;
    for(int i = param2; i != 0; --i) {
        *ptr0 = v0;
        --ptr0;
    }
    return 0;
}

int i386_memset_both_b(char* param0, char param1, int param2, int param3) {
    char v0 = !(param3 ? 0: 1);
    char* ptr0 = param0;
    char v1 = param1;
    for(int i = param2; i != 0; --i) {
        *ptr0 = v1;
        ptr0 = v0 ? ptr0 - 1: ptr0 + 1;
    }
    return 0;
}

int i386_memset_both_l(int* param0, int param1, int param2, int param3) {
    char v0 = !(param3 ? 0: 1);
    int* ptr0 = param0;
    int v1 = param1;
    for(int i = param2; i != 0; --i) {
        *ptr0 = v1;
        ptr0 = v0 ? ptr0 - 1: ptr0 + 1;
    }
    return 0;
}

int i386_memset_both_w(short* param0, short param1, int param2, int param3) {
    char v0 = !(param3 ? 0: 1);
    short* ptr0 = param0;
    short v1 = param1;
    for(int i = param2; i != 0; --i) {
        *ptr0 = v1;
        ptr0 = v0 ? ptr0 - 1: ptr0 + 1;
    }
    return 0;
}

char i386_memset_forward_b(char* param0, char param1, int param2) {
    char* ptr0 = param0;
    char v0 = param1;
    for(int i = param2; i != 0; --i) {
        *ptr0 = v0;
        ++ptr0;
    }
    return 0;
}

int i386_memset_forward_l(int* param0, int param1, int param2) {
    int* ptr0 = param0;
    int v0 = param1;
    for(int i = param2; i != 0; --i) {
        *ptr0 = v0;
        ++ptr0;
    }
    return 0;
}

short i386_memset_forward_w(short* param0, short param1, int param2) {
    short* ptr0 = param0;
    short v0 = param1;
    for(int i = param2; i != 0; --i) {
        *ptr0 = v0;
        ++ptr0;
    }
    return 0;
}

int main() {
    char v0;
    char v1;
    unsigned int v2 = 0;
    do {
        unsigned int v3 = v2;
        unsigned int v4 = v2;
        ++v2;
        *(unsigned int*)&v0 = v4 - v3 / 10 * 10;
        →printf(&gvar_804A013);
    }
    while(v2 != 30);
    →puts(0x804a012);
    gvar_804C044 = 0x5f5f;
    *(int*)&buffer = 95;
    gvar_804C02C = 1600085855;
    gvar_804C030 = 1600085855;
    gvar_804C034 = 1600085855;
    gvar_804C038 = 1600085855;
    gvar_804C03C = 1600085855;
    gvar_804C040 = 1600085855;
    print("initial");
    *(int*)&v0 = 120;
    i386_memset_forward_b((char*)0x804C02B, 'x', 5);
    print("5 \'x\' from 3");
    *(int*)&v0 = 0x2928;
    i386_memset_forward_w((short*)0x804C032, *(short*)&v0, 3);
    print("3 \'()\' from 10");
    *(int*)&v0 = 1046634812;
    i386_memset_forward_l((int*)&gvar_804C03C, *(int*)&v0, 2);
    print("2 \'<ab>\' from 20");
    gvar_804C044 = 0x5f5f;
    *(int*)&buffer = 95;
    gvar_804C02C = 1600085855;
    gvar_804C030 = 1600085855;
    gvar_804C034 = 1600085855;
    gvar_804C038 = 1600085855;
    gvar_804C03C = 1600085855;
    gvar_804C040 = 1600085855;
    print("reset for following backward tests");
    *(int*)&v0 = 120;
    i386_memset_backward_b((char*)0x804C02F, 'x', 5);
    print("5 \'x\' from 3");
    *(int*)&v0 = 0x2928;
    i386_memset_backward_w((short*)0x804C036, *(short*)&v0, 3);
    print("3 \'()\' from 10");
    *(int*)&v0 = 1046634812;
    i386_memset_backward_l((int*)&gvar_804C040, *(int*)&v0, 2);
    print("2 \'<ab>\' from 20");
    gvar_804C044 = 0x5f5f;
    *(int*)&buffer = 95;
    gvar_804C02C = 1600085855;
    gvar_804C030 = 1600085855;
    gvar_804C034 = 1600085855;
    gvar_804C038 = 1600085855;
    gvar_804C03C = 1600085855;
    gvar_804C040 = 1600085855;
    print("reset for following bi directional tests");
    *(int*)&v1 = 120;
    i386_memset_both_b((char*)0x804C02B, 'x', 5, 0);
    print("5 \'x\' from 3");
    *(int*)&v1 = 121;
    i386_memset_both_b((char*)0x804C02F, 'y', 5, 1);
    print("5 \'y\' from 3");
    gvar_804C044 = 0x5f5f;
    *(int*)&buffer = 95;
    gvar_804C02C = 1600085855;
    gvar_804C030 = 1600085855;
    gvar_804C034 = 1600085855;
    gvar_804C038 = 1600085855;
    gvar_804C03C = 1600085855;
    gvar_804C040 = 1600085855;
    print("reset for following bi directional tests");
    *(int*)&v1 = 0x2928;
    i386_memset_both_w((short*)0x804C032, *(short*)&v1, 3, 0);
    print("3 \'()\' from 10");
    *(int*)&v1 = 32123;
    i386_memset_both_w((short*)0x804C036, *(short*)&v1, 3, 1);
    print("3 \'{}\' from 10");
    gvar_804C044 = 0x5f5f;
    *(int*)&buffer = 95;
    gvar_804C02C = 1600085855;
    gvar_804C030 = 1600085855;
    gvar_804C034 = 1600085855;
    gvar_804C038 = 1600085855;
    gvar_804C03C = 1600085855;
    gvar_804C040 = 1600085855;
    print("reset for following bi directional tests");
    *(int*)&v1 = 1046634812;
    i386_memset_both_l((int*)&gvar_804C03C, *(int*)&v1, 2, 0);
    print("2 \'<ab>\' from 20");
    *(int*)&v1 = 1564623195;
    i386_memset_both_l((int*)&gvar_804C040, *(int*)&v1, 2, 1);
    print("2 \'[AB]\' from 20");
    return 0;
}

int print(int param0) {
    int result;
    unsigned int v0 = 0;
    do {
        int v1 = (int)*(unsigned char*)((int)&buffer + v0);
        ++v0;
        →putc(v1, stdout);
    }
    while(v0 != 30);
    →printf(" : %s\n");
    return result;
}

int sub_8049036() {
    return gvar_804C008();
}

void sub_8049467() {
}

int sub_804949C() {
    return 0;
}

void sub_80494E8() {
}

int sub_804951D() {
    int result = deregister_tm_clones();
    completed.6844 = 1;
    return result;
}

void sub_8049538() {
}
