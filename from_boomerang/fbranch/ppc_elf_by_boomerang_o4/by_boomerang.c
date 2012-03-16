// address: 0x10000468
int main(int argc, char *argv[], char *envp[]) {
    double f0; 		// r32
    double f1; 		// r33
    __size32 g3; 		// r3
    float local0; 		// m[g1 - 24]

    scanf("%f", &local0);
    printf("a is %f, b is %f\n", 2.52509e-29, 2.52435e-29);
    f1 = local0;
    if (5. == f1) {
        puts("Equal");
        f0 = local0;
        if (5. == f0) {
        }
    }
    g3 = puts("Not Equal");
    f0 = local0;
    if (5. > f0) {
        g3 = puts("Greater");
    }
    f0 = local0;
    if (5. == f0) {
        puts("Less or Equal");
        f0 = local0;
        if (5. != f0) {
        }
L6:
        g3 = puts("Greater or Equal");
    } else {
        if (5. == f0) {
            goto L6;
        }
    }
    f0 = local0;
    if (5. < f0) {
        g3 = puts("Less");
    }
    return g3;
}

