
int* g(int* param0, int* param1, int* param2) {
    int* ptr0 = param0;
    int* ptr1 = param1;
    int* ptr2 = param2;
    *ptr0 = *ptr0 + 1;
    *ptr1 = *ptr1 - 1;
    int* result = ptr2;
    *result = *ptr1 * *ptr0;
    return result;
}
