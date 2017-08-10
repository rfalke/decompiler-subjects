
/* do_switch(int) */
int32_t _Z9do_switchi(int32_t a1) {
    int32_t eax2;

    if (a1 == 5) {
        eax2 = reinterpret_cast<int32_t>("five");
    } else {
        if (a1 > 5) {
            if (a1 == 8) {
                eax2 = reinterpret_cast<int32_t>("eight");
            } else {
                if (a1 > 8) {
                    if (a1 == 10) {
                        eax2 = reinterpret_cast<int32_t>("ten");
                    } else {
                        if (a1 < 10) {
                            eax2 = reinterpret_cast<int32_t>("nine");
                        } else {
                            if (a1 == 0x18894) {
                                eax2 = reinterpret_cast<int32_t>("stopyatsot");
                            } else {
                                goto addr_8048189_14;
                            }
                        }
                    }
                } else {
                    if (a1 == 6) {
                        eax2 = reinterpret_cast<int32_t>("six");
                    } else {
                        if (a1 == 7) {
                            eax2 = reinterpret_cast<int32_t>("seven");
                        } else {
                            goto addr_8048189_14;
                        }
                    }
                }
            }
        } else {
            if (a1 == 2) {
                eax2 = reinterpret_cast<int32_t>("two");
            } else {
                if (a1 > 2) {
                    if (a1 == 3) {
                        eax2 = reinterpret_cast<int32_t>("three");
                    } else {
                        if (a1 == 4) {
                            eax2 = reinterpret_cast<int32_t>("four");
                        } else {
                            goto addr_8048189_14;
                        }
                    }
                } else {
                    if (!a1) {
                        eax2 = reinterpret_cast<int32_t>("zero");
                    } else {
                        if (a1 == 1) {
                            eax2 = reinterpret_cast<int32_t>("one");
                        } else {
                            goto addr_8048189_14;
                        }
                    }
                }
            }
        }
    }
    addr_804818e_33:
    return eax2;
    addr_8048189_14:
    eax2 = reinterpret_cast<int32_t>("many");
    goto addr_804818e_33;
}
