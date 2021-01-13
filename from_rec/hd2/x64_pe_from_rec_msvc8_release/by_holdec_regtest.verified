// Decompiled by holdec

// address: 0140001000.0
// full-signature: func(dumpline, return=[], parameter=[<ptr(int(unsigned, 1)),p,reg[rcx]>, <int(unsigned, 4),offset,reg[edx]>, <int(signed, 4),cnt,reg[r8d]>, <int(undef, 8),ARG_0,unknown>, <int(undef, 8),ARG_1,unknown>, <int(undef, 8),ARG_2,unknown>, <int(undef, 8),ARG_3,unknown>], varargs=false)
void dumpline(u1* p, u4 offset, s4 cnt, d8 ARG_0, d8 ARG_1, d8 ARG_2, d8 ARG_3)
{
  (void) STORE(local + 112, g_0x0140003000 ^ local);
  (void) STORE(local + 128, InitValue(initial_value_of_r14));
  (void) STORE(local + 136, InitValue(initial_value_of_r13));
  (void) STORE(local + 144, InitValue(initial_value_of_r12));
  (void) STORE(local + 152, InitValue(initial_value_of_rdi));
  (void) STORE(local + 160, InitValue(initial_value_of_rsi));
  (void) STORE(&ARG_2, InitValue(initial_value_of_rbx));
  (void) STORE(&ARG_3, InitValue(initial_value_of_rbp));
  (void) sprintf(local + 32, "%08lX:", UNSIGNED_EXTEND(offset));
  reg_var8 = 0;
  reg_var3 = 0;
  reg_var2 = 0;
  if((cnt > 16 ? 16 : cnt) < 1) {
    reg_var9 = 0;
  } else {
    reg_var1 = 0;
    reg_var3 = cnt > 16 ? 16 : cnt;
    do {
      (void) sprintf(SIGNED_EXTEND(reg_var1) + local + 41, " %02lX", UNSIGNED_EXTEND(LOAD(p + reg_var2)));
      reg_var2++;
      reg_var1 += 3;
    } while(reg_var2 < (cnt > 16 ? 16 : SIGNED_EXTEND(cnt)));
    reg_var9 = BIT_TO_INT((cnt > 16 ? 16 : cnt) > 15);
  }
  if(reg_var9 == 0) {
    reg_var4 = UNSIGNED_EXTEND(reg_var3 * -1 + 16);
    do {
      reg_m = _holdec_strlen(local + 32);
      reg_var5 = reg_m;
      if(reg_var5 == -1) {
        reg_var5 = -1;
      }
      reg_q = reg_var4 == 1;
      reg_var4--;
      (void) STORE(reg_var5 * -1 + local + 30, 2105376);
    } while(!reg_q);
  }
  reg_s = _holdec_strlen(local + 32);
  reg_var6 = 0;
  (void) STORE((_holdec_strlen(local + 32) == -1 ? -1 : SIGNED_EXTEND(NARROW(_holdec_strlen(local + 32)))) + local + 32, 8134688);
  if((cnt > 16 ? 16 : SIGNED_EXTEND(cnt)) > 0) {
    reg_var8 = cnt > 16 ? 16 : cnt;
    do {
      reg_w = UNSIGNED_EXTEND(LOAD(p + reg_var6));
      if(LOAD(p + reg_var6) < 32) {
        reg_var7 = 46;
      } else {
        reg_var7 = NARROW(reg_w);
        if(reg_var7 > 126) {
          reg_var7 = 46;
        }
      }
      (void) STORE(reg_var6 + SIGNED_EXTEND((reg_s == -1 ? -1 : NARROW(reg_s)) + 3) + local + 32, reg_var7);
      reg_var6++;
    } while(reg_var6 < (cnt > 16 ? 16 : SIGNED_EXTEND(cnt)));
  }
  if(SIGNED_EXTEND(reg_var8) < 16) {
    (void) memset(SIGNED_EXTEND((reg_s == -1 ? -1 : NARROW(reg_s)) + 3) + SIGNED_EXTEND(reg_var8) + local + 32, SIGNED_EXTEND(reg_var8) & 0xffffffffffffff00 | 0x20, SIGNED_EXTEND(reg_var8) * -1 + 16);
    reg_var8 = 16;
  }
  (void) STORE(SIGNED_EXTEND((reg_s == -1 ? -1 : NARROW(reg_s)) + 3) + SIGNED_EXTEND(reg_var8) + local + 32, 124);
  (void) printf("%s\n", LOAD(local));
  (void) check_stack_cookie(LOAD(local + 112) ^ local);
}

