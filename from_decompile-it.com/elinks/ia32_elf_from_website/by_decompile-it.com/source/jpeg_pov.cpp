#include "jpeg_pov.cpp.h"
using namespace std;
using namespace __debug;
using namespace pov_base;
using namespace pov;
namespace pov {
int JPEG_Image::Line( )
{
  return -1;
}
int JPEG_Image::Width( )
{
  return this->width;
}
int JPEG_Image::Height( )
{
  return this->height;
}
}
void my_error_exit( j_common_ptr cinfo )
{
  int eax;
{
  struct POV_JPEG_Write_Buffer *myerr = &cinfo->client_data[0];
  ;
}
}
void my_output_message( j_common_ptr cinfo )
{
  int eax;
{
  char buffer[200];
  ;
}
}
void my_init_dest( j_compress_ptr cinfo )
{
{
  struct POV_JPEG_Write_Buffer *bufptr = &cinfo->client_data[0];
  cinfo->client_data[40] = cinfo->client_data + 336;
  cinfo->client_data[41] = 1024;
  return;
}
}
void my_init_source( j_decompress_ptr cinfo )
{
{
  struct POV_JPEG_Read_Buffer *bufptr = &cinfo->client_data[0];
  cinfo->client_data[33] = cinfo->client_data + 336;
  cinfo->client_data[34] = 0;
  return;
}
}
boolean my_fill_input_buffer( j_decompress_ptr cinfo )
{
{
  struct POV_JPEG_Read_Buffer *bufptr = &cinfo->client_data[0];
  int i = 0;
  do
  {
  }
  while ( *(char*)(&bufptr->file->read( bufptr[0].jerr.error_exit + i + 336, 1 ) + 4) == 0 && i + 1 != 1024 );
  bufptr->jsrc.bytes_in_buffer = i;
  bufptr->jsrc.next_input_byte = &bufptr->buffer[0];
  return 1;
}
}
void my_skip_input_data( j_decompress_ptr cinfo, long num_bytes )
{
  int edx;
{
  struct POV_JPEG_Read_Buffer *bufptr = &cinfo->client_data[0];
  if ( bufptr->jsrc.bytes_in_buffer < num_bytes )
  {
    cinfo->client_data[34] = 0;
    &cinfo->client_data[458]->seekg( num_bytes - bufptr->jsrc.bytes_in_buffer - bufptr->jsrc.bytes_in_buffer, 1 );
    return;
  }
  bufptr->jsrc.bytes_in_buffer -= num_bytes;
  cinfo->client_data[33] = bufptr->jsrc.next_input_byte + num_bytes;
  return;
}
}
void my_term_source( j_decompress_ptr  )
{
  return;
}
boolean my_empty_output_buffer( j_compress_ptr cinfo )
{
{
  struct POV_JPEG_Write_Buffer *bufptr = &cinfo->client_data[0];
  &bufptr->file->write( &bufptr->buffer[0], 1024 );
  bufptr->jdest.next_output_byte = &bufptr->buffer[0];
  bufptr->jdest.free_in_buffer = 1024;
  return 1;
}
}
void my_term_destination( j_compress_ptr cinfo )
{
{
  struct POV_JPEG_Write_Buffer *bufptr = &cinfo->client_data[0];
  if ( bufptr->jdest.free_in_buffer != 1024 )
  {
    &cinfo->client_data[436]->write( &bufptr->buffer[0], 1024 - bufptr->jdest.free_in_buffer );
  }
  return;
}
}
namespace pov {
JPEG_Image::JPEG_Image( char *name, int w, int h, int m, int l )
{
  int eax;
  int ecx;
  int edx;
  this->__inherit__.valid = 0;
  this[0].__inherit__._vptr.Image_File_Class = "";
  this->mode = m;
  this->filename = name;
  &this->in_file = 0;
  &this->out_file = 0;
  this->buffer = 0;
  switch ( m )
  {
  case 0:
    Error( "Cannot do partial reading of JPEG images." );
    return;
    break;
  case 2:
    Error( "Cannot continue from partial rendered JPEG images." );
    return;
    break;
  case 1:
    this->buffer = (char*)pov_malloc( 1752, "jpeg_pov.cpp", 364, "JPEG write buffer" );
    *(int*)(*ebp_56 + 1368) = jpeg_std_error( this->buffer );
    *ebp_56 = my_error_exit;
    *(int*)(*ebp_56 + 8) = my_output_message;
    *(int*)(*ebp_56 + 1380) = *ebp_56;
    jpeg_CreateCompress( *ebp_56 + 1368, 62, 376 );
    &this->out_file = ((int)( void )**)New_Checked_OStream( &name[0], 7, 0 );
    if ( this->out_file )
    {
      *(int*)(*ebp_56 + 3124) = this->out_file;
      *(int*)(*ebp_56 + 1548) = my_init_dest;
      *(int*)(*ebp_56 + 1552) = my_empty_output_buffer;
      *(int*)(*ebp_56 + 1556) = my_term_destination;
      *(int*)(*ebp_56 + 2772) = *ebp_56 + 1380 + 160;
      *(int*)(*ebp_56 + 2776) = w;
      *(int*)(*ebp_56 + 2780) = h;
      *(int*)(*ebp_56 + 2784) = 3;
      *(int*)(*ebp_56 + 2788) = 2;
      jpeg_set_defaults( *ebp_56 + 1380 + 1368 );
      jpeg_set_colorspace( *ebp_56 + 1380 + 1368, 2 );
      jpeg_set_quality( *ebp_56 + 1380 + 1368, opts.OutputQuality, 1 );
      jpeg_start_compress( *ebp_56 + 1380 + 1368, 1 );
      *(int*)(*ebp_56 + 2744) = w * 3;
    }
    return;
    break;
  default:
    return;
    break;
  }
  *(int*)(*ebp_56 + 2740) = pov_malloc( w * 3, "jpeg_pov.cpp", 404, "JPEG line buffer" );
  this->__inherit__.valid = 1;
  return;
}
void JPEG_Image::~JPEG_Image( int __in_chrg )
{
  this[0].__inherit__._vptr.Image_File_Class = "";
{
  struct POV_JPEG_Write_Buffer *bufptr = &this->buffer[0];
  jpeg_finish_compress( &bufptr->cinfo );
  if ( this->in_file )
  {
    ;
  }
  if ( this->out_file )
  {
    ;
  }
  jpeg_destroy_compress( &bufptr->cinfo );
  pov_free( (void*)bufptr->row_pointer[0], "jpeg_pov.cpp", 458 );
  bufptr->row_pointer[0] = 0;
  pov_free( (void*)this->buffer, "jpeg_pov.cpp", 459 );
  this->buffer = 0;
  this = "p���ЬЬЬЬЬCannot open PNG file.";
  this = &this[0];
}
}
void JPEG_Image::Write_Line( COLOUR *line_data )
{
  int eax;
  double fp7;
{
  struct POV_JPEG_Write_Buffer *bufptr;
  unsigned char *colptr;
  int col;
  if ( this->__inherit__.valid == 0 )
  {
    Error( "Cannot access output image file." );
  }
  bufptr = &this->buffer[0];
  colptr[0] = bufptr->jerr.msg_parm.s[4];
  if ( bufptr->cinfo.image_width )
  {
    col = 0;
    bufptr = &bufptr[0];
    do
    {
      colptr[0] = (short)( 255.000000000000 * line_data[ 0 ][0] );
      colptr[1] = (short)( 0.000000000000 );
      colptr[2] = (LOchar)( (short)( 0.000000000000 ) );
      colptr[0] = colptr[3];
      col++;
    }
    while ( col + 1 < bufptr->cinfo.image_width );
  }
  jpeg_write_scanlines( &this[34].filename[0], &bufptr->row_pointer[0], 1 );
  return;
}
}
int JPEG_Image::Read_Line( COLOUR * )
{
  if ( this->__inherit__.valid == 0 )
  {
    Error( "Cannot access output image file." );
  }
  Error( "Cannot do partial reading of JPEG images." );
  return 0;
}
void Read_JPEG_Image( IMAGE *Image, char *name )
{
  int eax;
  int ecx;
  int edx;
  int ebp_1932;
  int ebp_1908;
{
  unsigned int width, height;
  int row, col;
  struct IStream *file = Locate_File( name, 7, 0, 1 );
  IMAGE8_LINE *line_data;
  struct POV_JPEG_Read_Buffer bufptr;
  if ( file == 0 )
  {
    Error( "Cannot open JPEG file." );
  }
  bufptr.cinfo.err = (struct jpeg_error_mgr*)jpeg_std_error( bufptr.jerr.error_exit );
  bufptr.jerr.error_exit = &my_error_exit;
  bufptr.jerr.output_message = &my_output_message;
  bufptr.cinfo.client_data = bufptr.jerr.error_exit;
  if ( _setjmp( bufptr.setjmp_buffer[0].__jmpbuf ) )
  {
    jpeg_destroy_decompress( &bufptr.cinfo );
    if ( file )
    {
      file( file );
    }
    Error( "Cannot read JPEG image." );
  }
  else
  {
    jpeg_CreateDecompress( ebp_504, 62, 464 );
    jpeg_read_header( ebp_504, 1 );
    if ( ebp_380 != 1 && ebp_380 != 3 && ebp_460 != 1 && ebp_460 != 2 )
    {
      jpeg_destroy_decompress( ebp_504 );
      if ( ebp_1924 )
      {
        ;
      }
      Error( "Unsupported color format in JPEG image." );
    }
    else
    {
      jpeg_start_decompress( ebp_504 );
      Image->iwidth = ebp_392;
      Image->iheight = ebp_388;
      Image->width = (double)( (long long)( ebp_392 ) );
      Image->height = (double)( (long long)( ebp_388 ) );
      Image->Colour_Map = 0;
      Image->data.rgb8_lines/*union*/ = (IMAGE8_LINE*)pov_malloc( ebp_388 << 4, "jpeg_pov.cpp", 645, "JPEG image" );
      if ( ebp_388 )
      {
        ebp_1908 = 0;
        do
        {
          jpeg_read_scanlines( ebp_504, ebp_512, 1 );
          Image->data.rgb8_lines[ ebp_1908 ].red = (unsigned char*)pov_malloc( ebp_392, "jpeg_pov.cpp", 655, "JPEG image line" );
          Image->data.rgb8_lines[ ebp_1908 ].green = (unsigned char*)pov_malloc( ebp_392, "jpeg_pov.cpp", 656, "JPEG image line" );
          Image->data.rgb8_lines[ ebp_1908 ].blue = (unsigned char*)pov_malloc( ebp_392, "jpeg_pov.cpp", 657, "JPEG image line" );
          Image->data.rgb8_lines[ ebp_1908 ].transm = 0;
          if ( ebp_380 == 1 )
          {
            if ( ebp_392 )
            {
              while ( Image->data.transm[ ebp_1908 ] = *(char*)(0 + pov_malloc( ebp_392 * ebp_380, "jpeg_pov.cpp", 636, "JPEG line buffer" )), ebp_392 != 0 + 1 + 1 )
              {
              }
            }
          }
          else
          if ( ebp_380 == 3 && ebp_392 )
          {
            ebp_1932 = 0;
            do
            {
              ebp_1932++;
            }
            while ( ebp_1932 != ebp_392 );
          }
          ebp_1908++;
        }
        while ( ebp_388 <= ebp_1908 );
      }
      jpeg_finish_decompress( ebp_504 );
      jpeg_destroy_decompress( ebp_504 );
      pov_free( ebp_512, "jpeg_pov.cpp", 686 );
      if ( ebp_1924 )
      {
        ;
      }
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
}
void Image_File_Class::~Image_File_Class( int __in_chrg )
{
  this[0]._vptr.Image_File_Class = "p���ЬЬЬЬЬCannot open PNG file.";
}
}
#if 0
#endif
