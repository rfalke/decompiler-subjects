#include "printf-args.c.h"
int printf_fetchargs( va_list args, arguments *a )
{
  static wchar_t wide_null_string[7] = { 40, 78, 85, 76, 76, 41, 0 };
  size_t i = 0;
  argument *ap = &a->arg;
  for ( ; i < a->count; ap++ )
  {
    switch ( ap->type )
    {
    case 1:
      args += 4;
      ap->a.a_schar = args[0];
      break;
    case 2:
      args += 4;
      ap->a.a_schar = args[0];
      break;
    case 3:
      args += 4;
      ap->a.a_short = args[0];
      break;
    case 4:
      args += 4;
      ap->a.a_short = args[0];
      break;
    case 5:
      args += 4;
      ap->a.a_int = args[0];
      break;
    case 6:
      args += 4;
      ap->a.a_int = args[0];
      break;
    case 7:
      args += 4;
      ap->a.a_int = args[0];
      break;
    case 8:
      args += 4;
      ap->a.a_int = args[0];
      break;
    case 9:
      args += 8;
      ap->a.a_int = args[0];
      ap->a.a_float = args[4];
      break;
    case 10:
      args += 8;
      ap->a.a_int = args[0];
      ap->a.a_float = args[4];
      break;
    case 11:
      args += 8;
      ap->a.a_longlongint = args[0];
      break;
    case 12:
      args += 12;
      ap->a.a_int = args[0];
      ap->a.a_float = args[4];
      ap->a.a_char = args[8];
      break;
    case 13:
      args += 4;
      ap->a.a_int = args[0];
      break;
    case 14:
      args += 4;
      ap->a.a_int = args[0];
      break;
    case 15:
      args += 4;
      ap->a.a_int = args[0];
      if ( ap->a.a_int == 0 )
        ap->a.a_int = "(NULL)";
      break;
    case 16:
      args += 4;
      ap->a.a_int = args[0];
      if ( ap->a.a_int == 0 )
        ap->a.a_int = wide_null_string[0];
      break;
    case 17:
      args += 4;
      ap->a.a_int = args[0];
      break;
    case 18:
      args += 4;
      ap->a.a_int = args[0];
      break;
    case 19:
      args += 4;
      ap->a.a_int = args[0];
      break;
    case 20:
      args += 4;
      ap->a.a_int = args[0];
      break;
    case 21:
      args += 4;
      ap->a.a_int = args[0];
      break;
    case 22:
      args += 4;
      ap->a.a_int = args[0];
      break;
    case 0:
      return -1;
      break;
    }
    i++;
    // ap++;
  }
  return 0;
}
#if 0
#endif
