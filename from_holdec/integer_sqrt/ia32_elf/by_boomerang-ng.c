int main(int argc, char *argv[]);
void integer_sqrt_in_asm();
void integer_sqrt_in_c(unsigned int param1);

/** address: 0x08048990 */
int main(int argc, char *argv[])
{
    integer_sqrt_in_asm();
}

/** address: 0x08048424 */
void integer_sqrt_in_asm()
{
}

/** address: 0x080487b0 */
void integer_sqrt_in_c(unsigned int param1)
{
    int bx; 		// r3
    unsigned char cl; 		// r9
    unsigned int cx; 		// r1
    unsigned int cx_1; 		// r1{46}
    int di; 		// r7
    unsigned short di_1; 		// r7{32}
    int di_6; 		// r7{29}
    unsigned char dl; 		// r10
    unsigned int dx; 		// r2
    unsigned int dx_1; 		// r2{51}
    unsigned int eax; 		// r24
    unsigned int ebx; 		// r27
    unsigned int ebx_1; 		// r27{56}
    unsigned int ebx_2; 		// r27{34}
    int ecx; 		// r25
    unsigned int ecx_1; 		// r25{28}
    int ecx_4; 		// r25{41}
    int edi; 		// r31
    int edx; 		// r26
    int esi; 		// r30
    unsigned int local0; 		// m[esp - 24]
    unsigned short local1; 		// m[esp - 18]
    unsigned int local2; 		// m[esp - 20]
    unsigned int local3; 		// m[esp - 26]
    unsigned int local4; 		// m[esp - 20]{20}
    unsigned int local5; 		// m[esp - 24]{59}
    unsigned int local6; 		// dx{16}
    unsigned int local7; 		// ebx_1{56}
    unsigned int si; 		// r6

    ecx = 0;
    eax = 0;
    local0 = 0;
    local1 = 0;
    local2 = 0;
    ebx = param1;
    bx = (unsigned short) param1;
    edx = param1 >> 16;
    dx = (unsigned short) param1 >> 16;
    local7 = ebx;
    for(;;) {
        dx_1 = dx;
        ebx_1 = local7;
        local5 = local0;
        cl =  (dx_1 <= 0x3fff) ? 1 : 0;
        ecx = ecx & ~0xff | (cl);
        esi = (ecx >> 16 & 0xffff) << 8 | ((unsigned short) ecx & 0xff);
        cl =  (local2 < (unsigned short) esi + eax) ? 1 : 0;
        ecx = (local1);
        cx = ((unsigned short) ecx - (unsigned short) (cl));
        ecx = ecx & ~0xffff | (cx);
        di = esi - (unsigned short) esi + eax;
        local3 = di;
        local2 = cx;
        local6 = dx_1;
        if ((unsigned short) (cl) <= (unsigned short) (local1)) {
            dx = dx_1 - 0x4000;
            edx = edx & ~0xffff | (dx_1 - 0x4000);
            si = 0;
            local6 = dx;
        }
        else {
            local3 = esi + (unsigned short) esi + eax;
            cl =  (ADDFLAGS16(di, (unsigned short) esi + eax, local3)) ? 1 : 0;
            ecx = ecx & ~0xff | (cl);
            local2 = esi + ((unsigned short) ecx & 0xff);
            cl =  (ADDFLAGS16(cx, (unsigned short) ecx & 0xff, local2)) ? 1 : 0;
            ecx = ecx & ~0xff | (cl);
            si = (unsigned short) ecx & 0xff;
        }
        dx = local6;
        local4 = local2;
        local0 = local5 + 1;
        eax = eax + eax + 1 & ~0xffff | (local5 - si);
        tmp1 = local0 - 16;
        if (local0 == 16) {
            break;
        }
        cl =  ((unsigned int)bx > (unsigned short) ebx_1 + ebx_1) ? 1 : 0;
        edi = ecx & ~0xff | (cl);
        ecx_1 = (local3);
        di_6 = (unsigned short) edx + ((edi >> 16 & 0xffff) << 8 | ((unsigned short) edi & 0xff));
        dl =  (ADDFLAGS16(dx, di_6, tmp1 + di_6)) ? 1 : 0;
        edx = (edx & ~0xffff | (tmp1 + di_6)) & ~0xff | (dl);
        di_1 = (((unsigned short) edx & 0xff) + local3);
        edi = (((edx >> 16 & 0xffff) << 8 | ((unsigned short) edx & 0xff)) >> 16 & 0xffff) << 8 | (di_1);
        ebx_2 = ebx_1 * 4;
        bx = (unsigned short) ebx_1 * 4;
        dl =  ((unsigned short) ebx_1 + ebx_1 > (unsigned short) ebx_1 * 4) ? 1 : 0;
        si = (((unsigned short) (edx & ~0xff | (dl)) & 0xff) + tmp1 + di_6);
        dx = ecx_1 + si;
        edx = (tmp1 + di_6) & ~0xffff | (ecx_1 + si);
        cl =  (ADDFLAGS16((unsigned short) (tmp1 + di_6), si, ecx_1 + si)) ? 1 : 0;
        ecx_4 = ecx_1 + edi & ~0xff | (cl);
        si = (((unsigned short) ecx_4 & 0xff) + (unsigned short) ecx_1 + edi);
        cl =  ((unsigned short) ecx_1 + edi < di_1) ? 1 : 0;
        esi = ecx_4 & ~0xff | (cl);
        ecx = ((unsigned short) ecx_1 + edi);
        cx_1 = ((unsigned short) ecx + si);
        local2 = cx_1;
        cl =  (ADDFLAGS16((unsigned short) ecx, si, cx_1)) ? 1 : 0;
        ecx = (ecx & ~0xffff | (cx_1)) & ~0xff | (cl);
        local1 = (unsigned short) ((ecx >> 16 & 0xffff) << 8 | ((unsigned short) ecx & 0xff)) + (((esi >> 16 & 0xffff) << 8 | ((unsigned short) esi & 0xff)) + (local4) * 2) * 2;
        local7 = ebx_2;
    }
    return;
}

