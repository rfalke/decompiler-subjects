
// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    int v0;
    char v1;
    sub_8048450(v0, (int)&v1);
    128 = int(128);
}

int sub_80481A9(int param0) {
    int result;
    if(param0 <= 2) {
        result = 1;
    }
    else {
        int v0 = sub_80481A9(0 - (1 - param0));
        int v1 = sub_80481A9(0 - (2 - param0));
        result = v1 + v0;
    }
    return result;
}

int sub_804823D(int param0) {
    int result = 1;
    for(int i = 2; i <= param0; ++i) {
        result *= i;
    }
    return result;
}

int sub_80482BC(int param0, int param1) {
    char* ptr0 = (char*)134513368(0x100);
    char* ptr1 = ptr0;
    do {
        int v0 = param0 % param1;
        v0 = v0 >= 10 ? 0 - (10 - (v0 + 97)): v0 + 48;
        *ptr1 = (unsigned char)v0;
        ++ptr1;
        param0 /= param1;
    }
    while(param0);
    for(char* i = ptr1; i != ptr0; i = ptr1) {
        --ptr1;
        134513697(&gvar_8048100, (int)*ptr1);
    }
    return 0x8048444((int)ptr0);
}

int sub_8048450(int param0, int* param1) {
    int result;
    int v0;
    int v1 = param0;
    if(v1 != 2) {
        v1 = param0;
        if(v1 == 3) {
            goto loc_80484A1;
        }
        else {
            v0 = 1;
        }
    }
    else {
    loc_80484A1:
        v0 = 0;
    }
    if(v0) {
        sub_804876B(*param1);
        result = 1;
    }
    else {
        int v2 = 134513923(*(param1 + 1));
        gvar_80480FC = 10;
        v1 = param0;
        if(param0 >= 3) {
            unsigned int v3 = (unsigned int)134514012(*(param1 + 2));
            gvar_80480FC = v3;
            int v4 = gvar_80480FC >= 2 && gvar_80480FC <= 36 ? 0: 1;
            if(!v4) {
                goto loc_8048614;
            }
            else {
                134514145(*NULL, "Invalid base\n");
                result = 1;
            }
        }
        else {
        loc_8048614:
            134514197("fib(%d) = ", v2);
            int v5 = sub_80481A9(v2);
            sub_80482BC(v5, gvar_80480FC);
            134514293(&gvar_8048120);
            134514335("fact(%d) = ", v2);
            if(v2 > 12) {
                134514395("Overflow");
            }
            else {
                int v6 = &sub_804823D;
                int v7 = v2(v2);
                sub_80482BC(v7, gvar_80480FC);
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
