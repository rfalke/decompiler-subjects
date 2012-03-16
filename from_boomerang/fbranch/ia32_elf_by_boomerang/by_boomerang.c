// address: 0x8048390
int main(int argc, char *argv[], char *envp[]) {
    int eax; 		// r24
    float local0; 		// m[esp - 8]
    double st; 		// r32

    scanf("%f", &local0);
    eax = printf("a is %f, b is %f\n", 0, 2.3125);
    st = local0;
    eax = ((eax & 0xffff00ff | SETFFLAGS(st, 5.) * 256) >> 8 & 0xffffff & 0xffff00ff | (SETFFLAGS(st, 5.) & 0x45) * 256) & 0xffff00ff | (SETFFLAGS(st, 5.) & 0x45 ^ 64) * 256;
    if (st == 5.) {
        eax = puts("Equal");
    }
    st = local0;
    eax = (eax & 0xffff00ff | SETFFLAGS(5., st) * 256) >> 8 & 0xffffff & 0xffff00ff | (SETFFLAGS(5., st) & 0x45) * 256;
    if (5. != st) {
        eax = puts("Not Equal");
    }
    st = local0;
    eax = (eax & 0xffff00ff | SETFFLAGS(5., st) * 256) >> 8 & 0xffffff;
    if (5. > st) {
        eax = puts("Greater");
    }
    st = local0;
    eax = (eax & 0xffff00ff | SETFFLAGS(st, 5.) * 256) >> 8 & 0xffffff;
    if (st >= 5.) {
        eax = puts("Less or Equal");
    }
    st = local0;
    eax = (eax & 0xffff00ff | SETFFLAGS(5., st) * 256) >> 8 & 0xffffff;
    if (5. >= st) {
        eax = puts("Greater or Equal");
    }
    st = local0;
    eax = (eax & 0xffff00ff | SETFFLAGS(st, 5.) * 256) >> 8 & 0xffffff;
    if (st > 5.) {
        eax = puts("Less");
    }
    return eax;
}

