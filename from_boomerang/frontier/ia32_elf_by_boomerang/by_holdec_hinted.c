// Decompiled by holdec 1.1 (2012-03-24)

// addr = 080482f4.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{

// calls     [9, 11, 16]
// called    [11, 17]
// deep-calls     {8, 9, 11, 16}
// depp-called    {8, 9, 11, 17}
// startStackOffset -12
// modifiedAddresses  [ADDR(ARG_0)]
L8:
  reg_ab = ARG_0;
  (void) STORE(&ARG_0, ARG_0 + -1);
  if(reg_ab  >  1) goto L9;
  if(ARG_0  !=  12) goto L11;
  goto L16;

// calls     [11, 16]
// called    [8]
// deep-calls     {8, 9, 11, 16}
// depp-called    {8, 9, 11, 17}
// startStackOffset -12
// modifiedAddresses  [ADDR(ARG_0)]
L9:
  reg_aa = ARG_0;
  (void) STORE(&ARG_0, ARG_0 + -1);
  if(reg_aa  <=  2) goto L11;
  goto L16;

// calls     [8, 16]
// called    [8, 9]
// deep-calls     {8, 9, 11, 16}
// depp-called    {8, 9, 11, 17}
// startStackOffset -12
// modifiedAddresses  []
L11:
  if(ARG_0  >  0) goto L8;
  goto L16;
  if(ARG_0  ==  2 || ARG_0  ==  5) {
    for(...) {
      // state = PRELIMINARY
      while(ARG_0  >  0) {
        // nothing
      }
    }
  }
}

