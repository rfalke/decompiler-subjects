
int* g(int* param0, int* param1, int* param2) {
    *param0 = *param0 + 1;
    *param1 = *param1 - 1;
    *param2 = *param1 * *param0;
    return param2;
}
