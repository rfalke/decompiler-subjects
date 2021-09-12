// Decompiled by holdec

// address: 00000505.0
// full-signature: func(do_adlib_io, return=[], parameter=[<int(undef, 1),cmd1,reg[al]>, <int(undef, 1),cmd2,reg[ah]>], varargs=false)
void do_adlib_io(d1 cmd1, d1 cmd2)
{
  (void) _holdec_ia32_outB(904, cmd1);
  reg_var1 = 6;
  do {
    (void) _holdec_ia32_inB(904);
    reg_c = reg_var1 + -1;
    reg_var1--;
  } while(reg_c != 0);
  (void) _holdec_ia32_outB(905, cmd2);
  reg_var2 = reg_var1 & 0xff00 | 0x23;
  do {
    (void) _holdec_ia32_inB(904);
    reg_g = reg_var2 + -1;
    reg_var2--;
  } while(reg_g != 0);
}

// address: 00000ef2.0
// full-signature: func(copy_with_or, return=[], parameter=[<int(undef, 2),src,reg[si]>, <int(undef, 2),dest,reg[di]>, <int(undef, 2),num_words,reg[cx]>, <int(undef, 1),value_to_or,reg[bl]>], varargs=false)
void copy_with_or(d2 src, d2 dest, d2 num_words, d1 value_to_or)
{
  reg_var2 = src;
  reg_var1 = dest;
  reg_var3 = num_words;
  if(num_words != 0) {
    do {
      reg_d = LOAD(UNSIGNED_EXTEND(reg_var2));
      reg_var2 += 2;
      (void) STORE(UNSIGNED_EXTEND(reg_var1), reg_d & 0xff00 | reg_d & 0xff | WIDEN(value_to_or) * 256);
      reg_var1 += 2;
      reg_g = reg_var3 + -1;
      reg_var3--;
    } while(reg_g != 0);
  }
}

