// Decompiled by holdec

// address: 08049210.0
// full-signature: func(count_zeros, return=[<int(undef, 4),null,reg[eax]>], parameter=[<int(undef, 4),ARG_0,unknown>, <int(undef, 4),ARG_1,unknown>], varargs=false)
d4 count_zeros(d4 ARG_0, d4 ARG_1)
{
  if(ARG_0 < 1) {
    reg_result = 0;
  } else {
    reg_var1 = ARG_1;
    reg_var2 = 0;
    do {
      reg_var2 += BIT_TO_INT(LOAD(reg_var1) != 0) + -1;
      reg_var1 += 4;
    } while(reg_var1 != ARG_1 + ARG_0 * 4);
    reg_result = -reg_var2;
  }
  return reg_result;
}

