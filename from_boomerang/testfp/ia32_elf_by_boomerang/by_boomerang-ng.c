union { double; __size32; } res1;
int main(int argc, char *argv[]);

/** address: 0x0804837c */
int main(int argc, char *argv[])
{
    double st; 		// r32
    double st6; 		// r38
    double st7; 		// r39

    printf("Hello, world\n");
    st7 = (float)*0x80486c0;
    st6 = (float)*0x80486c4;
    *(union { double; __size64; }*)0x80497d0 = st6 - st7;
    printf("Result is %f\n", res1);
    st = (float)*0x80486c0;
    st7 = (float)*0x80486c4;
    *(union { double; __size64; }*)0x80497d0 = st7 - st;
    printf("Result is %f\n", res1);
    st7 = (float)*0x80486c0;
    st6 = (float)*0x80486c4;
    *(union { double; __size64; }*)0x80497d0 = st7 - st6;
    printf("Result is %f\n", res1);
    st = (float)*0x80486c0;
    st7 = (float)*0x80486c4;
    *(union { double; __size64; }*)0x80497d0 = st - st7;
    printf("Result is %f\n", res1);
    st7 = (float)*0x80486c0;
    st6 = (float)*0x80486c4;
    *(union { double; __size64; }*)0x80497d0 = st6 - st7;
    printf("Result is %f\n", res1);
    st7 = (float)*0x80486c0;
    st6 = (float)*0x80486c4;
    *(union { double; __size64; }*)0x80497d0 = st7 - st6;
    printf("Result is %f\n", res1);
    st7 = (float)*0x80486c0;
    st6 = (float)*0x80486c4;
    *(union { double; __size64; }*)0x80497d0 = st6 / st7;
    printf("Result is %f\n", res1);
    st = (float)*0x80486c0;
    st7 = (float)*0x80486c4;
    *(union { double; __size64; }*)0x80497d0 = st7 / st;
    printf("Result is %f\n", res1);
    st7 = (float)*0x80486c0;
    st6 = (float)*0x80486c4;
    *(union { double; __size64; }*)0x80497d0 = st7 / st6;
    printf("Result is %f\n", res1);
    st = (float)*0x80486c0;
    st7 = (float)*0x80486c4;
    *(union { double; __size64; }*)0x80497d0 = st / st7;
    printf("Result is %f\n", res1);
    st7 = (float)*0x80486c0;
    st6 = (float)*0x80486c4;
    *(union { double; __size64; }*)0x80497d0 = st6 / st7;
    printf("Result is %f\n", res1);
    st7 = (float)*0x80486c0;
    st6 = (float)*0x80486c4;
    *(union { double; __size64; }*)0x80497d0 = st7 / st6;
    printf("Result is %f\n", res1);
    st7 = (float)*0x80486c0;
    st7 -= (float)*0x80486c4;
    *(union { double; __size64; }*)0x80497d0 = st7;
    printf("Result is %f\n", res1);
    st7 = (float)*0x80486c0;
    st7 = (float)*0x80486c4 - st7;
    *(union { double; __size64; }*)0x80497d0 = st7;
    printf("Result is %f\n", res1);
}

