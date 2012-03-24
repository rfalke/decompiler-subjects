#include "secsave.c.h"
enum secsave_errno  secsave_errno;
struct secure_save_info *secure_open( unsigned char *file_name )
{
  struct secure_save_info *ssi;
  mode_t saved_mask;
  secsave_errno = SS_ERR_NONE;
  saved_mask = umask( 127 );
  if ( ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) || *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) ) && *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
  {
    secsave_errno = SS_ERR_DISABLED;
    ssi[0].fp = 0;
    umask( saved_mask );
    return &ssi[0];
  }
  else
  {
    if ( mem_calloc( 1, 20 ) == 0 )
      secsave_errno = SS_ERR_OUT_OF_MEM;
    else
    {
      ssi->secure_save = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
      ssi->file_name = stracpy( file_name );
      if ( ssi->file_name == 0 )
        secsave_errno = SS_ERR_OUT_OF_MEM;
        ssi[0].fp = 0;
        mem_free( (void*)ssi[0].fp );
      else
      {
        if ( __lxstat64( 3, (char*)ssi->file_name, ebp_120 ) )
        {
          if ( *(int*)(__errno_location(  )) != 2 )
          {
            ssi->err = *(int*)(__errno_location(  ));
            secsave_errno = SS_ERR_STAT;
            mem_free( (void*)ssi->file_name );
            ssi->file_name = 0;
            ssi[0].fp = 0;
            mem_free( (void*)ssi[0].fp );
          }
        }
        else
        if ( ( ebp_104 & 61440 ) != 32768 )
          ssi->secure_save = 0;
          ssi = (struct secure_save_info*)fopen64( (char*)ssi->file_name, "wb" );
          if ( ssi[0].fp == 0 )
          {
            secsave_errno = SS_ERR_OPEN_WRITE;
            ssi->err = *(int*)(__errno_location(  ));
          }
        else
        {
          if ( access( (char*)ssi->file_name, 6 ) < 0 )
          {
            ssi->err = *(int*)(__errno_location(  ));
            secsave_errno = SS_ERR_ACCESS;
          }
        }
        if ( ssi->secure_save )
        {
          if ( straconcat( ssi->file_name ) == 0 )
            secsave_errno = SS_ERR_OUT_OF_MEM;
          else
          {
            if ( mkstemp64( (char*)straconcat( ssi->file_name ) ) == -1 )
            {
              secsave_errno = SS_ERR_MKSTEMP;
              mem_free( *(int*)(__errno_location(  )) );
            }
            else
            {
              ssi->fp = &eax[0];
              if ( ssi[0].fp == 0 )
              {
                secsave_errno = SS_ERR_OPEN_WRITE;
                ssi->err = *(int*)(__errno_location(  ));
                mem_free( *(int*)(__errno_location(  )) );
              }
              else
                ssi->tmp_file_name = straconcat( ssi->file_name );
            }
          }
        }
        else
        {
          ssi = (struct secure_save_info*)fopen64( (char*)ssi->file_name, "wb" );
        }
      }
    }
  }
}
int secure_close( struct secure_save_info *ssi )
{
  int eax;
  int ret = -1;
  if ( ssi )
  {
    if ( ssi->fp )
    {
      ret = ssi->err;
      if ( ssi->err == 0 )
      {
        if ( ssi->secure_save )
        {
          int fail;
          if ( fflush( ssi->fp ) != -1 )
          {
            if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
            {
              if ( fsync( fileno( ssi->fp ) ) == 0 )
                ssi->fp = ssi->fp;
            }
            else
              ssi->fp = ssi->fp;
          }
          ret = *(int*)(__errno_location(  ));
          secsave_errno = SS_ERR_OTHER;
          ssi->fp = ssi->fp;
        }
        if ( fclose( ssi->fp ) == -1 )
        {
          ret = *(int*)(__errno_location(  ));
          secsave_errno = SS_ERR_OTHER;
        }
        else
        if ( ssi->secure_save && ssi->file_name )
        {
          if ( ssi->tmp_file_name )
          {
            if ( rename( (char*)ssi->tmp_file_name, (char*)ssi->file_name ) == -1 )
            {
              ret = *(int*)(__errno_location(  ));
              secsave_errno = SS_ERR_RENAME;
            }
          }
          else
            mem_free( (void*)ssi->file_name );
            mem_free( (void*)ssi[0].fp );
            return ret;
        }
        ret = *(int*)(__errno_location(  ));
        secsave_errno = SS_ERR_OTHER;
        ssi->fp = ssi->fp;
      }
      fclose( ssi->fp );
    }
  {
    void *p = (void*)ssi->tmp_file_name;
    if ( ssi->tmp_file_name )
      mem_free( &((int*)p)[0] );
    ssi->file_name[0] = ssi->file_name;
    if ( ssi->file_name )
      mem_free( (void*)ssi->file_name );
    mem_free( (void*)ssi[0].fp );
    return ret;
  }
  }
  else
  {
    return ret;
  }
}
int secure_fputs( struct secure_save_info *ssi, char *s )
{
  int ret;
  if ( ssi && ssi && ssi->err == 0 )
  {
    if ( fputs( s, ssi->fp ) == -1 )
    {
      secsave_errno = SS_ERR_OTHER;
      ssi->err = *(int*)(__errno_location(  ));
    }
  }
  else
  {
    ret = -1;
  }
  return ret;
}
int secure_fputc( struct secure_save_info *ssi, int c )
{
  int ret;
  if ( ssi && ssi && ssi->err == 0 )
  {
    if ( fputc( c, ssi->fp ) == -1 )
    {
      ssi->err = *(int*)(__errno_location(  ));
      secsave_errno = SS_ERR_OTHER;
    }
  }
  else
  {
    ret = -1;
  }
  return ret;
}
int secure_fprintf( struct secure_save_info *ssi, char *format )
{
  int ret;
  if ( ssi && ssi && ssi->err == 0 )
  {
    if ( __vfprintf_chk( ssi->fp, 1, format, ebp_16 ) < 0 )
    {
      ssi->err = *(int*)(__errno_location(  ));
    }
  }
  else
  {
    ret = -1;
  }
  return ret;
}
unsigned char *secsave_strerror( enum secsave_errno  secsave_error, struct terminal *term )
{
  int edx;
  switch ( secsave_error )
  {
  case SS_ERR_RENAME:
    if ( 0 != 67 )
    {
      if ( term[0].next )
      {
        *ebp_200 = term[0].next;
        ebp_196 = secsave_strerror+2fe;
        if ( current_charset != get_terminal_codepage(  ) )
        {
          *ebp_200 = get_terminal_codepage(  );
          ebp_196 = secsave_strerror+310;
          *ebp_200 = "elinks";
          ebp_196 = secsave_strerror+320;
          bind_textdomain_codeset(  );
          current_charset = get_terminal_codepage(  );
          secsave_error = "Cannot rename the file";
        }
      }
    }
    else
    {
      return "Cannot rename the file";
    }
    break;
  case SS_ERR_OPEN_WRITE:
    if ( 0 != 67 )
    {
      if ( term[0].next )
      {
        *ebp_168 = term[0].next;
        ebp_164 = secsave_strerror+2a6;
        if ( current_charset != get_terminal_codepage(  ) )
        {
          *ebp_168 = get_terminal_codepage(  );
          ebp_164 = secsave_strerror+2b8;
          *ebp_168 = "elinks";
          ebp_164 = secsave_strerror+2c8;
          bind_textdomain_codeset(  );
          current_charset = get_terminal_codepage(  );
        }
      }
      secsave_error = "Cannot write the file";
    }
    else
    {
      return "Cannot rename the file";
    }
    break;
  case SS_ERR_ACCESS:
    if ( 0 != 67 )
    {
      if ( term[0].next )
      {
        *ebp_136 = term[0].next;
        ebp_132 = secsave_strerror+24e;
        if ( current_charset != get_terminal_codepage(  ) )
        {
          *ebp_136 = get_terminal_codepage(  );
          ebp_132 = secsave_strerror+260;
          *ebp_136 = "elinks";
          ebp_132 = secsave_strerror+270;
          bind_textdomain_codeset(  );
          current_charset = get_terminal_codepage(  );
        }
      }
      secsave_error = "Cannot access the file";
    }
    else
    {
      return "Cannot rename the file";
    }
    break;
  case SS_ERR_OUT_OF_MEM:
    if ( 0 != 79 )
    {
      if ( term[0].next )
      {
        *ebp_104 = term[0].next;
        ebp_100 = secsave_strerror+1f6;
        if ( current_charset != get_terminal_codepage(  ) )
        {
          *ebp_104 = get_terminal_codepage(  );
          ebp_100 = secsave_strerror+208;
          *ebp_104 = "elinks";
          ebp_100 = secsave_strerror+218;
          bind_textdomain_codeset(  );
          current_charset = get_terminal_codepage(  );
        }
      }
      secsave_error = "Out of memory";
    }
    else
    {
      return "Cannot rename the file";
    }
    break;
  case SS_ERR_MKSTEMP:
    if ( 0 != 67 )
    {
      if ( term[0].next )
      {
        *ebp_72 = term[0].next;
        ebp_68 = secsave_strerror+19e;
        if ( current_charset != get_terminal_codepage(  ) )
        {
          *ebp_72 = get_terminal_codepage(  );
          ebp_68 = secsave_strerror+1b0;
          *ebp_72 = "elinks";
          ebp_68 = secsave_strerror+1c0;
          bind_textdomain_codeset(  );
          current_charset = get_terminal_codepage(  );
        }
      }
      secsave_error = "Cannot create temp file";
    }
    else
    {
      return "Cannot rename the file";
    }
    break;
  case SS_ERR_OPEN_READ:
    if ( 0 != 67 )
    {
      if ( term[0].next )
      {
        *ebp_40 = term[0].next;
        ebp_36 = secsave_strerror+146;
        if ( current_charset != get_terminal_codepage(  ) )
        {
          *ebp_40 = get_terminal_codepage(  );
          ebp_36 = secsave_strerror+158;
          *ebp_40 = "elinks";
          ebp_36 = secsave_strerror+168;
          bind_textdomain_codeset(  );
          current_charset = get_terminal_codepage(  );
        }
      }
      secsave_error = "Cannot read the file";
    }
    else
    {
      return "Cannot rename the file";
    }
    break;
  case SS_ERR_STAT:
    if ( 0 != 67 )
    {
      if ( term[0].next )
      {
        secsave_error = term[0].next[0];
        ebp_4 = secsave_strerror+ea;
        if ( current_charset != get_terminal_codepage(  ) )
        {
          secsave_error = get_terminal_codepage(  );
          ebp_4 = secsave_strerror+fc;
          secsave_error = "elinks";
          term = (struct terminal*)get_cp_mime_name(  );
          ebp_4 = secsave_strerror+10c;
          bind_textdomain_codeset(  );
          current_charset = get_terminal_codepage(  );
        }
      }
      secsave_error = "Cannot get file status";
    }
    else
    {
      return "Cannot rename the file";
    }
    break;
  case SS_ERR_DISABLED:
    if ( 0 != 70 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      secsave_error = "File saving disabled by option";
    }
    else
    {
      return "Cannot rename the file";
    }
    break;
  case SS_ERR_NONE:
    if ( 0 != 83 )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
      secsave_error = "Secure file saving error";
    }
    else
    {
      return "Cannot rename the file";
    }
    break;
  }
}
#if 0
#endif
