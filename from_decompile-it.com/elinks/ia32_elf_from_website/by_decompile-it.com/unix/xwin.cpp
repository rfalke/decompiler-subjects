#include "xwin.cpp.h"
using namespace std;
using namespace __debug;
using namespace pov_base;
using namespace pov;
using namespace pov_frontend;
void XWIN_init_povray( int *argc, char ***argv )
{
  int eax;
  int ecx;
  int edx;
  int ebp_48;
#error unstructured control flow
}
void XWIN_finish_povray( void )
{
  int ecx;
{
  int i;
  if ( theDisplay )
  {
    if ( theImage )
    {
      if ( theImage->data )
      {
        pov_free( (void*)theImage->data, "xwin.cpp", 788 );
        theImage->data = 0;
      }
      ;
    }
    else
    {
      XDestroyWindow( &theDisplay, theWindow );
      if ( theColormap )
      {
        XFreeColormap( &theDisplay, theColormap );
      }
      theMaxCell = 1;
      if ( theGC )
      {
        XFreeGC( &theDisplay, &theGC );
      }
      XCloseDisplay( &theDisplay );
      theDisplay = 0;
    }
  }
  if ( theErrors[0] )
  {
    pov_free( (void*)theErrors[0], "xwin.cpp", 814 );
    theErrors[0] = 0;
  }
  if ( theErrors[1] )
  {
    pov_free( (void*)theErrors[1], "xwin.cpp", 814 );
    theErrors[1] = 0;
  }
  if ( theErrors[2] )
  {
    pov_free( (void*)theErrors[2], "xwin.cpp", 814 );
    theErrors[2] = 0;
  }
  if ( theColorCube )
  {
    pov_free( (void*)theColorCube, "xwin.cpp", 821 );
    theColorCube = 0;
  }
  if ( theColors )
  {
    pov_free( (void*)theColors, "xwin.cpp", 827 );
    theColors = 0;
  }
  if ( nargv )
  {
    if ( nargc >= 1 )
    {
      i = 0;
      do
      {
        if ( nargv[ i ] )
        {
          pov_free( (void*)nargv[ i ], "xwin.cpp", 836 );
          nargv[ i ] = 0;
          nargc = nargc;
        }
        i++;
      }
      while ( nargc <= i + 1 );
    }
    pov_free( (void*)&nargv, "xwin.cpp", 838 );
    nargv = 0;
  }
  if ( theTitle )
  {
    pov_free( (void*)theTitle, "xwin.cpp", 842 );
    theTitle = 0;
  }
  if ( theCustomTitle )
  {
    pov_free( (void*)theCustomTitle, "xwin.cpp", 845 );
    theCustomTitle = 0;
  }
  if ( theName )
  {
    pov_free( (void*)theName, "xwin.cpp", 848 );
    theName = 0;
  }
  if ( theDisplayName )
  {
    pov_free( (void*)theDisplayName, "xwin.cpp", 851 );
    theDisplayName = 0;
  }
  if ( theBackground )
  {
    Destroy_Image( theBackground );
  }
  theBackground = 0;
  return;
}
}
int XWIN_display_init( int width, int height )
{
  int eax;
  int ecx;
  int edx;
  int dh;
  int ebp_280;
  int ebp_276;
{
  static struct Visual *theVisual;
  static unsigned int theDepth;
  static struct XSetWindowAttributes theWindowAttributes;
  static unsigned long theWindowMask;
  static struct XSizeHints theSizeHints;
  static Pixmap theIcon;
  static Pixmap theMask;
  static struct XWMHints theWMHints;
  static struct XClassHint theClassHints;
  static struct XGCValues theGCValues;
  static int theDispWidth, theDispHeight;
  static long i;
  static size_t size;
  static char *home;
  static char *bg_filename;
  static Pixmap bg_pixmap;
  static int xpm_status;
  static struct XpmAttributes xpm_attributes;
  if ( *(char*)(135854464) == 0 && __cxa_guard_acquire( 135854464 ) )
  {
    home = getenv( "HOME" );
    __cxa_guard_release( 135854464 );
  }
  if ( theDisplay == 0 && theCLASS[0] )
  {
    theDisplay = XOpenDisplay( theDisplayName );
    if ( theDisplay == 0 )
    {
      if ( *(char*)(XDisplayName( theDisplayName )) == 0 )
      {
        Error( "\nDISPLAY variable is not set, and you are not specifying\na display on the command-line with -display." );
      }
      else
      {
        Error( "\nThe display '%s' is not a valid display,\nor you do not have permission to open a window there." );
      }
    }
    XSetErrorHandler( &HandleXError );
    XSetIOErrorHandler( &HandleXIOError );
    theScreen = theDisplay;
    theDispWidth = theDisplay;
    theDispHeight = theDisplay;
    theVisual = theDisplay;
    if ( XGetVisualInfo( &theDisplay, 1, ebp_80, ebp_28 ) == 0 )
    {
      Error( "\nError obtaining X visual info for %s.\n" );
    }
    if ( XGetVisualInfo( &theDisplay, 2, ebp_80, ebp_28 ) == 0 )
    {
      Error( "\nError obtaining X visual info for %s.\n" );
    }
    theDepth = 0;
    if ( ( ( theParameters/*.1_1of4*/ & 1 ) & 255 ) == 0 )
      ebp_276 = ebp_288;
    else
    {
      ebp_280 = ebp_28;
      if ( ebp_28 >= 1 )
      {
        ebp_276 = XGetVisualInfo( &theDisplay, 1, ebp_80, ebp_28 );
        *ebp_284 = XGetVisualInfo( &theDisplay, 2, ebp_80, ebp_28 );
        while ( 1 )
        {
          if ( edi != *(int*)(edx + 16) )
          {
          }
          else
          if ( eax < *(int*)(edx + 12) )
          {
          }
          else
          {
          }
          if ( ebp_280 == 0 + 1 + 1 )
          {
            theDepth = &ebx;
            if ( eax )
              ebp_280 = theScreen;
              theDepth = *(int*)(ebp_276 + 12);
              theVisual = *ebp_276;
              if ( theDisplay != ebp_280 )
                theParameters |= 512;
              theCells = *(int*)(ebp_276 + 32);
              theClass = *(int*)(ebp_276 + 16);
              theParameters |= 1;
              if ( *(int*)(ebp_276 + 16) - 4 <= 1 )
              {
                theColorShift[0] = 0;
                if ( *(int*)(ebp_276 + 20) & 1 )
                {
                }
                else
                {
                  for ( ; ( ( ( *(int*)(ebp_276 + 20) >> 1 ) >> 1 ) & 1 ) == 0; ecx = theIcon + 1 )
                  {
                    //ecx = theIcon + 1;
                  }
                  theColorShift[0] = edx;
                  *(int*)(*(int*)(ebp_276 + 20)) = *(int*)(ebp_276 + 20);
                }
                theColorSize[0] = 1 + ( *(int*)(ebp_276 + 20) >> ( 0 & 31 ) );
                theColorShift[1] = 0;
                if ( *(int*)(ebp_276 + 24) & 1 )
                {
                }
                else
                {
                  for ( ; ( ( ( *(int*)(ebp_276 + 24) >> 1 ) >> 1 ) & 1 ) == 0; ecx = 0 + 1 )
                  {
                    //ecx = 0 + 1;
                  }
                  theColorShift[1] = edx;
                  *(int*)(*(int*)(ebp_276 + 24)) = *(int*)(ebp_276 + 24);
                }
                theColorSize[1] = 1 + ( *(int*)(ebp_276 + 24) >> ( 0 & 31 ) );
                theColorShift[2] = 0;
                if ( *(int*)(ebp_276 + 28) & 1 )
                {
                }
                else
                {
                  for ( ; ( ( ( *(int*)(ebp_276 + 28) >> 1 ) >> 1 ) & 1 ) == 0; ecx = 0 + 1 )
                  {
                    //ecx = 0 + 1;
                  }
                  theColorShift[2] = edx;
                  *(int*)(*(int*)(ebp_276 + 28)) = *(int*)(ebp_276 + 28);
                }
                theColorSize[2] = 1 + ( *(int*)(ebp_276 + 28) >> ( 0 & 31 ) );
                if ( theColorShift[0] == 0 )
                {
                  if ( theColorSize[0] != 256 )
                  {
                  }
                }
                else
                {
                  if ( theColorShift[1] == 8 )
                  {
                    if ( theColorSize[1] == 256 )
                    {
                      if ( theColorShift[2] == 16 )
                      {
                        if ( theColorSize[2] != 256 )
                        {
                        }
                      }
                      else
                      if ( theColorShift[2] )
                      {
                      }
                      else
                      if ( theColorSize[2] != 256 )
                      {
                      }
                      else
                      {
                        fastbig = 0;
                        fastlittle = 0;
                        if ( theColorSize[2] * theColorSize[1] * theColorSize[0] > 1 )
                        {
                          do
                          {
                          }
                          while ( ( ( ( theColorSize[2] * theColorSize[1] * theColorSize[0] ) >> 1 ) >> 1 ) > 1 );
                        }
                        else
                        {
                        }
                      }
                      fastbig = 0;
                      fastlittle = 0;
                    }
                    else
                    if ( 1 )
                    {
                    }
                  }
                }
              }
              Debug_Info( "Using " );
              switch ( theClass )
              {
              case 4:
                Debug_Info( "%d bit TrueColor" );
                Debug_Info( " visual\n" );
                XFree( ebp_288 );
                XFree( ebp_284 );
                if ( theDisplay )
                {
                  switch ( theClass )
                  {
                  default:
                    break;
                  case 3:
                    ebp_276 = theCells;
                    theColorSize[0] = eax;
                    theColorSize[1] = esi;
                    theColorSize[2] = ecx;
                    theMaxCell = edi;
                    if ( opts.PaletteOption == 'G' )
                    {
                      GetBestGraymap( theVisual[0] );
                      theDisplay = theDisplay;
                    }
                    else
                    {
                      if ( theColors == 0 )
                      {
                        theColors = (struct XColor*)pov_calloc( theCells, 12, "xwin.cpp", 2937, "X local colormap" );
                        theCells = theCells;
                        for ( ; theColors != theCells; theColors->pixel = 0 + 1 )
                        {
                          theColors = 0;
                          //theColors->pixel = 0 + 1;
                        }
                        theColorCube = (struct XColor*)pov_calloc( 4096, 12, "xwin.cpp", 2943, "X color cube" );
                      }
                      if ( ( ( theParameters/*.2_2of4*/ & 2 ) & 255 ) == 0 )
                      {
                        theColormap = theDisplay;
                        if ( theDisplay == theScreen )
                        {
                          Error( "\nUnable to get default X colormap.\n" );
                        }
                      }
                      else
                      {
                        if ( theColormap == 0 )
                        {
                          theColormap = XCreateColormap( &theDisplay, theDisplay, &theScreen, theVisual );
                          if ( theColormap )
                            theDisplay = theDisplay;
                          else
                          {
                            Error( "\nUnable to get private X colormap.\n" );
                            theDisplay = theDisplay;
                          }
                        }
                        theMaxCell = ( ( theCells + 1 ) * 7 ) >> 3;
                        XQueryColors( &theDisplay, theDisplay, &theScreen, theColors );
                        XStoreColors( &theDisplay, theColormap, theColors, theCells - ( theColorSize[2] * theColorSize[1] * theColorSize[0] ) );
                      }
                      theMaxDist = ( ( (long long)12288 / ( theColorSize[1] - 1 ) ) * ( (long long)12288 / ( theColorSize[1] - 1 ) ) ) + ( ( (long long)12288 / ( theColorSize[0] - 1 ) ) * ( (long long)12288 / ( theColorSize[0] - 1 ) ) ) + ( ( (long long)12288 / ( theColorSize[2] - 1 ) ) * ( (long long)12288 / ( theColorSize[2] - 1 ) ) );
                      ebp_276 = 15;
                      while ( 1 )
                      {
                        if ( ebp_276 != 15 )
                        {
                          GetBestIndex( 65535, 0, 0, theColorCube + 46080 );
                          GetBestIndex( 65535, 0, 65535, theColorCube + 180 );
                          GetBestIndex( 65535, 65535, 0, theColorCube + 2880 );
                          GetBestIndex( 65535, 65535, 65535, theColorCube + 3060 );
                          if ( ebp_276 > 15 )
                          {
                            GetBestIndex( 32768, 32768, 32768, &theColorCube[2184] );
                            theDisplay = theDisplay;
                          }
                        }
                        else
                        {
                          GetBestIndex( 0, 0, 0, &eax[0] );
                          GetBestIndex( 0, 0, 65535, theColorCube + 180 );
                          GetBestIndex( 0, 65535, 0, theColorCube + 2880 );
                          GetBestIndex( 0, 65535, 65535, theColorCube + 3060 );
                        }
                        ebp_276 += 15;
                      }
                    }
                    break;
                  case 2:
                    theColormap = XCreateColormap( &theDisplay, theDisplay, &theScreen, theVisual );
                    theMaxCell = theCells;
                    theMaxDist = 2147483647;
                    theColors = (struct XColor*)pov_calloc( theCells, 12, "xwin.cpp", 2804, "X local colormap" );
                    if ( theCells )
                    {
                      do
                      {
                        theColors[ 0 ].pixel = 0;
                      }
                      while ( 0 + 1 + 1 < theCells );
                    }
                    theColorCube = (struct XColor*)pov_calloc( 4096, 12, "xwin.cpp", 2809, "X color cube" );
                    theDisplay = theDisplay;
                    break;
                  case 1:
                    switch ( theCells )
                    {
                      break;
                    case 729:
                    case 730:
                    case 731:
                    case 732:
                    case 733:
                    case 734:
                    case 735:
                    case 736:
                    case 737:
                    case 738:
                    case 739:
                    case 740:
                    case 741:
                    case 742:
                    case 743:
                    case 744:
                    case 745:
                    case 746:
                    case 747:
                    case 748:
                    case 749:
                    case 750:
                    case 751:
                    case 752:
                    case 753:
                    case 754:
                    case 755:
                    case 756:
                    case 757:
                    case 758:
                    case 759:
                    case 760:
                    case 761:
                    case 762:
                    case 763:
                    case 764:
                    case 765:
                    case 766:
                    case 767:
                    case 768:
                    case 769:
                    case 770:
                    case 771:
                    case 772:
                    case 773:
                    case 774:
                    case 775:
                    case 776:
                    case 777:
                    case 778:
                    case 779:
                    case 780:
                    case 781:
                    case 782:
                    case 783:
                    case 784:
                    case 785:
                    case 786:
                    case 787:
                    case 788:
                    case 789:
                    case 790:
                    case 791:
                    case 792:
                    case 793:
                    case 794:
                    case 795:
                    case 796:
                    case 797:
                    case 798:
                    case 799:
                    case 800:
                    case 801:
                    case 802:
                    case 803:
                    case 804:
                    case 805:
                    case 806:
                    case 807:
                    case 808:
                    case 809:
                    case 810:
                    case 811:
                    case 812:
                    case 813:
                    case 814:
                    case 815:
                    case 816:
                    case 817:
                    case 818:
                    case 819:
                    case 820:
                    case 821:
                    case 822:
                    case 823:
                    case 824:
                    case 825:
                    case 826:
                    case 827:
                    case 828:
                    case 829:
                    case 830:
                    case 831:
                    case 832:
                    case 833:
                    case 834:
                    case 835:
                    case 836:
                    case 837:
                    case 838:
                    case 839:
                    case 840:
                    case 841:
                    case 842:
                    case 843:
                    case 844:
                    case 845:
                    case 846:
                    case 847:
                    case 848:
                    case 849:
                    case 850:
                    case 851:
                    case 852:
                    case 853:
                    case 854:
                    case 855:
                    case 856:
                    case 857:
                    case 858:
                    case 859:
                    case 860:
                    case 861:
                    case 862:
                    case 863:
                    case 864:
                    case 865:
                    case 866:
                    case 867:
                    case 868:
                    case 869:
                    case 870:
                    case 871:
                    case 872:
                    case 873:
                    case 874:
                    case 875:
                    case 876:
                    case 877:
                    case 878:
                    case 879:
                    case 880:
                    case 881:
                    case 882:
                    case 883:
                    case 884:
                    case 885:
                    case 886:
                    case 887:
                    case 888:
                    case 889:
                    case 890:
                    case 891:
                    case 892:
                    case 893:
                    case 894:
                    case 895:
                    case 896:
                    case 897:
                    case 898:
                    case 899:
                    case 900:
                    case 901:
                    case 902:
                    case 903:
                    case 904:
                    case 905:
                    case 906:
                    case 907:
                    case 908:
                    case 909:
                    case 910:
                    case 911:
                    case 912:
                    case 913:
                    case 914:
                    case 915:
                    case 916:
                    case 917:
                    case 918:
                    case 919:
                    case 920:
                    case 921:
                    case 922:
                    case 923:
                    case 924:
                    case 925:
                    case 926:
                    case 927:
                    case 928:
                    case 929:
                    case 930:
                    case 931:
                    case 932:
                    case 933:
                    case 934:
                    case 935:
                    case 936:
                    case 937:
                    case 938:
                    case 939:
                    case 940:
                    case 941:
                    case 942:
                    case 943:
                    case 944:
                    case 945:
                    case 946:
                    case 947:
                    case 948:
                    case 949:
                    case 950:
                    case 951:
                    case 952:
                    case 953:
                    case 954:
                    case 955:
                    case 956:
                    case 957:
                    case 958:
                    case 959:
                    case 960:
                    case 961:
                    case 962:
                    case 963:
                    case 964:
                    case 965:
                    case 966:
                    case 967:
                    case 968:
                    case 969:
                    case 970:
                    case 971:
                    case 972:
                    case 973:
                    case 974:
                    case 975:
                    case 976:
                    case 977:
                    case 978:
                    case 979:
                    case 980:
                    case 981:
                    case 982:
                    case 983:
                    case 984:
                    case 985:
                    case 986:
                    case 987:
                    case 988:
                    case 989:
                    case 990:
                    case 991:
                    case 992:
                    case 993:
                    case 994:
                    case 995:
                    case 996:
                    case 997:
                    case 998:
                    case 999:
                      break;
                      break;
                      break;
                      break;
                      break;
                      break;
                    default:
                      break;
                      theColorSize[0] = 2;
                      theColorSize[1] = 2;
                      theColorSize[2] = 2;
                      theMaxCell = 8;
                      GetBestGraymap( theVisual[0] );
                      theDisplay = theDisplay;
                      break;
                    }
                    theColorSize[0] = 10;
                    theColorSize[1] = 9;
                    theColorSize[2] = 9;
                    theMaxCell = 8;
                    GetBestGraymap( theVisual[0] );
                    theDisplay = theDisplay;
                    break;
                  case 0:
                    theColormap = XCreateColormap( &theDisplay, theDisplay, &theScreen, theVisual );
                    theMaxCell = theCells;
                    theMaxDist = 2147483647;
                    theColors = (struct XColor*)pov_calloc( theCells, 12, "xwin.cpp", 2853, "X local colormap" );
                    if ( theCells )
                    {
                      do
                      {
                        theColors[ 0 ].pixel = 0;
                      }
                      while ( 0 + 1 + 1 < theCells );
                    }
                    theColorCube = (struct XColor*)pov_calloc( 1024, 12, "xwin.cpp", 2858, "X gray ramp" );
                    theDisplay = theDisplay;
                    break;
                  case 4:
                    theColormap = XCreateColormap( &theDisplay, theDisplay, &theScreen, theVisual );
                    theDisplay = theDisplay;
                    break;
                  case 5:
                    theColormap = XCreateColormap( &theDisplay, theDisplay, &theScreen, theVisual );
                    ebp_276 = theColorSize[2];
                    if ( theCells )
                    {
                      ebp_276 = 0;
                      ebp_280 = 0;
                      while ( 1 )
                      {
                        XAllocColor( &theDisplay, theColormap, ebp_40 );
                        ebp_280++;
                        ebp_276 += 65535;
                        if ( theCells <= ebp_280 )
                          goto B412;
                        else
                        {
                        }
                      }
                    }
B412:                    theDisplay = theDisplay;
                    break;
                  }
                  GetBestGraymap( theVisual[0] );
                  theDisplay = theDisplay;
                }
                theWindowAttributes.backing_store = 1;
                ebp_280 = theScreen;
                theWindowAttributes.background_pixel = theDisplay;
                theWindowAttributes.border_pixel = theDisplay;
                theWindowAttributes.colormap = theColormap;
                theWindowAttributes.event_mask = 32768;
                theWindowMask = 10312;
                if ( ( (unsigned char)( theParameters ) & 16 ) & 255 )
                {
                  if ( ( ( theParameters & 64 ) & 255 ) == 0 )
                  {
                  }
                  else
                  {
                    theXVal = theDispWidth - Frame.Screen_Width - theXVal - theBorderWidth;
                    theParameters ^= 64;
                  }
                }
                else
                  theXVal = ( ( theDispWidth - Frame.Screen_Width ) / 2 ) - theBorderWidth;
                if ( theDispWidth - Frame.Screen_Width - theXVal - theBorderWidth < 0 )
                  theXVal = 0;
                theYVal = ( ( theDispHeight - Frame.Screen_Height ) / 2 ) - theBorderWidth;
                if ( ( ( theDispHeight - Frame.Screen_Height ) / 2 ) - theBorderWidth < 0 )
                  theYVal = 0;
                theWindow = XCreateWindow( &theDisplay, theDisplay, ebp_280, theXVal, 0, Frame.Screen_Width, Frame.Screen_Height, (int)theBorderWidth, theDepth, 1, theVisual, &theWindowMask );
                theSizeHints.max_aspect.x = Frame.Screen_Width;
                theSizeHints.min_aspect.x = Frame.Screen_Width;
                theSizeHints.max_width = Frame.Screen_Width;
                theSizeHints.min_width = Frame.Screen_Width;
                theSizeHints.width = Frame.Screen_Width;
                theSizeHints.base_width = Frame.Screen_Width;
                theSizeHints.max_aspect.y = Frame.Screen_Height;
                theSizeHints.min_aspect.y = Frame.Screen_Height;
                theSizeHints.max_height = Frame.Screen_Height;
                theSizeHints.min_height = Frame.Screen_Height;
                theSizeHints.height = Frame.Screen_Height;
                theSizeHints.base_height = Frame.Screen_Height;
                theSizeHints.flags = 184;
                if ( ( (unsigned char)( theParameters ) & 12 ) & 255 )
                  theSizeHints.flags = 186;
                if ( ( theParameters & 48 ) == 0 )
                  theSizeHints.flags = theSizeHints.flags;
                else
                {
                  theSizeHints.x = theXVal;
                  theSizeHints.y = theYVal;
                }
                theSizeHints.flags |= 5;
                XSetWMNormalHints( &theDisplay, theWindow, &theSizeHints.flags );
                if ( theName == 0 )
                  'p' = "povray";
                theClassHints.res_name = "povray";
                theClassHints.res_class = theCLASS;
                XSetClassHint( &theDisplay, theWindow, theClassHints.res_name );
                if ( home )
                {
                  int save_Stage = Stage;
                  struct SSS files[7];
                  memcpy( files[0].ext, "É", 84 );
                  Stage = 4;
                  i = 0;
                  if ( files[0].ext == 0 )
                    bg_filename[0] = bg_filename;
                  else
                  {
                    do
                    {
                      bg_filename = UNIX_stradd( UNIX_stradd( home, "/.povray/3.6/background." ), files[ i ].ext );
                      pov_free( *ebp_328, "xwin.cpp", 1192 );
                      if ( File_Exist( bg_filename ) & 255 )
                      {
                        Debug_Info( "Reading background image from '%s'\n" );
                        theBackground = Create_Image(  );
                        *(int*)(Create_Image(  ) + 8) = files[ i ].type;
                        files[ i ].read( theBackground, bg_filename );
                        bg_filename[0] = bg_filename;
                      }
                      else
                      {
                        char *tmp;
                        if ( bg_filename )
                        {
                          pov_free( (void*)bg_filename, "xwin.cpp", 1203 );
                          bg_filename = 0;
                        }
                        i++;
                      }
                    }
                    while ( files[ i + 1 ].ext == 0 );
                    Stage = save_Stage;
                  }
                  if ( Create_Image(  ) )
                  {
                    pov_free( (void*)Create_Image(  ), "xwin.cpp", 1206 );
                    bg_filename = 0;
                  }
                }
                if ( theBackground == 0 )
                {
                  Debug_Info( "Using default window background\n" );
                  i = 20000;
                  do
                  {
                    xpm_attributes.colormap = theColormap;
                    xpm_attributes.closeness = i + 20000;
                    xpm_attributes.valuemask = 4098;
                    xpm_status = XpmCreatePixmapFromData( &theDisplay, theWindow, xbgmap, &bg_pixmap, 0, &xpm_attributes.valuemask );
                    if ( xpm_status == 0 )
                      goto B116;
                    else
                    {
                      i += 20000;
                    }
                  }
                  while ( i + 20000 <= 65534 );
                }
B116:                i = i = 20000;
                do
                {
                  xpm_attributes.colormap = theColormap;
                  xpm_attributes.closeness = i + 20000;
                  xpm_attributes.valuemask = 4098;
                  xpm_status = XpmCreatePixmapFromData( &theDisplay, theWindow, xpovicon, &theIcon, &theMask, &xpm_attributes.valuemask );
                  if ( xpm_status == 0 )
                    goto B127;
                  else
                  {
                    i += 20000;
                  }
B127:                  theWMHints.icon_pixmap = theIcon;
                  theWMHints.input = 1;
                  theWMHints.initial_state = ( ( 0 - ( ( ( theParameters & 256 ) < 1 ) & 1 ) ) & -2 ) + 3;
                  theWMHints.flags = 39;
                  theWMHints.icon_mask = theMask;
                  XSetWMHints( &theDisplay, theWindow, &theWMHints.flags );
                  XSetIconName( &theDisplay, theWindow, "POV-Ray" );
                  if ( theDisplay )
                  {
                    if ( theTitle == 0 )
                    {
                      if ( ( __MOD("Persistence of Vision",4) ) == 0 )
                        goto B243;
                      else
                      {
                        if ( ( __MOD("Persistence of Vision",4) ) == 2 )
                          goto B245;
                        else
                        if ( edx < 2 )
                        {
                          if ( *(char*)(XCreateGC( &theDisplay, theWindow, 1281, &gcvalues.function ) + 1) )
                          {
                            *(int*)(XCreateGC( &theDisplay, theWindow, 1281, &gcvalues.function ) + 1)++;
                          }
                          else
                          {
                            do
                            {
                            }
                            while ( ( ( opts.Scene_Name[4] - 0x1010101 ) & ~opts.Scene_Name[4] & -2139062144 ) == 0 );
                            ecx <<= 1;
                            if ( Frame.Screen_Width < ( ( ( ( ( ( XCreateGC( &theDisplay, theWindow, 1281, &gcvalues.function ) + 1 ) - "Persistence of Vision" ) + ( ( opts.Scene_Name[0] + 4 + 2 ) - 3 - ( 0 & 1 ) - opts.Scene_Name[0] ) ) * 5 ) + 10 ) * 2 ) )
                            {
                              theTitle = (char*)eax;
                            }
                            else
                            {
                              theTitle = (char*)pov_malloc( XpmCreatePixmapFromData( &theDisplay, theWindow, xbgmap, &bg_pixmap, 0, &xpm_attributes.valuemask ) + 3, "xwin.cpp", 1514, "X Title" );
                            }
                            __sprintf_chk( (char*)eax, 1, -1, "%s: %s", ebp_328, ebp_328 );
                            theTitle[0] = theTitle;
                            theDisplay = theDisplay;
                          }
                        }
                        else
                        if ( 'P' )
                          *(int*)(esi + 1) = "Persistence of Vision" + 1;
B245:                        if ( 'P' )
                          'P' = "Persistence of Vision" + 1 + 1;
                      }
B243:                      do
                      {
B243:                      }
                      while ( ( ( 'P' - 0x1010101 ) & ~'P' & -2139062144 ) == 0 );
                      eax = eax - 3 - ( 0 & 1 );
                    }
                    XStoreName( &theDisplay, theWindow, theTitle );
                  }
                  if ( theIcon )
                  {
                    XFreePixmap( &theDisplay, theIcon );
                  }
                  if ( theMask )
                  {
                    XFreePixmap( &theDisplay, theMask );
                    theDisplay = theDisplay;
                  }
                  XSetCommand( &theDisplay, theWindow, oargv, oargc );
                  theGCValues.function = 3;
                  theGC = XCreateGC( &theDisplay, theWindow, 1, &theGCValues.function );
                  XSelectInput( &theDisplay, theWindow, 163853 );
                  WM_DELETE_WINDOW = XInternAtom( &theDisplay, "WM_DELETE_WINDOW", 0 );
                  WM_PROTOCOLS = XInternAtom( &theDisplay, "WM_PROTOCOLS", 0 );
                  XSetWMProtocols( &theDisplay, theWindow, &WM_DELETE_WINDOW, 1 );
                  theImage = XCreateImage( &theDisplay, theVisual, theDepth, 2, 0, 0, Frame.Screen_Width, Frame.Screen_Height, theDisplay, 0 );
                  size = Frame.Screen_Height * *(int*)(XCreateImage( &theDisplay, theVisual, theDepth, 2, 0, 0, Frame.Screen_Width, Frame.Screen_Height, theDisplay, 0 ) + 40);
                  theImage->data = (char*)pov_calloc( 1, theImage->bytes_per_line * Frame.Screen_Height, "xwin.cpp", 1349, "X image data" );
                  i = 0;
                  while ( 1 )
                  {
                    if ( fastlittle || fastbig )
                      theErrors[ pov_calloc( 1, theImage->bytes_per_line * Frame.Screen_Height, "xwin.cpp", 1349, "X image data" ) + 1 ] = 0;
                    else
                    {
                      theErrors[ pov_calloc( Frame.Screen_Width, 4, "xwin.cpp", 1363, "X dither buffer" ) + 1 ] = (int*)pov_calloc( Frame.Screen_Width, 4, "xwin.cpp", 1363, "X dither buffer" );
                      i = i;
                    }
                    i = eax + 1;
                    if ( 0 + 1 > 2 )
                    {
                      Debug_Info( "Mapping background image\n" );
                      if ( theBackground )
                      {
                        int x, y;
                        unsigned char r, g, b;
                        if ( Frame.Screen_Height >= 1 )
                        {
                          Frame.Screen_Width = Frame.Screen_Width;
                          y = 0;
                          x = x;
                          do
                          {
                            if ( Frame.Screen_Width >= 1 )
                            {
                              x = 0;
                              while ( 1 )
                              {
                                if ( theBackground->Colour_Map == 0 )
                                {
                                  if ( theBackground->Image_Type & 0x20000 )
                                  {
                                    if ( theBackground->Image_Type & 0x40000 )
                                    {
                                      r = (LOchar)( (short)( 0.003921568627 * (double)( *(short*)(*(int*)(*(int*)(theBackground + 104) + ( ( __MOD(y,theBackground->iheight) ) << 2 )) + ( ( __MOD(x,theBackground->iwidth) ) * 2 )) & 65535 ) ) );
                                      b = (LOchar)( (short)( 0.003921568627 * (double)( *(short*)(*(int*)(*(int*)(theBackground + 104) + ( ( __MOD(y,theBackground->iheight) ) << 2 )) + ( ( __MOD(x,theBackground->iwidth) ) * 2 )) & 65535 ) ) );
                                    }
                                    else
                                    {
                                    }
                                  }
                                  else
                                  {
                                  }
                                }
                                else
                                {
                                  r = theBackground->Colour_Map[ *(char*)(( __MOD(x,( (unsigned short)( (long long)65536 / theColorSize[1] ) * (unsigned short)( theColorSize[1] - 1 ) )) ) + *(int*)(*(int*)(theBackground + 104) + ( r << 2 ))) ].Red/*.1_1of2*/;
                                  b = g = g;
                                }
                                r = r = 0;
                                b = b = 0;
                                g = 0;
                                g = eax;
                                PlotPixel( x, y, b, b, r, 0 );
                                x++;
                                if ( Frame.Screen_Width <= x + 1 )
                                  Frame.Screen_Height = Frame.Screen_Height;
                                else
                                {
                                }
                              }
                            }
                            y++;
                          }
                          while ( Frame.Screen_Height <= y );
                        }
                        else
                          Frame.Screen_Width = Frame.Screen_Width;
                        XPutImage( &theDisplay, theWindow, &theGC, theImage, 0, 0, 0, 0, theBackground->Image_Type, Frame.Screen_Height );
                      }
                      else
                      if ( bg_pixmap )
                      {
                        GC gc;
                        struct XGCValues gcvalues;
                        Pixmap pix = XCreatePixmap( &theDisplay, theWindow, Frame.Screen_Width, Frame.Screen_Height, theDisplay );
                        gcvalues.function = 3;
                        gcvalues.tile = bg_pixmap;
                        gcvalues.fill_style = 1;
                        gc = XCreateGC( &theDisplay, theWindow, 1281, &gcvalues.function );
                        XFillRectangle( &theDisplay, pix, XCreateGC( &theDisplay, theWindow, 1281, &gcvalues.function ), 0, 0, Frame.Screen_Width, Frame.Screen_Height );
                        XGetSubImage( &theDisplay, pix, 0, 0, Frame.Screen_Width, Frame.Screen_Height, -1, 2, theImage, 0, 0 );
                        XPutImage( &theDisplay, theWindow, &theGC, theImage, 0, 0, 0, 0, Frame.Screen_Width, Frame.Screen_Height );
                        XSetWindowBackgroundPixmap( &theDisplay, theWindow, bg_pixmap );
                        XFreeGC( &theDisplay, &gc );
                        XFreePixmap( &theDisplay, pix );
                        XFreePixmap( &theDisplay, bg_pixmap );
                      }
                      else
                      {
                        XSetWindowBackground( &theDisplay, theWindow, theDisplay );
                      }
                      XMapWindow( &theDisplay, theWindow );
                      XFlush( &theDisplay );
                      break;
                    }
                    else
                    {
                    }
                  }
                }
                while ( i + 20000 <= 65534 );
B127:                theWMHints.icon_pixmap = theIcon;
                theWMHints.input = 1;
                theWMHints.initial_state = ( ( 0 - ( ( ( theParameters & 256 ) < 1 ) & 1 ) ) & -2 ) + 3;
                theWMHints.flags = 39;
                theWMHints.icon_mask = theMask;
                XSetWMHints( &theDisplay, theWindow, &theWMHints.flags );
                XSetIconName( &theDisplay, theWindow, "POV-Ray" );
                break;
              case 5:
                Debug_Info( "%d bit DirectColor" );
                break;
              case 3:
                Debug_Info( "%d color PseudoColor" );
                break;
              case 2:
                Debug_Info( "%d color StaticColor" );
                break;
              case 1:
                Debug_Info( "%d level GrayScale" );
                opts.PaletteOption = 'G';
                break;
              case 0:
                Debug_Info( "%d level StaticGray" );
                opts.PaletteOption = 'G';
                break;
              default:
                break;
              }
          }
          else
          {
            edx += 40;
          }
        }
      }
      else
        ebp_276 = ebp_288;
      Debug_Info( "Unable to get %s visual as requested\n" );
      if ( theDepth )
        ebp_280 = theScreen;
    }
    if ( ebp_28 >= 1 )
    {
      *ebp_284 = ebp_284;
      do
      {
        ecx += 40;
      }
      while ( ebp_28 != 0 + 1 + 1 );
    }
    else
    {
    }
    ebp_280 = theScreen;
    if ( theDisplay == theScreen )
    {
      theDepth = &ebx;
      if ( theDepth )
        continue;
    }
    if ( ebp_28 >= 1 )
    {
      *ebp_284 = ebp_284;
      while ( 1 )
      {
        if ( *(int*)(edx + 16) != 4 )
        {
        }
        else
        if ( esi < *(int*)(edx + 12) )
        {
        }
        else
        {
        }
        if ( ebp_28 == 0 + 1 + 1 )
        {
          theDepth = &ecx;
          if ( esi == 0 )
          {
            while ( 1 )
            {
              if ( *(int*)(ebx + 16) != 5 )
              {
              }
              else
              if ( edi < *(int*)(ebx + 12) )
              {
              }
              else
              {
              }
              if ( eax == esi + 1 )
              {
                theDepth = &edx;
                if ( edi == 0 )
                {
                  while ( 1 )
                  {
                    if ( *(int*)(ebx + 16) != 3 )
                    {
                    }
                    else
                    if ( edi < *(int*)(ebx + 12) )
                    {
                    }
                    else
                    {
                    }
                    if ( ebp_28 == 0 + 1 + 1 )
                    {
                      theDepth = &ecx;
                      if ( edi == 0 )
                      {
                        while ( 1 )
                        {
                          if ( *(int*)(ebx + 16) != 2 )
                          {
                          }
                          else
                          if ( edi < *(int*)(ebx + 12) )
                          {
                          }
                          else
                          {
                          }
                          if ( ebp_28 == 0 + 1 + 1 )
                          {
                            theDepth = &edx;
                            if ( edi == 0 )
                            {
                              *ebp_284 = ebp_284;
                              for ( ; ebp_28 != 0 + 1 + 1; ecx += 40 )
                              {
                                //ecx += 40;
                              }
                              theDepth = &esi;
                            }
                          }
                          else
                          {
                          }
                        }
                      }
                    }
                    else
                    {
                    }
                  }
                }
              }
              else
              {
              }
            }
          }
        }
        else
        {
          edx += 40;
        }
      }
    }
  }
  return 1;
}
}
void PlotPixel( int x, int y, unsigned char Red, unsigned char Green, unsigned char Blue, unsigned char Alpha )
{
{
  unsigned long thePixel;
  unsigned char r, g, b;
  unsigned int backColor;
  if ( theDisplay )
  {
    if ( ( Alpha & 255 ) && ( ( opts.Options/*.3_3of4*/ & 1 ) & 255 ) )
    {
      backColor = theBackground;
      if ( theBackground )
      {
        g = __MOD(y,theBackground->iheight);
        b = __MOD(x,theBackground->iwidth);
        if ( theBackground->Colour_Map == 0 )
        {
          if ( theBackground->Image_Type & 0x20000 )
          {
            if ( theBackground->Image_Type & 0x40000 )
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
        else
        {
          r = theBackground->Colour_Map[ *(char*)(backColor + g) ].Red/*.1_1of2*/;
          g = theBackground->Colour_Map[ *(char*)(backColor + g) ].Green/*.1_1of2*/;
          b = theBackground->Colour_Map[ *(char*)(backColor + g) ].Blue/*.1_1of2*/;
        }
        backColor = Alpha;
        Red = Red = 0;
        Green = Green = 0;
        Green = (/*HI*/int)( -2139062143 * ( ( backColor * g ) + ( ( 255 - Alpha ) * Green ) ) ) >> 7;
        Blue = Blue = 0;
      }
      else
      {
        Red = Red = 0;
        Blue = Blue = 0;
        Green = Green = 0;
        Green = (/*HI*/int)( -2139062143 * ( ( ( (unsigned char)( y ^ x ) & 8 ) & 255 ? Alpha * 192 : Alpha * 255 ) + ( ( 255 - Alpha ) * Green ) ) ) >> 7;
      }
    }
    if ( fastlittle )
    {
      Blue = 0;
      Blue = ebp_88;
    }
    else
    if ( fastbig )
    {
      Red = 0;
      Red = ebp_92;
      thePixel = ( ebp_88 << 16 ) | ( ecx << 8 ) | ebp_92;
    }
    else
    {
      struct XColor *theColor;
      long wantColor[3], gotColor[3];
      if ( theErrors[ x ] + ( ebp_92 << 8 ) > 65535 )
      {
        if ( 65535 >= 0 )
        {
          wantColor[0] = 65535;
          if ( theErrors[1][ x ] + ( Green << 8 ) > 65535 )
          {
            if ( 65535 >= 0 )
            {
              wantColor[1] = 65535;
              if ( ebp_104 > 65535 )
              {
                if ( 65535 >= 0 )
                {
                  wantColor[2] = 65535;
                  switch ( theClass )
                  {
                    break;
                  case 0:
                  case 1:
                  case 2:
                  case 3:
                    gotColor[0] = theColor->red & 65535;
                    gotColor[1] = theColor->green & 65535;
                    gotColor[2] = *(int*)(&eax->blue) & 65535;
                    break;
                  default:
                    break;
                  }
                {
                  static long drError[3];
                  if ( x >= 1 )
                  {
                    if ( ( 65535 + 8 ) - ( (long long)( ( ( 65535 * theColorSize[0] ) >> 16 ) << 16 ) / theColorSize[0] ) < 0 )
                    {
                    }
                    theErrors[ x ] = drError[0] + ( ( edx >> 4 ) * 5 );
                    if ( x < Frame.Screen_Width - 1 )
                    {
                      drError[0] = ebp_108;
                      theErrors[ x + 1 ] = *(int*)(ebp_104 + ebp_96) + ( ebp_108 * 7 );
                    }
                    else
                      drError[0] = 0;
                    if ( ( wantColor[1] + 8 ) - gotColor[1] < 0 )
                    {
                    }
                    *(int*)(( ( x << 2 ) - 4 ) + theErrors[1]) += ( ( ( ( ( wantColor[1] + 8 ) - gotColor[1] ) + 15 ) >> 4 ) * 3 ) / 4;
                    theErrors[1][ x ] = drError[1] + ( ( ( ( ( wantColor[1] + 8 ) - gotColor[1] ) + 15 ) >> 4 ) * 5 );
                    if ( x < Frame.Screen_Width - 1 )
                    {
                      drError[1] = ( ( ( wantColor[1] + 8 ) - gotColor[1] ) + 15 ) >> 4;
                      theErrors[1][ x + 1 ] = *(int*)(( ( x + 1 ) * 4 ) + theErrors[1]) + ( ( ( ( ( wantColor[1] + 8 ) - gotColor[1] ) + 15 ) >> 4 ) * 7 );
                    }
                    else
                      drError[1] = 0;
                    if ( ( 65535 + 8 ) - gotColor[2] < 0 )
                    {
                    }
                    *(int*)(( ( x << 2 ) - 4 ) + theErrors[2]) += ( ( ( ( ( 65535 + 8 ) - gotColor[2] ) + 15 ) >> 4 ) * 3 ) / 4;
                    theErrors[2][ x ] = drError[2] + ( ( ( ( ( 65535 + 8 ) - gotColor[2] ) + 15 ) >> 4 ) * 5 );
                    if ( x < Frame.Screen_Width - 1 )
                    {
                      drError[2] = ebp_96;
                      theErrors[2][ x + 1 ] = *(int*)(ebp_104 + ebp_88) + ( ebp_96 * 7 );
                    }
                  }
                  else
                  {
                    if ( ( 65535 + 8 ) - ( (long long)( ( ( 65535 * theColorSize[0] ) >> 16 ) << 16 ) / theColorSize[0] ) < 0 )
                    {
                    }
                    theErrors[ x ] = drError[0] + ( ( edx >> 4 ) * 5 );
                    if ( x < Frame.Screen_Width - 1 )
                    {
                      drError[0] = ebp_108;
                      theErrors[ x + 1 ] = *(int*)(ebp_104 + ebp_96) + ( ebp_108 * 7 );
                    }
                    else
                      drError[0] = 0;
                    if ( ( ebp_32 + 8 ) - ( (long long)( ( ( theColorSize[1] * wantColor[1] ) >> 16 ) << 16 ) / theColorSize[1] ) < 0 )
                    {
                    }
                    theErrors[1][ x ] = drError[1] + ( ( edx >> 4 ) * 5 );
                    if ( x < Frame.Screen_Width - 1 )
                    {
                      drError[1] = ( ( wantColor[1] + 8 ) - gotColor[1] ) >> 4;
                      theErrors[1][ x + 1 ] += ( ( ( wantColor[1] + 8 ) - gotColor[1] ) >> 4 ) * 7;
                    }
                    else
                      drError[1] = 0;
                    if ( ( 65535 + 8 ) - ( (long long)( ( ( 65535 * theColorSize[2] ) >> 16 ) << 16 ) / theColorSize[2] ) < 0 )
                    {
                    }
                    theErrors[2][ x ] = drError[2] + ( ( edx >> 4 ) * 5 );
                    if ( x < Frame.Screen_Width - 1 )
                    {
                      drError[2] = ebp_92;
                      theErrors[2][ x + 1 ] = *(int*)(ebp_104 + ecx) + ( ebp_92 * 7 );
                    }
                  }
                  drError[2] = 0;
                }
                }
              }
              else
              if ( ecx >= 0 )
                continue;
            }
          }
          else
          if ( theErrors[1][ x ] + ( Green << 8 ) >= 0 )
            continue;
        }
      }
      else
      if ( edx >= 0 )
        continue;
    }
    theImage->f.put_pixel( theImage, x, y, thePixel );
    if ( theMaxY < y )
      theMaxY = y;
    theCurrY = y;
  }
  return;
}
}
void XWIN_display_plot( int x, int y, unsigned int Red, unsigned int Green, unsigned int Blue, unsigned int Alpha )
{
  int eax;
  int ecx;
  int edx;
{
  static double lasttime, thistime, deltatime;
  if ( theDisplay )
  {
    Red = 0;
    Red/*.1_1of4*/ = Red/*.1_1of4*/;
    Alpha = 0;
    Alpha/*.1_1of4*/ = Alpha/*.1_1of4*/;
    Blue = 0;
    Blue/*.1_1of4*/ = Blue/*.1_1of4*/;
    Green = 0;
    Green/*.1_1of4*/ = Green/*.1_1of4*/;
    PlotPixel( x, y, Red/*.1_1of4*/, (int)Green/*.1_1of4*/, (int)Blue/*.1_1of4*/, (int)Alpha/*.1_1of4*/ );
    if ( ( x & -2147483617 ) >= 0 )
    {
      if ( ( x & -2147483617 ) == 31 )
        goto B7;
      else
      {
        if ( opts.Last_Column - 1 <= x || ( ( ah & 69 ) & 255 ) == 0 )
        {
          XPutImage( &theDisplay, theWindow, &theGC, theImage, 0, y, 0, y, x + 1, 1 );
          XFlush( &theDisplay );
          lasttime = thistime;
          deltatime = (long long)0;
        }
      }
    }
    else
    if ( ( ( ( x & -2147483617 ) - 1 ) | -32 ) + 1 != 31 )
      continue;
B7:    time( &tstop );
    thistime = (double)( tstop - tstart );
    deltatime = (double)( tstop - tstart ) - lasttime;
  }
  return;
}
}
void XWIN_display_plot_rect( int x1, int y1, int x2, int y2, unsigned int Red, unsigned int Green, unsigned int Blue, unsigned int Alpha )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  int ebp_32;
{
  static double lasttime, thistime;
  int i, j;
  if ( theDisplay )
  {
    if ( y1 <= y2 )
    {
      j = y1;
      do
      {
        if ( x1 <= x2 )
        {
          do
          {
            PlotPixel( (int)Green/*.1_1of4*/, (int)Blue/*.1_1of4*/, (int)Alpha/*.1_1of4*/, j, (int)Green/*.1_1of4*/, (int)Red/*.1_1of4*/ );
          }
          while ( x2 < ebp_32 );
        }
        j++;
      }
      while ( j <= y2 );
    }
    if ( fastlittle == 0 && fastbig == 0 )
    {
      if ( x2 < Frame.Screen_Width - 1 )
      {
        theErrors[0][ x2 + 1 ] /= ( y2 - y1 ) + 1;
        theErrors[1][ x2 + 1 ] /= ( y2 - y1 ) + 1;
        theErrors[2][ x2 + 1 ] /= ( y2 - y1 ) + 1;
      }
      if ( x1 >= 1 )
      {
        theErrors[0][ x1 - 1 ] /= ( y2 - y1 ) + 1;
        theErrors[1][ x1 - 1 ] /= ( y2 - y1 ) + 1;
        theErrors[2][ x1 - 1 ] /= ( y2 - y1 ) + 1;
      }
    }
    time( &tstop );
    thistime = (double)( tstop - tstart );
    if ( ( y2 - y1 ) + 1 > 8 )
    {
    }
    else
    {
      if ( opts.Last_Column - 1 <= x2 )
      {
      }
      else
      if ( ( ( ah & 69 ) & 255 ) == 0 )
        goto B21;
B21:    }
    XPutImage( &theDisplay, theWindow, &theGC, theImage );
    XFlush( &theDisplay );
    lasttime = thistime;
  }
  return;
}
}
void XWIN_display_plot_box( int x1, int y1, int x2, int y2, unsigned int Red, unsigned int Green, unsigned int Blue, unsigned int Alpha )
{
  int eax;
  int ecx;
  int edx;
  if ( theDisplay )
  {
    if ( fastlittle == 0 && fastbig == 0 )
    {
      if ( theClass > 3 )
        x1 = x1;
        Blue = y2 + ( 1 - y1 );
        Green = x2 + ( 1 - x1 );
        Red = y1;
        y2 = x1;
        x2 = theGC;
        y1 = theWindow;
        x1 = theDisplay;
      else
      {
        GetBestColor( Red << 8, Green << 8, ( Blue << 8 ) << 8 );
        theDisplay = theDisplay;
      }
    }
  }
  else
  {
    return;
  }
}
void XWIN_display_finished( void )
{
  if ( theDisplay && ( ( opts.Options & 8 ) & 255 ) )
  {
    bool finished;
    if ( opts.FrameSeq.FinalFrame <= opts.FrameSeq.FrameNumber )
    {
      __printf_chk( 1, "\nClick on window to exit...\n" );
      do
      {
      }
      while ( finished & 255 );
    }
    else
    {
      __printf_chk( 1, "\nClick on window to render next frame...\n" );
    }
  }
  return;
}
int XWIN_test_abort( void )
{
  if ( theDisplay == 0 )
  {
    return 0;
  }
  return HandleXEvents( 0 );
}
int HandleXError( Display *ErrorDisplay, struct XErrorEvent *ErrorEvent )
{
  int eax;
  int ecx;
{
  char message[130];
  XGetErrorText( &ErrorDisplay, ErrorEvent->error_code, message, 125 );
  Debug_Info( "X error: %s\n" );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return 1;
}
}
int HandleXIOError( Display *ErrorDisplay )
{
  int ecx;
  int edx;
  theDisplay = 0;
  Error( "\nFatal X Windows error on %s.\n" );
  return 1;
}
bool HandleXEvents( bool finished )
{
#error unstructured control flow
}
void XWIN_display_close( void )
{
  int ecx;
  if ( theErrors && ( Frame.Screen_Width << 2 ) >= 4 )
    memset( theErrors[0], 0, ( Frame.Screen_Width ) * 4 );
  if ( theErrors[1] && ( Frame.Screen_Width << 2 ) >= 4 )
    memset( theErrors[1], 0, ( Frame.Screen_Width ) * 4 );
  if ( theErrors[2] && ( Frame.Screen_Width << 2 ) >= 4 )
  {
    memset( theErrors[2], 0, ( Frame.Screen_Width ) * 4 );
  }
  theCurrY = 0;
  theMaxY = 0;
  return;
}
void GetBestGraymap( struct Visual *theVisual )
{
  if ( theDisplay )
  {
    if ( theColors == 0 )
    {
      int index;
      theColors = (struct XColor*)pov_calloc( theCells, 12, "xwin.cpp", 3031, "X local colormap" );
      if ( theCells )
      {
        index = 0;
        do
        {
          theColors[ 0 ].pixel = 0;
          index++;
        }
        while ( theCells != index + 1 );
      }
      theColorCube = (struct XColor*)pov_calloc( 1024, 12, "xwin.cpp", 3037, "X gray ramp" );
    }
    if ( ( ( theParameters/*.2_2of4*/ & 2 ) & 255 ) == 0 )
    {
      theColormap = theDisplay;
      if ( theDisplay == theScreen )
      {
        Error( "\nUnable to get default X colormap.\n" );
      }
    }
    else
    {
      int low_colors;
      if ( theColormap == 0 )
      {
        theColormap = XCreateColormap( &theDisplay, theDisplay, &theScreen, theVisual[0].ext_data );
        if ( theColormap )
        {
        }
        else
        {
          Error( "\nUnable to get private X colormap.\n" );
        }
      }
      theMaxCell = ( ( theCells + 1 ) * 7 ) >> 3;
      low_colors = theCells - ( theColorSize[2] * theColorSize[1] * theColorSize[0] );
      XQueryColors( &theDisplay, theDisplay, &theScreen, theColors );
      if ( theClass == 1 && low_colors >= 1 )
      {
        do
        {
          theColors->blue = ( ( ( *(short*)(theColors + 6) & 65535 ) * 599 ) + ( ( *(int*)(theColors + 4) & 65535 ) * 307 ) + ( ( *(int*)(theColors + 8) & 65535 ) * 118 ) ) >> 10;
          theColors->green = ( ( ( *(short*)(theColors + 6) & 65535 ) * 599 ) + ( ( *(int*)(theColors + 4) & 65535 ) * 307 ) + ( ( *(int*)(theColors + 8) & 65535 ) * 118 ) ) >> 10;
          theColors->red = ( ( ( *(short*)(theColors + 6) & 65535 ) * 599 ) + ( ( *(int*)(theColors + 4) & 65535 ) * 307 ) + ( ( *(int*)(theColors + 8) & 65535 ) * 118 ) ) >> 10;
        }
        while ( low_colors != 0 + 1 + 1 );
      }
      else
      {
        int index;
      }
      XStoreColors( &theDisplay, theColormap, theColors, low_colors );
    }
    theMaxDist = ( ( (long long)32768 / ( theMaxCell - 1 ) ) * ( (long long)32768 / ( theMaxCell - 1 ) ) ) * 3;
    GetBestIndex( 0, 0, 0, theColorCube );
    GetBestIndex( 65535, 65535, 65535, &theColorCube[1023] );
    GetBestIndex( 32768, 32768, 32768, &theColorCube[512] );
  }
  return;
}
void GetBestIndex( long r, long g, long b, struct XColor *theCell )
{
{
  static int numAlloc, count = 200;
  unsigned long bestDist;
  int bestIndex;
  int nCell;
  if ( theDisplay )
  {
    count++;
    if ( count > 20 )
    {
      if ( numAlloc == ( ( (/*HI*/int)( numAlloc * 0x66666667 ) >> 2 ) - ( numAlloc >> 31 ) ) * 10 )
      {
        XQueryColors( &theDisplay, theColormap, theColors );
        if ( theClass != 3 && ( theClass - 1 ) )
          numAlloc = theCells;
        else
        {
        }
        count = 0;
        if ( theCells )
        {
          nCell = 0;
          bestIndex = 0;
          bestDist = -1;
          for ( ; bestDist <= dist; bestDist = bestDist <= ( ( ( ( *(short*)(ebp_76 + ( theCells * 12 ) + 6) & 65535 ) - ebp_68 ) / 2 ) * ( ( ( *(short*)(ebp_76 + ( theCells * 12 ) + 6) & 65535 ) - ebp_68 ) / 2 ) ) + ( ( ( ( *(int*)(ebp_76 + ( theCells * 12 ) + 4) & 65535 ) - ebp_64 ) / 2 ) * ( ( ( *(int*)(ebp_76 + ( theCells * 12 ) + 4) & 65535 ) - ebp_64 ) / 2 ) ) + ( ( ( ( *(int*)(ebp_76 + ( theCells * 12 ) + 8) & 65535 ) - ebp_72 ) / 2 ) * ( ( ( *(int*)(ebp_76 + ( theCells * 12 ) + 8) & 65535 ) - ebp_72 ) / 2 ) ) ? bestDist : dist )
          {
            nCell++;
            if ( theCells == nCell + 1 )
            {
              if ( theMaxCell <= numAlloc || theMaxDist >= -1 )
              {
                if ( bestIndex < nCell + 1 )
                {
                  memcpy( theCell, *(int*)(0), 12 );
                  theCell->flags = 7;
                  break;
                }
                else
                if ( theMaxDist >= -1 )
                  memcpy( &want.pixel, &theColors[ 0 ].pixel, 12 );
                  want.flags = 7;
                  if ( theDisplay != theScreen )
                  {
                    XStoreColor( &theDisplay, theColormap, &want.pixel );
                  }
                  else
                  {
                    if ( XAllocColor( &theDisplay, theDisplay, &theScreen ) == 0 )
                    {
                    }
                  }
                  if ( theCells <= numAlloc )
                  {
                  }
                  else
                  {
                    if ( theColors[ numAlloc ].pixel != want.pixel )
                    {
                      struct XColor tmp;
                      do
                      {
                        if ( theCells <= numAlloc + 1 + 1 )
                        {
                        }
                        else
                      }
                      while ( theColors[ numAlloc + 1 ].XColor != want.pixel );
                    }
                    else
                    {
                    }
                    // memcpy( ebp_48, &theColors[ theDisplay ].pixel, 12 );
                    memcpy( &theColors[ theDisplay ].pixel, &want.pixel, 12 );
                    memcpy( &eax, ebp_48, 12 );
                    numAlloc = g;
                  }
              }
            {
              struct XColor want;
              want.red = r;
              want.green = g;
              want.blue = b;
              want.pixel = theCells - 1 - numAlloc;
              want.flags = 7;
            }
            }
            else
            {
              //bestDist = bestDist <= ( ( ( ( *(short*)(ebp_76 + ( theCells * 12 ) + 6) & 65535 ) - ebp_68 ) / 2 ) * ( ( ( *(short*)(ebp_76 + ( theCells * 12 ) + 6) & 65535 ) - ebp_68 ) / 2 ) ) + ( ( ( ( *(int*)(ebp_76 + ( theCells * 12 ) + 4) & 65535 ) - ebp_64 ) / 2 ) * ( ( ( *(int*)(ebp_76 + ( theCells * 12 ) + 4) & 65535 ) - ebp_64 ) / 2 ) ) + ( ( ( ( *(int*)(ebp_76 + ( theCells * 12 ) + 8) & 65535 ) - ebp_72 ) / 2 ) * ( ( ( *(int*)(ebp_76 + ( theCells * 12 ) + 8) & 65535 ) - ebp_72 ) / 2 ) ) ? bestDist : dist;
            }
          }
          bestIndex = nCell;
          nCell++;
        }
        else
        {
        }
      }
    }
    else
    {
    }
    if ( numAlloc < theCells )
    {
      if ( count + 1 > 200 )
      {
        XQueryColors( &theDisplay, theColormap, theColors );
      }
      else
      {
        nCell = 0;
        bestIndex = 0;
        bestDist = -1;
      }
    }
    else
    {
    }
  }
  return;
}
}
struct XColor *GetBestColor( long r, long g, long b )
{
  int eax;
  if ( theDisplay == 0 )
  {
    return 0;
  }
  if ( opts.PaletteOption == 'G' )
  {
    long gray;
    if ( ( g * 599 ) + ( r * 307 ) < 0 )
    {
    }
    gray = ( ( g * 599 ) + ( r * 307 ) + ( b * 118 ) + 1023 ) >> 10;
    if ( ( ( ( g * 599 ) + ( r * 307 ) + ( b * 118 ) + 1023 ) >> 10 ) < 0 )
      *(int*)(esi + 63) = esi + 63;
    if ( theColorCube[ ( gray >> 6 ) >> 6 ].flags == 0 )
    {
      GetBestIndex( esi, esi, esi, &edi );
    }
  }
  else
  {
    if ( r >= 0 )
    {
      if ( g >= 0 )
      {
        if ( b < 0 )
          b = b + 4095;
        if ( theColorCube[ ( ( b + ( ( ( b + ( ( g + 4095 ) >> 12 ) ) << 4 ) >> 12 ) ) << 4 ) + ( ( b >> 12 ) >> 12 ) ].flags == 0 )
        {
          GetBestIndex( theColorCube[ ( ( ( gray >> 6 ) >> 6 ) * 12 ) + ( ( b >> 12 ) >> 12 ) ].pixel );
          return &theColorCube[ ( ( ( gray >> 6 ) >> 6 ) * 12 ) + ( ( b >> 12 ) >> 12 ) ];
        }
      }
    }
    else
    if ( g >= 0 )
    {
    }
    if ( b < 0 )
      b = b + 4095;
  }
  return &edi;
}
#if 0
#endif
