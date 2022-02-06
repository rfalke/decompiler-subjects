
long main() {
    unsigned int v0 = 1;
    do {
        →printf((char*)&gvar_40201E);
    loc_401076:
        while(1) {
            ++v0;
            if(v0 == 1000000000) {
                return 0L;
            }
        loc_40109E:
            while(1) {
                if(v0 * 0xaaaaaaab <= 0x55555555) {
                    if((unsigned int)((unsigned int)(((unsigned long)v0 * 0xcccccccdL) >>> 34) * 5) != v0) {
                        →puts("Fizz");
                    }
                    else {
                        →puts("FizzBuzz");
                    }
                    continue loc_401076;
                }
            }
        }
    }
    while((unsigned int)((unsigned int)(((unsigned long)v0 * 0xcccccccdL) >>> 34) * 5) != v0);
    ++v0;
    →puts((char*)"Buzz");
    if(v0 != 1000000000) {
        goto loc_40109E;
    }
    else {
        return 0L;
    }
}

long sub_401026() {
    return gvar_404010();
}

long sub_40113D() {
    return 0L;
}

long sub_40117F() {
    return 0L;
}

long sub_4011AD() {
    long result = deregister_tm_clones();
    completed.0 = 1;
    return result;
}

void sub_4011C0() {
}
