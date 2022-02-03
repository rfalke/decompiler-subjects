
void fun_4000d4() {
    int32_t ecx1;
    int32_t* rdi2;
    int32_t* rsi3;

    do {
        if (!ecx1) 
            break;
        --ecx1;
        ++rdi2;
        ++rsi3;
    } while (*rsi3 == *rdi2);
    do {
        if (!ecx1) 
            break;
        --ecx1;
        --rdi2;
        --rsi3;
    } while (*rsi3 == *rdi2);
}
