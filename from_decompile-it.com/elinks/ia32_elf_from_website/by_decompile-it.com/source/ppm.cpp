#include "ppm.cpp.h"
using namespace std;
using namespace __debug;
using namespace pov_base;
namespace pov {
int PPM_Image::Line( )
{
  return this->line_number;
}
int PPM_Image::Width( )
{
  return this->width;
}
int PPM_Image::Height( )
{
  return this->height;
}
PPM_Image::PPM_Image( char *name, int w, int h, int m, int l )
{
  int eax;
  int ecx;
  int edx;
  this->__inherit__.valid = 0;
  this[0].__inherit__._vptr.Image_File_Class = "À,À-ÀA0&gt;F F0FN3pov9PPM_ImageE";
{
  unsigned char header[2];
  char line[1024];
  int depth;
  this->mode = m;
  this->filename = name;
  &this->in_file = 0;
  &this->out_file = 0;
  this->width = w;
  this->height = h;
  this->line_number = l;
  if ( this + 12 != 1 )
  {
    if ( m == 2 )
    {
      if ( opts.Options & 0x100000 )
      {
        &this->out_file = ((int)( void )**)New_OStream( "stdout", ( 0 - ( ( ( opts.Options & 0x20000 ) < 1 ) & 1 ) ) + 4, 1 );
      }
      else
      {
        &this->out_file = ((int)( void )**)New_Checked_OStream( &name[0], ( 0 - ( ( ( opts.Options & 0x20000 ) < 1 ) & 1 ) ) + 4, 1 );
        if ( this->out_file )
          goto B7;
        if ( 0 ^ 0 )
        {
          __stack_chk_fail(  );
          this = "p–°–Ð¬Ð¬Ð¬Ð¬Ð¬Cannot open PNG file.";
          _Unwind_Resume(  );
        }
        return;
      }
    }
    else
    {
      if ( m == 0 )
      {
        if ( ( opts.Options & 0x100000 ) == 0 )
        {
          &this->in_file = ((int)( void )**)New_Checked_IStream( &name[0], ( 0 - ( ( ( opts.Options & 0x20000 ) < 1 ) & 1 ) ) + 4 );
          if ( this->in_file && *(char*)(&this->in_file->read( ebp_1054, 2 ) + 4) == 0 && ebp_1054 == 'P' && ebp_1053 - 53 >= 1 )
          {
            do
            {
              &this->in_file->getline( ebp_1052, 1024 );
              if ( strchr( ebp_1052, 35 ) )
                *(char*)(strchr( ebp_1052, 35 )) = 0;
            }
            while ( ebp_1052 == 0 );
            if ( sscanf( ebp_1052, "%d %d", &this->width, &this->height ) == 2 )
            {
              do
              {
                &this->in_file->getline( ebp_1052, 1024 );
                if ( strchr( ebp_1052, 35 ) )
                  *(char*)(strchr( ebp_1052, 35 )) = 0;
              }
              while ( ebp_1052 == 0 );
              if ( sscanf( ebp_1052, "%d", ebp_1060 ) - 1 == 0 && ebp_1060 - 1 <= 65534 )
              {
                if ( this->width != w || this->height != h )
                {
                  Error( "PPM file dimensions do not match render resolution." );
                }
                Send_Progress( "Resuming interrupted trace", 12 );
              }
            }
          }
        }
      }
    }
  }
  else
  {
    if ( opts.Options & 0x100000 )
    {
      &this->out_file = ((int)( void )**)New_OStream( "stdout", ( 0 - ( ( ( opts.Options & 0x20000 ) < 1 ) & 1 ) ) + 4, 0 );
      if ( ( opts.Options/*.3_3of4*/ & 2 ) & 255 )
      {
        &this->out_file->printf( "P5\n%d %d\n65535\n" );
        this->width = w;
        this->height = h;
      }
    }
    else
    {
      &this->out_file = ((int)( void )**)New_Checked_OStream( &name[0], ( 0 - ( ( ( opts.Options & 0x20000 ) < 1 ) & 1 ) ) + 4, 0 );
      if ( this->out_file )
      {
        if ( ( opts.Options/*.3_3of4*/ & 2 ) & 255 )
        {
          &this->out_file->printf( "P5\n%d %d\n65535\n" );
          this->width = w;
          this->height = h;
        }
      }
    }
    &this->out_file->printf( "P6\n%d %d\n%d\n" );
    this->width = w;
    this->height = h;
  }
B7:  this->__inherit__.valid = 1;
}
}
void PPM_Image::~PPM_Image( int __in_chrg )
{
  this[0].__inherit__._vptr.Image_File_Class = "À,À-ÀA0&gt;F F0FN3pov9PPM_ImageE";
  if ( this->in_file )
  {
    ;
  }
  if ( this->out_file )
  {
    &this->out_file->flush(  );
    if ( this->out_file )
    {
      ;
    }
  }
  &this->in_file = 0;
  &this->out_file = 0;
  this = "p–°–Ð¬Ð¬Ð¬Ð¬Ð¬Cannot open PNG file.";
  this = &this[0];
}
void PPM_Image::Write_Line( COLOUR *line_data )
{
  int eax;
  int ecx;
  int edx;
{
  int x;
  unsigned int rval, gval, bval;
  unsigned int mask;
  float fac;
  if ( this->__inherit__.valid == 0 )
  {
    Error( "Cannot access output image file." );
  }
  if ( this->width >= 1 )
  {
    x = 0;
    do
    {
      if ( ( opts.Options/*.3_3of4*/ & 2 ) & 255 )
      {
        if ( this->out_file == 0 )
        {
          this->out_file = dh != fputc( dh, *(int*)(this->out_file + 8) );
          if ( this->out_file == 0 )
          {
            this->out_file = ebp_88 != eax;
            if ( ( ebp_88 != eax ) & 255 )
            {
              Error( "Cannot write PPM output data to %s." );
              x++;
            }
          }
        }
      }
      else
      {
        mask = ( 1 << opts.OutputQuality ) - 1;
        edx = 0;
        rval = ( ( 1 << opts.OutputQuality ) - 1 ) & (long long)( floorf( (float)( line_data[1][0] * (double)( (long long)( ( 1 << opts.OutputQuality ) - 1 ) ) ) ) );
        gval = ( ( 1 << opts.OutputQuality ) - 1 ) & (long long)( floorf( (float)( (float)( (double)( (long long)( ( 1 << opts.OutputQuality ) - 1 ) ) ) * line_data[1][1] ) ) );
        bval = ( ( 1 << opts.OutputQuality ) - 1 ) & (long long)( floorf( (float)( (float)( (double)( (long long)( ( 1 << opts.OutputQuality ) - 1 ) ) ) * line_data[1][2] ) ) );
        if ( opts.OutputQuality > 8 )
        {
          if ( this->out_file == 0 )
          {
            this->out_file = dh != fputc( dh, *(int*)(this->out_file + 8) );
            if ( this->out_file == 0 )
            {
              this->out_file = ebp_48 != eax;
              if ( this->out_file == 0 )
              {
                this->out_file = 12 != fputc( 12, (int)( &this->out_file ) );
                if ( this->out_file == 0 )
                {
                  this->out_file = ( gval & 255 ) != fputc( gval & 255, (int)( &this->out_file ) );
                  if ( this->out_file == 0 )
                  {
                    this->out_file = ch != fputc( ch, *(int*)(this->out_file + 8) );
                    if ( this->out_file == 0 )
                    {
                      this->out_file = ebp_68 != eax;
                      if ( ( ( ebp_68 != eax ) & 255 ) == 0 )
                        goto B35;
                    }
                  }
                }
              }
            }
          }
          Error( "Error writing PPM output data to %s." );
        }
        else
        if ( this->out_file == 0 )
        {
          this->out_file = ebp_48 != eax;
          if ( this->out_file == 0 )
          {
            this->out_file = ( gval & 255 ) != fputc( gval & 255, (int)( &this->out_file ) );
            if ( this->out_file == 0 )
            {
              this->out_file = ebp_68 != eax;
              if ( ( ebp_68 != eax ) & 255 )
                continue;
            }
          }
        }
      }
B35:      x++;
      if ( x < this->width )
        continue;
      else
      {
        this->line_number++;
        this += 0;
      }
    }
    while ( x < this->width );
    this = &this[0];
    gval = gval;
  }
}
}
int PPM_Image::Read_Line( COLOUR *line_data )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
{
  int data, x;
  int data_hi, data_lo;
  if ( this->__inherit__.valid == 0 )
  {
    Error( "Cannot access output image file." );
    if ( this->in_file )
    {
      return 0;
    }
  }
  else
  if ( this->in_file )
  {
    return 0;
  }
  if ( feof( (int)( &this->in_file ) ) == 0 )
  {
    if ( ( opts.Options/*.3_3of4*/ & 2 ) & 255 )
    {
      if ( this->width >= 1 )
      {
        if ( this->in_file == 0 )
        {
          do
          {
            if ( 0 != fgetc( (int)( &this->in_file ) ) + 1 )
            {
              if ( !this->in_file && fgetc( (int)( &this->in_file ) ) != -1 )
              {
                line_data[1][0] = (double)( eax + ( edx << 8 ) ) / 65535.000000000000;
                line_data[1][1] = (double)( eax + ( edx << 8 ) ) / 65535.000000000000;
                line_data[1][2] = (double)( eax + ( edx << 8 ) ) / 65535.000000000000;
                if ( this->width <= 0 + 1 + 1 )
                  break;
              }
              else
                break;
            }
          }
          while ( this->in_file );
          return -1;
        }
        else
        {
          return 0;
        }
      }
      else
      {
        this->line_number++;
        return 1;
      }
    }
    else
    if ( opts.OutputQuality > 8 )
    {
      float fac = (double)( ( 1 << opts.OutputQuality ) - 1 );
      if ( this->width >= 1 )
      {
        if ( this->in_file == 0 )
        {
          do
          {
            if ( 0 != fgetc( (int)( &this->in_file ) ) + 1 )
            {
              if ( !this->in_file && fgetc( (int)( &this->in_file ) ) != -1 )
              {
                line_data[0][0] = (double)( eax + ( edx << 8 ) ) / ebp_36;
                if ( !this->in_file && 0 != fgetc( (int)( &this->in_file ) ) + 1 && !this->in_file && fgetc( (int)( &this->in_file ) ) != -1 )
                {
                  line_data[0][1] = (double)( eax + ( edx << 8 ) ) / ebp_36;
                  if ( !this->in_file && 0 != fgetc( (int)( &this->in_file ) ) + 1 && !this->in_file && fgetc( (int)( &this->in_file ) ) != -1 )
                  {
                    line_data[0][2] = (double)( eax + ( edx << 8 ) ) / ebp_36;
                    if ( this->width <= 0 + 1 + 1 )
                      break;
                  }
                  else
                    break;
                }
                else
                  break;
              }
              else
                break;
            }
          }
          while ( this->in_file );
          return -1;
        }
        else
        {
          return 0;
        }
      }
      else
      {
        this->line_number++;
        return 1;
      }
    }
    else
    if ( this->width >= 1 )
    {
      if ( this->in_file == 0 )
      {
        do
        {
          if ( fgetc( (int)( &this->in_file ) ) != -1 )
          {
            line_data[1][0] = (double)( fgetc( (int)( &this->in_file ) ) ) / 255.000000000000;
            if ( this->in_file )
            {
              break;
            }
            *ebp_56 = 255.000000000000;
            if ( fgetc( (int)( &this->in_file ) ) == -1 )
            {
              break;
            }
            line_data[1][1] = (double)( fgetc( (int)( &this->in_file ) ) ) / 255.000000000000;
            if ( this->in_file == 0 )
            {
              *ebp_56 = 255.000000000000;
              if ( fgetc( (int)( &this->in_file ) ) == -1 )
              {
                break;
              }
              line_data[1][2] = (double)( fgetc( (int)( &this->in_file ) ) ) / 255.000000000000;
              if ( this->width <= 0 + 1 + 1 )
                break;
            }
            else
              break;
          }
        }
        while ( this->in_file );
        return -1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      this->line_number++;
      return 1;
    }
    if ( 0 + 1 )
    {
      return -1;
    }
    return 0;
  }
  else
  {
    return 0;
  }
}
}
void Read_PPM_Image( IMAGE *Image, char *name )
{
  int eax;
  int edx;
  int ebp_1100;
  int ebp_1092;
{
  struct IStream *filep = Locate_File( name, 3, 0, 1 );
  unsigned char header[2];
  char line[1024];
  int nbr;
  int width, height;
  unsigned int depth;
  IMAGE8_LINE *line_data;
  IMAGE16_LINE *line_16_data;
  int data_hi, data_lo;
  int x, i;
  if ( Locate_File( name, 3, 0, 1 ) == 0 )
  {
    Error( "Cannot open PPM image %s." );
  }
  if ( *(char*)(&filep->read( header, 2 ) + 4) )
  {
    Error( "Cannot read header of PPM image %s." );
  }
  if ( header[0] != 'P' )
  {
    Error( "File is not in PPM format." );
  }
  if ( header[1] != '3' && header[1] != '6' )
  {
    Error( "File is not in PPM format (type %d)." );
  }
  do
  {
    &filep->getline( line, 1024 );
    line[1023] = 0;
    if ( strchr( line, 35 ) )
      *(char*)(strchr( line, 35 )) = 0;
  }
  while ( line[0] == 0 );
  if ( sscanf( line, "%d %d", &width, &height ) != 2 )
  {
    Error( "Cannot read width and height from PPM image." );
  }
  if ( width >= 1 && height >= 1 )
  {
    do
    {
      &filep->getline( line, 1024 );
      line[1023] = 0;
      if ( strchr( line, 35 ) )
        *(char*)(strchr( line, 35 )) = 0;
    }
    while ( line[0] == 0 );
    if ( sscanf( line, "%d", &depth ) - 1 )
    {
      Error( "Cannot read color depth from PPM image." );
    }
    if ( depth - 1 > 65534 )
    {
      Error( "Unsupported number of colors (%d) in PPM image." );
      *ebp_1068 = ebp_1068;
    }
    Image->iwidth = width;
    Image->iheight = height;
    Image->width = (double)( width );
    Image->height = (double)( height );
    Image->Colour_Map = 0;
    Image->Colour_Map_Size = 0;
    if ( depth <= 255 )
    {
      Image->data.rgb8_lines/*union*/ = (IMAGE8_LINE*)pov_malloc( height << 4, "ppm.cpp", 570, "PPM image" );
      if ( height >= 1 )
      {
        width = width;
        i = 0;
        while ( 1 )
        {
          line_data = (IMAGE8_LINE*)pov_malloc( width, "ppm.cpp", 576, "PPM image line" );
          line_data->green = (unsigned char*)pov_malloc( width, "ppm.cpp", 577, "PPM image line" );
          line_data->blue = (unsigned char*)pov_malloc( width, "ppm.cpp", 578, "PPM image line" );
          line_data->transm = 0;
          if ( header[1] == '3' )
          {
            if ( ebp_1060 >= 1 )
            {
              do
              {
                if ( Read_ASCII_File_Number( &filep ) >= 0 )
                  Image->data.transm[0] = (long long)( ( Read_ASCII_File_Number( &filep ) << 8 ) - Read_ASCII_File_Number( &filep ) ) / ebp_1068;
                else
                {
                  Error( "Cannot read image data from PPM image." );
                }
                if ( Read_ASCII_File_Number( &filep ) >= 0 )
                {
                }
                else
                {
                  Error( "Cannot read image data from PPM image." );
                }
                if ( Read_ASCII_File_Number( &filep ) >= 0 )
                {
                }
                else
                {
                  Error( "Cannot read image data from PPM image." );
                }
              }
              while ( 0 + 1 + 1 < ebp_1060 );
            }
          }
          else
          {
            if ( width >= 1 )
            {
              x = 0;
              do
              {
                if ( filep == 0 && fgetc( &filep ) != -1 )
                  *(int*)(fgetc( &filep )) = ( fgetc( &filep ) << 8 ) - nbr;
                else
                {
                  Error( "Cannot read data from PPM image." );
                }
                if ( filep == 0 && fgetc( &filep ) != -1 )
                  *(int*)(fgetc( &filep )) = ( fgetc( &filep ) << 8 ) - fgetc( &filep );
                else
                {
                  Error( "Cannot read data from PPM image." );
                }
                line_data->green[ x ] = (long long)( ( -255 << 8 ) - width ) / depth;
                if ( filep == 0 && fgetc( &filep ) != -1 )
                  *(int*)(fgetc( &filep )) = ( fgetc( &filep ) << 8 ) - fgetc( &filep );
                else
                {
                  Error( "Cannot read data from PPM image." );
                }
                line_data->blue[ x ] = (long long)( ( -255 << 8 ) - width ) / depth;
                x++;
              }
              while ( x + 1 < width );
            }
          }
          ebp_1092++;
          if ( ebp_1064 <= ebp_1092 )
            goto B48;
          else
          {
          }
        }
      }
    }
    else
    {
      Image->Image_Type |= 0x20000;
      Image->data.rgb8_lines/*union*/ = (IMAGE8_LINE*)pov_malloc( height << 4, "ppm.cpp", 622, "PPM image" );
      if ( height >= 1 )
      {
        *ebp_1060 = ebp_1060;
        ebp_1100 = 0;
        while ( 1 )
        {
          esi = pov_malloc( ebp_1060 * 2, "ppm.cpp", 628, "PPM image line" );
          *(int*)(esi + 4) = pov_malloc( ebp_1060 * 2, "ppm.cpp", 629, "PPM image line" );
          *(int*)(esi + 8) = pov_malloc( ebp_1060 * 2, "ppm.cpp", 630, "PPM image line" );
          *(int*)(esi + 12) = 0;
          if ( ebp_1053 == '3' )
          {
            if ( ebp_1060 >= 1 )
            {
              ebp_1092 = 0;
              do
              {
                if ( Read_ASCII_File_Number( &filep ) >= 0 )
                  Image->data.transm[0] = (long long)( ( Read_ASCII_File_Number( &filep ) << 16 ) - Read_ASCII_File_Number( &filep ) ) / ebp_1068;
                else
                {
                  Error( "Cannot read image data from PPM image." );
                }
                if ( Read_ASCII_File_Number( &filep ) >= 0 )
                {
                }
                else
                {
                  Error( "Cannot read image data from PPM image." );
                }
                if ( Read_ASCII_File_Number( &filep ) >= 0 )
                {
                }
                else
                {
                  Error( "Cannot read image data from PPM image." );
                }
                ebp_1092++;
              }
              while ( ebp_1092 < ebp_1060 );
            }
          }
          else
          {
            if ( ebp_1060 >= 1 )
            {
              ebp_1092 = 0;
              do
              {
                if ( filep == 0 && fgetc( &filep ) != -1 )
                {
                  if ( filep )
                  {
                    Error( "Cannot read data from PPM image." );
                    Image->data.transm[0] = (long long)( ( ( -1 << 8 ) + -1 ) * 65535 ) / ebp_1068;
                    if ( filep == 0 && fgetc( &filep ) != -1 )
                    {
                    }
                    else
                    {
                      Error( "Cannot read data from PPM image." );
                    }
                    if ( filep || fgetc( &filep ) == -1 )
                    {
                      Error( "Cannot read data from PPM image." );
                    }
                    Image->data.transm[4] = (long long)( ( ( fgetc( &filep ) << 8 ) + -1 ) * 65535 ) / ebp_1068;
                    if ( filep == 0 && fgetc( &filep ) != -1 )
                    {
                    }
                    else
                    {
                      Error( "Cannot read data from PPM image." );
                    }
                    if ( filep || fgetc( &filep ) == -1 )
                    {
                      Error( "Cannot read data from PPM image." );
                    }
                    Image->data.transm[8] = (long long)( ( ( fgetc( &filep ) << 8 ) + -1 ) * 65535 ) / ebp_1068;
                    ebp_1092++;
                  }
                }
                else
                {
                  Error( "Cannot read data from PPM image." );
                  if ( filep )
                    continue;
                }
                if ( fgetc( &filep ) != -1 )
                {
                  Image->data.transm[0] = (long long)( ( ( -1 << 8 ) + -1 ) * 65535 ) / ebp_1068;
                }
              }
              while ( ebp_1092 < ebp_1060 );
            }
          }
          ebp_1100++;
          if ( ebp_1064 <= ebp_1100 )
            goto B48;
          else
          {
          }
        }
      }
    }
B48:    if ( filep )
    {
      filep( filep );
    }
    if ( 0 ^ 0 )
    {
      __stack_chk_fail(  );
    }
    return;
  }
  else
  {
    Error( "Invalid width or height read from PPM image." );
  }
}
}
}
#if 0
#endif
