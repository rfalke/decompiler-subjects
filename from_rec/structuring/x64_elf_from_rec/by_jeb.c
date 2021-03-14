
void enter() {
}

void leave() {
}

int loop1() {
    enter();
    i = 0;
    int i;
    for(i = i; i <= 99; i = i) {
        *(unsigned int*)((long)i * 4L + (long)&arr) = i;
        ++i;
    }
    leave();
    return i;
}

long loop2() {
    int v0;
    enter();
loc_40050D:
    do {
        v0 = *(int*)((long)i * 4L + (long)&arr) + j + v0;
        if(v0 == 10) {
            v0 = 22;
        }
        if(j <= 99) {
            goto loc_40050D;
        }
        else {
            j = 0;
        }
    }
    while(i <= 99);
    leave();
    return (unsigned long)v0;
}

void main() {
}
