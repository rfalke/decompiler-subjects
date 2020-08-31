// Decompiled by holdec

// address: 000007f8.0
// full-signature: func(add_float_neon3, return=[], parameter=[<ptr(int(undef, 1)),dest,reg[x0]>, <ptr(int(undef, 1)),src1,reg[x1]>, <ptr(int(undef, 1)),src2,reg[x2]>, <int(undef, 4),count,reg[w3]>], varargs=false)
void add_float_neon3(d1* dest, d1* src1, d1* src2, d4 count)
{
  reg_var2 = src1;
  reg_var1 = src2;
  reg_var4 = count;
  reg_var3 = dest;
  (void) STORE(InitStackPointerReg + -28, count);
  (void) STORE(InitStackPointerReg + -24, src2);
  (void) STORE(InitStackPointerReg + -16, src1);
  (void) STORE(InitStackPointerReg + -8, dest);
  do {
    reg_ai = LOAD(reg_var2);
    reg_aj = LOAD(reg_var2 + 4);
    reg_ak = LOAD(reg_var2 + 8);
    reg_al = LOAD(reg_var2 + 12);
    reg_var2 += 16;
    reg_an = LOAD(reg_var1);
    reg_ao = LOAD(reg_var1 + 4);
    reg_ap = LOAD(reg_var1 + 8);
    reg_aq = LOAD(reg_var1 + 12);
    reg_var1 += 16;
    reg_as = reg_var4 < 5;
    reg_var4 += -4;
    (void) STORE(reg_var3 + 4, FLOATBITS_TO_INT(INT_TO_FLOATBITS(reg_aj) + INT_TO_FLOATBITS(reg_ao)));
    (void) STORE(reg_var3 + 8, FLOATBITS_TO_INT(INT_TO_FLOATBITS(reg_ak) + INT_TO_FLOATBITS(reg_ap)));
    (void) STORE(reg_var3 + 12, FLOATBITS_TO_INT(INT_TO_FLOATBITS(reg_al) + INT_TO_FLOATBITS(reg_aq)));
    (void) STORE(reg_var3, FLOATBITS_TO_INT(INT_TO_FLOATBITS(reg_ai) + INT_TO_FLOATBITS(reg_an)));
    reg_var3 += 16;
  } while(!reg_as);
  (void) STORE(InitStackPointerReg + -8, reg_var3);
}

