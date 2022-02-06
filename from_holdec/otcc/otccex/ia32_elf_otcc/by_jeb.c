
// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    int v0;
    int v1;
    char v2;
    int v3 = v0;
    int* ptr0 = &v2;
    int* ptr1 = &v1;
    int v4 = sub_8048450(v3, (int)&v2);
    int v5 = v4;
    int v6 = 1;
    interrupt(128);
}

int sub_80481A9(unsigned int param0) {
    int result;
    if((int)param0 <= 2) {
        result = 1;
    }
    else {
        unsigned int v0 = (unsigned int)sub_80481A9(0 - (unsigned int)(1 - param0));
        int v1 = sub_80481A9(0 - (unsigned int)(2 - param0));
        result = v1 + v0;
    }
    return result;
}

int sub_804823D(unsigned int param0) {
    int result = 1;
    for(unsigned int i = 2; (int)i <= (int)param0; ++i) {
        result *= i;
    }
    return result;
}

int sub_80482BC(unsigned int param0, int param1) {
    char* ptr0 = (char*)134513368(0x100);
    char* ptr1 = ptr0;
    do {
        unsigned int v0 = (int)param0 % param1;
        v0 = (int)v0 < 10 ? v0 + 48: (unsigned int)(0 - (unsigned int)(10 - (v0 + 97)));
        *ptr1 = (unsigned char)v0;
        ++ptr1;
        param0 = (int)param0 / param1;
    }
    while(param0);
    for(char* i = ptr1; i != ptr0; i = ptr1) {
        --ptr1;
        int v1 = &gvar_8048100;
        134513697(&gvar_8048100, (int)*ptr1);
    }
    return 0x8048444((int)ptr0);
}

int sub_8048450(unsigned int param0, void* param1) {
    int result;
    unsigned int v0 = param0;
    if(param0 != 2) {
        v0 = param0;
        if(param0 == 3) {
            goto loc_80484F0;
        }
        else {
            sub_804876B(*(int*)param1);
            result = 1;
        }
    }
    else {
    loc_80484F0:
        void* ptr0 = param1;
        unsigned int v1 = (unsigned int)134513923(*(int*)((int)param1 + 4));
        gvar_80480FC = 10;
        v0 = param0;
        if((int)param0 >= 3) {
            ptr0 = param1;
            unsigned int v2 = (unsigned int)134514012(*(int*)((int)param1 + 8));
            gvar_80480FC = v2;
            if((int)gvar_80480FC >= 2 && (int)gvar_80480FC <= 36) {
                goto loc_8048614;
            }
            else {
                134514145(*NULL, "Invalid base\n");
                result = 1;
            }
        }
        else {
        loc_8048614:
            134514197("fib(%d) = ", v1);
            int v3 = sub_80481A9(v1);
            sub_80482BC((unsigned int)v3, gvar_80480FC);
            134514293(&gvar_8048120);
            134514335("fact(%d) = ", v1);
            if((int)v1 > 12) {
                134514395("Overflow");
            }
            else {
                unsigned int v4 = (unsigned int)v1((int)v1);
                sub_80482BC(v4, gvar_80480FC);
            }
            134514517(&gvar_804813C);
            result = 0;
        }
    }
    return result;
}

int sub_804876B(int param0) {
    134514580("usage: %s n [base]\n", param0);
    return 134514609("Compute fib(n) and fact(n) and output the result in base \'base\'\n");
}
