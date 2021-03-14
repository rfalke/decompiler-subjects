
void start(int* param0, int* param1, long param2, long param3) {
    while(param3 != 0L) {
        *param0 = *param1;
        ++param1;
        ++param0;
        --param3;
    }
    while(1) {
        *param0 = *param1;
        --param1;
        --param0;
        --param3;
    }
}
