// Decompiled by holdec 1.1 (2012-03-24)

// addr = 08048328.0
// signature= func(test, ret=[<0, void,,unknown>], para=[<0, int(signed, 4),n,unknown>], varargs=false)
??? test(???)
{
  (void) printf("MinMax result %d\n", ((n * -1 + -2 & BIT_TO_INT(!BIT_TEST(31, n >> 31) || BIT_TEST(31, BIT_TO_INT(!BIT_TEST(31, n) || BIT_TEST(31, n * -1 + -2)) * -1 + (n >> 31) * -1 + -1)) * -1 + (n >> 31) * -1 + -1) * -1 + -5 & BIT_TO_INT(BIT_TEST(31, BIT_TO_INT(BIT_TEST(31, (n * -1 + -2 & BIT_TO_INT(!BIT_TEST(31, n >> 31) || BIT_TEST(31, BIT_TO_INT(!BIT_TEST(31, n) || BIT_TEST(31, n * -1 + -2)) * -1 + (n >> 31) * -1 + -1)) * -1 + (n >> 31) * -1 + -1) * -1 + -2) || BIT_TEST(31, (n * -1 + -2 & BIT_TO_INT(!BIT_TEST(31, n >> 31) || BIT_TEST(31, BIT_TO_INT(!BIT_TEST(31, n) || BIT_TEST(31, n * -1 + -2)) * -1 + (n >> 31) * -1 + -1)) * -1 + (n >> 31) * -1 + -1) * -1 + -5)) * -1 + ((n * -1 + -2 & BIT_TO_INT(!BIT_TEST(31, n >> 31) || BIT_TEST(31, BIT_TO_INT(!BIT_TEST(31, n) || BIT_TEST(31, n * -1 + -2)) * -1 + (n >> 31) * -1 + -1)) * -1 + (n >> 31) * -1 + -1) * -1 + -2 >> 31)) || BIT_TEST(31, (n * -1 + -2 & BIT_TO_INT(!BIT_TEST(31, n >> 31) || BIT_TEST(31, BIT_TO_INT(!BIT_TEST(31, n) || BIT_TEST(31, n * -1 + -2)) * -1 + (n >> 31) * -1 + -1)) * -1 + (n >> 31) * -1 + -1) * -1 + -2 >> 31)) * -1 + ((n * -1 + -2 & BIT_TO_INT(!BIT_TEST(31, n >> 31) || BIT_TEST(31, BIT_TO_INT(!BIT_TEST(31, n) || BIT_TEST(31, n * -1 + -2)) * -1 + (n >> 31) * -1 + -1)) * -1 + (n >> 31) * -1 + -1) * -1 + -2 >> 31)) + 3);
  return;
}

// addr = 0804836f.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) test(-5);
  (void) test(-2);
  (void) test(0);
  (void) test(ARG_0);
  (void) test(5);
  return 0;
}

