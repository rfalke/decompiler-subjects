
void enter() {
}

void leave() {
}

long loop1() {
    long result;
    enter();
    for(i = 0; (int)i <= 99; ++i) {
        *(unsigned int*)((long)i * 4L + (long)&arr) = i;
    }
    leave();
    return result;
}

long loop2() {
    unsigned int v0;
    enter();
loc_40050D:
    do {
        v0 = (unsigned int)(*(int*)((long)i * 4L + (long)&arr) + j + v0);
        if(v0 == 10) {
            v0 = 22;
        }
        if((int)j <= 99) {
            goto loc_40050D;
        }
        else {
            j = 0;
        }
    }
    while((int)i <= 99);
    leave();
    return (unsigned long)v0;
}

void main() {
}
