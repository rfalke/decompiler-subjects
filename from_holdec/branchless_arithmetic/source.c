// From http://locklessinc.com/articles/sat_arithmetic/

#include <stdio.h>

#include <limits.h>

typedef unsigned u32b;
typedef unsigned long long u64b;
typedef __uint128_t u128b;

typedef signed s32b;
typedef signed long long s64b;
typedef __int128_t s128b;

u32b sat_addu32b(u32b x, u32b y) {
  u32b res = x + y;
  res |= -(res < x);

  return res;
}

u32b sat_subu32b(u32b x, u32b y) {
  u32b res = x - y;
  res &= -(res <= x);

  return res;
}

u32b sat_divu32b(u32b x, u32b y) {
  /* No overflow possible */
  return x / y;
}

u32b sat_mulu32b(u32b x, u32b y) {
  u64b res = (u64b)x * (u64b)y;

  u32b hi = res >> 32;
  u32b lo = res;

  return lo | -!!hi;
}

u64b sat_addu64b(u64b x, u64b y) {
  u64b res = x + y;
  res |= -(res < x);

  return res;
}

u64b sat_subu64b(u64b x, u64b y) {
  u64b res = x - y;
  res &= -(res <= x);

  return res;
}

u64b sat_divu64b(u64b x, u64b y) {
  /* No overflow possible */
  return x / y;
}

u64b sat_mulu64b(u64b x, u64b y) {
  u128b res = (u128b)x * (u128b)y;

  u64b hi = res >> 64;
  u64b lo = res;

  return lo | -!!hi;
}

s32b sat_adds32b_var1(s32b x, s32b y) {
  s64b res = (s64b)x + (s64b)y;

  if (res < INT_MIN)
    res = INT_MIN;
  if (res > INT_MAX)
    res = INT_MAX;

  return res;
}

s32b sat_adds32b_var2(s32b x, s32b y) {
  u32b ux = x;
  u32b uy = y;
  u32b res = ux + uy;

  /* Only if same sign, can they overflow */
  if (!((ux ^ uy) >> 31)) {
    /* Is the result a different sign? */
    if ((res ^ ux) >> 31) {
      /* Saturate */
      res = (ux & 0x80000000) ? 0x80000000 : 0x7fffffff;
    }
  }

  return res;
}

s32b sat_adds32b_var3(s32b x, s32b y) {
  u32b ux = x;
  u32b uy = y;
  u32b res = ux + uy;

  /* Calculate overflowed result. (Don't change the sign bit of ux) */
  ux = (ux >> 31) + INT_MAX;

  /* Force compiler to use cmovns instruction */
  if ((s32b)((ux ^ uy) | ~(uy ^ res)) >= 0) {
    res = ux;
  }

  return res;
}

s32b sat_subs32b(s32b x, s32b y) {
  u32b ux = x;
  u32b uy = y;
  u32b res = ux - uy;

  ux = (ux >> 31) + INT_MAX;

  /* Force compiler to use cmovns instruction */
  if ((s32b)((ux ^ uy) & (ux ^ res)) < 0) {
    res = ux;
  }

  return res;
}

s32b sat_divs32b(s32b x, s32b y) {
  /* Only one way to overflow, so test for and prevent it. */
  x += !((y + 1) | ((u32b)x + INT_MIN));

  return x / y;
}

s32b sat_muls32b(s32b x, s32b y) {
  s64b res = (s64b)x * (s64b)y;
  u32b res2 = ((u32b)(x ^ y) >> 31) + INT_MAX;

  s32b hi = (res >> 32);
  s32b lo = res;

  if (hi != (lo >> 31))
    res = res2;

  return res;
}

s64b sat_adds64b(s64b x, s64b y) {
  u64b ux = x;
  u64b uy = y;
  u64b res = ux + uy;

  ux = (ux >> 63) + LONG_MAX;

  /* Force compiler to use cmovns instruction */
  if ((s64b)((ux ^ uy) | ~(uy ^ res)) >= 0) {
    res = ux;
  }

  return res;
}

s64b sat_subs64b(s64b x, s64b y) {
  u64b ux = x;
  u64b uy = y;
  u64b res = ux - uy;

  ux = (ux >> 63) + LONG_MAX;

  /* Force compiler to use cmovns instruction */
  if ((s64b)((ux ^ uy) & (ux ^ res)) < 0) {
    res = ux;
  }

  return res;
}

s64b sat_divs64b(s64b x, s64b y) {
  /* Only one way to overflow, so test for and prevent it. */
  x += !((y + 1) | ((u64b)x + LONG_MIN));

  return x / y;
}

s64b sat_muls64b(s64b x, s64b y) {
  s128b res = (s128b)x * (s128b)y;
  u64b res2 = ((u64b)(x ^ y) >> 63) + LONG_MAX;

  s64b hi = (res >> 64);
  s64b lo = res;

  if (hi != (lo >> 63))
    res = res2;

  return res;
}

s32b abs32(s32b x) {
  if (x >= 0)
    return x;
  return -x;
}

s64b abs64(s64b x) {
  if (x >= 0)
    return x;
  return -x;
}

s32b sgn32(s32b x) { return (x > 0) - (x < 0); }

s64b sgn64(s64b x) { return (x > 0) - (x < 0); }

int main() {
  {
    u32b x = 0xffffffff;
    u32b y = 3;
    printf("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n", x, y, sat_addu32b(x, y));
  }
  {
    u32b x = 1;
    u32b y = 3;
    printf("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n", x, y, sat_subu32b(x, y));
  }
  {
    u32b x = 0xffffffff;
    u32b y = 3;
    printf("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n", x, y, sat_mulu32b(x, y));
  }
  {
    u32b x = 0xffffffff;
    u32b y = 3;
    printf("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n", x, y, sat_divu32b(x, y));
  }
  {
    s32b x = 0x7fffffff;
    s32b y = 2;
    printf("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n", x, y, sat_adds32b_var1(x, y),sat_adds32b_var2(x, y),sat_adds32b_var3(x, y));
  }
  {
    s32b x = 0x80000000;
    s32b y = 2;
    printf("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", x, y, sat_subs32b(x, y));
  }
  {
    s32b x = 0x7fffffff;
    s32b y = 2;
    printf("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n", x, y, sat_muls32b(x, y));
  }
  {
    s32b x = 0x80000000;
    s32b y = 0xffffffff;
    printf("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n", x, y, sat_divs32b(x, y));
  }
  {
    s32b x = 0xfffffff0;
    printf("abs32(0x%08x) = 0x%08x\n", x, abs32(x));
  }
  {
    s32b x = 3;
    printf("sgn32(0x%08x) = 0x%08x\n", x, sgn32(x));
  }
  return 0;
}
