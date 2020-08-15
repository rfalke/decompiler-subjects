
#include <stdio.h>

extern int add(unsigned char a, unsigned char b);
extern int adc_set(unsigned char a, unsigned char b);
extern int adc_clear(unsigned char a, unsigned char b);

int carry(unsigned char ua, unsigned char ub)
{
    unsigned char usum = ua + ub;
    unsigned char res = ua > usum;
    return res;
}

int signed_carry(unsigned char ua, unsigned char ub)
{
    unsigned char us = ua + ub;

    int topA = !!(ua & 0x80);
    int topB = !!(ub & 0x80);
    int topR = !!(us & 0x80);

    return (topR != topA) && (topA == topB);
}

int adc_simu(unsigned char ua, unsigned char ub, unsigned char oldCf)
{
    unsigned char us = ua + ub;
    int sum = us + oldCf;

    int cf = carry(ua, ub) || carry(us, oldCf);
    int of = signed_carry(ua, ub) != signed_carry(us, oldCf);

    return (sum & 0xff) + ((!!of) << 16) + ((!!cf) << 24);
}

int main()
{
    for (int i = 0; i < 256; i++) {
        for (int j = 0; j < 256; j++) {
            int vadd = add(i, j);

            int vadc_clear = adc_clear(i, j);
            int vadc_set = adc_set(i, j);

            int vadc_set_simu = adc_simu(i, j, 1);
            int vadc_clear_simu = adc_simu(i, j, 0);

            if (vadd != vadc_clear) {
                printf("%3d = 0x%2x %3d = 0x%2x ->", i, i, j, j);
                printf("add=(%3d,%s,%s) ", vadd & 0xff, ((vadd >> 16) & 1) ? "OF" : "  ", ((vadd >> 24) & 1) ? "CF" : "  ");
                printf("adc_clear=(%3d,%s,%s)\n", vadc_clear & 0xff, ((vadc_clear >> 16) & 1) ? "OF" : "  ", ((vadc_clear >> 24) & 1) ? "CF" : "  ");
            }
            if (vadc_clear != vadc_clear_simu) {
                printf("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->", i, i, j, j);
                printf("adc_clear simu=(%3d,%s,%s) ", vadc_clear_simu & 0xff, ((vadc_clear_simu >> 16) & 1) ? "OF" : "  ", ((vadc_clear_simu >> 24) & 1) ? "CF" : "  ");
                printf("adc_clear=(%3d,%s,%s)\n", vadc_clear & 0xff, ((vadc_clear >> 16) & 1) ? "OF" : "  ", ((vadc_clear >> 24) & 1) ? "CF" : "  ");
            }
            if (vadc_set != vadc_set_simu) {
                printf("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->", i, i, j, j);
                printf("add=(%3d,%s,%s) ", vadd & 0xff, ((vadd >> 16) & 1) ? "OF" : "  ", ((vadd >> 24) & 1) ? "CF" : "  ");
                printf("adc_set=(%3d,%s,%s) ", vadc_set & 0xff, ((vadc_set >> 16) & 1) ? "OF" : "  ", ((vadc_set >> 24) & 1) ? "CF" : "  ");
                printf("adc_set simu=(%3d,%s,%s)\n", vadc_set_simu & 0xff, ((vadc_set_simu >> 16) & 1) ? "OF" : "  ", ((vadc_set_simu >> 24) & 1) ? "CF" : "  ");
            }
        }
    }
    return 0;
}
