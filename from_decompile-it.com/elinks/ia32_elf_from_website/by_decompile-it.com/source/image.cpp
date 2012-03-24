#include "image.cpp.h"
using namespace std;
using namespace __debug;
using namespace pov_base;
namespace pov {
int image_map( double *EPoint, PIGMENT *Pigment, float *colour )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
{
  int reg_number;
  double xcoor = (long long)0, ycoor = (long long)0;
  if ( map( EPoint, &Pigment->Type, &xcoor, &ycoor ) == 0 )
  {
    if ( Pigment->Vals.Density_File[2].Interpolation )
    {
      Interp( ebp_40, ebp_60, esi, &edi );
      return 1;
    }
    no_interpolation( ebp_40, esi, edi );
    return 1;
  }
  else
  {
    colour[0] = 1.000000000000;
    colour[1] = 1.000000000000;
    colour[2] = 1.000000000000;
    colour[3] = 0.0;
    colour[4] = 1.000000000000;
    return 0;
  }
}
}
TEXTURE *material_map( double *EPoint, TEXTURE *Texture )
{
  int eax;
  int ecx;
  int edx;
{
  int reg_number = 0;
  int Material_Number;
  int numtex;
  double xcoor = (long long)0, ycoor = (long long)0;
  COLOUR colour;
  TEXTURE *Temp_Tex;
  if ( map( EPoint, &Texture->Type, &xcoor, &ycoor ) )
    Material_Number = 0;
  else
  {
    *ebp_40 = ebp_40;
    *ebp_36 = ebp_36;
    if ( Texture->Vals.Density_File[2].Interpolation == 0 )
    {
      no_interpolation(  );
    }
    else
    {
      Interp(  );
    }
    if ( Texture->Vals.Density_File[12].Interpolation == 0 )
    {
    }
    else
      *ebp_28 = ebp_28;
  }
  Temp_Tex[0].Type = Texture->Materials;
  Temp_Tex = &Temp_Tex->Materials;
  if ( Texture->Materials && Material_Number >= 1 )
  {
    numtex = 0;
    Temp_Tex = Temp_Tex->Next_Material;
    if ( Temp_Tex->Next_Material )
    {
      do
      {
        numtex++;
      }
      while ( numtex + 1 < Material_Number && Temp_Tex->Next_Material );
    }
    return &Temp_Tex[0];
  }
}
}
void bump_map( double *EPoint, TNORMAL *Tnormal, double *normal )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
{
  double xcoor = (long long)0, ycoor = (long long)0;
  int index, index2, index3;
  COLOUR colour1;
  COLOUR colour2;
  COLOUR colour3;
  double Length;
  double Amount;
  IMAGE *Image = &Tnormal->Vals.Density_File->Interpolation;
  colour1[0] = 0.0;
  colour1[1] = 0.0;
  colour1[2] = 0.0;
  colour1[3] = 0.0;
  colour1[4] = 0.0;
  colour2[0] = 0.0;
  colour2[1] = 0.0;
  colour2[2] = 0.0;
  colour2[3] = 0.0;
  colour2[4] = 0.0;
  colour3[0] = 0.0;
  colour3[1] = 0.0;
  colour3[2] = 0.0;
  colour3[3] = 0.0;
  colour3[4] = 0.0;
  if ( map( EPoint ) == 0 )
  {
    *ebp_48 = ebp_48;
    *ebp_44 = ebp_44;
    if ( Image->Interpolation_Type )
    {
      Interp( &Image[0], ebp_76 );
    }
    else
    {
      no_interpolation( &Image[0], ebp_76 );
    }
    if ( ( ah & 69 ) & 255 )
    {
      if ( ( ah & 5 ) & 255 )
      {
      }
      else
      {
        *(double*)(ebp_48 - 1.000000000000) = 0.000000000000 - ( ebp_48 - 1.000000000000 );
        fp7 = ebp_48 - 1.000000000000;
      }
    }
    else
      fp6 = fp6;
    if ( ( ( ah & 69 ) & 255 ) == 0 )
    {
    }
    else
    if ( ( ah & 5 ) & 255 )
    {
    }
    else
      fp7 = 0.000000000000;
    if ( Image->Interpolation_Type == 0 )
    {
      no_interpolation( &Image[0], ebp_96, 0.000000000000, (double)( Image->iwidth ) + (double)( Image->iheight ) );
    }
    else
    {
      Interp( &ebx, ebp_96, fp7, &fp6 );
    }
    if ( ( ( ah & 69 ) & 255 ) == 0 )
    {
    }
    else
    if ( ( ah & 5 ) & 255 )
      fp6 = (double)( Image->iwidth );
    else
    {
    }
    if ( Image->Interpolation_Type )
    {
      Interp( &ebx, ebp_116, fp7, ebp_136, ebp_132 );
    }
    else
    {
      no_interpolation( &ebx, ebp_116, fp7, &fp6, ebp_136 );
    }
    if ( ( ( ah & 69 ) & 255 ) == 0 )
    {
      normal[0] = normal[0];
      normal[2] = normal[2];
      if ( ( ah & 69 ) & 255 )
      {
        fp7 = 0.000000000000;
        fp7 = 0.000000000000;
        fp7 = 0.000000000000;
      }
      else
      {
        fp7 = 0.000000000000;
        fp7 = 0.000000000000;
        fp7 = 0.000000000000;
      }
    }
    else
    {
      fp3 = 0.000000000000 - normal[2];
    }
    normal[0] = ( ( -( 0.000000000000 - normal[2] ) * ( 1.000000000000 / sqrt( ( -( 0.000000000000 - normal[2] ) * -( 0.000000000000 - normal[2] ) ) + 4.000000000000 + ( ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) * ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) ) ) ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) + ( ( 1.000000000000 / sqrt( ( -( 0.000000000000 - normal[2] ) * -( 0.000000000000 - normal[2] ) ) + 4.000000000000 + ( ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) * ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) ) ) ) * 0.000000000000 * ( 0.000000000000 - normal[2] ) ) ) - ( ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) * ( 1.000000000000 / sqrt( ( -( 0.000000000000 - normal[2] ) * -( 0.000000000000 - normal[2] ) ) + 4.000000000000 + ( ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) * ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) ) ) ) * ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) * ( 1.000000000000 / sqrt( ( ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) * ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) ) + ( ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) * ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) ) + ( ( ( -1.000000000000 * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) - ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) ) * ( ( -1.000000000000 * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) - ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) ) ) ) ) );
    normal[1] = ( ( -( 0.000000000000 - normal[2] ) * ( 1.000000000000 / sqrt( ( -( 0.000000000000 - normal[2] ) * -( 0.000000000000 - normal[2] ) ) + 4.000000000000 + ( ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) * ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) ) ) ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) + ( ( 1.000000000000 / sqrt( ( -( 0.000000000000 - normal[2] ) * -( 0.000000000000 - normal[2] ) ) + 4.000000000000 + ( ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) * ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) ) ) ) * 0.000000000000 * -1.000000000000 ) ) - ( ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) * ( 1.000000000000 / sqrt( ( -( 0.000000000000 - normal[2] ) * -( 0.000000000000 - normal[2] ) ) + 4.000000000000 + ( ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) * ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) ) ) ) * ( 0.000000000000 - ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) ) * ( 1.000000000000 / sqrt( ( ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) * ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) ) + ( ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) * ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) ) + ( ( ( -1.000000000000 * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) - ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) ) * ( ( -1.000000000000 * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) - ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) ) ) ) ) );
    normal[2] = ( ( -( 0.000000000000 - normal[2] ) * ( 1.000000000000 / sqrt( ( -( 0.000000000000 - normal[2] ) * -( 0.000000000000 - normal[2] ) ) + 4.000000000000 + ( ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) * ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) ) ) ) * 0.000000000000 ) + ( ( 1.000000000000 / sqrt( ( -( 0.000000000000 - normal[2] ) * -( 0.000000000000 - normal[2] ) ) + 4.000000000000 + ( ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) * ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) ) ) ) * 0.000000000000 * ( 0.000000000000 - normal[2] ) ) ) - ( ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) * ( 1.000000000000 / sqrt( ( -( 0.000000000000 - normal[2] ) * -( 0.000000000000 - normal[2] ) ) + 4.000000000000 + ( ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) * ( ( ( 0.000000000000 - normal[2] ) * 0.000000000000 ) - ( 0.000000000000 - normal[2] ) ) ) ) ) * ( 1.000000000000 / sqrt( ( ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) * ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) ) + ( ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) * ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) ) + ( ( ( -1.000000000000 * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) - ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) ) * ( ( -1.000000000000 * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) - ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) ) ) ) ) * ( ( -1.000000000000 * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) - ( ( 0.000000000000 - normal[2] ) * ( 0.000000000000 - normal[2] ) * ( 1.000000000000 / ( 0.000000000000 - normal[2] ) ) ) ) );
    return;
  }
  else
  {
    return;
  }
}
}
double image_pattern( double *EPoint, TPATTERN *TPattern )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  double fp7;
{
  double xcoor = (long long)0, ycoor = (long long)0;
  int index;
  COLOUR colour;
  IMAGE *Image = &TPattern->Vals.Density_File->Interpolation;
  double Value;
  colour[0] = 0.000000000000;
  colour[1] = 0.000000000000;
  colour[2] = 0.000000000000;
  colour[3] = 0.000000000000;
  colour[4] = 0.000000000000;
  Value = 0.000000000000;
  if ( map( EPoint ) == 0 )
  {
    Value = Value;
    *ebp_40 = ebp_40;
    *ebp_36 = ebp_36;
    if ( Image->Interpolation_Type == 0 )
    {
      no_interpolation( &Image[0], ebp_68, Image->Use_Colour_Flag );
    }
    else
    {
      Interp( &Image[0], ebp_68 );
    }
    if ( Image->Colour_Map )
    {
      if ( Image->Use_Colour_Flag == 0 )
      {
        if ( ( ah & 69 ) & 255 )
        {
          Value = Value;
          if ( ( ( ah & 69 ) & 255 ) == 0 )
          {
            fp6 = 1.000000000000;
          }
          else
          {
          }
        }
        else
        {
          fp6 = 1.000000000000;
        }
        return;
      }
    }
    else
      *(char*)(*(char*)(ebx + 31)) = Image->Use_Colour_Flag;
    if ( Image->Use_Colour_Flag == 2 )
    {
      if ( Image->data.rgb8_lines->transm )
      {
      }
      else
      {
      }
    }
    else
    {
    }
  }
  return;
}
}
HF_VAL image_height_at( IMAGE *Image, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  switch ( Image->File_Type & 2047 )
  {
    if ( eax >= 256 )
    {
      if ( ( Image->File_Type & 2047 ) == 512 || ( Image->File_Type & 2047 ) == 1024 )
      {
        if ( Image->Colour_Map == 0 )
        {
          if ( Image->Image_Type & 0x20000 )
          {
            if ( Image->Image_Type & 0x40000 )
            {
              return Image->data.transm[ y ];
            }
            Image->Image_Type = (int)( ( 0.297000000000 + 0.589000000000 + 0.114000000000 ) * (double)( *(short*)(Image->data.rgb8_lines[ y ].red + ( ( x * 2 ) * 2 )) & 65535 ) );
          }
          else
          {
            return ( *(char*)(x + *(int*)(*(int*)(Image + 104) + ( y << 4 ))) << 8 ) + *(char*)(x + *(int*)(*(int*)(Image + 104) + ( y << 4 )));
          }
        }
        else
        {
          return *(char*)(x + *(int*)(*(int*)(Image + 104) + ( y << 2 ))) << 8;
        }
      }
      else
      {
        Error( "Unknown image type in image_height_at." );
      }
    }
    else
    {
      if ( ( Image->File_Type & 2047 ) - 128 == 0 )
        continue;
    }
    break;
  default:
    if ( eax >= 2 )
    {
      if ( ( Image->File_Type & 2047 ) == 4 || ( Image->File_Type & 2047 ) == 16 )
        continue;
    }
    else
    {
      if ( ( Image->File_Type & 2047 ) - 1 == 0 )
      {
        return *(char*)(x + *(int*)(*(int*)(Image + 104) + ( y << 2 ))) << 8;
      }
    }
    break;
  case 2:
    break;
  }
}
bool is_image_opaque( IMAGE *Image )
{
  int eax;
  int ah;
  int edx;
  double fp7;
{
  int x, y;
  if ( Image->Colour_Map )
  {
    if ( Image->Colour_Map_Size >= 1 )
    {
      if ( Image->Colour_Map->Filter == 0 && Image->Colour_Map->Transmit == 0 )
      {
        x = 0;
        do
        {
          x++;
          if ( Image->Colour_Map_Size <= x + 1 )
            goto B4;
        }
        while ( Image->Colour_Map[1].Filter || ( Image->Colour_Map[2].Transmit & 65535 ) );
        return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  else
  if ( ( ( ( ah & 69 ) ^ 64 ) & 255 ) == 0 )
  {
    if ( ( ( ( ( ( ( ( ah & 69 ) ^ 64 ) & 69 ) ^ 64 ) & 69 ) ^ 64 ) & 255 ) == 0 )
    {
      if ( Image->Image_Type & 0x20000 )
      {
        if ( !( Image->Image_Type & 0x40000 ) && Image->data.rgb8_lines->transm && Image->iheight >= 1 )
        {
          Image = &Image->iwidth;
          do
          {
            if ( Image->iwidth >= 1 )
            {
              if ( rgb8_lines/*union*/rgb8_lines/*union*/Image->data.rgb8_lines/*union*/ == 0 )
              {
                do
                {
                  if ( 0 + 1 + 1 < Image->iwidth )
                    continue;
                }
                while ( rgb8_lines/*union*/Image->data.rgb8_lines/*union*/ );
                break;
              }
              else
                break;
            }
          }
          while ( Image->iheight <= 0 + 1 + 1 );
          return 1;
        }
      }
      else
      if ( Image->data.rgb8_lines->transm && Image->iheight >= 1 )
      {
        Image = &Image->iwidth;
        do
        {
          if ( Image->iwidth >= 1 )
          {
            if ( rgb8_lines/*union*/Image->data.rgb8_lines/*union*/ )
              break;
            do
            {
              if ( 0 + 1 + 1 < Image->iwidth )
                continue;
            }
            while ( rgb8_lines/*union*/Image->data.rgb8_lines/*union*/ );
            break;
          }
        }
        while ( Image->iheight <= 0 + 1 + 1 );
        return 1;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 0;
  }
B4:  return 1;
}
}
int planar_image_map( double *EPoint, IMAGE *Image, double *u, double *v )
{
  int eax;
  int ah;
  int ecx;
  int edx;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
{
  double x;
  double y;
  double z;
  EPoint[0] = EPoint[0];
  y = EPoint[1];
  z = EPoint[2];
  if ( ( ah & 69 ) != 64 )
  {
    if ( Image->Once_Flag )
    {
      if ( ( ( ah & 69 & 69 & 69 ) & 255 ) == 0 )
      {
        z = z;
        y = y;
        return 0;
      }
      else
      if ( ( ( ah & 69 & 69 & 69 ) & 255 ) == 0 )
      {
        z = z;
        y = y;
        return 0;
      }
    }
    else
    {
    }
    if ( ( ( ah & 69 & 69 & 69 ) & 255 ) == 0 )
    {
      do
      {
      }
      while ( ( ah & 69 & 69 & 4 ) & 255 );
      if ( ( ah & 69 & 69 & 69 ) != 64 )
      {
        fmod( 0.000000000000 * Image->width, Image->width );
        *ebp_24 = (int)z;
        z = y;
        *ebp_12 = u[0];
      }
      else
        fp7 = 0.000000000000 * Image->width;
      u[0] = z;
    }
    else
    {
      do
      {
      }
      while ( ( ah & 69 & 69 & 4 ) & 255 );
      if ( ( ah & 69 & 69 & 69 ) != 64 )
      {
        fmod( 0.000000000000 * Image->height, Image->height );
        *ebp_24 = 0.000000000000 * Image->height;
        *ebp_40 = 0.000000000000 * Image->height;
      }
      else
        fp7 = 0.000000000000 * Image->height;
      v[0] = fp5;
    }
  }
  else
    z = z;
  if ( ( ah & 69 & 69 & 69 ) != 64 )
  {
    if ( Image->Once_Flag )
    {
      z = 0.000000000000;
      if ( ( ( ah & 69 & 69 & 69 & 69 & 69 ) & 255 ) == 0 )
      {
        z = z;
        y = y;
        fp7 = fp7;
        return 0;
      }
      else
      if ( ( ( ah & 69 & 69 & 69 & 69 & 69 ) & 255 ) == 0 )
      {
        z = z;
        y = y;
        fp7 = fp7;
        return 0;
      }
    }
    else
      z = 0.000000000000;
    if ( ( ( ah & 69 & 69 & 69 & 69 & 69 ) & 255 ) == 0 )
    {
      do
      {
      }
      while ( ( ah & 69 & 69 & 69 & 69 & 4 ) & 255 );
      if ( ( ah & 69 & 69 & 69 & 69 & 69 ) != 64 )
      {
        fmod( y, z );
        z = 0.000000000000;
        y = y;
        *ebp_12 = u[0];
      }
      else
      {
        z = z;
        fp4 = rem(0.000000000000,Image->width);
      }
      u[0] = y;
    }
    else
    {
      do
      {
      }
      while ( ( ah & 69 & 69 & 69 & 69 & 4 ) & 255 );
      if ( ( ah & 69 & 69 & 69 & 69 & 69 ) != 64 )
      {
        fmod( fp7, fp5 );
        *ebp_24 = ebp_24;
      }
      else
        fp4 = rem(0.000000000000,Image->height);
      v[0] = fp6;
    }
  }
  else
  {
    z = 0.000000000000;
    y = y;
  }
  if ( ( ( ah & 69 & 69 & 69 & 69 & 69 ) ^ 64 ) & 255 )
  {
    if ( Image->Once_Flag )
    {
      z = 0.000000000000;
      y = 0.000000000000;
      if ( ( ( ( ( ( ( ah & 69 & 69 & 69 ) ^ 64 ) & 69 & 69 & 69 ) ^ 64 ) & 69 ) & 255 ) == 0 )
      {
        y = y;
        *(double*)(fmod( y, z )) = fmod( y, z );
        return 0;
      }
      else
      {
        *(double*)(fmod( y, z )) = fmod( y, z );
        if ( ( ( ( ( ( ( ah & 69 & 69 & 69 ) ^ 64 ) & 69 & 69 & 69 ) ^ 64 ) & 69 ) & 255 ) == 0 )
        {
          y = y;
          *(double*)(fmod( y, z )) = fmod( y, z );
          return 0;
        }
      }
    }
    else
      y = 0.000000000000;
    if ( ( ( ( ( ( ( ah & 69 & 69 & 69 ) ^ 64 ) & 69 & 69 & 69 ) ^ 64 ) & 69 ) & 255 ) == 0 )
    {
      *(double*)(fmod( y, z )) *= Image->width;
      do
      {
      }
      while ( ( ( ( ( ( ah & 69 & 69 & 69 ) ^ 64 ) & 69 & 69 & 69 ) ^ 64 ) & 4 ) & 255 );
      if ( ( ( ( ( ( ah & 69 & 69 & 69 ) ^ 64 ) & 69 & 69 & 69 ) ^ 64 ) & 69 ) != 64 )
      {
        fmod( fmod( y, z ) * Image->width, Image->width );
        *ebp_12 = u[0];
      }
      else
        fp5 = rem(0.000000000000,Image->width);
      u[0] = fp7;
    }
    else
    {
      *(double*)(fmod( y, z )) *= Image->height;
      z = Image->height;
      do
      {
      }
      while ( ( ( ( ( ( ah & 69 & 69 & 69 ) ^ 64 ) & 69 & 69 & 69 ) ^ 64 ) & 4 ) & 255 );
      if ( ( ( ( ( ( ah & 69 & 69 & 69 ) ^ 64 ) & 69 & 69 & 69 ) ^ 64 ) & 69 ) != 64 )
      {
        fmod( fmod( y, z ) * Image->height, y );
      }
      else
      {
        z = z;
      }
      v[0] = z;
      return 1;
    }
  }
  else
  {
    *(double*)(fmod( y, z )) = fmod( y, z );
  }
  return 1;
}
}
int map( double *EPoint, TPATTERN *TPattern, double *xcoor, double *ycoor )
{
  int eax;
  int ah;
  int edx;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
{
  IMAGE *Image = &TPattern->Vals.Density_File[0].Interpolation;
  double xx;
  double yy;
  switch ( Image->Map_Type )
  {
  case 2:
    EPoint[0] = EPoint[0];
    EPoint[1] = EPoint[1];
    EPoint[2] = EPoint[2];
    if ( Image->Once_Flag )
    {
      if ( ( ( 12 & 69 ) & 255 ) == 0 )
      {
        EPoint[2] = EPoint[2];
        EPoint[1] = EPoint[1];
        EPoint[0] = EPoint[0];
      }
      else
      {
        EPoint[1] = EPoint[1];
        if ( ( ( 12 & 69 ) & 255 ) == 0 )
        {
          EPoint[2] = EPoint[2];
          EPoint[1] = EPoint[1];
          EPoint[0] = EPoint[0];
        }
      }
    }
    do
    {
    }
    while ( ( 12 & 4 ) & 255 );
    if ( ( ah & 69 ) == 64 )
      fp2 = 0.000000000000;
    else
    {
      fmod( Image->height, Image->height );
      *ebp_56 = (int)EPoint[1];
      *ebp_72 = (int)EPoint[1];
      *ebp_88 = (int)EPoint[0];
    }
    (int)ycoor[0] = ebp_88;
    *ebp_56 = ebp_56;
    if ( ( 12 & 69 & 69 ) == 64 )
    {
      EPoint[2] = EPoint[2];
      *ebp_56 = ebp_56;
      EPoint[0] = EPoint[0];
    }
    else
    {
      if ( ( 12 & 69 & 69 ) == 64 )
        (xcoor[0] & 0xFFFFFFFF) = xcoor[0];
        *ebp_56 = ebp_56;
      else
      {
        (xcoor[0] & 0xFFFFFFFF) = xcoor[0];
        fp6 = fp6 = fp6;
        if ( ( ( ( 12 & 69 & 69 & 69 ) ^ 64 ) & 255 ) == 0 )
        {
          fp3 = fp3;
          fp7 = 0.000000000000;
          if ( ( ah & 69 ) & 255 )
          {
          }
        }
        else
        {
          acos( fp7 / fp6 );
          if ( ( ( ah & 69 ) & 255 ) == 0 )
            fp7 = 6.283185307180 - fp7;
        }
        xcoor[0] = ( fp7 / 6.283185307180 ) * *(float*)(ebx + 56);
        xcoor[0] = Image->Offset[ 0.001000000000 ] + yy;
        ycoor[0] = (ycoor[ ( Image->Offset[1] + 0.001000000000 ) >> 3 ] & 0xFFFFFFFF);
        if ( Image->Once_Flag )
        {
          switch ( ( ah & 69 ) & 255 )
          {
          case 0:
            fp3 = fp3;
            xx = xx;
            return 0;
            break;
          case 0:
            xx = xx;
            yy = yy;
            break;
          case 0:
            xx = xx;
            yy = yy;
            break;
          case 0:
            xx = xx;
            yy = yy;
            break;
          default:
            yy = yy;
            yy = 0.000000000000;
            break;
          }
        }
        else
        {
        }
        xcoor[0] = yy - (double)( Image->iwidth * (int)( xcoor[0] / (double)( Image->iwidth ) ) );
        ycoor[0] = xx - ( ycoor[0] - (double)( Image->iheight * (int)( xx ) ) );
        if ( ( ( 12 & 69 ) & 255 ) == 0 )
        {
          xcoor[0] = xcoor[0] + (double)( Image->iwidth );
          xcoor[0] += (double)( Image->iwidth );
          ycoor[0] = ycoor[0];
        }
        else
        if ( ( ( 12 & 5 ) & 255 ) == 0 )
        {
          xcoor[0] = (double)( Image->iwidth ) - xcoor[0];
          ycoor[0] = ycoor[0];
        }
        else
        {
        }
        if ( ( ( 12 & 69 ) & 255 ) == 0 )
        {
          ycoor[0] = ( (ycoor[ ( Image->Offset[1] + 0.001000000000 ) >> 3 ] & 0xFFFFFFFF) / (double)( Image->iheight ) ) + ( xx - ( ycoor[0] - (double)( Image->iheight * (int)( xx ) ) ) );
          xcoor[0] = xcoor[0];
        }
        else
        if ( ( 12 & 5 ) & 255 )
        {
        }
        else
        {
          ycoor[0] = fp2 - fp5;
          xcoor[0] = xcoor[0];
        }
        if ( ( ( 12 & 5 ) & 255 ) == 0 )
        {
          fp4 = fp4;
          fp5 = fp5;
        }
        else
        if ( ( ( 12 & 5 ) & 255 ) == 0 )
          fp4 = fp4;
        else
        if ( ( ( 12 & 69 ) & 255 ) == 0 )
          (xcoor[0] & 0xFFFFFFFF) = xcoor[0];
        {
          (ycoor[0] & 0xFFFFFFFF) = ycoor[0];
          (xcoor[0] & 0xFFFFFFFF) = xcoor[0];
        }
        else
        if ( ( ( 12 & 69 ) & 255 ) == 0 )
          goto B43;
        return 0;
B43:        Error( "Picture index out of range." );
        return 0;
      }
    }
    (ycoor[0] & 0xFFFFFFFF) = ycoor[0];
    break;
  case 5:
    EPoint[1] = EPoint[1];
    *(double*)(*(double*)(ebx + 32)) = (int)Image->Gradient[0];
    if ( ( ah & 69 ) == 64 )
    {
      EPoint[1] = EPoint[1];
      EPoint[0] = EPoint[0];
    }
    else
    {
      fp5 = 0.000000000000;
      if ( ( ( ( ah & 69 ) ^ 64 ) & 255 ) == 0 )
      {
        if ( ( ah & 69 ) & 255 )
        {
        }
        else
        {
        }
      }
      else
      {
        acos( EPoint[0] / 0.000000000000 );
        *ebp_72 = 0.000000000000;
        *ebp_56 = (int)EPoint[1];
        *ebp_88 = (int)EPoint[1];
        *ebp_120 = 0.000000000000;
        if ( ( ( ( 12 & 69 & 69 ) ^ 64 ) & 69 ) & 255 )
        {
          EPoint[1] = EPoint[1];
          fp6 = 0.000000000000;
        }
        else
        {
          *(double*)(acos( EPoint[0] / 0.000000000000 )) = 0.000000000000 - ( 6.283185307180 - acos( EPoint[0] / 0.000000000000 ) );
          EPoint[1] = EPoint[1];
        }
      }
      acos( -( 0.500000000000 - sqrt( ( EPoint[0] * EPoint[0] ) + ( EPoint[2] * EPoint[2] ) ) ) / sqrt( ( 0.500000000000 - sqrt( ( EPoint[0] * EPoint[0] ) + ( EPoint[2] * EPoint[2] ) ) ) * ( 0.500000000000 - sqrt( ( EPoint[0] * EPoint[0] ) + ( EPoint[2] * EPoint[2] ) ) ) ) );
      *ebp_72 = ebp_72;
      xcoor[0] = fp6 * *(float*)(ebx + 56);
      ycoor[0] = ( fp7 / 6.283185307180 ) * *(float*)(ebx + 60);
      xcoor[0] = xcoor[0];
    }
    break;
  case 1:
    if ( ( 12 & 69 & 69 ) == 64 )
    {
      EPoint[2] = EPoint[2];
      EPoint[0] = EPoint[0];
    }
    else
    {
      asin( 0.000000000000 / 0.000000000000 );
      *ebp_56 = EPoint[2] / 0.000000000000;
      if ( ( ( ( 12 & 69 & 69 & 69 ) ^ 64 ) & 255 ) == 0 )
        fp3 = fp3;
      else
      {
        fp5 = 0.000000000000;
        if ( ( ( ah & 69 ) ^ 64 ) & 255 )
        {
          acos( fp6 / fp5 );
          *ebp_120 = ebp_120;
          if ( ( ( ( 12 & 69 & 69 ) ^ 64 ) & 69 ) & 255 )
          {
            (xcoor[0] & 0xFFFFFFFF) = xcoor[0];
            fp7 = fp7 = fp7;
          }
          else
            (xcoor[0] & 0xFFFFFFFF) = xcoor[0];
          {
            fp6 = fp6;
            fp6 = 6.283185307180 - fp6;
          }
        }
        else
        {
          fp2 = fp2;
          if ( ( ah & 69 ) & 255 )
          {
          }
        }
        fp6 /= 6.283185307180;
      }
      xcoor[0] = ( 0.000000000000 / 6.283185307180 ) * Image->width;
      ycoor[0] = ( ( fp7 / 3.141592653590 ) + 0.500000000000 ) * *(float*)(ebx + 60);
      xcoor[0] = xcoor[0];
    }
    break;
  case 0:
  case 5:
    if ( planar_image_map( &ycoor[0] ) )
      yy = xcoor[0];
    break;
  }
}
}
void no_interpolation( IMAGE *Image, double xcoor, double ycoor, float *colour, int *index )
{
  double fp0;
  double fp6;
  double fp7;
{
  IMAGE_COLOUR *map_colour;
  IMAGE16_LINE *line16;
  IMAGE8_LINE *line8;
  if ( Image->Once_Flag )
  {
    if ( ( ( ah & 69 ) & 255 ) == 0 )
    {
      fp6 = fp6;
      if ( Image->Colour_Map == 0 )
      {
        if ( Image->Image_Type & 0x20000 )
        {
          if ( Image->Image_Type & 0x40000 )
          {
            colour[0] += 0.000015259022 * (double)( *(short*)(Image->data.rgb8_lines->red + eax) & ( esi * 2 ) );
            colour[1] += 0.000015259022 * (double)( *(short*)(Image->data.rgb8_lines->red + eax) & ( esi * 2 ) );
            colour[2] += 0.000015259022 * (double)( *(short*)(Image->data.rgb8_lines->red + eax) & ( esi * 2 ) );
            colour[4] += (float)Image->AllTransmit;
            colour[3] += (float)Image->AllFilter;
            index[0] = -1;
            return;
          }
          else
          {
            line16 = &Image->data.rgb8_lines[ line16[0].red ].red[0];
            colour[0] += 0.000015259022 * (double)( *(short*)(line16) & 0 );
            colour += 0.000015259022 * (double)( line16->green[ 0 ] & 65535 );
            colour[2] += 0.000015259022 * (double)( line16->blue[ 0 ] & 65535 );
            if ( line16->transm == 0 )
            {
            }
            else
            {
              line8 = &colour[4];
              colour[4] += 0.000015259022 * (double)( *(short*)(( 0 * 2 ) + line16->transm) & 65535 );
              colour[4] += (float)Image->AllTransmit;
              colour[3] += (float)Image->AllFilter;
              index[0] = -1;
              return;
            }
          }
        }
        else
        {
          colour[0] += 0.003921568627 * (double)( *(char*)(Image->data.rgb8_lines[ (int)( fp6 ) ].red + ( ( ( 12 & 69 ) & 255 ) == 0 ? 0 : (int)( fp6 ) )) );
          colour[1] += 0.003921568627 * (double)( *(char*)(( ( 12 & 69 ) & 255 ? (int)( (double)( Image->iwidth ) ) : 0 ) + *(int*)(Image->data.rgb8_lines[ (int)( fp6 ) ].red + 4)) );
          colour[2] += 0.003921568627 * (double)( *(char*)(( ( 12 & 69 ) & 255 ? (int)( (double)( Image->iwidth ) ) : 0 ) + *(int*)(Image->data.rgb8_lines[ (int)( fp6 ) ].red + 8)) );
          if ( Image->data.rgb8_lines[ (int)( (double)( Image->iwidth ) ) ].transm == 0 )
          {
          }
          else
          {
            colour[4] += fp7 * (double)( *(char*)(esi + edi) );
            colour[4] += (float)Image->AllTransmit;
            colour[3] += (float)Image->AllFilter;
            index[0] = -1;
            return;
          }
        }
        colour[4] += (float)Image->AllTransmit;
        colour[3] += (float)Image->AllFilter;
        index[0] = -1;
        return;
      }
      else
      {
        index[0] = *(char*)(Image->data.rgb8_lines->red + 0);
        map_colour = &Image->Colour_Map[ *(char*)(Image->data.rgb8_lines->red + map_colour[0].Red) ];
        colour[0] += 0.003921568627 * (double)( map_colour->Red & 65535 );
        colour[1] += 0.003921568627 * (double)( map_colour->Green & 65535 );
        colour[2] += 0.003921568627 * (double)( map_colour->Blue & 65535 );
        colour[3] += 0.003921568627 * (double)( map_colour->Filter & 65535 );
        colour[4] += 0.003921568627 * (double)( *(short*)(0 + 8) & 65535 );
        return;
      }
    }
    else
    {
      fp6 = fp6;
    }
  }
  else
  {
    if ( ( ( ah & 69 ) & 255 ) == 0 )
    {
      ycoor = ycoor;
      ycoor = ycoor + (double)( Image->iwidth );
    }
    else
    if ( ( ah & 5 ) & 255 )
    {
    }
    else
    {
      fp7 = xcoor = 0.000000000000 - xcoor;
    }
    if ( ( ( ah & 69 ) & 255 ) == 0 )
    {
    }
    else
    if ( ( 12 & 5 ) & 255 )
    {
    }
    else
      fp7 = 0.000000000000 - ycoor;
  }
  if ( Image->Colour_Map == 0 )
  {
  }
  else
  {
    index[0] = *(char*)(Image->data.rgb8_lines->red + 0);
    map_colour = &Image->Colour_Map[ *(char*)(Image->data.rgb8_lines->red + map_colour[0].Red) ];
    colour[0] += 0.003921568627 * (double)( map_colour->Red & 65535 );
    colour[1] += 0.003921568627 * (double)( map_colour->Green & 65535 );
    colour[2] += 0.003921568627 * (double)( map_colour->Blue & 65535 );
    colour[3] += 0.003921568627 * (double)( map_colour->Filter & 65535 );
    colour[4] += 0.003921568627 * (double)( *(short*)(0 + 8) & 65535 );
    return;
  }
}
}
void Interp( IMAGE *Image, double xcoor, double ycoor, float *colour, int *index )
{
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
{
  int iycoor = (int)( val4 ), ixcoor;
  int Corners_Index[4];
  double Index_Crn[4];
  float Corner_Colour[4][5];
  double Red_Crn[4];
  double Green_Crn[4];
  double Blue_Crn[4];
  double Filter_Crn[4];
  double Transm_Crn[4];
  double val1, val2, val3, val4 = val2, val5;
  val2 = val4;
  ixcoor = (int)( val2 );
  Corner_Colour[0][0] = 0.000000000000;
  Corner_Colour[0][1] = 0.000000000000;
  Corner_Colour[0][2] = 0.000000000000;
  Corner_Colour[0][3] = 0.000000000000;
  Corner_Colour[0][4] = 0.000000000000;
  Corner_Colour[1][0] = 0.000000000000;
  Corner_Colour[1][1] = 0.000000000000;
  Corner_Colour[1][2] = 0.000000000000;
  Corner_Colour[1][3] = 0.000000000000;
  Corner_Colour[1][4] = 0.000000000000;
  Corner_Colour[2][0] = 0.000000000000;
  Corner_Colour[2][1] = 0.000000000000;
  Corner_Colour[2][2] = 0.000000000000;
  Corner_Colour[2][3] = 0.000000000000;
  Corner_Colour[2][4] = 0.000000000000;
  Corner_Colour[3][0] = 0.000000000000;
  Corner_Colour[3][1] = 0.000000000000;
  Corner_Colour[3][2] = 0.000000000000;
  Corner_Colour[3][3] = 0.000000000000;
  Corner_Colour[3][4] = 0.000000000000;
  if ( Image->Interpolation_Type != 2 )
  {
    val5 = val5 = val5 = val5 = val5;
    if ( Image->Interpolation_Type != 4 )
    {
      val5 = val5 = val5;
      colour[0] += (float)val2;
      colour[1] += (float)val5;
      colour[2] += (float)val5;
      colour[3] += (float)val5;
      colour[4] += fp1;
      Index_Crn[0] = (double)( Corners_Index[0] );
      Index_Crn[1] = (double)( Corners_Index[1] );
      Index_Crn[2] = (double)( Corners_Index[2] );
      val5 = (double)( Corners_Index[3] );
      if ( Image->Interpolation_Type == 2 )
        index[0] = (int)( ( ebp_64 * ( val4 - (double)( ebp_380 ) ) * ( val2 - (double)( ebp_384 ) ) ) + ( ebp_56 * ( val2 - (double)( ebp_384 ) ) * ( 1.000000000000 - ( val4 - (double)( ebp_380 ) ) ) ) + ( ebp_48 * ( val4 - (double)( ebp_380 ) ) * ( 1.000000000000 - ( val2 - (double)( ebp_384 ) ) ) ) + ( val5 * ( 1.000000000000 - ( val2 - (double)( ebp_384 ) ) ) * ( 1.000000000000 - ( val4 - (double)( ebp_380 ) ) ) ) + 0.500000000000 );
      if ( Image->Interpolation_Type != 4 )
      {
        return;
      }
      index[0] = (int)( ( ( ( ebp_64 / ( ( ( val4 - (double)( ebp_380 ) ) * ( val4 - (double)( ebp_380 ) ) ) + ( ( val2 - (double)( ebp_384 ) ) * ( val2 - (double)( ebp_384 ) ) ) ) ) + ( ebp_56 / ( ( ( val2 - (double)( ebp_384 ) ) * ( val2 - (double)( ebp_384 ) ) ) + ( ( 1.000000000000 - ( val4 - (double)( ebp_380 ) ) ) * ( 1.000000000000 - ( val4 - (double)( ebp_380 ) ) ) ) ) ) + ( ebp_48 / ( ( ( val4 - (double)( ebp_380 ) ) * ( val4 - (double)( ebp_380 ) ) ) + ( ( 1.000000000000 - ( val2 - (double)( ebp_384 ) ) ) * ( 1.000000000000 - ( val2 - (double)( ebp_384 ) ) ) ) ) ) + ( val5 / ( ( ( 1.000000000000 - ( val4 - (double)( ebp_380 ) ) ) * ( 1.000000000000 - ( val4 - (double)( ebp_380 ) ) ) ) + ( ( 1.000000000000 - ( val2 - (double)( ebp_384 ) ) ) * ( 1.000000000000 - ( val2 - (double)( ebp_384 ) ) ) ) ) ) ) / ( ( 1.000000000000 / ( ( ( val4 - (double)( ebp_380 ) ) * ( val4 - (double)( ebp_380 ) ) ) + ( ( val2 - (double)( ebp_384 ) ) * ( val2 - (double)( ebp_384 ) ) ) ) ) + ( 1.000000000000 / ( ( ( val2 - (double)( ebp_384 ) ) * ( val2 - (double)( ebp_384 ) ) ) + ( ( 1.000000000000 - ( val4 - (double)( ebp_380 ) ) ) * ( 1.000000000000 - ( val4 - (double)( ebp_380 ) ) ) ) ) ) + ( 1.000000000000 / ( ( ( val4 - (double)( ebp_380 ) ) * ( val4 - (double)( ebp_380 ) ) ) + ( ( 1.000000000000 - ( val2 - (double)( ebp_384 ) ) ) * ( 1.000000000000 - ( val2 - (double)( ebp_384 ) ) ) ) ) ) + ( 1.000000000000 / ( ( ( 1.000000000000 - ( val4 - (double)( ebp_380 ) ) ) * ( 1.000000000000 - ( val4 - (double)( ebp_380 ) ) ) ) + ( ( 1.000000000000 - ( val2 - (double)( ebp_384 ) ) ) * ( 1.000000000000 - ( val2 - (double)( ebp_384 ) ) ) ) ) ) ) ) + 0.500000000000 );
      return;
    }
    else
    {
      val5 = val5 = val5 = val5 = val5 = val5;
    }
  }
  else
  {
    no_interpolation( &Image[0], ebp_336, (double)( ebp_380 ) + 1.000000000000, (double)( ebp_384 ), (double)( ebp_384 ) );
    no_interpolation( &Image[0], ebp_316, (double)( ebp_380 ), (double)( ebp_380 ), (double)( ebp_384 ) );
    no_interpolation( &Image[0], ebp_296, (double)( ebp_380 ) + 1.000000000000, (double)( ebp_384 ) - 1.000000000000 );
    no_interpolation( &Image[0], ebp_276, (double)( ebp_380 ), (double)( ebp_380 ), (double)( ebp_384 ) - 1.000000000000 );
    if ( Image->Interpolation_Type != 4 )
    {
      val2 = ( ( ebp_432 - ebp_360 ) * ( ebp_448 - ebp_368 ) * ebp_320 ) + ( ebp_360 * ebp_300 ) + ( ebp_368 * ebp_280 ) + ( ebp_260 * ( 1.000000000000 - ( ebp_448 - ebp_368 ) ) * ( 1.000000000000 - ( ebp_432 - ebp_360 ) ) );
      val5 = ( ebp_332 * ( ebp_432 - ebp_360 ) * ( ebp_448 - ebp_368 ) ) + ( ebp_360 * ebp_312 ) + ( ebp_292 * ( ebp_432 - ebp_360 ) * ( 1.000000000000 - ( ebp_448 - ebp_368 ) ) ) + ( ( 1.000000000000 - ( ebp_448 - ebp_368 ) ) * ( 1.000000000000 - ( ebp_432 - ebp_360 ) ) * ebp_272 );
      val2 = val2;
      val5 = val5;
      Image = &Image[0];
    }
    else
      fp4 = (double)( ebp_380 ) + 1.000000000000;
  }
  no_interpolation( &Image[0], ebp_336, (double)( ebp_380 ), (double)( ebp_384 ) - 1.000000000000, ebp_376 );
  no_interpolation( &Image[0], ebp_316, 1.000000000000 + (double)( ebp_380 ), (double)( ebp_384 ) - 1.000000000000 );
  no_interpolation( &Image[0], ebp_296, (double)( ebp_380 ), (double)( ebp_380 ), (double)( ebp_384 ) );
  no_interpolation( &Image[0], ebp_276, 1.000000000000 + (double)( ebp_380 ), (double)( ebp_384 ), (double)( ebp_384 ) );
  *ebp_448 = val2;
  *ebp_432 = val4;
}
}
IMAGE *Create_Image( void )
{
  *(int*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" )) = 1;
  *(int*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 8) = 0;
  *(int*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 12) = 0;
  *(int*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 4) = 0;
  *(int*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 16) = 0;
  *(int*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 24) = 0;
  *(int*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 20) = 0;
  *(float*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 60) = 0.000000000000;
  *(float*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 56) = 0.000000000000;
  *(char*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 30) = 0;
  *(double*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 64) = 0.000000000000;
  *(double*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 72) = 0.000000000000;
  *(char*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 31) = 0;
  *(double*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 32) = 1.000000000000;
  *(double*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 40) = -1.000000000000;
  *(double*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 48) = 0.000000000000;
  *(double*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 80) = 0.000000000000;
  *(double*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 88) = 0.000000000000;
  *(short*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 28) = 0;
  *(int*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 96) = 0;
  *(int*)(pov_calloc( 1, 112, "image.cpp", 1524, "image file" ) + 100) = 0;
  return pov_calloc( 1, 112, "image.cpp", 1524, "image file" );
}
IMAGE *Copy_Image( IMAGE *Old )
{
  if ( Old )
  {
    Old->References++;
  }
  return Old;
}
void Destroy_Image( IMAGE *Image )
{
  int eax;
{
  int i;
  if ( Image )
  {
    Image = Image->References - 1;
    if ( Image->References - 1 < 1 )
    {
      if ( Image->Colour_Map )
      {
        pov_free( (void*)Image->Colour_Map, "image.cpp", 1635 );
        Image->Colour_Map = 0;
        if ( Image->data.rgb8_lines )
        {
          if ( Image->iheight >= 1 )
          {
            while ( 1 )
            {
              pov_free( (void*)Image->data.rgb8_lines->red, 0, "image.cpp" );
              Image->data.rgb8_lines->red = 0;
              if ( Image->iheight <= 0 + 1 + 1 )
              {
              }
              else
              {
                Image->data = Image->data;
              }
            }
          }
        }
        else
        {
          pov_free( &Image[0].References, "image.cpp", 1711 );
          return;
        }
      }
      else
      if ( Image->Image_Type & 0x20000 )
      {
        if ( Image->Image_Type & 0x40000 )
        {
          if ( Image->data.rgb8_lines )
          {
            if ( Image->iheight >= 1 )
            {
              while ( 1 )
              {
                pov_free( (void*)Image->data.rgb8_lines->red, 0, "image.cpp" );
                Image->data.rgb8_lines->red = 0;
                if ( Image->iheight <= 0 + 1 + 1 )
                {
                }
                else
                {
                  Image->data = Image->data;
                }
              }
            }
          }
        }
        else
        {
          if ( Image->data.rgb8_lines )
          {
            if ( Image->iheight >= 1 )
            {
              do
              {
                pov_free( (void*)Image->data.rgb8_lines[ 0 ].red, "image.cpp", 1673 );
rgb8_lines/*union*/rgb8_lines/*union*/                Image->data.rgb8_lines[ 0 + 1 ].red = 0;
                pov_free( rgb8_lines/*union*/(int)( rgb8_lines/*union*/&Image->data.rgb8_lines/*union*/ ), 0, "image.cpp" );
                rgb8_lines/*union*/Image->data.rgb8_lines/*union*/ = 0;
                pov_free( rgb8_lines/*union*/(int)( rgb8_lines/*union*/&Image->data.rgb8_lines/*union*/ ), 0, "image.cpp" );
                rgb8_lines/*union*/Image->data.rgb8_lines/*union*/ = 0;
                if ( rgb8_lines/*union*/Image->data.rgb8_lines/*union*/ )
                {
rgb8_lines/*union*/                  pov_free( &edx, "image.cpp", 1679 );
                  rgb8_lines/*union*/Image->data.rgb8_lines/*union*/ = 0;
                }
              }
              while ( Image->iheight <= 0 + 1 + 1 );
            }
          }
        }
      }
      else
      if ( Image->data.rgb8_lines )
      {
        if ( Image->iheight >= 1 )
        {
          do
          {
            pov_free( (void*)Image->data.rgb8_lines[ 0 ].red, "image.cpp", 1694 );
rgb8_lines/*union*/rgb8_lines/*union*/            Image->data.rgb8_lines[ 0 + 1 ].red = 0;
            pov_free( rgb8_lines/*union*/(int)( rgb8_lines/*union*/&Image->data.rgb8_lines/*union*/ ), 0, "image.cpp" );
            rgb8_lines/*union*/Image->data.rgb8_lines/*union*/ = 0;
            pov_free( rgb8_lines/*union*/(int)( rgb8_lines/*union*/&Image->data.rgb8_lines/*union*/ ), 0, "image.cpp" );
            rgb8_lines/*union*/Image->data.rgb8_lines/*union*/ = 0;
            if ( rgb8_lines/*union*/Image->data.rgb8_lines/*union*/ )
            {
rgb8_lines/*union*/              pov_free( &edx, "image.cpp", 1700 );
              rgb8_lines/*union*/Image->data.rgb8_lines/*union*/ = 0;
            }
          }
          while ( Image->iheight <= 0 + 1 + 1 );
        }
      }
      pov_free( (void*)Image->data.rgb8_lines, "image.cpp" );
      Image->data.rgb8_lines = 0;
    }
  }
  return;
}
}
}
#if 0
#endif
