// Decompiled by holdec 1.1 (2012-03-24)

// addr = 0804835c.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) STORE(local + 116, InitValue(initial_value_of_ebx));
  (void) STORE(local + 12, InitValue(initial_value_of_edx));
  (void) STORE(local + 120, InitValue(initial_value_of_ebp));
  (void) STORE(local + 4, 134513736);
  (void) STORE(local + 8, local + 16);
  (void) STORE(local, 3);
  reg_result = __xstat();
  (void) STORE(local + 4, reg_result);
  (void) STORE(local + 8, LOAD(local + 60));
  (void) STORE(local, 134513760);
  (void) printf(134513760, reg_result, LOAD(local + 60));
  return reg_result;
}

