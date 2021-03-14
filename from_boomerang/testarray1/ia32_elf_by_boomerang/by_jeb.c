
int main() {
    int v0 = 0;
    for(int i = 0; i <= 4; ++i) {
        v0 += (int)*(unsigned char*)((int)&gca + i);
    }
    →printf("Sum is %d\n", v0);
    return 0;
}

void sub_8048290() {
    jump gvar_80495A4;
}

void sub_804833A() {
}

void sub_804841E() {
}