// address: 0140001190.0
// full-signature: func(hexdump, return=[<int(undef, 8),null,unknown>], parameter=[<ptr(int(undef, 1)),filename,reg[rcx]>, <int(undef, 8),ARG_0,unknown>, <int(undef, 8),ARG_1,unknown>, <int(undef, 8),ARG_2,unknown>], varargs=false)
d8 hexdump(d1* filename, d8 ARG_0, d8 ARG_1, d8 ARG_2)
{
  (void) STORE(local + 96, g_0x0140003000 ^ local);
  (void) STORE(local + 112, InitValue(initial_value_of_rbx));
  reg_a = _stat64i32(filename, local + 32);
  if(reg_a == 0) {
    (void) STORE(&ARG_1, InitValue(initial_value_of_rsi));
    reg_c = fopen(filename, "rb");
    if(reg_c == 0) {
      (void) perror(filename);
      reg_result = UNSIGNED_EXTEND(NARROW(reg_c) + 1);
    } else {
      reg_var1 = 0;
      if(LOAD(local + 52) != 0) {
        (void) STORE(&ARG_2, InitValue(initial_value_of_rdi));
        do {
          reg_g = fread(local + 80, 1, 16, reg_c);
          if(NARROW(reg_g) == 0) {
            break;
          }
          (void) dumpline(local + 80, reg_var1, NARROW(reg_g), LOAD(local), LOAD(local + 8), LOAD(local + 16), LOAD(local + 24));
          reg_var1 += NARROW(reg_g);
        } while(reg_var1 < LOAD(local + 52));
      }
      (void) fclose(reg_c);
      reg_result = 0;
    }
    (void) check_stack_cookie(LOAD(local + 96) ^ local);
  } else {
    (void) perror(filename);
    reg_result = 1;
    (void) check_stack_cookie(LOAD(local + 96) ^ local);
  }
  return reg_result;
}

// address: 0140001290.0
// full-signature: func(main, return=[<int(undef, 8),null,unknown>], parameter=[<int(signed, 4),argc,reg[ecx]>, <ptr(ptr(int(undef, 1))),argv,reg[rdx]>, <int(undef, 8),ARG_0,unknown>, <int(undef, 8),ARG_1,unknown>, <int(undef, 8),ARG_2,unknown>], varargs=false)
d8 main(s4 argc, d1** argv, d8 ARG_0, d8 ARG_1, d8 ARG_2)
{
  reg_var2 = 1;
  reg_var1 = 0;
  (void) STORE(&ARG_0, InitValue(initial_value_of_rbx));
  (void) STORE(&ARG_1, InitValue(initial_value_of_rbp));
  (void) STORE(&ARG_2, InitValue(initial_value_of_rsi));
  if(SIGNED_EXTEND(argc) > 1) {
    do {
      reg_e = hexdump(LOAD(argv + reg_var2 * 8), InitValue(initial_value_of_reg_local_a), InitValue(initial_value_of_reg_local_b), InitValue(initial_value_of_reg_local_c));
      reg_var2++;
      reg_var1 += NARROW(reg_e);
    } while(reg_var2 < SIGNED_EXTEND(argc));
  }
  return UNSIGNED_EXTEND(reg_var1);
}

