// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x08048268 / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482a6.0
// signature= func(F_080482a6, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482a6(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4858);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048328.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{

// calls     [2, 6]
// called    [0, 7]
// deep-calls     {1, 2, 3, 4, 5, 6, 7, 11}
// depp-called    {0, 1, 2, 3, 4, 5, 6, 7, 12}
// startStackOffset -12
// modifiedAddresses  [ADD(local, 20)]
L1:
  (void) STORE(local + 20, 2);
  if(ARG_0  <=  2) goto L2;
  goto L6;

// calls     [3, 6]
// called    [1]
// deep-calls     {1, 2, 3, 4, 5, 6, 7, 11}
// depp-called    {0, 1, 2, 3, 4, 5, 6, 7, 12}
// startStackOffset -12
// modifiedAddresses  [ADD(local, 20)]
L2:
  (void) STORE(local + 20, 3);
  if(ARG_0  <=  3) goto L6;
  goto L3;

// calls     [4, 5]
// called    [2]
// deep-calls     {1, 2, 3, 4, 5, 6, 7, 11}
// depp-called    {0, 1, 2, 3, 4, 5, 6, 7, 12}
// startStackOffset -12
// modifiedAddresses  [ADD(local, 20)]
L3:
  (void) STORE(local + 20, 4);
  if(ARG_0  <=  4) goto L5;
  goto L4;

// calls     [7]
// called    [3, 6]
// deep-calls     {1, 2, 3, 4, 5, 6, 7, 11}
// depp-called    {0, 1, 2, 3, 4, 5, 6, 7, 12}
// startStackOffset -12
// modifiedAddresses  [ALL]
L4:
  (void) STORE(local + 20, 5);
  (void) STORE(local, 134513820);
  (void) printf();
  goto L7;

// calls     [7]
// called    [3]
// deep-calls     {1, 2, 3, 4, 5, 6, 7, 11}
// depp-called    {0, 1, 2, 3, 4, 5, 6, 7, 12}
// startStackOffset -12
// modifiedAddresses  [ADD(local, 20)]
L5:
  (void) STORE(local + 20, 8);
  goto L7;

// calls     [4]
// called    [1, 2]
// deep-calls     {1, 2, 3, 4, 5, 6, 7, 11}
// depp-called    {0, 1, 2, 3, 4, 5, 6, 7, 12}
// startStackOffset -12
// modifiedAddresses  [ALL]
L6:
  (void) STORE(local + 20, 9);
  (void) STORE(local, 134513822);
  (void) printf();
  (void) STORE(local + 20, 10);
  goto L4;

// calls     [1, 11]
// called    [4, 5]
// deep-calls     {1, 2, 3, 4, 5, 6, 7, 11}
// depp-called    {0, 1, 2, 3, 4, 5, 6, 7, 12}
// startStackOffset -12
// modifiedAddresses  [ADD(local, 20)]
L7:
  (void) STORE(local + 20, 6);
  if(ARG_0  <=  5) goto L1;
  goto L11;
  for(...) {
    // state = PRELIMINARY
    do {
      (void) STORE(local + 20, 11);
      if(ARG_0  ==  11) {
        break;
      }
      (void) STORE(local + 20, 12);
    } while(ARG_0  <=  11);
  }
  (void) STORE(local + 20, 13);
}

// addr = 08048482.0
// signature= func(F_08048482, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_08048482(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

