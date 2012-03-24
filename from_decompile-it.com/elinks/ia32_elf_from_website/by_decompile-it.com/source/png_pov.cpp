#include "png_pov.cpp.h"
using namespace std;
using namespace __debug;
using namespace pov_base;
using namespace pov;
namespace pov {
int PNG_Image::Line( )
{
  return line_number;
}
int PNG_Image::Width( )
{
  return this->width;
}
int PNG_Image::Height( )
{
  return this->height;
}
}
void png_pov_warn( png_structp png_ptr, png_const_charp msg )
{
  if ( png_get_error_ptr( png_ptr ) )
  {
    Warning( 0, "libpng: %s" );
  }
  return;
}
void png_pov_err( png_structp png_ptr, png_const_charp msg )
{
  if ( png_get_error_ptr( png_ptr ) )
  {
    PossibleError( "libpng: %s" );
  }
  __longjmp_chk( png_ptr, 1 );
}
void png_pov_read_data( png_structp png_ptr, png_bytep data, png_size_t length )
{
  if ( *(char*)(png_get_io_ptr( png_ptr )->read( (void*)data, length ) + 4) )
  {
    png_ptr = "Cannot read PNG data.";
  }
  return;
}
void png_pov_write_data( png_structp png_ptr, png_bytep data, png_size_t length )
{
  if ( *(char*)(png_get_io_ptr( png_ptr )->write( (void*)data, length ) + 4) )
  {
    png_ptr = "Cannot write PNG data.";
  }
  return;
}
void png_pov_flush_data( png_structp png_ptr )
{
  png_ptr = png_get_io_ptr( png_ptr );
}
namespace pov {
PNG_Image::PNG_Image( char *name, int w, int h, int m, int l )
{
  int eax;
  int ecx;
  int edx;
  this->__inherit__.valid = 0;
  this[0].__inherit__._vptr.Image_File_Class = "à³À·`¨P¥€ÐÐ ÐN3pov9PNG_ImageE";
  this->mode = m;
  this->filename = name;
  line_number = l;
  this->initial_line_number = l;
  this->width = w;
  this->height = h;
  switch ( m )
  {
  case 0:
    in_file = 0;
    out_file = 0;
    if ( ( ( opts.Options/*.3_3of4*/ & 16 ) & 255 ) == 0 )
    {
      while ( 1 )
      {
        __sprintf_chk( tmp_fname, 1, 4096 );
        tmp_fp = New_Checked_IStream( tmp_fname, 2 );
        if ( tmp_fp == 0 )
        {
          tmp_fp = New_Checked_IStream( name, 2 );
          if ( tmp_fp )
          {
            ;
          }
        }
        else
        {
          in_file = New_Checked_IStream( name, 2 );
          if ( in_file )
          {
            if ( tmp_fp )
            {
              ;
            }
            ;
          }
          else
          {
            out_file = New_Checked_OStream( name, 2, 0 );
            if ( out_file == 0 )
            {
              if ( tmp_fp )
              {
                ;
              }
            }
            else
            {
              o_png_ptr = png_create_read_struct( "1.2.5", 0, &png_pov_err, &png_pov_warn );
              if ( o_png_ptr )
              {
                info_ptr = png_create_info_struct( o_png_ptr );
                if ( info_ptr )
                {
                  if ( _setjmp( o_png_ptr ) )
                  {
                    png_destroy_read_struct( o_png_ptr, info_ptr, 0 );
                    if ( out_file )
                    {
                      ;
                    }
                    out_file = 0;
                    if ( tmp_fp )
                    {
                      ;
                    }
                    tmp_fp = 0;
                  }
                  else
                  {
                    png_set_read_fn( o_png_ptr, &tmp_fp, &png_pov_read_data );
                    png_read_info( o_png_ptr, info_ptr );
                    if ( info_ptr[0].width != w || info_ptr->height != h )
                    {
                      png_destroy_read_struct( o_png_ptr, info_ptr, 0 );
                      if ( tmp_fp )
                      {
                        ;
                      }
                      tmp_fp = 0;
                      if ( out_file )
                      {
                        ;
                      }
                      out_file = 0;
                      if ( 0 != unlink( name ) + 1 )
                      {
                        rename( tmp_fname, name );
                      }
                      Error( "PNG file dimensions do not match render resolution." );
                      info_ptr->width = info_ptr;
                    }
                    if ( ( ( *(char*)(unlink( name ) + 25) & 249 ) & 255 ) == 0 )
                    {
                      Send_Progress( "Resuming interrupted trace", 12 );
                      png_ptr = png_create_write_struct( "1.2.5", 1, &png_pov_err, &png_pov_warn );
                      if ( png_ptr == 0 )
                      {
                        Error( "Cannot allocate PNG data structures" );
                        png_ptr->jmpbuf[0].__jmpbuf[0] = png_ptr;
                      }
                      if ( _setjmp( png_ptr ) )
                      {
                        png_destroy_read_struct( o_png_ptr, info_ptr, 0 );
                        png_destroy_write_struct( png_ptr, 0 );
                        if ( tmp_fp )
                        {
                          ;
                        }
                        tmp_fp = 0;
                        if ( 0 != unlink( name ) + 1 )
                        {
                        }
                      }
                      else
                      {
                        png_set_write_fn( png_ptr, &out_file, &png_pov_write_data, &png_pov_flush_data );
                        this->width = info_ptr[0].width;
                        this->height = info_ptr->height;
                        if ( ( info_ptr->color_type & 4 ) & 255 )
                          opts.Options |= 0x10000;
                        if ( ( info_ptr->color_type & 2 ) == 0 )
                        {
                          opts.Options |= 0x20000;
                          opts.PaletteOption = 'G';
                        }
                        if ( ( *(char*)(info_ptr + 8) & 2 ) & 255 )
                        {
                          if ( info_ptr->color_type & 2 )
                            opts.OutputQuality = info_ptr->sig_bit.red;
                          else
                            opts.OutputQuality = *(char*)(pov_malloc( w * tmp_fp * ( ( 4 * 2 ) >> 3 ), "png_pov.cpp", 510, "PNG read row buffer" ) + 71);
                        }
                        opts.First_Column = info_ptr->x_offset;
                        opts.First_Line = info_ptr->y_offset;
                        png_write_info( png_ptr, info_ptr );
                        opts.OutputQuality = opts.OutputQuality + 7;
                        if ( opts.OutputQuality < 0 )
                          *(int*)(edx + 14) = opts.OutputQuality + 14;
                        png_stride = ( ( ( 0 - ( ( ( info_ptr->color_type & 2 ) < 1 ) & 1 ) ) & -2 ) + 3 + 1 ) * ( ( ( info_ptr->color_type & 2 ) + 14 ) >> 3 );
                        row_ptr = (png_byte*)eax;
                        this->__inherit__.valid = 1;
                      }
                    }
                  }
                }
              }
              Error( "Cannot allocate PNG data structures" );
            }
            rename( tmp_fname, name );
          }
        }
      }
    }
    break;
  case 1:
    in_file = 0;
    out_file = 0;
    if ( ( opts.Options/*.3_3of4*/ & 16 ) & 255 )
    {
      out_file = New_OStream( "stdout", 2, 0 );
    }
    else
    {
      out_file = New_Checked_OStream( name, 2, 0 );
      if ( out_file == 0 )
      {
        return;
      }
    }
    png_ptr = png_create_write_struct( "1.2.5", 1, &png_pov_err, &png_pov_warn );
    if ( png_ptr )
    {
      info_ptr = png_create_info_struct( png_ptr );
      if ( info_ptr )
      {
        if ( _setjmp( png_ptr ) == 0 )
        {
          png_set_write_fn( png_ptr, &out_file, &png_pov_write_data, &png_pov_flush_data );
          this->width = w;
          info_ptr[0].width = w;
          this->height = h;
          info_ptr->height = h;
          opts.OutputQuality = opts.OutputQuality + 7;
          if ( opts.OutputQuality < 0 )
            *(int*)(edx + 14) = opts.OutputQuality + 14;
          info_ptr->bit_depth = ( ( tmp_fp + 14 ) >> 3 ) << 3;
          if ( ( opts.Options/*.3_3of4*/ & 2 ) & 255 )
          {
            if ( 15 <= edx )
            {
              info_ptr->bit_depth = 16;
              opts.OutputQuality = 16;
            }
            info_ptr->color_type = 0;
          }
          else
            info_ptr->color_type = 2;
          if ( ( ( opts.Options/*.3_3of4*/ & 1 ) & 255 ) == 0 )
            ebx = 0;
          else
            info_ptr->color_type = 4;
          if ( 4 & 2 )
          {
            info_ptr->sig_bit.blue = opts.OutputQuality;
            info_ptr->sig_bit.green = opts.OutputQuality;
            info_ptr->sig_bit.red = opts.OutputQuality;
          }
          else
            info_ptr->sig_bit.gray = opts.OutputQuality;
          if ( ( *(char*)(info_ptr + 25) & 4 ) & 255 )
            info_ptr->sig_bit.alpha = opts.OutputQuality;
          info_ptr->valid |= 2;
          if ( opts.histogram_on == 0 )
          {
            info_ptr->gamma = 1.000000000000 / opts.DisplayGamma;
            info_ptr->valid |= 3;
          }
          else
          {
            info_ptr->gamma = 1.000000000000;
            info_ptr->valid |= 3;
          }
          if ( opts.First_Column || opts.First_Line )
          {
            *(int*)(New_OStream( "stdout", 2, 0 ) + 100) = opts.First_Column;
            *(int*)(New_OStream( "stdout", 2, 0 ) + 104) = opts.First_Line;
            *(char*)(New_OStream( "stdout", 2, 0 ) + 108) = 0;
            *(int*)(New_OStream( "stdout", 2, 0 ) + 8) |= 256;
          }
          png_write_info( png_ptr, info_ptr );
          opts.OutputQuality = opts.OutputQuality + 7;
          if ( opts.OutputQuality < 0 )
            *(int*)(edx + 14) = opts.OutputQuality + 14;
          png_stride = eax * ( ecx >> 3 );
          row_ptr = (png_byte*)eax;
          png_set_flush( png_ptr, 16 );
          this->__inherit__.valid = 1;
        }
        else
        {
          png_destroy_write_struct( png_ptr, info_ptr );
          if ( out_file )
          {
            ;
          }
          out_file = 0;
          return;
        }
      }
    }
    Error( "Cannot allocate PNG data structures" );
    break;
  case 2:
    if ( _setjmp( png_ptr ) )
    {
      png_destroy_write_struct( png_ptr, info_ptr );
    }
    else
    {
      png_write_flush( png_ptr );
      png_set_flush( png_ptr, 16 );
      if ( ( ( opts.Options/*.3_3of4*/ & 16 ) & 255 ) == 0 )
      {
        if ( out_file )
        {
          ;
        }
        out_file = New_Checked_OStream( name, 2, 1 );
        if ( out_file == 0 )
        {
          png_destroy_write_struct( png_ptr, info_ptr );
        }
        else
        {
          png_set_write_fn( png_ptr, &out_file, &png_pov_write_data, &png_pov_flush_data );
        }
      }
      if ( tmp_fp )
      {
        ;
      }
      this->__inherit__.valid = 1;
    }
    break;
  default:
    break;
  }
  return;
}
void PNG_Image::~PNG_Image( int __in_chrg )
{
  int eax;
  int ecx;
  this[0].__inherit__._vptr.Image_File_Class = "à³À·`¨P¥€ÐÐ ÐN3pov9PNG_ImageE";
  if ( this->mode - 1 <= 1 )
  {
    if ( line_number == this->initial_line_number )
    {
      if ( png_ptr )
      {
        png_destroy_write_struct( png_ptr, info_ptr );
      }
      png_ptr = 0;
    }
    else
    {
      if ( png_ptr )
      {
        if ( _setjmp( png_ptr ) )
        {
          png_destroy_write_struct( png_ptr, info_ptr );
          if ( row_ptr )
          {
            pov_free( (void*)row_ptr, "png_pov.cpp", 769 );
            row_ptr = 0;
          }
          if ( out_file )
          {
            ;
          }
          Error( "Cannot write PNG file." );
        }
        if ( png_ptr->row_number < png_ptr->num_rows )
          png_ptr->num_rows = png_ptr->row_number;
        png_write_end( png_ptr, info_ptr );
        png_destroy_write_struct( png_ptr, info_ptr );
      }
    }
    if ( row_ptr )
    {
      pov_free( (void*)row_ptr, "png_pov.cpp", 932 );
      row_ptr = 0;
    }
    if ( out_file && ( ( opts.Options/*.3_3of4*/ & 16 ) & 255 ) == 0 )
    {
      ;
    }
  }
  else
  {
    if ( in_file )
    {
      ;
    }
    if ( o_png_ptr )
    {
      png_destroy_read_struct( o_png_ptr, 0, 0 );
    }
  }
  this[0].__inherit__._vptr.Image_File_Class = "p–°–Ð¬Ð¬Ð¬Ð¬Ð¬Cannot open PNG file.";
  operator delete( this );
  return;
}
void PNG_Image::Write_Line( COLOUR *line_data )
{
  int eax;
  int ebp_52;
  int ebp_48;
  int ebp_44;
  int ebp_40;
{
  int col, j;
  int himask;
  int color;
  if ( this->__inherit__.valid == 0 )
  {
    Error( "Cannot access output image file." );
    if ( opts.OutputQuality == 8 )
      goto B4;
    else
    {
      if ( opts.OutputQuality >= 8 )
      {
        if ( opts.OutputQuality == 16 )
        {
          if ( ( ( info_ptr->color_type & 2 ) & 255 ) == 0 )
          {
            if ( this->width >= 1 )
            {
              while ( ( ( info_ptr->color_type & 4 ) & 255 ) == 0 )
              {
                png_stride = png_stride;
                if ( this->width <= 0 + 1 + 1 )
                {
                  if ( _setjmp( png_ptr ) )
                  {
                    if ( out_file )
                    {
                      ;
                    }
                    out_file = 0;
                    Error( "Cannot write PNG output data to %s." );
                  }
                  png_write_row( png_ptr, row_ptr );
                  line_number++;
                  &out_file->flush(  );
                  return;
                }
                else
                {
                }
              }
              row_ptr[2] = ( 65535 - (int)( fp7 ) ) >> 8;
              row_ptr[3] = 65535 - (int)( fp7 );
              png_stride = png_stride;
            }
          }
          else
          {
            if ( this->width >= 1 )
            {
              while ( 1 )
              {
                row_ptr[0] = (int)( floor( 65535.000000000000 * line_data[1][0] ) ) >> 8;
                row_ptr[1] = (int)( floor( 65535.000000000000 * line_data[1][0] ) );
                row_ptr[2] = (int)( fp0 ) >> 8;
                row_ptr[3] = (int)( fp0 );
                row_ptr[4] = (int)( fp1 ) >> 8;
                row_ptr[5] = (int)( fp1 );
                if ( ( info_ptr->color_type & 4 ) & 255 )
                {
                  row_ptr[6] = ( 65535 - (int)( fp1 ) ) >> 8;
                  row_ptr[7] = 65535 - (int)( fp1 );
                }
                png_stride = png_stride;
                if ( this->width <= 0 + 1 + 1 )
                  continue;
                else
                {
                }
              }
            }
          }
        }
      }
      else
      if ( out_file >= 5 )
      {
        if ( ( ( info_ptr->color_type & 2 ) & 255 ) == 0 )
        {
          if ( this->width >= 1 )
          {
            ebp_48 = 0;
            while ( ( ( info_ptr->color_type & 4 ) & 255 ) == 0 )
            {
              ebp_48++;
              png_stride = png_stride;
              if ( this->width <= ebp_48 )
                continue;
              else
              {
              }
            }
            row_ptr[1] = ebp_63 & ( 255 - (int)( fp7 ) );
            row_ptr[1] = *(char*)(row_ptr + esi + 1) | (unsigned char)( ( 255 - (int)( fp7 ) ) >> (unsigned char)( edi ) );
            ebp_48++;
            png_stride = png_stride;
          }
        }
        else
        {
          if ( this->width >= 1 )
          {
            ebp_52 = 0;
            while ( 1 )
            {
              row_ptr[0] = ( (unsigned char)( ( 1 << ( 8 - out_file ) ) - 1 ) ^ 255 ) & (int)( floor( 255.000000000000 * line_data[1][0] ) );
              row_ptr[0] |= (unsigned char)( (int)( floor( 255.000000000000 * line_data[1][0] ) ) >> (unsigned char)( opts.OutputQuality ) );
              row_ptr[1] = ebp_35 & (int)( fp0 );
              row_ptr[1] = *(char*)(row_ptr + esi + 1) | (unsigned char)( (int)( fp0 ) >> (unsigned char)( edi ) );
              row_ptr[2] = ebp_35 & (int)( fp1 );
              row_ptr[2] = *(char*)(row_ptr + esi + 2) | (unsigned char)( (int)( fp1 ) >> (unsigned char)( edi ) );
              if ( ( info_ptr->color_type & 4 ) & 255 )
              {
                row_ptr[3] = ( (unsigned char)( ( 1 << ( 8 - out_file ) ) - 1 ) ^ 255 ) & ( 255 - (int)( floor( 255.000000000000 * line_data[0][4] ) ) );
                row_ptr[3] |= (unsigned char)( ( 255 - (int)( floor( 255.000000000000 * line_data[0][4] ) ) ) >> (unsigned char)( opts.OutputQuality ) );
              }
              ebp_52++;
              png_stride = png_stride;
              if ( this->width <= ebp_52 )
                continue;
              else
              {
              }
            }
          }
        }
      }
      himask = ( 1 << ( 16 - himask ) ) - 1;
      himask/*.1_1of4*/ = (unsigned char)( ( 1 << ( 16 - himask ) ) - 1 ) ^ 255;
      if ( ( ( info_ptr->color_type & 2 ) & 255 ) == 0 )
      {
        if ( this->width >= 1 )
        {
          j = 0;
          ebp_40 = 0;
          while ( 1 )
          {
            row_ptr[ j ] = (int)( floor( ( ( 0.297000000000 * line_data[1][0] ) + ( 0.589000000000 * line_data[1][1] ) + ( 0.114000000000 * line_data[1][2] ) ) * 65535.000000000000 ) ) >> 8;
            row_ptr[ j ] = himask/*.1_1of4*/ & (int)( floor( ( ( 0.297000000000 * line_data[1][0] ) + ( 0.589000000000 * line_data[1][1] ) + ( 0.114000000000 * line_data[1][2] ) ) * 65535.000000000000 ) );
            row_ptr[ j ] |= (unsigned char)( (int)( floor( ( ( 0.297000000000 * line_data[1][0] ) + ( 0.589000000000 * line_data[1][1] ) + ( 0.114000000000 * line_data[1][2] ) ) * 65535.000000000000 ) ) >> (unsigned char)( opts.OutputQuality ) );
            if ( ( info_ptr->color_type & 4 ) & 255 )
            {
              row_ptr[ j ] = ( 65535 - (int)( floor( 65535.000000000000 * line_data[0][4] ) ) ) >> 8;
              row_ptr[ j ] = himask/*.1_1of4*/ & ( 65535 - (int)( floor( 65535.000000000000 * line_data[0][4] ) ) );
              row_ptr[ j ] |= (unsigned char)( ( 65535 - (int)( floor( 65535.000000000000 * line_data[0][4] ) ) ) >> (unsigned char)( opts.OutputQuality ) );
            }
            ebp_40++;
            png_stride = png_stride;
            if ( this->width <= ebp_40 )
              break;
            else
            {
              j += himask;
            }
          }
          j = j;
          col = col;
        }
      }
      else
      {
        if ( this->width >= 1 )
        {
          ebp_44 = 0;
          while ( 1 )
          {
            row_ptr[0] = (int)( floor( 65535.000000000000 * line_data[1][0] ) ) >> 8;
            row_ptr[1] = ( (unsigned char)( ( 1 << ( 16 - himask ) ) - 1 ) ^ 255 ) & (int)( floor( 65535.000000000000 * line_data[1][0] ) );
            row_ptr[1] |= (unsigned char)( (int)( floor( 65535.000000000000 * line_data[1][0] ) ) >> (unsigned char)( opts.OutputQuality ) );
            row_ptr[2] = (int)( fp0 ) >> 8;
            row_ptr[3] = ebp_36 & (int)( fp0 );
            row_ptr[3] = *(char*)(row_ptr + esi + 3) | (unsigned char)( (int)( fp0 ) >> (unsigned char)( edi ) );
            row_ptr[4] = (int)( fp1 ) >> 8;
            row_ptr[5] = ebp_36 & (int)( fp1 );
            row_ptr[5] = *(char*)(row_ptr + esi + 5) | (unsigned char)( (int)( fp1 ) >> (unsigned char)( edi ) );
            if ( ( info_ptr->color_type & 4 ) & 255 )
            {
              row_ptr[6] = ( 65535 - (int)( floor( 65535.000000000000 * line_data[0][4] ) ) ) >> 8;
              row_ptr[7] = ( (unsigned char)( ( 1 << ( 16 - himask ) ) - 1 ) ^ 255 ) & ( 65535 - (int)( floor( 65535.000000000000 * line_data[0][4] ) ) );
              row_ptr[7] |= (unsigned char)( ( 65535 - (int)( floor( 65535.000000000000 * line_data[0][4] ) ) ) >> (unsigned char)( opts.OutputQuality ) );
            }
            ebp_44++;
            png_stride = png_stride;
            if ( this->width <= ebp_44 )
              continue;
            else
            {
            }
          }
        }
      }
    }
  }
  else
  if ( opts.OutputQuality == 8 )
    goto B4;
  else
  {
  }
B4:  if ( ( ( info_ptr->color_type & 2 ) & 255 ) == 0 )
  {
    if ( this->width >= 1 )
    {
      while ( ( ( info_ptr->color_type & 4 ) & 255 ) == 0 )
      {
        png_stride = png_stride;
        if ( this->width <= 0 + 1 + 1 )
          continue;
        else
        {
        }
      }
      row_ptr[1] = (LOchar)( (short)( 255.000000000000 - fp7 ) );
      png_stride = png_stride;
    }
  }
  else
  {
    if ( this->width >= 1 )
    {
      while ( 1 )
      {
        row_ptr[0] = (LOchar)( (short)( floor( 255.000000000000 * line_data[1][0] ) ) );
        row_ptr[1] = (LOchar)( (short)( fp0 ) );
        row_ptr[2] = (LOchar)( (short)( fp1 ) );
        if ( ( info_ptr->color_type & 4 ) & 255 )
        {
          row_ptr[3] = (LOchar)( (short)( 255.000000000000 - fp1 ) );
        }
        png_stride = png_stride;
        if ( this->width <= 0 + 1 + 1 )
          continue;
        else
        {
        }
      }
    }
  }
}
}
int PNG_Image::Read_Line( COLOUR *line_data )
{
  int eax;
  int edx;
  double fp7;
  int ebp_84;
{
  int col, j, step;
  if ( this->__inherit__.valid == 0 )
  {
    Error( "Cannot access output image file." );
  }
  if ( _setjmp( o_png_ptr ) )
  {
  }
  if ( _setjmp( png_ptr ) )
  {
    if ( in_file )
    {
      ;
    }
    in_file = 0;
    if ( tmp_fp )
    {
      ;
    }
    tmp_fp = 0;
    if ( unlink( this->filename ) != -1 )
    {
    }
  }
  else
  {
    png_read_row( o_png_ptr, row_ptr, 0 );
    png_write_row( png_ptr, row_ptr );
    if ( ( ( info_ptr->color_type & 2 ) & 255 ) == 0 )
    {
      if ( this->width >= 1 )
      {
        line_data[0][0] = line_data;
        ebp_84 = 0;
        while ( 1 )
        {
          line_data[1][0] = (double)( *(char*)(edx + ecx) ) / fp7;
          line_data[1][1] = (double)( *(char*)(edx + ecx) ) / fp7;
          line_data[1][2] = (double)( *(char*)(edx + ecx) ) / fp7;
          if ( ( *(char*)(info_ptr + 25) & 4 ) & 255 )
            line_data[0][4] = (double)( 255 - *(char*)(ebp_72 + edx) ) / fp7;
          ebp_84++;
          if ( this->width <= ebp_84 )
            break;
        }
      }
    }
    else
    {
      if ( this->width >= 1 )
      {
        line_data[0][0] = line_data;
        while ( 1 )
        {
          line_data[1][0] = (double)( *(char*)(edx + edi) ) / fp7;
          line_data[1][1] = (double)( *(char*)(ebp_48 + edx) ) / fp7;
          line_data[1][2] = (double)( *(char*)(ebp_52 + edx) ) / fp7;
          if ( ( *(char*)(info_ptr + 25) & 4 ) & 255 )
            line_data[0][4] = (double)( 255 - *(char*)(edi + ebp_68 + edx) ) / fp7;
          if ( this->width <= 0 + 1 + 1 )
            break;
        }
      }
    }
    line_number = png_ptr->row_number + *(int*)(ebp_40 + 104);
    return 1;
  }
  return 0;
}
}
void Read_Png_Image( IMAGE *Image, char *name )
{
  int eax;
  int ecx;
  int edx;
  int ebp_200;
  int ebp_196;
  int ebp_88;
  int ebp_76;
{
  unsigned int width, height;
  int row, col, j;
  int stride;
  struct IStream *filep = Locate_File( name, 2, 0, 1 );
  png_struct *r_png_ptr;
  png_info *r_info_ptr;
  png_byte **row_ptrs;
  if ( filep == 0 )
  {
    Error( "Cannot open PNG file." );
  }
  r_png_ptr = png_create_read_struct( "1.2.5", 1, &png_pov_err, &png_pov_warn );
  if ( r_png_ptr[0].jmpbuf[0].__jmpbuf[0] )
  {
    r_info_ptr = png_create_info_struct( &r_png_ptr[0] );
    if ( r_info_ptr[0].width )
    {
      if ( _setjmp( r_png_ptr ) )
      {
        png_destroy_read_struct( ebp_28, ebp_32, 0 );
        Error( "Cannot read PNG image." );
      }
      png_set_read_fn( r_png_ptr, &filep, &png_pov_read_data );
      png_read_info( r_png_ptr, r_info_ptr );
      Image->iwidth = r_info_ptr[0].width;
      Image->iheight = r_info_ptr->height;
      width = r_info_ptr[0].width;
      Image->width = (double)( (long long)( r_info_ptr[0].width ) );
      Image->height = (double)( (long long)( r_info_ptr->height ) );
      if ( r_info_ptr->color_type == 3 )
      {
        png_color *png_cmap;
        int cmap_len = r_info_ptr->num_palette & 65535;
        int index;
        Image->Colour_Map_Size = *(int*)(r_info_ptr + 20) & 65535;
        Image->Colour_Map = (IMAGE_COLOUR*)pov_malloc( ( r_info_ptr->num_palette & 65535 ) * 10, "png_pov.cpp", 1418, "PNG image color map" );
        png_cmap = *(int*)(ebp_32 + 16);
        if ( cmap_len )
        {
          do
          {
            Image->Colour_Map = png_cmap->red;
            Image->Colour_Map->Green = png_cmap[1].red;
            Image->Colour_Map->Blue = png_cmap[1].red;
            Image->Colour_Map->Filter = 0;
            Image->Colour_Map->Transmit = 0;
            Image->Colour_Map++;
          }
          while ( cmap_len * 3 != 0 + 3 + 3 );
        }
        if ( ( ( *(char*)(ebp_32 + 8) & 16 ) & 255 ) && *(short*)(ebp_32 + 22) )
        {
          *ebp_160 = pov_malloc( ( r_info_ptr->num_palette & 65535 ) * 10, "png_pov.cpp", 1418, "PNG image color map" );
          index = 0;
          do
          {
            *(short*)(edx + 8) = 255 - *(char*)(*(int*)(ebp_32 + 76) + index);
            index++;
            edx += 10;
          }
          while ( index + 1 < ( *(short*)(ebp_32 + 22) & 65535 ) );
        }
      }
      else
      {
        if ( ( r_info_ptr->color_type & 255 ) == 0 && 8 <= r_info_ptr->bit_depth )
        {
          int cmap_len = 1 << r_info_ptr->bit_depth;
          int index;
          Image->Colour_Map_Size = 1 << r_info_ptr->bit_depth;
          Image->Colour_Map = (IMAGE_COLOUR*)pov_malloc( ( 1 << r_info_ptr->bit_depth ) * 10, "png_pov.cpp", 1452, "PNG image color map" );
          if ( cmap_len >= 1 )
          {
            eax = (void*)Image->Colour_Map;
            do
            {
              Image->Colour_Map->Blue = 0 / ( cmap_len - 1 );
              Image->Colour_Map->Green = 0 / ( cmap_len - 1 );
              Image->Colour_Map = 0 / ( cmap_len - 1 );
              Image->Colour_Map->Filter = 0;
              Image->Colour_Map->Transmit = 0;
              Image->Colour_Map++;
            }
            while ( 0 * 255 != 0 + 255 + 255 );
          }
          *ebp_32 = ebp_32;
          if ( ( ( *(char*)(ebp_32 + 8) & 16 ) & 255 ) && cmap_len/*.1_2of4*/ )
          {
            *ebp_164 = ebp_164;
            index = 0;
            do
            {
              *(short*)(edx + 8) = 255 - *(char*)(cmap_len + index);
              index++;
              edx += 10;
            }
            while ( index + 1 < ( cmap_len/*.1_2of4*/ & 65535 ) );
          }
        }
        else
        {
          edx = 0;
          if ( ( ( r_info_ptr->color_type & 2 ) & 255 ) == 0 )
          {
            Image->Colour_Map = 0;
            if ( ( r_png_ptr->color_type & 4 ) & 255 )
            {
              if ( 8 <= r_info_ptr->bit_depth )
              {
                Image->data.rgb8_lines = (IMAGE8_LINE*)pov_malloc( r_info_ptr->height << 4, "png_pov.cpp", 1485, "PNG image" );
                *ebp_32 = ebp_32;
                if ( ( ( *(char*)(r_info_ptr + 8) & 1 ) & 255 ) && ( ( Image->Image_Type/*.2_2of4*/ & 8 ) & 255 ) )
                {
                  png_set_gamma( ebp_28, opts.GammaFactor * opts.DisplayGamma, *(float*)(r_info_ptr + 40) );
                }
                png_set_interlace_handling( r_png_ptr );
                png_read_update_info( r_png_ptr, r_info_ptr );
                row_ptrs[0] = (png_byte*)pov_malloc( ebx, "png_pov.cpp", 1554, "PNG image" );
                if ( r_info_ptr->height )
                {
                  row = 0;
                  do
                  {
                    row_ptrs[ 0 ] = (png_byte*)pov_malloc( r_info_ptr->rowbytes, "png_pov.cpp", 1557, "PNG image line" );
                    row++;
                  }
                  while ( row + 1 < r_info_ptr->height );
                }
                png_read_image( r_png_ptr, &row_ptrs[0] );
                if ( Image->Colour_Map == 0 )
                {
                  if ( r_info_ptr->height )
                  {
                    IMAGE16_LINE *rgb16_lines;
                    ebp_88 = 0;
                  {
                    IMAGE16_LINE *rgb16_lines;
                    do
                    {
                      if ( ( ( *(char*)(ebp_32 + 25) & 2 ) & 255 ) == 0 )
                      {
                        if ( ( *(char*)(ebp_28 + 386) & 4 ) & 255 )
                        {
                          if ( 8 <= *(char*)(ebp_32 + 24) )
                          {
                            IMAGE8_LINE *rgb8_lines = &Image->data.rgb8_lines[ 0 ];
                            rgb8_lines = (IMAGE8_LINE*)pov_malloc( r_info_ptr[0].width, "png_pov.cpp", 1578, "PNG image line" );
                            rgb8_lines->green = (unsigned char*)pov_malloc( r_info_ptr[0].width, "png_pov.cpp", 1579, "PNG image line" );
                            rgb8_lines->blue = (unsigned char*)pov_malloc( r_info_ptr[0].width, "png_pov.cpp", 1580, "PNG image line" );
                            rgb8_lines->transm = (unsigned char*)pov_malloc( r_info_ptr[0].width, "png_pov.cpp", 1581, "PNG image line" );
                            if ( r_info_ptr[0].width )
                            {
                              ebp_76 = 0;
                              do
                              {
                                rgb8_lines->blue[0] = row_ptrs[ 0 ][0];
                                rgb8_lines->green[0] = row_ptrs[ 0 ][0];
                                rgb8_lines->red[0] = row_ptrs[ 0 ][0];
                                rgb8_lines->transm[0] = ~*(char*)(*(int*)(row_ptrs[0] + ( 0 << 2 )) + 0 + 1);
                                ebp_76++;
                              }
                              while ( ebp_76 != r_info_ptr[0].width );
                            }
                            else
                            {
                            }
                          }
                          else
                          {
                            Image->data.rgb8_lines[ ebp_88 ].red = (unsigned char*)pov_malloc( r_info_ptr[0].width * 2, "png_pov.cpp", 1597, "PNG image line" );
                            Image->data.rgb8_lines[ ebp_88 ].green = (unsigned char*)pov_malloc( r_info_ptr[0].width * 2, "png_pov.cpp", 1598, "PNG image line" );
                            Image->data.rgb8_lines[ ebp_88 ].blue = (unsigned char*)pov_malloc( r_info_ptr[0].width * 2, "png_pov.cpp", 1599, "PNG image line" );
                            Image->data.rgb8_lines[ ebp_88 ].transm = (unsigned char*)pov_malloc( r_info_ptr[0].width * 2, "png_pov.cpp", 1600, "PNG image line" );
                            if ( r_info_ptr[0].width )
                            {
                              do
                              {
                              }
                              while ( r_info_ptr[0].width != 0 + 1 + 1 );
                            }
                            else
                            {
                            }
                            pov_free( *ebp_156, "png_pov.cpp", 1610 );
                            *ebp_156 = 0;
                          }
                        }
                        else
                        if ( 8 <= *(char*)(ebp_32 + 24) )
                          Image->data.rgb8_lines->red = row_ptrs[ ebp_88 ];
                        else
                        {
                          Image->data.rgb8_lines->red = (unsigned char*)pov_malloc( r_info_ptr[0].width * 2, "png_pov.cpp", 1626, "PNG image line" );
                          if ( r_info_ptr[0].width )
                          {
                            do
                            {
                              ecx += ebp_100;
                            }
                            while ( r_info_ptr[0].width != 0 + 1 + 1 );
                          }
                          pov_free( *(int*)(ebp_168 + ebp_152), "png_pov.cpp", 1631 );
                          ebx = 0;
                        }
                      }
                      else
                      {
                        if ( 8 <= *(char*)(ebp_32 + 24) )
                        {
                          Image->data.rgb8_lines[ ebp_88 ].red = (unsigned char*)pov_malloc( r_info_ptr[0].width, "png_pov.cpp", 1642, "PNG image line" );
                          Image->data.rgb8_lines[ ebp_88 ].green = (unsigned char*)pov_malloc( r_info_ptr[0].width, "png_pov.cpp", 1643, "PNG image line" );
                          Image->data.rgb8_lines[ ebp_88 ].blue = (unsigned char*)pov_malloc( r_info_ptr[0].width, "png_pov.cpp", 1644, "PNG image line" );
                          if ( ( *(char*)(ebp_28 + 386) & 4 ) & 255 )
                          {
                            Image->data.rgb8_lines[ ebp_88 ].transm = (unsigned char*)pov_malloc( r_info_ptr[0].width, "png_pov.cpp", 1647, "PNG image line" );
                          }
                          else
                            Image->data.rgb8_lines[ ebp_88 ].transm = 0;
                          if ( r_info_ptr[0].width )
                          {
                            ebp_200 = 0;
                            while ( ( ( *(char*)(ebp_28 + 386) & 4 ) & 255 ) == 0 )
                            {
                              ebp_200++;
                              if ( ebp_200 == r_info_ptr[0].width )
                                goto B131;
                              else
                              {
                              }
                            }
                            ebp_200++;
                          }
                          else
                          {
                          }
B131:                        }
                        else
                        {
                          Image->data.rgb8_lines[ ebp_88 ].red = (unsigned char*)pov_malloc( r_info_ptr[0].width * 2, "png_pov.cpp", 1667, "PNG image line" );
                          Image->data.rgb8_lines[ ebp_88 ].green = (unsigned char*)pov_malloc( r_info_ptr[0].width * 2, "png_pov.cpp", 1668, "PNG image line" );
                          Image->data.rgb8_lines[ ebp_88 ].blue = (unsigned char*)pov_malloc( r_info_ptr[0].width * 2, "png_pov.cpp", 1669, "PNG image line" );
                          if ( ( *(char*)(ebp_28 + 386) & 4 ) & 255 )
                          {
                            Image->data.rgb8_lines[ ebp_88 ].transm = (unsigned char*)pov_malloc( r_info_ptr[0].width * 2, "png_pov.cpp", 1672, "PNG image line" );
                          }
                          else
                            Image->data.rgb8_lines[ ebp_88 ].transm = 0;
                          if ( r_info_ptr[0].width )
                          {
                            ebp_196 = 0;
                            do
                            {
                              Image->data.transm[ ebp_88 ] = *(char*)(( row_ptrs[ ebp_88 ] + 6 ) - 5) | ( *(char*)(( row_ptrs[ ebp_88 ] + 6 ) - 6) << 8 );
                              Image->data.transm[ ebp_88 ] = *(char*)(( row_ptrs[ ebp_88 ] + 6 ) - 3) | ( *(char*)(( row_ptrs[ ebp_88 ] + 6 ) - 4) << 8 );
                              Image->data.transm[ ebp_88 ] = *(char*)(( row_ptrs[ ebp_88 ] + 6 ) - 1) | ( *(char*)(( row_ptrs[ ebp_88 ] + 6 ) - 2) << 8 );
                              if ( ( *(char*)(ebp_28 + 386) & 4 ) & 255 )
                                Image->data.transm[ ebp_88 ] = ~( *(char*)(*(int*)(row_ptrs[0] + ( ebp_88 << 2 )) + 6 + 1) | ( *(char*)(*(int*)(row_ptrs[0] + ( ebp_88 << 2 )) + 6) << 8 ) );
                              ebp_196++;
                            }
                            while ( ebp_196 != r_info_ptr[0].width );
                          }
                          else
                          {
                          }
                          pov_free( (void*)row_ptrs[ ebp_88 ], "png_pov.cpp", 1686 );
                          row_ptrs[ ebp_88 ] = 0;
                        }
                      }
                    {
                      IMAGE8_LINE *rgb8_lines;
                      pov_free( (void*)row_ptrs[ 0 ], "png_pov.cpp" );
                      row_ptrs[ 0 ] = 0;
                    }
                    }
                    while ( ebp_88 < r_info_ptr->height );
                  }
                  }
                }
                else
                {
                  if ( r_info_ptr->height )
                  {
                    row = 0;
                    Image = Image;
                    do
                    {
                      Image->data.rgb8_lines->red = row_ptrs[ 0 ];
                      row++;
                    }
                    while ( r_info_ptr->height != row + 1 );
                  }
                }
                pov_free( (void*)row_ptrs[0], "png_pov.cpp", 1700 );
                png_read_end( r_png_ptr, r_info_ptr );
                png_destroy_read_struct( r_png_ptr, r_info_ptr, 0 );
                if ( filep )
                {
                  filep( filep );
                }
                return;
              }
              else
              {
                Image->data.rgb8_lines = (IMAGE8_LINE*)pov_malloc( r_info_ptr->height << 4, "png_pov.cpp", 1490, "PNG image" );
                *ebp_32 = ebp_32;
              }
            }
            else
            {
              if ( 8 <= r_info_ptr->bit_depth )
              {
                Image->data.rgb8_lines = (IMAGE8_LINE*)pov_malloc( r_info_ptr->height << 2, "png_pov.cpp", 1498, "PNG image" );
                r_info_ptr->width = r_info_ptr;
                stride = 1;
                height = height;
              }
              else
              {
                Image->Image_Type |= 0x60000;
                Image->data.rgb8_lines = (IMAGE8_LINE*)pov_malloc( r_info_ptr->height << 2, "png_pov.cpp", 1505, "PNG image" );
                *ebp_32 = ebp_32;
              }
            }
          }
          else
          {
            if ( r_info_ptr->color_type == 2 || r_info_ptr->color_type == 6 )
            {
              Image->Colour_Map = 0;
              if ( r_info_ptr->bit_depth < 8 )
              {
                Image->Image_Type |= 0x20000;
                Image->data.rgb8_lines = (IMAGE8_LINE*)pov_malloc( r_info_ptr->height << 4, "png_pov.cpp", 1518, "PNG image" );
                if ( *(char*)(ebp_32 + 25) != 2 )
                {
                }
                else
                {
                }
              }
              else
              {
                Image->data.rgb8_lines = (IMAGE8_LINE*)pov_malloc( r_info_ptr->height << 4, "png_pov.cpp", 1527, "PNG image" );
                if ( *(char*)(ebp_32 + 25) != 2 )
                {
                }
                else
                {
                }
              }
            }
            else
            {
              Error( "Unsupported color type %d in PNG image." );
              r_info_ptr->width = r_info_ptr;
              stride = 1;
            }
          }
        }
      }
      Image->data.rgb8_lines = (IMAGE8_LINE*)pov_malloc( r_info_ptr->height << 2, "png_pov.cpp" );
      png_set_packing(  );
      *ebp_32 = ebp_32;
    }
  }
  Error( "Cannot allocate PNG data structures" );
}
}
}
#if 0
#endif
