
FILE* main() {
    FILE* __s;
    size_t v0;
    size_t v1;
    unsigned int v2;
    →scanf((char*)&gvar_80486B8, &v1);
    →scanf((char*)&gvar_80486B8, &v2);
    if(v1 != 5) {
        →fwrite("Not Equal\n", 1, 10, stdout);
        v0 = v1;
    }
    else {
        →fwrite("Equal\n", 1, 6, stdout);
        v0 = 5;
    }
    if((int)v0 < 5) {
        →fwrite("Greater\n", 1, 8, stdout);
        if((int)v1 < 5) {
            goto loc_80484EE;
        }
        else {
            goto loc_80484C4;
        }
    }
    else {
    loc_80484C4:
        →fwrite("Less or Equal\n", 1, 14, stdout);
        if((int)v1 <= 5) {
        loc_80484EE:
            →fwrite("Greater or Equal\n", 1, 17, stdout);
            if((int)v1 <= 5) {
                goto loc_8048520;
            }
        }
        →fwrite("Less\n", 1, 5, stdout);
    }
loc_8048520:
    if(v2 < 5) {
        →fwrite("Greater Unsigned\n", 1, 17, stdout);
        if(v2 < 5) {
            goto loc_8048596;
        }
        else {
            goto loc_804856C;
        }
    }
    else {
    loc_804856C:
        →fwrite("Less or Equal Unsigned\n", 1, 23, stdout);
        if(v2 <= 5) {
        loc_8048596:
            →fwrite("Carry Clear\n", 1, 12, stdout);
            if(v2 <= 5) {
                goto loc_80485C5;
            }
        }
        →fwrite("Carry Set\n", 1, 10, stdout);
    }
loc_80485C5:
    size_t v3 = v1;
    if((int)v3 <= 5) {
        →fwrite("Minus\n", 1, 6, stdout);
        v3 = v1;
    }
    if((int)v3 > 5) {
        __s = stdout;
        →fwrite("Plus\n", 1, 5, __s);
    }
    return __s;
}

int start(int param0, int param1) {
    →__libc_start_main();
    hlt();
}

void sub_80482B4() {
    jump gvar_8049840;
}

int sub_80482CA() {
    /*BAD_CALL!*/ sub_80482B4();
}

int sub_80482DA() {
    /*BAD_CALL!*/ sub_80482B4();
}

int sub_80482EA() {
    /*BAD_CALL!*/ sub_80482B4();
}

void sub_8048322() {
}

void sub_8048346() {
}
