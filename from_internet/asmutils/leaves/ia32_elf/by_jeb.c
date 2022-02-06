
int start() {
    char v0;
    int v1 = &loc_8048156;
    int v2 = "/dev/fb0";
    int v3 = 2;
    int v4 = 5;
    int v5 = 5;
    int* ptr0 = &v0;
    interrupt(128);
}

char sub_804804C(int param0) {
    char result;
    int v0;
    int v1;
    *(char*)(v0 * 5 * 128 + v1 + param0) = result;
    return result;
}

void sub_804805C(float param0, float param1, int param2) {
    char v0;
    float* ptr0;
    int* ptr1;
    void* ptr2;
    if((unsigned char)param2) {
        __SyntheticTypeUnknownF v1 = *(ptr0 + 4);
        char v2 = (unsigned char)param2;
        int v3 = param2;
        int v4 = (int)(v1 * param0 + *(ptr0 + 6));
        __SyntheticTypeUnknownF v5 = *(ptr0 + 5) - v1 * param1;
        *(int*)&v0 = &loc_804808E;
        /*BAD_CALL!*/ sub_804804C((int)v5);
        *ptr1 = (int)(v1 * *(float*)(ptr1 + 5) + *(ptr0 + 7));
        *(int*)&v0 = &loc_804809B;
        /*BAD_CALL!*/ sub_804804C(v4);
        __SyntheticTypeUnknownF v6 = *(ptr0 + 1);
        __SyntheticTypeUnknownF v7 = *ptr0;
        *(ptr1 - 2) = v6 - v7 * *(float*)(ptr1 + 4) * *(float*)(ptr1 + 5);
        __SyntheticTypeUnknownF v8 = v6 + v7 * *(float*)(ptr1 + 4) * *(float*)(ptr1 + 5);
        *(int**)&v0 = (int*)((int)ptr2 - 1);
        sub_804805C(v8);
        __SyntheticTypeUnknownF v9 = *(ptr0 + 8);
        sub_804805C(*(ptr0 + 3) + ((param0 - v9) * v9 - *(ptr0 + 2) * param1));
    }
}
