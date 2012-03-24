#include "LYLocal.c.h"
static struct dired_menu *menu_head;
static struct dired_menu defmenu[32];
static char LYValidPermitFile[256];
BOOLEAN cannot_stat( char *name )
{
  char *tmpbuf = 0;
  HTSprintf0( &tmpbuf, gettext( "Unable to get status of '%s'." ), name );
  HTAlert( tmpbuf );
  if ( tmpbuf )
  {
    free( tmpbuf );
    tmpbuf = 0;
  }
  return 0;
}
BOOLEAN ok_stat( char *name, struct stat *sb )
{
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "testing ok_stat(%s)\n", name );
  }
  return 1;
}
BOOLEAN ok_lstat( char *name, struct stat *sb )
{
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "testing ok_lstat(%s)\n", name );
  }
  return ( cannot_stat( name ) < 0 ? cannot_stat( name ) : 1 );
}
BOOLEAN ok_file_or_dir( struct stat *sb )
{
  if ( ( sb->st_mode & 61440 ) != 16384 && ( sb->st_mode & 61440 ) != 32768 )
  {
    HTAlert( gettext( "The selected item is not a file or a directory!  Request ignored." ) );
  }
  return 1;
}
int LYExecv( char *path, char **argv, char *msg )
{
  int rc = 0;
  int n;
  char *tmpbuf = 0;
  int pid;
  int wstatus;
  if ( WWW_TraceFlag )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYExecv path='%s'\n", path );
    }
    n = 0;
    for ( ; argv[ n ]; n++ )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "argv[%d] = '%s'\n", n, argv[ n ] );
      }
      // n++;
    }
  }
  rc = 1;
  stop_curses( );
  pid = fork( );
  if ( pid == -1 )
  {
    HTSprintf0( &tmpbuf, gettext( "Unable to %s due to system error!" ), msg );
    rc = 0;
  }
  else
  if ( pid == 0 )
  {
    execv( path, argv[0] );
    LYexit( 1 );
    do
    {
    }
    while ( waitpid( pid, &wstatus, 0 ) != -1 || *(int*)(__errno_location( )) != 4 );
  {
    union {
       int __in;
       int __i;
    } __u;
    __u.__in = wstatus;
    if ( ( ebp_28 & 127 ) == 0 )
    {
      union {
         int __in;
         int __i;
      } __u;
      __u.__in = wstatus;
      if ( ( ( ebp_32 & 65280 ) >> 8 ) == 0 )
        goto B34;
      else
      {
        HTSprintf0( &tmpbuf, gettext( "Probable failure to %s due to system error!" ), msg );
        rc = 0;
      }
    }
  {
B34:;
    union {
       int __in;
       int __i;
    } __u;
    __u.__in = wstatus;
    if ( ( ( ( ebp_36 & 127 ) + 1 ) >> 1 ) > 0 )
    {
      union {
         int __in;
         int __i;
      } __u;
      __u.__in = wstatus;
      if ( ( ebp_40 & 127 ) > 0 )
      {
        HTSprintf0( &tmpbuf, gettext( "Probable failure to %s due to system error!" ), msg );
        rc = 0;
      }
    }
  }
  }
  }
  if ( rc == 0 )
    LYSleepAlert( );
  start_curses( );
  if ( tmpbuf )
  {
    if ( rc == 0 )
      HTAlert( tmpbuf );
    if ( tmpbuf )
    {
      free( tmpbuf );
      tmpbuf = 0;
    }
  }
  return rc;
}
int make_directory( char *path )
{
  int code;
  char *program = HTGetProgramPath( 9 );
  if ( program )
  {
    char *args[5];
    char *msg = 0;
    HTSprintf0( &msg, "make directory %s", path );
    args[0] = "mkdir";
    args[1] = path;
    args[2] = 0;
    code = LYExecv( program, args, msg ) <= 0 ? -1 : 1;
    if ( msg )
    {
      free( msg );
      msg = 0;
    }
  }
  else
  {
    code = 1;
  }
  return code;
}
int remove_file( char *path )
{
  int code;
  char *program = HTGetProgramPath( 12 );
  if ( program )
  {
    char *args[5];
    char *tmpbuf = 0;
    args[0] = "rm";
    args[1] = "-f";
    args[2] = path;
    args[3] = 0;
    HTSprintf0( &tmpbuf, gettext( "remove %s" ), path );
    code = LYExecv( program, args, tmpbuf );
    if ( tmpbuf )
    {
      free( tmpbuf );
      tmpbuf = 0;
    }
  }
  else
  {
    code = 1;
  }
  return code;
}
int remove_directory( char *path )
{
  int code;
  char *program = HTGetProgramPath( 13 );
  if ( program )
  {
    char *args[5];
    char *tmpbuf = 0;
    args[0] = "rmdir";
    args[1] = path;
    args[2] = 0;
    HTSprintf0( &tmpbuf, gettext( "remove %s" ), path );
    code = LYExecv( program, args, tmpbuf );
    if ( tmpbuf )
    {
      free( tmpbuf );
      tmpbuf = 0;
    }
  }
  else
  {
    code = 1;
  }
  return code;
}
int touch_file( char *path )
{
  int code;
  char *program = HTGetProgramPath( 18 );
  if ( program )
  {
    char *args[5];
    char *msg = 0;
    HTSprintf0( &msg, gettext( "touch %s" ), path );
    args[0] = "touch";
    args[1] = path;
    args[2] = 0;
    code = LYExecv( program, args, msg ) <= 0 ? -1 : 1;
    if ( msg )
    {
      free( msg );
      msg = 0;
    }
  }
  else
  {
    FILE *fp = fopen64( path, "w" );
    if ( fp )
    {
      fclose( fp );
      code = 1;
    }
    else
    {
      code = -1;
    }
  }
  return code;
}
int move_file( char *source, char *target )
{
  int code;
  char *program = HTGetProgramPath( 10 );
  if ( program )
  {
    char *msg = 0;
    char *args[5];
    HTSprintf0( &msg, gettext( "move %s to %s" ), source, target );
    args[0] = "mv";
    args[1] = source;
    args[2] = target;
    args[3] = 0;
    code = LYExecv( program, args, msg ) <= 0 ? -1 : 1;
    if ( msg )
    {
      free( msg );
      msg = 0;
    }
  }
  else
  {
    struct stat sb;
    char *actual = 0;
    if ( stat64( target, &sb.st_dev ) == 0 && ( sb.st_mode & 61440 ) == 16384 )
    {
      HTSprintf0( &actual, "%s/%s", target, LYPathLeaf( source ) );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "move_file source=%s, target=%s\n", source, target );
      }
      target = actual;
    }
    code = rename( source, target );
    if ( code )
    {
      code = LYCopyFile( source, target );
      if ( code >= 0 )
      {
        code = remove( source );
      }
    }
    if ( code == 0 )
      code = 1;
    if ( target != actual && actual )
    {
      free( actual );
    }
  }
  return code;
}
BOOLEAN not_already_exists( char *name )
{
  struct stat dir_info;
  if ( stat64( name, &dir_info.st_dev ) )
  {
    if ( *(int*)(__errno_location( )) == 2 )
    {
      return 0;
    }
    cannot_stat( name );
  }
  else
  if ( ( dir_info.st_mode & 61440 ) == 16384 )
  {
    HTAlert( gettext( "There is already a directory with that name!  Request ignored." ) );
  }
  else
  if ( ( dir_info.st_mode & 61440 ) == 32768 )
  {
    HTAlert( gettext( "There is already a file with that name!  Request ignored." ) );
  }
  else
  {
    HTAlert( gettext( "The specified name is already in use!  Request ignored." ) );
  }
  return 0;
}
BOOLEAN dir_has_same_owner( struct stat *info, int owner )
{
  if ( ( info->st_mode & 61440 ) == 16384 )
  {
    if ( info->st_uid == owner )
    {
      return 0;
    }
    HTAlert( gettext( "Destination has different owner!  Request denied." ) );
  }
  else
  {
    HTAlert( gettext( "Destination is not a valid directory!  Request denied." ) );
  }
  return 0;
}
int remove_tagged( void )
{
  int ans;
  BOOLEAN will_clear = 1;
  char *cp;
  char *tmpbuf = 0;
  char *testpath = 0;
  struct stat dir_info;
  int count;
  HTList *tag;
  if ( tagged == 0 || tagged->next == 0 )
  {
    return 0;
  }
  ans = HTConfirm( gettext( "Remove all tagged files and directories?" ) );
  count = 0;
  tag = tagged;
  while ( ans == 1 )
  {
    if ( tag )
    {
      tag = &tag->next;
      cp = 0;
      if ( cp )
      {
        if ( is_url( cp ) != 3 )
          continue;
        else
        {
          testpath = HTnameOfFile_WWW( cp, 0, 1 );
          LYTrimPathSep( testpath );
          will_clear = 1;
          if ( ( ok_stat( testpath, &dir_info ) & 255 ) == 0 )
          {
            will_clear = 0;
            break;
          }
          else
          {
            if ( remove_file( testpath ) <= 0 )
            {
              if ( count == 0 )
                count = -1;
              will_clear = 0;
              break;
            }
            else
            {
              count++;
              if ( testpath )
              {
                free( testpath );
                testpath = 0;
              }
            }
          }
        }
      }
      else
        break;
    }
    cp = 0;
  }
  if ( testpath )
  {
    free( testpath );
    testpath = 0;
  }
  if ( tmpbuf )
  {
    free( tmpbuf );
    tmpbuf = 0;
  }
  if ( will_clear )
    clear_tags( );
  return count;
}
int modify_tagged( char *testpath )
{
  int eax;
  char *cp;
  dev_t dev;
  ino_t inode;
  int owner;
  char tmpbuf[1024];
  char *savepath;
  char *srcpath = 0;
  struct stat dir_info;
  int count = 0;
  HTList *tag;
  if ( tagged == 0 || tagged->next == 0 )
    return 0;
  else
  {
    mustshow = 1;
    statusline( gettext( "Enter new location for tagged items: " ) );
    tmpbuf[0] = 0;
    LYgetstr( tmpbuf, 0, 1024, 0 );
    if ( tmpbuf[0] )
    {
      if ( testpath && testpath[0] && strcmp( testpath, "/" ) )
        cp = testpath;
      else
      {
        cp = 0;
        testpath = 0;
      }
      if ( testpath == 0 )
      {
        if ( cp )
        {
          cp = strip_trailing_slash( cp );
          cp = HTParse( ".", cp, 5 );
          savepath = HTURLPath_toFile( cp, 1, 0 );
          if ( cp )
          {
            free( cp );
            cp = 0;
          }
        }
        else
        {
          savepath = HTURLPath_toFile( ".", 1, 0 );
        }
      }
      else
      {
        if ( strncmp( cp, "file://localhost", 16 ) == 0 )
          cp += 16;
        else
        if ( ( cp[0] == 'f' || cp[0] == 'F' ) && strncasecomp( cp, "file:", 5 ) == 0 )
          cp += 5;
        savepath = HTURLPath_toFile( cp, 1, 0 );
      }
      if ( ( ok_stat( savepath, &dir_info ) & 255 ) == 0 )
      {
        if ( savepath )
        {
          free( savepath );
          savepath = 0;
        }
        return 0;
      }
      else
      {
        inode = dir_info.st_ino;
        owner = dir_info.st_uid;
        if ( tmpbuf[0] == '~' && tmpbuf[1] == '/' )
        {
          char *cp1 = 0;
          HTSACopy( &cp1, Home_Dir( ) );
          HTSACat( &cp1, &tmpbuf[1] );
          if ( strlen( cp1 ) > 1023 )
          {
            HTAlert( gettext( "Path too long" ) );
            if ( savepath )
            {
              free( savepath );
              savepath = 0;
            }
            if ( cp1 )
            {
              free( cp1 );
              cp1 = 0;
            }
            return 0;
          }
          else
          {
            LYstrncpy( tmpbuf, cp1, 1023 );
            if ( cp1 )
            {
              free( cp1 );
            }
          }
        }
        if ( tmpbuf[0] != '/' )
        {
          LYAddPathSep( &savepath );
          HTSACat( &savepath, tmpbuf );
        }
        else
          HTSACopy( &savepath, tmpbuf );
        if ( ( ok_stat( savepath, &dir_info ) & 255 ) == 0 )
        {
          if ( savepath )
          {
            free( savepath );
            savepath = 0;
          }
          return 0;
        }
        else
        {
          if ( ( ( dir_info.st_dev ^ (unsigned int)(dev & 0xFFFFFFFF) ) | ( (unsigned int)(dir_info.st_dev << 32) ^ (unsigned int)(dev << 32) ) ) == 0 && dir_info.st_ino == inode )
          {
            HTAlert( gettext( "Source and destination are the same location - request ignored!" ) );
            if ( savepath )
            {
              free( savepath );
              savepath = 0;
            }
            return 0;
          }
          else
          {
            if ( dir_has_same_owner( &dir_info, owner ) & 255 )
            {
              count = 0;
              tag = tagged;
              while ( 1 )
              {
                if ( tag )
                {
                  tag = &tag->next;
                  cp = 0;
                  if ( cp )
                  {
                    srcpath = HTnameOfFile_WWW( cp, 0, 1 );
                    if ( move_file( srcpath, savepath ) < 0 )
                    {
                      if ( count == 0 )
                      {
                        count = -1;
                        break;
                      }
                      else
                        break;
                    }
                    else
                    {
                      if ( srcpath )
                      {
                        free( srcpath );
                        srcpath = 0;
                      }
                      else
                      {
                        count++;
                      }
                    }
                  }
                  else
                    break;
                }
                cp = 0;
              }
              clear_tags( );
              if ( srcpath )
              {
                free( srcpath );
                srcpath = 0;
              }
            }
            if ( savepath )
            {
              free( savepath );
              savepath = 0;
            }
            return count;
          }
        }
      }
    }
    else
      return 0;
  }
}
int modify_name( char *testpath )
{
  int eax;
  char *cp;
  char tmpbuf[512];
  char *newpath = 0;
  struct stat dir_info;
  int code = 0;
  testpath = strip_trailing_slash( testpath );
  if ( ok_stat( testpath, &dir_info ) & 255 )
  {
    if ( ( dir_info.st_mode & 61440 ) == 16384 )
    {
      cp = gettext( "Enter new name for directory: " );
    }
    else
    if ( ( dir_info.st_mode & 61440 ) == 32768 )
    {
      cp = gettext( "Enter new name for file: " );
    }
    else
    {
      if ( 0 ^ 0 )
      {
        return 0;
      }
      return 0;
    }
    LYstrncpy( tmpbuf, LYPathLeaf( testpath ), 511 );
    if ( get_filename( cp, tmpbuf, 512 ) == 0 )
    {
    }
    else
    {
      if ( LYLastPathSep( tmpbuf ) )
      {
        HTAlert( gettext( "Illegal character (path-separator) found! Request ignored." ) );
      }
      else
      {
        if ( tmpbuf[0] )
        {
          cp = LYLastPathSep( testpath );
          if ( cp )
            HTSprintf0( &newpath, "%.*s%s", ( cp - testpath ) + 1, testpath, tmpbuf[0] );
          else
            HTSACopy( &newpath, tmpbuf );
          if ( not_already_exists( newpath ) & 255 )
          {
            code = move_file( testpath, newpath );
          }
          if ( newpath )
          {
            free( newpath );
            newpath = 0;
          }
        }
      }
    }
  }
}
int modify_location( char *testpath )
{
  int eax;
  char *cp;
  char *sp;
  dev_t dev;
  ino_t inode;
  int owner;
  char tmpbuf[1024];
  char *newpath = 0;
  char *savepath = 0;
  struct stat dir_info;
  int code = 0;
  testpath = strip_trailing_slash( testpath );
  if ( ( ok_stat( testpath, &dir_info ) & 255 ) == 0 )
    return 0;
  else
  {
    if ( ( dir_info.st_mode & 61440 ) == 16384 )
    {
      if ( HTGetProgramPath( 10 ) )
      {
        cp = gettext( "Enter new location for directory: " );
      }
      else
      {
        HTAlert( gettext( "Could not access directory." ) );
        return 0;
      }
    }
    else
    if ( ( dir_info.st_mode & 61440 ) == 32768 )
    {
      cp = gettext( "Enter new location for file: " );
    }
    else
    {
      return ok_file_or_dir( &dir_info );
    }
    LYstrncpy( tmpbuf, testpath, 1023 );
    *(char*)(LYPathLeaf( tmpbuf )) = 0;
    if ( get_filename( cp, tmpbuf, 1024 ) == 0 )
      return 0;
    else
    {
      if ( tmpbuf[0] )
      {
        HTSACopy( &savepath, testpath );
        HTSACopy( &newpath, testpath );
        if ( tmpbuf[0] == '~' && ( tmpbuf[1] == 0 || tmpbuf[1] == '/' ) )
        {
          HTSACopy( &newpath, Home_Dir( ) );
          HTSACat( &newpath, &tmpbuf[1] );
          LYstrncpy( tmpbuf, newpath, 1023 );
        }
        if ( LYisAbsPath( tmpbuf ) & 255 )
          HTSACopy( &newpath, tmpbuf );
        else
        {
          sp = LYLastPathSep( newpath );
          if ( sp )
          {
            sp++;
            sp[0] = 0;
            HTSACat( &newpath, tmpbuf );
          }
          else
          {
            HTAlert( gettext( "Unexpected failure - unable to find trailing path separator" ) );
            if ( newpath )
            {
              free( newpath );
              newpath = 0;
            }
            if ( savepath )
            {
              free( savepath );
              savepath = 0;
            }
            return 0;
          }
        }
        inode = dir_info.st_ino;
        owner = dir_info.st_uid;
        if ( ( ok_stat( newpath, &dir_info ) & 255 ) == 0 )
          code = 0;
        else
        if ( ( ( dir_info.st_dev ^ (unsigned int)(dev & 0xFFFFFFFF) ) | ( (unsigned int)(dir_info.st_dev << 32) ^ (unsigned int)(dev << 32) ) ) == 0 && dir_info.st_ino == inode )
        {
          HTAlert( gettext( "Source and destination are the same location!  Request ignored!" ) );
          code = 0;
        }
        else
        {
          if ( dir_has_same_owner( &dir_info, owner ) & 255 )
          {
            code = move_file( savepath, newpath );
          }
        }
        if ( newpath )
        {
          free( newpath );
          newpath = 0;
        }
        if ( savepath )
        {
          free( savepath );
          savepath = 0;
        }
      }
      return code;
    }
  }
}
int local_modify( DocInfo *doc, char **newpath )
{
  int eax;
  int ans;
  char *cp;
  char testpath[512];
  int count;
  if ( tagged && tagged->next )
  {
    cp = HTnameOfFile_WWW( &doc->address, 0, 0 );
    count = modify_tagged( cp );
    if ( cp )
    {
      free( cp );
      cp = 0;
    }
    if ( ( nlinks - count ) + -1 < doc->link )
      doc->link = ( nlinks - count ) + -1;
    doc->link &= ~( doc->link >> 31 );
    return count;
  }
  else
  if ( doc->link < 0 || nlinks < doc->link )
    return 0;
  else
  {
    mustshow = 1;
    statusline( gettext( "Modify name, location, or permission (n, l, or p): " ) );
    ans = LYgetch_single( );
    if ( strchr( "NLP", ans ) )
    {
      cp = HTnameOfFile_WWW( links[ doc->link ].lname, 0, 1 );
      if ( strlen( cp ) > 511 )
      {
        if ( cp )
        {
          free( cp );
          cp = 0;
        }
        return 0;
      }
      else
      {
        LYstrncpy( testpath, cp, 511 );
        if ( cp )
        {
          free( cp );
          cp = 0;
        }
        if ( ans == 78 )
        {
        }
        else
        {
          if ( ans == 76 )
          {
            if ( modify_location( testpath ) )
            {
              if ( doc->link == nlinks + -1 )
                doc->link += -1;
              return 1;
            }
          }
          else
          {
            if ( ans == 80 )
            {
            }
            else
            {
              HTAlert( gettext( "This feature not yet implemented!" ) );
            }
          }
        }
      }
    }
    return 0;
  }
}
int create_file( char *current_location )
{
  int eax;
  int code = 0;
  char tmpbuf[512];
  char *testpath = 0;
  tmpbuf[0] = 0;
  if ( get_filename( gettext( "Enter name of file to create: " ), tmpbuf, 512 ) )
  {
    if ( strstr( tmpbuf, "//" ) )
    {
      HTAlert( gettext( "Illegal redirection \"//\" found! Request ignored." ) );
    }
    else
    if ( tmpbuf[0] && strchr( ".~/", tmpbuf[0] ) == 0 )
    {
      HTSACopy( &testpath, current_location );
      LYAddPathSep( &testpath );
      HTSACat( &testpath, tmpbuf );
      if ( not_already_exists( testpath ) & 255 )
      {
        code = touch_file( testpath );
      }
      if ( testpath == 0 )
      {
        return code;
      }
      free( testpath );
      testpath = 0;
    }
  }
}
int create_directory( char *current_location )
{
  int eax;
  int code = 0;
  char tmpbuf[512];
  char *testpath = 0;
  tmpbuf[0] = 0;
  if ( get_filename( gettext( "Enter name for new directory: " ), tmpbuf, 512 ) )
  {
    if ( strstr( tmpbuf, "//" ) )
    {
      HTAlert( gettext( "Illegal redirection \"//\" found! Request ignored." ) );
    }
    else
    if ( tmpbuf[0] && strchr( ".~/", tmpbuf[0] ) == 0 )
    {
      HTSACopy( &testpath, current_location );
      LYAddPathSep( &testpath );
      HTSACat( &testpath, tmpbuf );
      if ( not_already_exists( testpath ) & 255 )
      {
        code = make_directory( testpath );
      }
      if ( testpath == 0 )
      {
        return code;
      }
      free( testpath );
      testpath = 0;
    }
  }
}
int local_create( DocInfo *doc )
{
  int eax;
  int ans;
  char *cp = HTnameOfFile_WWW( &doc->address, 0, 1 );
  char testpath[512];
  if ( strlen( cp ) > 511 )
  {
    if ( cp )
    {
      free( cp );
      cp = 0;
    }
    return 0;
  }
  else
  {
    strcpy( testpath, cp );
    if ( cp )
    {
      free( cp );
      cp = 0;
    }
    mustshow = 1;
    statusline( gettext( "Create file or directory (f or d): " ) );
    ans = LYgetch_single( );
    if ( ans == 70 )
    {
    }
    else
    {
      if ( ans == 68 )
      {
      }
      else
        return 0;
    }
  }
}
int remove_single( char *testpath )
{
  int code = 0;
  char *cp;
  char *tmpbuf = 0;
  struct stat dir_info;
  BOOLEAN is_directory = 0;
  if ( ( ok_lstat( testpath, &dir_info ) & 255 ) == 0 )
  {
    return 0;
  }
  cp = LYLastPathSep( testpath );
  if ( cp )
    cp++;
  else
    cp = testpath;
  if ( ( dir_info.st_mode & 61440 ) == 16384 )
  {
    if ( strlen( cp ) <= 36 )
    {
      HTSprintf0( &tmpbuf, gettext( "Remove directory '%s'?" ), cp );
    }
    else
    {
      HTSprintf0( &tmpbuf, gettext( "Remove directory?" ) );
    }
    is_directory = 1;
  }
  else
  {
    if ( ( dir_info.st_mode & 61440 ) == 32768 )
    {
      if ( strlen( cp ) <= 59 )
      {
        HTSprintf0( &tmpbuf, gettext( "Remove file '%s'?" ), cp );
      }
      else
      {
        HTSprintf0( &tmpbuf, gettext( "Remove file?" ) );
      }
    }
    else
    {
      if ( ( dir_info.st_mode & 61440 ) == 40960 )
      {
        if ( strlen( cp ) <= 49 )
        {
          HTSprintf0( &tmpbuf, gettext( "Remove symbolic link '%s'?" ), cp );
        }
        else
        {
          HTSprintf0( &tmpbuf, gettext( "Remove symbolic link?" ) );
        }
      }
      else
      {
        cannot_stat( testpath );
        if ( tmpbuf )
        {
          free( tmpbuf );
          tmpbuf = 0;
        }
        return 0;
      }
    }
  }
  if ( HTConfirm( tmpbuf ) == 1 )
  {
    code = is_directory ? remove_directory( testpath ) : remove_file( testpath );
  }
  if ( tmpbuf )
  {
    free( tmpbuf );
    tmpbuf = 0;
  }
  return code;
}
int local_remove( DocInfo *doc )
{
  int eax;
  char *cp, *tp;
  char testpath[512];
  int count, i;
  if ( tagged && tagged->next )
  {
    count = remove_tagged( );
    if ( ( nlinks - count ) + -1 < doc->link )
      doc->link = ( nlinks - count ) + -1;
    doc->link &= ~( doc->link >> 31 );
    return count;
  }
  else
  if ( doc->link < 0 || nlinks < doc->link )
    return 0;
  else
  {
    cp = links[ doc->link ].lname;
    if ( is_url( cp ) == 3 )
    {
      tp = HTnameOfFile_WWW( cp, 0, 1 );
      if ( strlen( tp ) > 511 )
      {
        if ( tp )
        {
          free( tp );
          tp = 0;
        }
        return 0;
      }
      else
      {
        strcpy( testpath, tp );
        if ( tp )
        {
          free( tp );
          tp = 0;
        }
        i = strlen( testpath );
        if ( i && testpath[ i + -1 ] == '/' )
          testpath[ i + -1 ] = 0;
        if ( remove_single( testpath ) )
        {
          if ( doc->link == nlinks + -1 )
            doc->link += -1;
          return 1;
        }
      }
    }
    return 0;
  }
}
long permit_bits( char *string_mode )
{
  if ( strcmp( string_mode, ebp_20 ) == 0 )
  {
    return 256;
  }
  if ( strcmp( string_mode, "IWUSR" ) == 0 )
  {
    return 128;
  }
  if ( strcmp( string_mode, "IXUSR" ) == 0 )
  {
    return 64;
  }
  if ( strcmp( string_mode, "IRGRP" ) == 0 )
  {
    return 32;
  }
  if ( strcmp( string_mode, "IWGRP" ) == 0 )
  {
    return 16;
  }
  if ( strcmp( string_mode, "IXGRP" ) == 0 )
  {
    return 8;
  }
  if ( strcmp( string_mode, "IROTH" ) == 0 )
  {
    return 4;
  }
  if ( strcmp( string_mode, "IWOTH" ) == 0 )
  {
    return 2;
  }
  if ( strcmp( string_mode, "IXOTH" ) == 0 )
  {
    return 1;
  }
  return 0;
}
int permit_location( char *destpath, char *srcpath, char **newpath )
{
  int eax;
  static char tempfile[256];
  char *cp;
  char tmpdst[256];
  struct stat dir_info;
  char *program;
  if ( srcpath )
  {
    FILE *fp0;
    char *user_filename;
    char *group_name;
    srcpath = strip_trailing_slash( srcpath );
    if ( ( ok_lstat( srcpath, &dir_info ) & 255 ) == 0 || ( ok_file_or_dir( &dir_info ) & 255 ) == 0 )
      return 0;
    else
    {
      user_filename = LYPathLeaf( srcpath );
      LYRemoveTemp( tempfile );
      fp0 = LYOpenTemp( tempfile, ".html", "w" );
      if ( fp0 == 0 )
      {
        HTAlert( gettext( "Unable to open permit options file" ) );
        return 0;
      }
      else
      {
        LYLocalFileToURL( newpath, tempfile );
        LYRegisterUIPage( newpath[0], 9 );
        group_name = HTAA_GidToName( (int)dir_info.st_gid );
        LYstrncpy( LYValidPermitFile, srcpath, 255 );
        fprintf( fp0, "&lt;Html&gt;&lt;Head&gt;\n&lt;Title&gt;%s&lt;/Title&gt;\n&lt;/Head&gt;\n&lt;Body&gt;\n", gettext( "File Permission Options" ) );
        fprintf( fp0, "&lt;H1&gt;%s%s&lt;/H1&gt;\n", gettext( "Permissions for " ), user_filename );
      {
        char *srcpath_url = HTEscape( srcpath, 4 );
        fprintf( fp0, "&lt;Form Action=\"%s//PERMIT_LOCATION%s\"&gt;\n", "LYNXDIRED:", srcpath_url );
        if ( srcpath_url )
        {
          free( srcpath_url );
        }
        fprintf( fp0, "&lt;Ol&gt;&lt;Li&gt;%s&lt;Br&gt;&lt;Br&gt;\n", gettext( "Specify permissions below:" ) );
        fprintf( fp0, "%s:&lt;Br&gt;\n", gettext( "Owner:" ) );
        fprintf( fp0, "&lt;Input Type=\"checkbox\" Name=\"mode\" Value=\"IRUSR\" %s&gt; Read&lt;Br&gt;\n", "" );
        fprintf( fp0, "&lt;Input Type=\"checkbox\" Name=\"mode\" Value=\"IWUSR\" %s&gt; Write&lt;Br&gt;\n", "" );
        if ( no_change_exec_perms == 0 || ( dir_info.st_mode & 61440 ) == 16384 )
        {
          fprintf( fp0, "&lt;Input Type=\"checkbox\" Name=\"mode\" Value=\"IXUSR\" %s&gt; %s&lt;Br&gt;\n", "", ( dir_info.st_mode & 61440 ) == 16384 ? "Search" : "Execute" );
        }
        fprintf( fp0, "%s %s:&lt;Br&gt;\n", gettext( "Group" ), group_name );
        fprintf( fp0, "&lt;Input Type=\"checkbox\" Name=\"mode\" Value=\"IRGRP\" %s&gt; Read&lt;Br&gt;\n", "" );
        fprintf( fp0, "&lt;Input Type=\"checkbox\" Name=\"mode\" Value=\"IWGRP\" %s&gt; Write&lt;Br&gt;\n", "" );
        if ( no_change_exec_perms == 0 || ( dir_info.st_mode & 61440 ) == 16384 )
        {
          fprintf( fp0, "&lt;Input Type=\"checkbox\" Name=\"mode\" Value=\"IXGRP\" %s&gt; %s&lt;Br&gt;\n", "", ( dir_info.st_mode & 61440 ) == 16384 ? "Search" : "Execute" );
        }
        fprintf( fp0, "%s&lt;Br&gt;\n", gettext( "Others:" ) );
        fprintf( fp0, "&lt;Input Type=\"checkbox\" Name=\"mode\" Value=\"IROTH\" %s&gt; Read&lt;Br&gt;\n", "" );
        fprintf( fp0, "&lt;Input Type=\"checkbox\" Name=\"mode\" Value=\"IWOTH\" %s&gt; Write&lt;Br&gt;\n", "" );
        if ( no_change_exec_perms == 0 || ( dir_info.st_mode & 61440 ) == 16384 )
        {
          fprintf( fp0, "&lt;Input Type=\"checkbox\" Name=\"mode\" Value=\"IXOTH\" %s&gt; %s&lt;Br&gt;\n", "", ( dir_info.st_mode & 61440 ) == 16384 ? "Search" : "Execute" );
        }
        fprintf( fp0, "&lt;Br&gt;\n&lt;Li&gt;&lt;Input Type=\"submit\" Value=\"Submit\"&gt;  %s %s %s.\n&lt;/Ol&gt;\n&lt;/Form&gt;\n", gettext( "form to permit" ), ( dir_info.st_mode & 61440 ) == 16384 ? "directory" : "file", user_filename );
        fwrite( "&lt;/Body&gt;&lt;/Html&gt;", 1, 14, fp0 );
        LYCloseTempFP( fp0 );
        LYforce_no_cache = 1;
        return -99;
      }
      }
    }
  }
  else
  {
    mode_t new_mode = 0;
    if ( LYValidPermitFile[0] == 0 )
    {
      if ( LYCursesON )
      {
        HTAlert( gettext( "Special URL only valid from current File Permission menu!" ) );
      }
      else
      {
        fprintf( stderr, "%s\n", gettext( "Special URL only valid from current File Permission menu!" ) );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "permit_location: called for &lt;%s&gt;.\n", "NULL URL pointer" );
      }
      return 0;
    }
    else
    {
      cp = destpath;
      for ( ; cp[0] && cp[0] != '?'; cp++ )
      {
        // cp++;
      }
      if ( cp[0] == 0 )
        return 0;
      else
      {
        cp[0] = 0;
        cp++;
        destpath = HTURLPath_toFile( destpath, 1, 0 );
        if ( destpath == 0 )
          return 0;
        else
        {
          if ( strlen( destpath ) > 255 )
          {
            if ( destpath )
            {
              free( destpath );
              destpath = 0;
            }
            return 0;
          }
          else
          {
            strcpy( tmpdst, destpath );
            if ( destpath )
            {
              free( destpath );
              destpath = 0;
            }
            destpath = tmpdst;
            if ( strcmp( destpath, LYValidPermitFile ) )
            {
              if ( LYCursesON )
              {
                HTAlert( gettext( "Special URL only valid from current File Permission menu!" ) );
              }
              else
              {
                fprintf( stderr, "%s\n", gettext( "Special URL only valid from current File Permission menu!" ) );
              }
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "permit_location: called for file '%s'.\n", destpath );
              }
              return 0;
            }
            else
            {
              destpath = strip_trailing_slash( destpath );
              if ( ( ok_stat( destpath, &dir_info ) & 255 ) == 0 || ( ok_file_or_dir( &dir_info ) & 255 ) == 0 )
                return 0;
              else
              {
                while ( cp[0] )
                {
                  char *cr = cp;
                  for ( ; cr[0] && cr[0] != '&'; cr++ )
                  {
                    // cr++;
                  }
                  if ( cr[0] )
                  {
                    cr[0] = 0;
                    cr++;
                  }
                  if ( strncmp( cp, "mode=", 5 ) == 0 )
                  {
                    long mask = permit_bits( &cp[5] );
                    if ( mask )
                    {
                      if ( no_change_exec_perms == 0 || strchr( &cp[5], 'X' ) == 0 || ( dir_info.st_mode & 61440 ) == 16384 )
                        new_mode |= mask;
                      cp = cr;
                    }
                    else
                    {
                      HTAlert( gettext( "Invalid mode format." ) );
                      return 0;
                    }
                  }
                  else
                  {
                    HTAlert( gettext( "Invalid syntax format." ) );
                    return 0;
                  }
                }
                program = HTGetProgramPath( 2 );
                if ( program )
                {
                  char *args[5];
                  char amode[10];
                  char *tmpbuf = 0;
                  HTSprintf0( &tmpbuf, "chmod %.4o %s", new_mode, destpath );
                  sprintf( amode, "%.4o", (int)new_mode );
                  args[0] = "chmod";
                  args[1] = amode;
                  args[2] = destpath;
                  args[3] = 0;
                  if ( LYExecv( program, args, tmpbuf ) <= 0 )
                  {
                    if ( tmpbuf )
                    {
                      free( tmpbuf );
                      tmpbuf = 0;
                    }
                    return -1;
                  }
                  else
                  {
                    if ( tmpbuf )
                    {
                      free( tmpbuf );
                      tmpbuf = 0;
                    }
                  }
                }
                else
                {
                  if ( chmod( destpath, new_mode ) < 0 )
                    return -1;
                }
                LYforce_no_cache = 1;
                return 1;
              }
            }
          }
        }
      }
    }
  }
}
void tagflag( int flag, int cur )
{
  if ( nlinks > 0 )
  {
    LYmove( links[ cur ].ly, 2 );
    lynx_stop_reverse( );
    if ( flag == 1 )
      waddch( LYwin, 43 );
    else
      waddch( LYwin, 32 );
    if ( LYShowCursor == 0 )
      LYmove( LYlines + -1, ( LYcols - ( LYShowScrollbar != 0 ) ) + -1 );
    else
      LYmove( links[ cur ].ly, links[ cur ].lx );
    LYrefresh( );
  }
  return;
}
void showtags( HTList *t )
{
  int i = 0;
  HTList *s;
  char *name;
  for ( ; i < nlinks; i++ )
  {
    s = t;
    do
    {
      if ( s )
      {
        s = &s->next;
        name = 0;
        if ( name )
        {
        }
        i++;
        break;
      }
      name = 0;
    }
    while ( strcmp( links[ i ].lname, name ) );
    tagflag( 1, i );
    // i++;
  }
  return;
}
char *DirectoryOf( char *pathname )
{
  char *result = 0;
  char *leaf;
  HTSACopy( &result, pathname );
  leaf = LYPathLeaf( result );
  if ( result != leaf )
  {
    char *result1 = 0;
    leaf[0] = 0;
    if ( ( LYisRootPath( result ) & 255 ) == 0 )
      LYTrimPathSep( result );
    result1 = wwwName( result );
    HTSACopy( &result, result1 );
  }
  return result;
}
char *match_op( char *prefix, char *data )
{
  int len = strlen( prefix );
  if ( strncmp( "LYNXDIRED://", data, 12 ) == 0 && strncmp( prefix, &data[12], len ) == 0 )
  {
    len += 12;
    return &data[ len ];
  }
  return 0;
}
char *build_command( char *line, char *dirname, char *arg )
{
  char *buffer = 0;
  char *program;
  char *tar_path = HTGetProgramPath( 15 );
  arg = match_op( "DECOMPRESS", line );
  if ( arg )
  {
    program = HTGetProgramPath( 19 );
    if ( program )
    {
      HTAddParam( &buffer, "%s %s", 1, program );
      HTAddParam( &buffer, "%s %s", 2, arg );
      HTEndParam( &buffer, "%s %s", 2 );
    }
    return buffer;
  }
  else
  {
    arg = match_op( "UUDECODE", line );
    if ( arg )
    {
      program = HTGetProgramPath( 21 );
      if ( program )
      {
        HTAddParam( &buffer, "%s %s", 1, program );
        HTAddParam( &buffer, "%s %s", 2, arg );
        HTEndParam( &buffer, "%s %s", 2 );
        HTAlert( gettext( "Warning!  UUDecoded file will exist in the directory you started Lynx." ) );
      }
      return buffer;
    }
    else
    {
      if ( tar_path )
      {
        arg = match_op( "UNTAR_GZ", line );
        if ( arg )
        {
          program = HTGetProgramPath( 6 );
          if ( program )
          {
            dirname = DirectoryOf( arg );
            HTAddParam( &buffer, "cd %s; %s -qdc %s |  %s %s %s", 1, dirname );
            HTAddParam( &buffer, "cd %s; %s -qdc %s |  %s %s %s", 2, program );
            HTAddParam( &buffer, "cd %s; %s -qdc %s |  %s %s %s", 3, arg );
            HTAddParam( &buffer, "cd %s; %s -qdc %s |  %s %s %s", 4, tar_path );
            HTAddToCmd( &buffer, "cd %s; %s -qdc %s |  %s %s %s", 5, "-xf" );
            HTAddToCmd( &buffer, "cd %s; %s -qdc %s |  %s %s %s", 6, "-" );
            HTEndParam( &buffer, "cd %s; %s -qdc %s |  %s %s %s", 6 );
          }
          return buffer;
        }
        else
        {
          arg = match_op( "UNTAR_Z", line );
          if ( arg )
          {
            program = HTGetProgramPath( 22 );
            if ( program )
            {
              dirname = DirectoryOf( arg );
              HTAddParam( &buffer, "cd %s; %s %s |  %s %s %s", 1, dirname );
              HTAddParam( &buffer, "cd %s; %s %s |  %s %s %s", 2, program );
              HTAddParam( &buffer, "cd %s; %s %s |  %s %s %s", 3, arg );
              HTAddParam( &buffer, "cd %s; %s %s |  %s %s %s", 4, tar_path );
              HTAddToCmd( &buffer, "cd %s; %s %s |  %s %s %s", 5, "-xf" );
              HTAddToCmd( &buffer, "cd %s; %s %s |  %s %s %s", 6, "-" );
              HTEndParam( &buffer, "cd %s; %s %s |  %s %s %s", 6 );
            }
            return buffer;
          }
          else
          {
            arg = match_op( "UNTAR", line );
            if ( arg )
            {
              dirname = DirectoryOf( arg );
              HTAddParam( &buffer, "cd %s; %s %s %s", 1, dirname );
              HTAddParam( &buffer, "cd %s; %s %s %s", 2, tar_path );
              HTAddToCmd( &buffer, "cd %s; %s %s %s", 3, "-xf" );
              HTAddParam( &buffer, "cd %s; %s %s %s", 4, arg );
              HTEndParam( &buffer, "cd %s; %s %s %s", 4 );
              return buffer;
            }
            arg = match_op( "TAR_GZ", line );
            if ( arg )
            {
              program = HTGetProgramPath( 6 );
              if ( program )
              {
                dirname = DirectoryOf( arg );
                HTAddParam( &buffer, "cd %s; %s %s %s %s | %s -qc &gt;%s%s", 1, dirname );
                HTAddParam( &buffer, "cd %s; %s %s %s %s | %s -qc &gt;%s%s", 2, tar_path );
                HTAddToCmd( &buffer, "cd %s; %s %s %s %s | %s -qc &gt;%s%s", 3, "-cf" );
                HTAddToCmd( &buffer, "cd %s; %s %s %s %s | %s -qc &gt;%s%s", 4, "-" );
                HTAddParam( &buffer, "cd %s; %s %s %s %s | %s -qc &gt;%s%s", 5, LYPathLeaf( arg ) );
                HTAddParam( &buffer, "cd %s; %s %s %s %s | %s -qc &gt;%s%s", 6, program );
                HTAddParam( &buffer, "cd %s; %s %s %s %s | %s -qc &gt;%s%s", 7, LYPathLeaf( arg ) );
                HTAddParam( &buffer, "cd %s; %s %s %s %s | %s -qc &gt;%s%s", 8, ".tar.gz" );
                HTEndParam( &buffer, "cd %s; %s %s %s %s | %s -qc &gt;%s%s", 8 );
              }
              return buffer;
            }
            else
            {
              arg = match_op( "TAR_Z", line );
              if ( arg )
              {
                program = HTGetProgramPath( 3 );
                if ( program )
                {
                  dirname = DirectoryOf( arg );
                  HTAddParam( &buffer, "cd %s; %s %s %s %s | %s &gt;%s%s", 1, dirname );
                  HTAddParam( &buffer, "cd %s; %s %s %s %s | %s &gt;%s%s", 2, tar_path );
                  HTAddToCmd( &buffer, "cd %s; %s %s %s %s | %s &gt;%s%s", 3, "-cf" );
                  HTAddToCmd( &buffer, "cd %s; %s %s %s %s | %s &gt;%s%s", 4, "-" );
                  HTAddParam( &buffer, "cd %s; %s %s %s %s | %s &gt;%s%s", 5, LYPathLeaf( arg ) );
                  HTAddParam( &buffer, "cd %s; %s %s %s %s | %s &gt;%s%s", 6, program );
                  HTAddParam( &buffer, "cd %s; %s %s %s %s | %s &gt;%s%s", 7, LYPathLeaf( arg ) );
                  HTAddParam( &buffer, "cd %s; %s %s %s %s | %s &gt;%s%s", 8, ".tar.Z" );
                  HTEndParam( &buffer, "cd %s; %s %s %s %s | %s &gt;%s%s", 8 );
                }
                return buffer;
              }
              else
              {
                arg = match_op( "TAR", line );
                if ( arg )
                {
                  dirname = DirectoryOf( arg );
                  HTAddParam( &buffer, "cd %s; %s %s %s %s.tar %s", 1, dirname );
                  HTAddParam( &buffer, "cd %s; %s %s %s %s.tar %s", 2, tar_path );
                  HTAddToCmd( &buffer, "cd %s; %s %s %s %s.tar %s", 3, "-cf" );
                  HTAddToCmd( &buffer, "cd %s; %s %s %s %s.tar %s", 4, "" );
                  HTAddParam( &buffer, "cd %s; %s %s %s %s.tar %s", 5, LYPathLeaf( arg ) );
                  HTAddParam( &buffer, "cd %s; %s %s %s %s.tar %s", 6, LYPathLeaf( arg ) );
                  HTEndParam( &buffer, "cd %s; %s %s %s %s.tar %s", 6 );
                  return buffer;
                }
              }
            }
          }
        }
      }
      arg = match_op( "GZIP", line );
      if ( arg )
      {
        program = HTGetProgramPath( 6 );
        if ( program )
        {
          HTAddParam( &buffer, "%s -q %s", 1, program );
          HTAddParam( &buffer, "%s -q %s", 2, arg );
          HTEndParam( &buffer, "%s -q %s", 2 );
        }
        return buffer;
      }
      else
      {
        arg = match_op( "UNGZIP", line );
        if ( arg )
        {
          program = HTGetProgramPath( 6 );
          if ( program )
          {
            HTAddParam( &buffer, "%s -d %s", 1, program );
            HTAddParam( &buffer, "%s -d %s", 2, arg );
            HTEndParam( &buffer, "%s -d %s", 2 );
          }
          return buffer;
        }
        else
        {
          arg = match_op( "ZIP", line );
          if ( arg )
          {
            program = HTGetProgramPath( 23 );
            if ( program )
            {
              dirname = DirectoryOf( arg );
              HTAddParam( &buffer, "cd %s; %s -rq %s.zip %s", 1, dirname );
              HTAddParam( &buffer, "cd %s; %s -rq %s.zip %s", 2, program );
              HTAddParam( &buffer, "cd %s; %s -rq %s.zip %s", 3, LYPathLeaf( arg ) );
              HTAddParam( &buffer, "cd %s; %s -rq %s.zip %s", 4, LYPathLeaf( arg ) );
              HTEndParam( &buffer, "cd %s; %s -rq %s.zip %s", 4 );
            }
            return buffer;
          }
          else
          {
            arg = match_op( "UNZIP", line );
            if ( arg )
            {
              program = HTGetProgramPath( 20 );
              if ( program )
              {
                dirname = DirectoryOf( arg );
                HTAddParam( &buffer, "cd %s; %s -q %s", 1, dirname );
                HTAddParam( &buffer, "cd %s; %s -q %s", 2, program );
                HTAddParam( &buffer, "cd %s; %s -q %s", 3, arg );
                HTEndParam( &buffer, "cd %s; %s -q %s", 3 );
              }
              return buffer;
            }
            else
            {
              arg = match_op( "COMPRESS", line );
              if ( arg == 0 )
              {
                return 0;
              }
              program = HTGetProgramPath( 3 );
              if ( program )
              {
                HTAddParam( &buffer, "%s %s", 1, program );
                HTAddParam( &buffer, "%s %s", 2, arg );
                HTEndParam( &buffer, "%s %s", 2 );
              }
              return buffer;
            }
          }
        }
      }
    }
  }
}
int local_dired( DocInfo *doc )
{
  char *line_url;
  char *line = 0;
  char *arg = 0;
  char *tp = 0;
  char *tmpbuf = 0;
  char *buffer = 0;
  char *dirname = 0;
  BOOLEAN do_pop_doc = 1;
  line_url = &doc->address;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "local_dired: called for &lt;%s&gt;.\n", line_url ? line_url : (char*)TraceFP( ) );
  }
  HTUnEscapeSome( line_url, "/" );
  HTSACopy( &line, line_url );
  HTUnEscape( line );
  arg = match_op( "CHDIR", line );
  if ( arg )
  {
    handle_LYK_CHDIR( );
    do_pop_doc = 0;
    arg = "blah";
  }
  else
  {
    arg = match_op( "NEW_FILE", line );
    if ( arg )
    {
      if ( create_file( arg ) > 0 )
        LYforce_no_cache = 1;
    }
    else
    {
      arg = match_op( "NEW_FOLDER", line );
      if ( arg )
      {
        if ( create_directory( arg ) > 0 )
          LYforce_no_cache = 1;
      }
      else
      {
        arg = match_op( "MODIFY_NAME", line );
        if ( arg )
        {
          if ( modify_name( arg ) > 0 )
            LYforce_no_cache = 1;
        }
        else
        {
          arg = match_op( "MODIFY_LOCATION", line );
          if ( arg )
          {
            if ( modify_location( arg ) > 0 )
              LYforce_no_cache = 1;
          }
          else
          {
            arg = match_op( "MOVE_TAGGED", line_url );
            if ( arg )
            {
              if ( modify_tagged( arg ) > 0 )
                LYforce_no_cache = 1;
            }
            else
            {
              arg = match_op( "PERMIT_SRC", line );
              if ( arg )
              {
                permit_location( 0, arg, &tp );
                if ( tp )
                {
                  if ( doc->address )
                  {
                    free( &doc->address );
                    *(int*)&doc->address = 0;
                  }
                  doc->address = tp;
                }
                if ( line )
                {
                  free( line );
                  line = 0;
                }
                return 0;
              }
              else
              {
                arg = match_op( "PERMIT_LOCATION", line_url );
                if ( arg )
                  permit_location( arg, 0, &tp );
                else
                {
                  arg = match_op( "REMOVE_SINGLE", line );
                  if ( arg )
                  {
                    if ( remove_single( arg ) > 0 )
                      LYforce_no_cache = 1;
                  }
                  else
                  {
                    arg = match_op( "REMOVE_TAGGED", line );
                    if ( arg )
                    {
                      if ( remove_tagged( ) )
                        LYforce_no_cache = 1;
                    }
                    else
                    {
                      arg = match_op( "CLEAR_TAGGED", line );
                      if ( arg )
                        clear_tags( );
                      else
                      {
                        arg = match_op( "UPLOAD", line );
                        if ( arg )
                        {
                          if ( LYUpload( line_url ) )
                            LYforce_no_cache = 1;
                        }
                        else
                        {
                          LYTrimPathSep( line );
                          if ( LYLastPathSep( line ) == 0 )
                          {
                            if ( line )
                            {
                              free( line );
                              line = 0;
                            }
                            return 0;
                          }
                          else
                          {
                            buffer = build_command( line, dirname, arg );
                            if ( buffer )
                            {
                              if ( strlen( buffer ) < ( LYcols - ( LYShowScrollbar != 0 ) ) + -14 )
                              {
                                HTSprintf0( &tmpbuf, gettext( "Executing %s " ), buffer );
                              }
                              else
                              {
                                HTSprintf0( &tmpbuf, gettext( "Executing system command. This might take a while." ) );
                              }
                              mustshow = 1;
                              statusline( tmpbuf );
                              stop_curses( );
                              printf( "%s\r\n", tmpbuf );
                              LYSystem( buffer );
                              start_curses( );
                              LYforce_no_cache = 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( dirname )
  {
    free( dirname );
    dirname = 0;
  }
  if ( tmpbuf )
  {
    free( tmpbuf );
    tmpbuf = 0;
  }
  if ( buffer )
  {
    free( buffer );
    buffer = 0;
  }
  if ( line )
  {
    free( line );
    line = 0;
  }
  if ( tp )
  {
    free( tp );
    tp = 0;
  }
  if ( do_pop_doc )
    LYpop( doc );
  return 0;
}
int dired_options( DocInfo *doc, char **newfile )
{
  int eax;
  static char tempfile[256];
  char *path;
  char *dir;
  lynx_list_item_type *nxt;
  struct stat dir_info;
  FILE *fp0 = InternalPageFP( tempfile, 0 );
  char *dir_url;
  char *path_url;
  BOOLEAN nothing_tagged;
  int count;
  struct dired_menu *mp;
  char buf[2048];
  if ( fp0 == 0 )
    return 0;
  else
  {
    LYLocalFileToURL( newfile, tempfile );
    LYRegisterUIPage( newfile, 8 );
    if ( doc->link >= 0 && doc->link < nlinks + 1 )
    {
      path = HTnameOfFile_WWW( links[ doc->link ].lname, 0, 1 );
      LYTrimPathSep( path );
      if ( ( ok_lstat( path, &dir_info ) & 255 ) == 0 )
      {
        LYCloseTempFP( fp0 );
        if ( path )
        {
          free( path );
          path = 0;
        }
        return 0;
      }
    }
    else
      HTSACopy( &path, "" );
    dir = HTnameOfFile_WWW( &doc->address, 0, 1 );
    LYTrimPathSep( dir );
    nothing_tagged = tagged == 0 || tagged->next == 0 ? 1 : 0;
    BeginInternalPage( fp0, gettext( "File Management Options" ), "keystrokes/dired_help.html.gz" );
    fprintf( fp0, "&lt;em&gt;%s&lt;/em&gt; %s&lt;br&gt;\n", gettext( "Current directory:" ), dir );
    if ( nothing_tagged )
    {
      fprintf( fp0, "&lt;em&gt;%s&lt;/em&gt; ", gettext( "Current selection:" ) );
      if ( path[0] )
        fprintf( fp0, "%s&lt;p&gt;\n", path );
      else
      {
        fprintf( fp0, "%s.&lt;p&gt;\n", gettext( "Nothing currently selected." ) );
      }
    }
    else
    {
      int n = HTList_count( tagged );
      char *cp1 = 0;
      char *cd = 0;
      int i, m;
      fprintf( fp0, "&lt;em&gt;%s&lt;/em&gt; %d %s", gettext( "Current selection:" ), n, gettext( "tagged item:" ) );
      HTSACopy( &cd, &doc->address );
      HTUnEscapeSome( cd, "/" );
      LYAddHtmlSep( &cd );
      m = 10;
      i = 1;
      for ( ; i <= m; i++ )
      {
        cp1 = HTRelative( (char*)HTList_objectAt( tagged, i + -1 ), "file://localhost" );
        HTUnEscape( cp1 );
        LYEntify( &cp1, 1 );
        fprintf( fp0, "%s&lt;br&gt;\n&nbsp;&nbsp;&nbsp;%s", i == 1 ? "" : " ,", cp1 );
        if ( cp1 )
        {
          free( cp1 );
          cp1 = 0;
        }
        // i++;
      }
      if ( m < n )
        fwrite( " , ...", 1, 6, fp0 );
      fwrite( "&lt;p&gt;\n", 1, 4, fp0 );
      if ( cd )
      {
        free( cd );
      }
    }
    if ( menu_head == 0 )
    {
      mp = defmenu;
      for ( ; mp->href; mp++ )
      {
        mp->next = mp[1].cond;
        // mp++;
      }
      mp += -247;
      mp->next = 0;
      menu_head = defmenu;
    }
    mp = menu_head;
    for ( ; mp == 0;  )
    {
      if ( ( mp->cond == 1 || nothing_tagged ) && ( mp->cond != 1 || nothing_tagged == 0 ) && ( mp->cond != 2 || ( path[0] && ( dir_info.st_mode & 61440 ) == 16384 ) ) && ( mp->cond != 3 || ( path[0] && ( dir_info.st_mode & 61440 ) == 32768 ) ) && ( mp->cond != 4 || ( path[0] && ( dir_info.st_mode & 61440 ) == 40960 ) ) && ( mp->sfx[0] == 0 || ( strlen( &mp->sfx ) <= strlen( path ) && strcmp( &mp->sfx, path + ( strlen( path ) - strlen( &mp->sfx ) ) ) == 0 ) ) )
      {
        dir_url = HTEscape( dir, 4 );
        path_url = HTEscape( path, 4 );
        fprintf( fp0, "&lt;a href=\"%s", render_item( &mp->href, path_url, dir_url, buf, 2048, 1 ) );
        fprintf( fp0, "\"&gt;%s&lt;/a&gt; ", render_item( &mp->link, path, dir, buf, 2048, 0 ) );
        fprintf( fp0, "%s&lt;br&gt;\n", render_item( &mp->rest, path, dir, buf, 2048, 0 ) );
        if ( dir_url )
        {
          free( dir_url );
          dir_url = 0;
        }
        if ( path_url )
        {
          free( path_url );
          path_url = 0;
          mp = &mp->next;
        }
      }
    }
  }
}
char *get_filename( char *prompt, char *buf, size_t bufsize )
{
  char *cp;
  mustshow = 1;
  statusline( prompt );
  LYgetstr( buf, 0, bufsize, 0 );
  if ( strstr( buf, "../" ) )
  {
    HTAlert( gettext( "Illegal filename; request ignored." ) );
    return 0;
  }
  if ( no_dotfiles || show_dotfiles == 0 )
  {
    cp = LYLastPathSep( buf );
    if ( cp )
      cp++;
    else
      cp = buf;
    if ( cp[0] == '.' )
    {
      HTAlert( gettext( "Illegal filename; request ignored." ) );
      return 0;
    }
  }
  return buf;
}
void clear_tags( void )
{
  char *cp = 0;
  while ( cp == 0 )
  {
    if ( cp )
    {
      free( cp );
      cp = 0;
    }
  }
  if ( ( tagged == 0 || tagged->next == 0 ) && tagged )
  {
    free( tagged );
    tagged = 0;
  }
  return;
}
void add_menu_item( char *str )
{
  struct dired_menu *tmp, *mp;
  char *cp;
  if ( menu_head == defmenu[0].cond )
    menu_head = 0;
  tmp = calloc( 1, sizeof( struct dired_menu ) );
  if ( tmp == 0 )
    outofmem( "./LYLocal.c", "add_menu_item" );
  cp = strchr( str, ':' );
  cp[0] = 0;
  cp++;
  if ( strcasecomp( str, "tag" ) == 0 )
    tmp->cond = 1;
  else
  {
    if ( strcasecomp( str, "dir" ) == 0 )
      tmp->cond = 2;
    else
    {
      if ( strcasecomp( str, "file" ) == 0 )
        tmp->cond = 3;
      else
      {
        if ( strcasecomp( str, "link" ) == 0 )
          tmp->cond = 4;
      }
    }
  }
  str = cp;
  cp = strchr( str, ':' );
  cp[0] = 0;
  cp++;
  HTSACopy( &tmp->sfx, str );
  str = cp;
  cp = strchr( str, ':' );
  cp[0] = 0;
  cp++;
  HTSACopy( &tmp->link, str );
  str = cp;
  cp = strchr( str, ':' );
  cp[0] = 0;
  cp++;
  HTSACopy( &tmp->rest, str );
  HTSACopy( &tmp->href, cp );
  if ( menu_head )
  {
    mp = menu_head;
    for ( ; mp && mp->next;  )
    {
      mp = &mp->next;
    }
    mp->next = tmp;
  }
  else
  {
    menu_head = tmp;
  }
  return;
}
void reset_dired_menu( void )
{
  if ( menu_head != defmenu[0].cond )
  {
    struct dired_menu *mp, *mp_next = 0;
    mp = menu_head;
    for ( ; mp;  )
    {
      if ( mp->sfx )
      {
        free( &mp->sfx );
        mp->sfx = 0;
      }
      if ( mp->link )
      {
        free( &mp->link );
        mp->link = 0;
      }
      if ( mp->rest )
      {
        free( &mp->rest );
        mp->rest = 0;
      }
      if ( mp->href )
      {
        free( &mp->href );
        mp->href = 0;
      }
      if ( mp )
      {
        free( mp );
        mp = 0;
      }
      mp = mp_next;
    }
    menu_head = 0;
  }
  return;
}
char *render_item( char *s, char *path, char *dir, char *buf, int bufsize, BOOLEAN url_syntax )
{
  char *cp;
  char *bp;
  char overrun = 0;
  char *taglist = 0;
  bp = buf;
  for ( ; s[0] && overrun == 0; s++ )
  {
    if ( s[0] == '%' )
    {
      s++;
      switch ( s[0] )
      {
      case '%':
        if ( bp <= buf[ bufsize + -2 ] )
          bp++;
        else
        {
        }
        bp[0] = '%';
        break;
      case 'p':
        cp = path;
        if ( cp[0] != '/' )
        {
          if ( bp <= buf[ bufsize + -2 ] )
            bp++;
          else
          {
          }
          bp[0] = '/';
        }
        while ( cp[0] )
        {
          if ( bp <= buf[ bufsize + -2 ] )
            bp++;
          else
          {
          }
          bp[0] = cp[0];
          cp++;
        }
        break;
      case 'd':
        cp = dir;
        if ( cp[0] != '/' )
        {
          if ( bp <= buf[ bufsize + -2 ] )
            bp++;
          else
          {
          }
          bp[0] = '/';
        }
        while ( cp[0] )
        {
          if ( bp <= buf[ bufsize + -2 ] )
            bp++;
          else
          {
          }
          bp[0] = cp[0];
          cp++;
        }
        break;
      case 'f':
        cp = LYLastPathSep( path );
        if ( cp )
        {
          cp++;
          while ( cp[0] )
          {
            if ( bp <= buf[ bufsize + -2 ] )
              bp++;
            else
            {
            }
            bp[0] = cp[0];
            cp++;
          }
        }
        else
        {
          cp = path;
        }
        break;
      case 'l':
      case 't':
        if ( tagged && tagged->next )
        {
          HTList *cur = tagged;
          char *name;
          while ( overrun == 0 )
          {
            if ( cur )
            {
              cur = &cur->next;
              name = 0;
              if ( name )
              {
                if ( s[0] == 'l' )
                {
                  cp = strrchr( name, '/' );
                  if ( cp )
                    cp++;
                    HTSACat( &taglist, cp );
                    HTSACat( &taglist, " " );
                }
                cp = name;
                HTSACat( &taglist, cp );
                HTSACat( &taglist, " " );
              }
              else
                break;
            }
            name = 0;
          }
        }
        if ( taglist )
        {
          cp = taglist;
          for ( ; cp[0]; cp++ )
          {
            if ( bp <= buf[ bufsize + -2 ] )
              bp++;
            else
            {
            }
            bp[0] = cp[0];
            // cp++;
          }
          if ( taglist )
          {
            free( taglist );
            taglist = 0;
          }
        }
        break;
      default:
        if ( bp <= buf[ bufsize + -2 ] )
          bp++;
        else
        {
        }
        bp[0] = '%';
        if ( bp <= buf[ bufsize + -2 ] )
          bp++;
        else
        {
        }
        bp[0] = s[0];
        break;
      }
    }
    else
    {
      if ( bp <= buf[ bufsize + -2 ] )
        bp++;
      else
      {
      }
      bp[0] = s[0];
    }
    // s++;
  }
  if ( ( url_syntax & overrun ) & 255 )
  {
    HTAlert( gettext( "Temporary URL or list would be too long." ) );
    bp = buf;
  }
  bp[0] = 0;
  return buf;
}
#if 0
#endif
