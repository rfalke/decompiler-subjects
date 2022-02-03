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
    reg_i = LOAD(reg_var2);
    reg_j = LOAD(reg_var2 + 4);
    reg_k = LOAD(reg_var2 + 8);
    reg_l = LOAD(reg_var2 + 12);
    reg_var2 += 16;
    reg_n = LOAD(reg_var1);
    reg_o = LOAD(reg_var1 + 4);
    reg_p = LOAD(reg_var1 + 8);
    reg_q = LOAD(reg_var1 + 12);
    reg_var1 += 16;
    reg_s = reg_var4 < 5;
    reg_var4 -= 4;
    (void) STORE(reg_var3 + 4, FLOATBITS_TO_INT(INT_TO_FLOATBITS(reg_j) + INT_TO_FLOATBITS(reg_o)));
    (void) STORE(reg_var3 + 8, FLOATBITS_TO_INT(INT_TO_FLOATBITS(reg_k) + INT_TO_FLOATBITS(reg_p)));
    (void) STORE(reg_var3 + 12, FLOATBITS_TO_INT(INT_TO_FLOATBITS(reg_l) + INT_TO_FLOATBITS(reg_q)));
    (void) STORE(reg_var3, FLOATBITS_TO_INT(INT_TO_FLOATBITS(reg_i) + INT_TO_FLOATBITS(reg_n)));
    reg_var3 += 16;
  } while(!reg_s);
  (void) STORE(InitStackPointerReg + -8, reg_var3);
}

