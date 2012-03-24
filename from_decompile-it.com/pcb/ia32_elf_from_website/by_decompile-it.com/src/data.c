#include "data.c.h"
CrosshairType Crosshair;
MarkType Marked;
OutputType Output;
PCBTypePtr PCB;
char *Progname;
SettingType Settings;
int LayerStack[16];
BufferType Buffers[5];
LibraryType Library;
Boolean Bumped;
Boolean render;
LocationType Xorig;
LocationType Yorig;
int addedLines;
LocationType vxl;
LocationType vxh;
LocationType vyl;
LocationType vyh;
BoxType theScreen;
BoxType clipBox;
double Zoom_Multiplier = 0.010000000000;
#if 0
#endif
