
#include <stdio.h>

extern int sub(unsigned char a, unsigned char b);
extern int sbb_set(unsigned char a, unsigned char b);
extern int sbb_clear(unsigned char a, unsigned char b);

int signed_borrow(unsigned char ua, unsigned char ub)
{
    unsigned char ud = ua - ub;

    int topA = !!(ua & 0x80);
    int topB = !!(ub & 0x80);
    int topR = !!(ud & 0x80);

    return (topR != topA) && (topR == topB);
}

int sbb_simu(unsigned char ua, unsigned char ub, unsigned char oldCf)
{
    unsigned char ud = ua - ub;
    int diff = ud - oldCf;

    int cf = ua < ub || ud < oldCf;
    int of = signed_borrow(ua, ub) != signed_borrow(ud, oldCf);

    return (diff & 0xff) + ((!!of) << 16) + ((!!cf) << 24);
}

int main()
{
    for (int i = 0; i < 256; i++) {
        for (int j = 0; j < 256; j++) {
            int vsub = sub(i, j);
            int vsbb_clear = sbb_clear(i, j);

            int vsbb_set = sbb_set(i, j);
            int vsbb_set_simu = sbb_simu(i, j, 1);
            int vsbb_clear_simu = sbb_simu(i, j, 0);

            if (vsub != vsbb_clear) {
                printf("%3d = 0x%2x %3d = 0x%2x ->", i, i, j, j);
                printf("sub=(%3d,%s,%s) ", vsub & 0xff, ((vsub >> 16) & 1) ? "OF" : "  ", ((vsub >> 24) & 1) ? "CF" : "  ");
                printf("sbb_clear=(%3d,%s,%s)\n", vsbb_clear & 0xff, ((vsbb_clear >> 16) & 1) ? "OF" : "  ", ((vsbb_clear >> 24) & 1) ? "CF" : "  ");
            }
            if (vsbb_clear != vsbb_clear_simu) {
                printf("%3d = 0x%2x %3d = 0x%2x ->", i, i, j, j);
                printf("sbb_clear simu=(%3d,%s,%s) ", vsbb_clear_simu & 0xff, ((vsbb_clear_simu >> 16) & 1) ? "OF" : "  ", ((vsbb_clear_simu >> 24) & 1) ? "CF" : "  ");
                printf("sbb_clear=(%3d,%s,%s)\n", vsbb_clear & 0xff, ((vsbb_clear >> 16) & 1) ? "OF" : "  ", ((vsbb_clear >> 24) & 1) ? "CF" : "  ");
            }

            if (vsbb_set != vsbb_set_simu) {
                printf("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->", i, i, j, j);
                printf("sub=(%3d,%s,%s) ", vsub & 0xff, ((vsub >> 16) & 1) ? "OF" : "  ", ((vsub >> 24) & 1) ? "CF" : "  ");
                printf("sbb_set=(%3d,%s,%s) ", vsbb_set & 0xff, ((vsbb_set >> 16) & 1) ? "OF" : "  ", ((vsbb_set >> 24) & 1) ? "CF" : "  ");
                printf("sbb_set simu=(%3d,%s,%s)\n", vsbb_set_simu & 0xff, ((vsbb_set_simu >> 16) & 1) ? "OF" : "  ", ((vsbb_set_simu >> 24) & 1) ? "CF" : "  ");
            }
        }
    }
    return 0;
}
