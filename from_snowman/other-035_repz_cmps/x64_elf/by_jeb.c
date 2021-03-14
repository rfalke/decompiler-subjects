
void start(int* param0, int* param1, long param2, long param3) {
    while(param3 != 0L) {
        char v0 = *param1 == *param0;
        ++param1;
        ++param0;
        --param3;
        if(!v0) {
            break;
        }
    }
    while(1) {
        char v1 = *param1 == *param0;
        --param1;
        --param0;
        --param3;
    }
}
