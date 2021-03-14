
int MAIN__() {
    int v0;
    →s_wsle();
    →do_lio();
    →e_wsle();
    →s_rsle();
    →do_lio();
    →e_rsle();
    int v1 = v0 != 2 ? &sub_8048760: &sub_8048793;
    if(v0 == 3) {
        v1 = &sub_80487C3;
    }
    if(v0 == 4) {
        v1 = &sub_80487F3;
    }
    /*BAD_CALL!*/ v1{sub_80487F3}();
}

int atexit(FUNCPTR __func) {
    return →__cxa_atexit();
}

int main(int param0, int param1) {
    →f_setarg();
    →f_setsig();
    →f_init();
    atexit((void __cdecl (*_)())&→f_exit);
    MAIN__();
    /*NO_RETURN*/ →exit(0);
}

void sub_8048554() {
    jump gvar_8049ABC;
}

int sub_804858A() {
    /*BAD_CALL!*/ sub_8048554();
}

void sub_804869E() {
}

int sub_8048760() {
    →s_wsle();
    →do_lio();
    return →e_wsle();
}

int sub_8048793() {
    →s_wsle();
    →do_lio();
    return →e_wsle();
}

int sub_80487C3() {
    →s_wsle();
    →do_lio();
    return →e_wsle();
}

int sub_80487F3() {
    →s_wsle();
    →do_lio();
    return →e_wsle();
}

void sub_80488BE() {
}
