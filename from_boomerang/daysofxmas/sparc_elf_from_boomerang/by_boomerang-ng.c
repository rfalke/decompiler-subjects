int global_0x00020cf0;
__size32 global_0x00020cf4;// 4 bytes
int main(int argc, char *argv[]);

/** address: 0x000106a8 */
int main(int argc, char *argv[])
{
    int i0; 		// r24
    int i1; 		// r25
    union { __size32; char *; } i2; 		// r26
    int o0; 		// r8
    int o0_1; 		// r8{0}
    int o1_1; 		// r9

    *(__size32*)%o6 = %l0;
    *(__size32*)(%o6 + 4) = %l1;
    *(__size32*)(%o6 + 8) = %l2;
    *(__size32*)(%o6 + 12) = %l3;
    *(__size32*)(%o6 + 16) = %l4;
    *(__size32*)(%o6 + 20) = %l5;
    *(__size32*)(%o6 + 24) = %l6;
    *(__size32*)(%o6 + 28) = %l7;
    *(__size32*)(%o6 + 32) = %i0;
    *(__size32*)(%o6 + 36) = %i1;
    *(__size32*)(%o6 + 40) = %i2;
    *(__size32*)(%o6 + 44) = %i3;
    *(__size32*)(%o6 + 48) = %i4;
    *(__size32*)(%o6 + 52) = %i5;
    *(__size32*)(%o6 + 56) = %fp;
    *(__size32*)(%o6 + 60) = %i7;
    if (flags) {
        if (i0 < 0) {
            if (i0 < -72) {
bb0x10718:
                main(%o0, %o1);
            }
            else {
                o0 = (int) *i2;
                if (i0 >= -50) {
                    goto bb0x10718;
                }
                else {
                    if (i1 == o0) {
                        global_0x00020cf0--;
                        if (global_0x00020cf0 < 1) {
                            __flsbuf();
                        }
                        else {
                            o1_1 = *(unsigned char*)(i2 + 31);
                            o0 = *0x20cf4;
                            *(__size8*)o0 = (char) o1_1;
                            global_0x00020cf4 = o0 + 1;
                        }
                    }
                    else {
                        goto bb0x10718;
                    }
                }
            }
        }
        else {
            if (i0 <= 0) {
                o1_1 = (int) *i2;
                if (o1_1 == 47) {
bb0x107d8:
                }
                else {
                    main(-61, o1_1);
                    main(0, o0_1);
                    if (o0 != 0) {
                        goto bb0x107d8;
                    }
                }
            }
            else {
                goto bb0x10718;
            }
        }
    }
    else {
        if (flags) {
            main(%o0, %o1);
            main(%o0, %o1);
            main(%o0, %o1);
        }
        if (flags) {
            main(%o0, %o1);
        }
        main(%o0, %o1);
        if (flags) {
        }
        else {
            if ( ~flags) {
                if (flags) {
                    goto bb0x10718;
                }
                else {
                }
            }
        }
    }
    return;
}

