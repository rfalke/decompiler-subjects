#include <stdio.h>
#include <math.h>

signed char global_char = 1;
short int global_short = 2;
int global_int = 3;
long global_long = 4;
long long global_long_long = 5;

float global_float = 10;
double global_double = 11;
long double global_long_double = 12;


void
use (double x)
{
  printf ("%f", x);
}

void
use_int (int x)
{
  printf ("%d", x);
}


int
read_ints ()
{
  double sum = 0;
  sum += global_char;
  sum += global_short;
  sum += global_int;
  sum += global_long;
  sum += global_long_long;
  use (sum);
  return 120;
}

int
write_ints (double pi)
{
  global_char = pi;
  global_short = pi;
  global_int = pi;
  global_long = pi;
  global_long_long = pi;
  return 121;
}

int
read_floats ()
{
  double sum = 0;
  sum += global_float;
  sum += global_double;
  sum += global_long_double;
  use (sum);
  return 122;
}

void
write_floats (double pi)
{
  global_float = pi;
  global_double = pi;
  global_long_double = pi;
}

void
converting_between_floats_f1 ()
{
  global_float = global_double;
}

void
converting_between_floats_f2 ()
{
  global_float = global_long_double;
}

void
converting_between_floats_d1 ()
{
  global_double = global_float;
}

void
converting_between_floats_d2 ()
{
  global_double = global_long_double;
}

void
converting_between_floats_l1 ()
{
  global_long_double = global_float;
}

void
converting_between_floats_l2 ()
{
  global_long_double = global_double;
}

int
basic_operations (double x, double y)
{
  use (x + y);
  use (x - y);
  use (y - x);
  use (x * y);
  use (x / y);
  use (y / x);
  use (-x);
  return 123;
}

int
compare_floats (double x, double y)
{
  use_int (x == y);
  use_int (x != y);
  use_int (x > y);
  use_int (x >= y);
  use_int (x < y);
  use_int (x <= y);
  return 124;
}

int
constants (double x)
{
  use (2 * x);
  use (3 * x);
  use (M_PI * x);
  use (10 * x);
  use (12.345 * x);
  return 125;
}

int
main ()
{
  printf ("%zu %zu %zu %zu %zu\n", sizeof (global_char),
          sizeof (global_short), sizeof (global_int), sizeof (global_long),
          sizeof (global_long_long));
  printf ("%zu %zu %zu\n", sizeof (global_float), sizeof (global_double),
          sizeof (global_long_double));
  return 0;
}
