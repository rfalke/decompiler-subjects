
int swap(int* param0, int* param1) {
    int result = *param0;
    *param0 = *param1;
    *param1 = result;
    return result;
}
