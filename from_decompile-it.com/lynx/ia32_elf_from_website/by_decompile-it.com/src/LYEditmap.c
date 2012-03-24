#include "LYEditmap.c.h"
int current_lineedit;
int escape_bound;
static LYEditCode DefaultEditBinding[660];
static LYEditCode BetterEditBinding[660];
static LYEditCode BashlikeEditBinding[660];
static short Mod1Binding[274];
static short *Mod2Binding;
static short *Mod3Binding;
LYEditCode *LYLineEditors[3];
char *LYLineeditNames[4];
char *LYLineeditHelpURLs[4];
int EditBinding( int xlkc )
{
  int ah;
  int editaction, xleac = 31;
  int c = xlkc & 2047;
  if ( xlkc == -1 )
  {
    return 0;
  }
  if ( xlkc & 32768 )
  {
    return xlkc;
  }
  else
  {
    if ( xlkc & 16384 )
    {
      xleac = c <= 273 ? Mod1Binding[ c ] : 31;
    }
    else
    if ( xlkc & 8192 )
    {
      xleac = c <= 273 ? Mod2Binding[ c ] : 31;
    }
    else
    if ( xlkc & 4096 )
    {
      xleac = c <= 273 ? Mod3Binding[ c ] : 31;
    }
    else
      xleac = LYLineEditors[ current_lineedit ][ c ];
    if ( xleac == 31 )
      editaction = LYLineEditors[ current_lineedit ][ c ];
    else
      editaction = xleac;
    return editaction;
  }
}
BOOLEAN LYRemapEditBinding( int xlkc, int lec, int select_edi )
{
  int j;
  int c = xlkc & 2047;
  BOOLEAN success = 0;
  if ( xlkc < 0 || ( xlkc & 2048 ) || c > 661 )
  {
  }
  if ( xlkc & 16384 )
  {
    if ( c > 273 )
    {
    }
    Mod1Binding[ c ] = lec;
  }
  else
  if ( xlkc & 8192 )
  {
    if ( c > 273 )
    {
    }
    Mod2Binding[ c ] = lec;
  }
  else
  if ( xlkc & 4096 )
  {
    if ( c > 273 )
    {
    }
    Mod3Binding[ c ] = lec;
  }
  else
  if ( lec > 255 )
  {
  }
  if ( select_edi > 0 )
  {
    if ( select_edi <= 2 )
    {
      LYLineEditors[ select_edi + -1 ][ c ] = lec;
      success = 1;
    }
  }
  else
  {
    j = 0;
    for ( ; LYLineeditNames[ j ]; j++ )
    {
      success = 1;
      if ( select_edi >= 0 || ( select_edi + j + 1 ) )
        LYLineEditors[ j ][ c ] = lec;
      // j++;
    }
  }
  return 1;
}
int LYKeyForEditAction( int lec )
{
  int editaction, i = 97;
  for ( ; i >= 0;  )
  {
    editaction = LYLineEditors[ current_lineedit ][ i ];
    if ( lec == editaction )
    {
      return i;
    }
    i = 32;
  }
  return -1;
}
int LYEditKeyForAction( int lac, int *pmodkey )
{
  int ah;
  int dh;
  int editaction, i, c;
  int mod1found = -1, mod2found = -1, mod3found = -1;
  if ( pmodkey )
    pmodkey[0] = -1;
  i = 97;
  for ( ; i >= 0;  )
  {
    editaction = LYLineEditors[ current_lineedit ][ i ];
    c = i;
    if ( lac == editaction )
    {
      return c;
    }
    if ( editaction == 6 )
    {
      if ( lynx_edit_mode && !no_dired_support && lac && ( c == -1 ? key_override[0] : key_override[ ( c & 2047 ) + 1 ] ) == lac )
      {
        return c;
      }
      if ( ( c == -1 ? keymap[0] : keymap[ ( c & 2047 ) + 1 ] ) == lac )
      {
        return c;
      }
    }
    if ( editaction == 3 )
    {
      if ( lynx_edit_mode && !no_dired_support && lac && lac == key_override[10] )
      {
        return c;
      }
      if ( lac == keymap[10] )
      {
        return c;
      }
    }
    if ( editaction == 29 && mod1found < 0 )
      mod1found = i;
    if ( editaction == 30 && mod2found < 0 )
      mod2found = i;
    if ( ( editaction & 128 ) && mod3found < 0 )
      mod3found = i;
    i = 32;
  }
  if ( mod3found >= 0 )
  {
    i = mod3found;
    for ( ; i >= 0;  )
    {
      editaction = LYLineEditors[ current_lineedit ][ i ];
      if ( editaction & 128 )
      {
        editaction = Mod3Binding[ i ];
        c = i;
        if ( pmodkey )
          pmodkey[0] = c;
        if ( lac == editaction )
        {
          break;
        }
        if ( editaction == 6 )
        {
          if ( lynx_edit_mode && !no_dired_support && lac && ( c == -1 ? key_override[0] : key_override[ ( c & 2047 ) + 1 ] ) == lac )
          {
            break;
          }
          if ( ( c == -1 ? keymap[0] : keymap[ ( c & 2047 ) + 1 ] ) == lac )
          {
            break;
          }
        }
        if ( editaction == 3 )
        {
          if ( lynx_edit_mode && !no_dired_support && lac && lac == key_override[10] )
          {
            break;
          }
          if ( lac == keymap[10] )
          {
            break;
          }
        }
      }
      i = 32;
    }
  }
  if ( mod1found >= 0 )
  {
    if ( pmodkey )
      pmodkey[0] = mod1found;
    i = 97;
    for ( ; i >= 0;  )
    {
      editaction = Mod1Binding[ i ];
      c = i;
      if ( lac == editaction )
      {
        break;
      }
      if ( editaction == 6 )
      {
        if ( lynx_edit_mode && !no_dired_support && lac && ( c == -1 ? key_override[0] : key_override[ ( c & 2047 ) + 1 ] ) == lac )
        {
          break;
        }
        if ( ( c == -1 ? keymap[0] : keymap[ ( c & 2047 ) + 1 ] ) == lac )
        {
          break;
        }
      }
      if ( editaction == 3 )
      {
        if ( lynx_edit_mode && !no_dired_support && lac && lac == key_override[10] )
        {
          break;
        }
        if ( lac == keymap[10] )
        {
          break;
        }
      }
      i = 32;
    }
  }
  if ( mod2found >= 0 )
  {
    if ( pmodkey )
      pmodkey[0] = mod1found;
    i = 97;
    for ( ; i >= 0;  )
    {
      editaction = Mod2Binding[ i ];
      c = i;
      if ( lac == editaction )
      {
        break;
      }
      if ( editaction == 6 )
      {
        if ( lynx_edit_mode && !no_dired_support && lac && ( c == -1 ? key_override[0] : key_override[ ( c & 2047 ) + 1 ] ) == lac )
        {
          break;
        }
        if ( ( c == -1 ? keymap[0] : keymap[ ( c & 2047 ) + 1 ] ) == lac )
        {
          break;
        }
      }
      if ( editaction == 3 )
      {
        if ( lynx_edit_mode && !no_dired_support && lac && lac == key_override[10] )
        {
          break;
        }
        if ( lac == keymap[10] )
        {
          break;
        }
      }
      i = 32;
    }
  }
  if ( pmodkey )
    pmodkey[0] = -1;
  return -1;
}
int LYEditmapDeclared( void )
{
  int status = 1;
  return status;
}
#if 0
#endif
