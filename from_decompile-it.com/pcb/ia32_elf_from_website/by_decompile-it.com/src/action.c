#include "action.c.h"
static PointType InsertedPoint;
static LayerTypePtr lastLayer;
static struct {
   PolygonTypePtr poly;
   LineType line;
} fake;
static struct {
   int X;
   int Y;
   Cardinal Buffer;
   Boolean Click;
   Boolean Moving;
   int Hit;
   void *ptr1;
   void *ptr2;
   void *ptr3;
} Note;
static Cardinal polyIndex;
static Boolean IgnoreMotionEvents;
static Boolean saved_mode;
static FunctionType Functions[115] = { { "AddSelected", 0 }
, { "All", 1 }
, { "AllConnections", 2 }
, { "AllRats", 3 }
, { "AllUnusedPins", 4 }
, { "Arc", 5 }
, { "Arrow", 6 }
, { "Block", 7 }
, { "Description", 8 }
, { "Cancel", 9 }
, { "Center", 10 }
, { "Clear", 11 }
, { "ClearAndRedraw", 12 }
, { "ClearList", 13 }
, { "Close", 14 }
, { "Connection", 15 }
, { "Convert", 16 }
, { "Copy", 17 }
, { "CycleClip", 18 }
, { "CycleCrosshair", 19 }
, { "DeleteRats", 20 }
, { "Drag", 21 }
, { "DrillReport", 22 }
, { "Element", 23 }
, { "ElementByName", 24 }
, { "ElementConnections", 25 }
, { "ElementToBuffer", 26 }
, { "Escape", 27 }
, { "Find", 28 }
, { "FlipElement", 29 }
, { "FoundPins", 30 }
, { "Grid", 31 }
, { "InsertPoint", 32 }
, { "Layer", 33 }
, { "Layout", 34 }
, { "LayoutAs", 35 }
, { "LayoutToBuffer", 36 }
, { "Line", 37 }
, { "LineSize", 38 }
, { "Lock", 39 }
, { "Mirror", 40 }
, { "Move", 41 }
, { "NameOnPCB", 42 }
, { "Netlist", 43 }
, { "None", 44 }
, { "Notify", 45 }
, { "Object", 46 }
, { "ObjectByName", 47 }
, { "PasteBuffer", 48 }
, { "PadByName", 49 }
, { "PinByName", 50 }
, { "PinOrPadName", 51 }
, { "Pinout", 52 }
, { "Polygon", 53 }
, { "PreviousPoint", 54 }
, { "RatsNest", 55 }
, { "Rectangle", 56 }
, { "Redraw", 57 }
, { "Release", 58 }
, { "Remove", 60 }
, { "RemoveSelected", 61 }
, { "Report", 62 }
, { "Reset", 63 }
, { "ResetLinesAndPolygons", 64 }
, { "ResetPinsViasAndPads", 65 }
, { "Restore", 66 }
, { "Revert", 59 }
, { "Rotate", 67 }
, { "Save", 68 }
, { "Scroll", 69 }
, { "Selected", 70 }
, { "SelectedArcs", 71 }
, { "SelectedElements", 72 }
, { "SelectedLines", 73 }
, { "SelectedNames", 74 }
, { "SelectedObjects", 75 }
, { "SelectedPins", 77 }
, { "SelectedPads", 76 }
, { "SelectedRats", 80 }
, { "SelectedTexts", 78 }
, { "SelectedVias", 79 }
, { "Stroke", 81 }
, { "Text", 82 }
, { "TextByName", 83 }
, { "TextScale", 84 }
, { "Thermal", 85 }
, { "ToLayout", 86 }
, { "Toggle45Degree", 87 }
, { "ToggleClearLine", 89 }
, { "ToggleFullPoly", 90 }
, { "ToggleGrid", 91 }
, { "ToggleMask", 93 }
, { "ToggleName", 94 }
, { "ToggleObject", 95 }
, { "ToggleRubberBandMode", 98 }
, { "ToggleStartDirection", 99 }
, { "ToggleSnapPin", 100 }
, { "ToggleThindraw", 101 }
, { "ToggleThindrawPoly", 104 }
, { "ToggleLockNames", 102 }
, { "ToggleOnlyNames", 103 }
, { "ToggleHideNames", 92 }
, { "ToggleCheckPlanes", 107 }
, { "ToggleLocalRef", 106 }
, { "ToggleOrthoMove", 105 }
, { "ToggleShowDRC", 96 }
, { "ToggleLiveRoute", 97 }
, { "ToggleAutoDRC", 88 }
, { "ToggleUniqueNames", 108 }
, { "Value", 111 }
, { "Via", 109 }
, { "ViaByName", 110 }
, { "ViaSize", 113 }
, { "ViaDrillingHole", 112 }
, { "Zoom", 114 }
 };
static char function_hash[257];
static int hash_initted;
static char atomic_syntax[33] = { 'A', 't', 'o', 'm', 'i', 'c', '(', 'S', 'a', 'v', 'e', '|', 'R', 'e', 's', 't', 'o', 'r', 'e', '|', 'C', 'l', 'o', 's', 'e', '|', 'B', 'l', 'o', 'c', 'k', ')' };
static char atomic_help[40] = { 'S', 'a', 'v', 'e', ' ', 'o', 'r', ' ', 'r', 'e', 's', 't', 'o', 'r', 'e', ' ', 't', 'h', 'e', ' ', 'u', 'n', 'd', 'o', ' ', 's', 'e', 'r', 'i', 'a', 'l', ' ', 'n', 'u', 'm', 'b', 'e', 'r', '.' };
static char drc_syntax[6] = { 'D', 'R', 'C', '(', ')' };
static char drc_help[22] = { 'I', 'n', 'v', 'o', 'k', 'e', ' ', 't', 'h', 'e', ' ', 'D', 'R', 'C', ' ', 'c', 'h', 'e', 'c', 'k', '.' };
static char dumplibrary_syntax[14] = { 'D', 'u', 'm', 'p', 'L', 'i', 'b', 'r', 'a', 'r', 'y', '(', ')' };
static char dumplibrary_help[46] = { 'D', 'i', 's', 'p', 'l', 'a', 'y', ' ', 't', 'h', 'e', ' ', 'e', 'n', 't', 'i', 'r', 'e', ' ', 'c', 'o', 'n', 't', 'e', 'n', 't', 's', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'l', 'i', 'b', 'r', 'a', 'r', 'i', 'e', 's', '.' };
static char flip_syntax[39] = { 'F', 'l', 'i', 'p', '(', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'E', 'l', 'e', 'm', 'e', 'n', 't', 's', ')' };
static char flip_help[51] = { 'F', 'l', 'i', 'p', ' ', 'a', 'n', ' ', 'e', 'l', 'e', 'm', 'e', 'n', 't', ' ', 't', 'o', ' ', 't', 'h', 'e', ' ', 'o', 'p', 'p', 'o', 's', 'i', 't', 'e', ' ', 's', 'i', 'd', 'e', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'b', 'o', 'a', 'r', 'd', '.' };
static char message_syntax[17] = { 'M', 'e', 's', 's', 'a', 'g', 'e', '(', 'm', 'e', 's', 's', 'a', 'g', 'e', ')' };
static char message_help[36] = { 'W', 'r', 'i', 't', 'e', 's', ' ', 'a', ' ', 'm', 'e', 's', 's', 'a', 'g', 'e', ' ', 't', 'o', ' ', 't', 'h', 'e', ' ', 'l', 'o', 'g', ' ', 'w', 'i', 'n', 'd', 'o', 'w', '.' };
static char setthermal_syntax[61] = { 'S', 'e', 't', 'T', 'h', 'e', 'r', 'm', 'a', 'l', '(', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'i', 'n', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'V', 'i', 'a', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', ',', ' ', 'S', 't', 'y', 'l', 'e', ')' };
static char setthermal_help[379] = { 'S', 'e', 't', ' ', 't', 'h', 'e', ' ', 't', 'h', 'e', 'r', 'm', 'a', 'l', ' ', '(', 'o', 'n', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'l', 'a', 'y', 'e', 'r', ')', ' ', 'o', 'f', ' ', 'p', 'i', 'n', 's', ' ', 'o', 'r', ' ', 'v', 'i', 'a', 's', ' ', 't', 'o', ' ', 't', 'h', 'e', ' ', 'g', 'i', 'v', 'e', 'n', ' ', 's', 't', 'y', 'l', 'e', '.', '\n', 'S', 't', 'y', 'l', 'e', ' ', '=', ' ', '0', ' ', 'm', 'e', 'a', 'n', 's', ' ', 'n', 'o', ' ', 't', 'h', 'e', 'r', 'm', 'a', 'l', '.', '\n', 'S', 't', 'y', 'l', 'e', ' ', '=', ' ', '1', ' ', 'h', 'a', 's', ' ', 'd', 'i', 'a', 'g', 'o', 'n', 'a', 'l', ' ', 'f', 'i', 'n', 'g', 'e', 'r', 's', ' ', 'w', 'i', 't', 'h', ' ', 's', 'h', 'a', 'r', 'p', ' ', 'e', 'd', 'g', 'e', 's', '.', '\n', 'S', 't', 'y', 'l', 'e', ' ', '=', ' ', '2', ' ', 'h', 'a', 's', ' ', 'h', 'o', 'r', 'i', 'z', 'o', 'n', 't', 'a', 'l', ' ', 'a', 'n', 'd', ' ', 'v', 'e', 'r', 't', 'i', 'c', 'a', 'l', ' ', 'f', 'i', 'n', 'g', 'e', 'r', 's', ' ', 'w', 'i', 't', 'h', ' ', 's', 'h', 'a', 'r', 'p', ' ', 'e', 'd', 'g', 'e', 's', '.', '\n', 'S', 't', 'y', 'l', 'e', ' ', '=', ' ', '3', ' ', 'i', 's', ' ', 'a', ' ', 's', 'o', 'l', 'i', 'd', ' ', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', ' ', 't', 'o', ' ', 't', 'h', 'e', ' ', 'p', 'l', 'a', 'n', 'e', '.', 'S', 't', 'y', 'l', 'e', ' ', '=', ' ', '4', ' ', 'h', 'a', 's', ' ', 'd', 'i', 'a', 'g', 'o', 'n', 'a', 'l', ' ', 'f', 'i', 'n', 'g', 'e', 'r', 's', ' ', 'w', 'i', 't', 'h', ' ', 'r', 'o', 'u', 'n', 'd', 'e', 'd', ' ', 'e', 'd', 'g', 'e', 's', '.', '\n', 'S', 't', 'y', 'l', 'e', ' ', '=', ' ', '5', ' ', 'h', 'a', 's', ' ', 'h', 'o', 'r', 'i', 'z', 'o', 'n', 't', 'a', 'l', ' ', 'a', 'n', 'd', ' ', 'v', 'e', 'r', 't', 'i', 'c', 'a', 'l', ' ', 'f', 'i', 'n', 'g', 'e', 'r', 's', ' ', 'w', 'i', 't', 'h', ' ', 'r', 'o', 'u', 'n', 'd', 'e', 'd', ' ', 'e', 'd', 'g', 'e', 's', '.', '\n' };
static char setvalue_syntax[79] = { 'S', 'e', 't', 'V', 'a', 'l', 'u', 'e', '(', 'G', 'r', 'i', 'd', '|', 'L', 'i', 'n', 'e', '|', 'L', 'i', 'n', 'e', 'S', 'i', 'z', 'e', '|', 'T', 'e', 'x', 't', '|', 'T', 'e', 'x', 't', 'S', 'c', 'a', 'l', 'e', '|', 'V', 'i', 'a', 'D', 'r', 'i', 'l', 'l', 'i', 'n', 'g', 'H', 'o', 'l', 'e', '|', 'V', 'i', 'a', '|', 'V', 'i', 'a', 'S', 'i', 'z', 'e', ',', ' ', 'd', 'e', 'l', 't', 'a', ')' };
static char setvalue_help[44] = { 'C', 'h', 'a', 'n', 'g', 'e', ' ', 'v', 'a', 'r', 'i', 'o', 'u', 's', ' ', 'b', 'o', 'a', 'r', 'd', '-', 'w', 'i', 'd', 'e', ' ', 'v', 'a', 'l', 'u', 'e', 's', ' ', 'a', 'n', 'd', ' ', 's', 'i', 'z', 'e', 's', '.' };
static char quit_syntax[7] = { 'Q', 'u', 'i', 't', '(', ')' };
static char quit_help[40] = { 'Q', 'u', 'i', 't', 's', ' ', 't', 'h', 'e', ' ', 'a', 'p', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', ' ', 'a', 'f', 't', 'e', 'r', ' ', 'c', 'o', 'n', 'f', 'i', 'r', 'm', 'i', 'n', 'g', '.' };
static char connection_syntax[62] = { 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', '(', 'F', 'i', 'n', 'd', '|', 'R', 'e', 's', 'e', 't', 'L', 'i', 'n', 'e', 's', 'A', 'n', 'd', 'P', 'o', 'l', 'y', 'g', 'o', 'n', 's', '|', 'R', 'e', 's', 'e', 't', 'P', 'i', 'n', 's', 'A', 'n', 'd', 'V', 'i', 'a', 's', '|', 'R', 'e', 's', 'e', 't', ')' };
static char connection_help[59] = { 'S', 'e', 'a', 'r', 'c', 'h', 'e', 's', ' ', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 's', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'o', 'b', 'j', 'e', 'c', 't', ' ', 'a', 't', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 's', 'o', 'r', ' ', 'p', 'o', 's', 'i', 't', 'i', 'o', 'n', '.' };
static char disperseelements_syntax[31] = { 'D', 'i', 's', 'p', 'e', 'r', 's', 'e', 'E', 'l', 'e', 'm', 'e', 'n', 't', 's', '(', 'A', 'l', 'l', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', ')' };
static char disperseelements_help[20] = { 'D', 'i', 's', 'p', 'e', 'r', 's', 'e', 's', ' ', 'e', 'l', 'e', 'm', 'e', 'n', 't', 's', '.' };
static char display_syntax[493] = { 'D', 'i', 's', 'p', 'l', 'a', 'y', '(', 'N', 'a', 'm', 'e', 'O', 'n', 'P', 'C', 'B', '|', 'D', 'e', 's', 'c', 'r', 'i', 'p', 't', 'i', 'o', 'n', '|', 'V', 'a', 'l', 'u', 'e', ')', '\n', 'D', 'i', 's', 'p', 'l', 'a', 'y', '(', 'G', 'r', 'i', 'd', '|', 'R', 'e', 'd', 'r', 'a', 'w', ')', '\n', 'D', 'i', 's', 'p', 'l', 'a', 'y', '(', 'C', 'y', 'c', 'l', 'e', 'C', 'l', 'i', 'p', '|', 'C', 'y', 'c', 'l', 'e', 'C', 'r', 'o', 's', 's', 'h', 'a', 'i', 'r', '|', 'T', 'o', 'g', 'g', 'l', 'e', '4', '5', 'D', 'e', 'g', 'r', 'e', 'e', '|', 'T', 'o', 'g', 'g', 'l', 'e', 'S', 't', 'a', 'r', 't', 'D', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', ')', '\n', 'D', 'i', 's', 'p', 'l', 'a', 'y', '(', 'T', 'o', 'g', 'g', 'l', 'e', 'G', 'r', 'i', 'd', '|', 'T', 'o', 'g', 'g', 'l', 'e', 'R', 'u', 'b', 'b', 'e', 'r', 'B', 'a', 'n', 'd', 'M', 'o', 'd', 'e', '|', 'T', 'o', 'g', 'g', 'l', 'e', 'U', 'n', 'i', 'q', 'u', 'e', 'N', 'a', 'm', 'e', 's', ')', '\n', 'D', 'i', 's', 'p', 'l', 'a', 'y', '(', 'T', 'o', 'g', 'g', 'l', 'e', 'M', 'a', 's', 'k', '|', 'T', 'o', 'g', 'g', 'l', 'e', 'N', 'a', 'm', 'e', '|', 'T', 'o', 'g', 'g', 'l', 'e', 'C', 'l', 'e', 'a', 'r', 'L', 'i', 'n', 'e', '|', 'T', 'o', 'g', 'g', 'l', 'e', 'F', 'u', 'l', 'l', 'P', 'o', 'l', 'y', '|', 'T', 'o', 'g', 'g', 'l', 'e', 'S', 'n', 'a', 'p', 'P', 'i', 'n', ')', '\n', 'D', 'i', 's', 'p', 'l', 'a', 'y', '(', 'T', 'o', 'g', 'g', 'l', 'e', 'T', 'h', 'i', 'n', 'd', 'r', 'a', 'w', '|', 'T', 'o', 'g', 'g', 'l', 'e', 'T', 'h', 'i', 'n', 'd', 'r', 'a', 'w', 'P', 'o', 'l', 'y', '|', 'T', 'o', 'g', 'g', 'l', 'e', 'O', 'r', 't', 'h', 'o', 'M', 'o', 'v', 'e', '|', 'T', 'o', 'g', 'g', 'l', 'e', 'L', 'o', 'c', 'a', 'l', 'R', 'e', 'f', ')', '\n', 'D', 'i', 's', 'p', 'l', 'a', 'y', '(', 'T', 'o', 'g', 'g', 'l', 'e', 'C', 'h', 'e', 'c', 'k', 'P', 'l', 'a', 'n', 'e', 's', '|', 'T', 'o', 'g', 'g', 'l', 'e', 'S', 'h', 'o', 'w', 'D', 'R', 'C', '|', 'T', 'o', 'g', 'g', 'l', 'e', 'A', 'u', 't', 'o', 'D', 'R', 'C', ')', '\n', 'D', 'i', 's', 'p', 'l', 'a', 'y', '(', 'T', 'o', 'g', 'g', 'l', 'e', 'L', 'i', 'v', 'e', 'R', 'o', 'u', 't', 'e', '|', 'L', 'o', 'c', 'k', 'N', 'a', 'm', 'e', 's', '|', 'O', 'n', 'l', 'y', 'N', 'a', 'm', 'e', 's', ')', '\n', 'D', 'i', 's', 'p', 'l', 'a', 'y', '(', 'P', 'i', 'n', 'o', 'u', 't', '|', 'P', 'i', 'n', 'O', 'r', 'P', 'a', 'd', 'N', 'a', 'm', 'e', ')', '\n', 'D', 'i', 's', 'p', 'l', 'a', 'y', '(', 'S', 'c', 'r', 'o', 'l', 'l', ',', ' ', 'D', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', ')' };
static char display_help[33] = { 'S', 'e', 'v', 'e', 'r', 'a', 'l', ' ', 'd', 'i', 's', 'p', 'l', 'a', 'y', '-', 'r', 'e', 'l', 'a', 't', 'e', 'd', ' ', 'a', 'c', 't', 'i', 'o', 'n', 's', '.' };
static char mode_syntax[174] = { 'M', 'o', 'd', 'e', '(', 'A', 'r', 'c', '|', 'A', 'r', 'r', 'o', 'w', '|', 'C', 'o', 'p', 'y', '|', 'I', 'n', 's', 'e', 'r', 't', 'P', 'o', 'i', 'n', 't', '|', 'L', 'i', 'n', 'e', '|', 'L', 'o', 'c', 'k', '|', 'M', 'o', 'v', 'e', '|', 'N', 'o', 'n', 'e', '|', 'P', 'a', 's', 't', 'e', 'B', 'u', 'f', 'f', 'e', 'r', ')', '\n', 'M', 'o', 'd', 'e', '(', 'P', 'o', 'l', 'y', 'g', 'o', 'n', '|', 'R', 'e', 'c', 't', 'a', 'n', 'g', 'l', 'e', '|', 'R', 'e', 'm', 'o', 'v', 'e', '|', 'R', 'o', 't', 'a', 't', 'e', '|', 'T', 'e', 'x', 't', '|', 'T', 'h', 'e', 'r', 'm', 'a', 'l', '|', 'V', 'i', 'a', ')', '\n', 'M', 'o', 'd', 'e', '(', 'N', 'o', 't', 'i', 'f', 'y', '|', 'R', 'e', 'l', 'e', 'a', 's', 'e', '|', 'C', 'a', 'n', 'c', 'e', 'l', '|', 'S', 't', 'r', 'o', 'k', 'e', ')', '\n', 'M', 'o', 'd', 'e', '(', 'S', 'a', 'v', 'e', '|', 'R', 'e', 's', 't', 'o', 'r', 'e', ')' };
static char mode_help[29] = { 'C', 'h', 'a', 'n', 'g', 'e', ' ', 'o', 'r', ' ', 'u', 's', 'e', ' ', 't', 'h', 'e', ' ', 't', 'o', 'o', 'l', ' ', 'm', 'o', 'd', 'e', '.' };
static char removeselected_syntax[17] = { 'R', 'e', 'm', 'o', 'v', 'e', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', '(', ')' };
static char removeselected_help[30] = { 'R', 'e', 'm', 'o', 'v', 'e', 's', ' ', 'a', 'n', 'y', ' ', 's', 'e', 'l', 'e', 'c', 't', 'e', 'd', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', '.' };
static char renumber_syntax[30] = { 'R', 'e', 'n', 'u', 'm', 'b', 'e', 'r', '(', ')', '\n', 'R', 'e', 'n', 'u', 'm', 'b', 'e', 'r', '(', 'f', 'i', 'l', 'e', 'n', 'a', 'm', 'e', ')' };
static char renumber_help[123] = { 'R', 'e', 'n', 'u', 'm', 'b', 'e', 'r', ' ', 'a', 'l', 'l', ' ', 'e', 'l', 'e', 'm', 'e', 'n', 't', 's', '.', ' ', ' ', 'T', 'h', 'e', ' ', 'c', 'h', 'a', 'n', 'g', 'e', 's', ' ', 'w', 'i', 'l', 'l', ' ', 'b', 'e', ' ', 'r', 'e', 'c', 'o', 'r', 'd', 'e', 'd', ' ', 't', 'o', ' ', 'f', 'i', 'l', 'e', 'n', 'a', 'm', 'e', '\n', 'f', 'o', 'r', ' ', 'u', 's', 'e', ' ', 'i', 'n', ' ', 'b', 'a', 'c', 'k', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'n', 'g', ' ', 't', 'h', 'e', 's', 'e', ' ', 'c', 'h', 'a', 'n', 'g', 'e', 's', ' ', 't', 'o', ' ', 't', 'h', 'e', ' ', 's', 'c', 'h', 'e', 'm', 'a', 't', 'i', 'c', '.' };
static char ripup_syntax[28] = { 'R', 'i', 'p', 'U', 'p', '(', 'A', 'l', 'l', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', '|', 'E', 'l', 'e', 'm', 'e', 'n', 't', ')' };
static char ripup_help[58] = { 'R', 'i', 'p', 'u', 'p', ' ', 'a', 'u', 't', 'o', '-', 'r', 'o', 'u', 't', 'e', 'd', ' ', 't', 'r', 'a', 'c', 'k', 's', ',', ' ', 'o', 'r', ' ', 'c', 'o', 'n', 'v', 'e', 'r', 't', ' ', 'a', 'n', ' ', 'e', 'l', 'e', 'm', 'e', 'n', 't', ' ', 't', 'o', ' ', 'p', 'a', 'r', 't', 's', '.' };
static char addrats_syntax[36] = { 'A', 'd', 'd', 'R', 'a', 't', 's', '(', 'A', 'l', 'l', 'R', 'a', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'R', 'a', 't', 's', '|', 'C', 'l', 'o', 's', 'e', ')' };
static char addrats_help[40] = { 'A', 'd', 'd', ' ', 'o', 'n', 'e', ' ', 'o', 'r', ' ', 'm', 'o', 'r', 'e', ' ', 'r', 'a', 't', ' ', 'l', 'i', 'n', 'e', 's', ' ', 't', 'o', ' ', 't', 'h', 'e', ' ', 'b', 'o', 'a', 'r', 'd', '.' };
static char delete_syntax[53] = { 'D', 'e', 'l', 'e', 't', 'e', '(', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', ')', '\n', 'D', 'e', 'l', 'e', 't', 'e', '(', 'A', 'l', 'l', 'R', 'a', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'R', 'a', 't', 's', ')' };
static char delete_help[14] = { 'D', 'e', 'l', 'e', 't', 'e', ' ', 's', 't', 'u', 'f', 'f', '.' };
static char deleterats_syntax[42] = { 'D', 'e', 'l', 'e', 't', 'e', 'R', 'a', 't', 's', '(', 'A', 'l', 'l', 'R', 'a', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'R', 'a', 't', 's', ')' };
static char deleterats_help[18] = { 'D', 'e', 'l', 'e', 't', 'e', ' ', 'r', 'a', 't', ' ', 'l', 'i', 'n', 'e', 's', '.' };
static char autoplace_syntax[20] = { 'A', 'u', 't', 'o', 'P', 'l', 'a', 'c', 'e', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', '(', ')' };
static char autoplace_help[32] = { 'A', 'u', 't', 'o', '-', 'p', 'l', 'a', 'c', 'e', ' ', 's', 'e', 'l', 'e', 'c', 't', 'e', 'd', ' ', 'c', 'o', 'm', 'p', 'o', 'n', 'e', 'n', 't', 's', '.' };
static char autoroute_syntax[32] = { 'A', 'u', 't', 'o', 'R', 'o', 'u', 't', 'e', '(', 'A', 'l', 'l', 'R', 'a', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'R', 'a', 't', 's', ')' };
static char autoroute_help[34] = { 'A', 'u', 't', 'o', '-', 'r', 'o', 'u', 't', 'e', ' ', 's', 'o', 'm', 'e', ' ', 'o', 'r', ' ', 'a', 'l', 'l', ' ', 'r', 'a', 't', ' ', 'l', 'i', 'n', 'e', 's', '.' };
static char markcrosshair_syntax[38] = { 'M', 'a', 'r', 'k', 'C', 'r', 'o', 's', 's', 'h', 'a', 'i', 'r', '(', ')', '\n', 'M', 'a', 'r', 'k', 'C', 'r', 'o', 's', 's', 'h', 'a', 'i', 'r', '(', 'C', 'e', 'n', 't', 'e', 'r', ')' };
static char markcrosshair_help[29] = { 'S', 'e', 't', '/', 'R', 'e', 's', 'e', 't', ' ', 't', 'h', 'e', ' ', 'C', 'r', 'o', 's', 's', 'h', 'a', 'i', 'r', ' ', 'm', 'a', 'r', 'k' };
static char changesize_syntax[225] = { 'C', 'h', 'a', 'n', 'g', 'e', 'S', 'i', 'z', 'e', '(', 'O', 'b', 'j', 'e', 'c', 't', ',', ' ', 'd', 'e', 'l', 't', 'a', ')', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'S', 'i', 'z', 'e', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'O', 'b', 'j', 'e', 'c', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', ',', ' ', 'd', 'e', 'l', 't', 'a', ')', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'S', 'i', 'z', 'e', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'L', 'i', 'n', 'e', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'i', 'n', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'V', 'i', 'a', 's', ',', ' ', 'd', 'e', 'l', 't', 'a', ')', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'S', 'i', 'z', 'e', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'a', 'd', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'T', 'e', 'x', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'N', 'a', 'm', 'e', 's', ',', ' ', 'd', 'e', 'l', 't', 'a', ')', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'S', 'i', 'z', 'e', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'E', 'l', 'e', 'm', 'e', 'n', 't', 's', ',', ' ', 'd', 'e', 'l', 't', 'a', ')' };
static char changesize_help[29] = { 'C', 'h', 'a', 'n', 'g', 'e', 's', ' ', 't', 'h', 'e', ' ', 's', 'i', 'z', 'e', ' ', 'o', 'f', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', '.' };
static char changedrillsize_syntax[106] = { 'C', 'h', 'a', 'n', 'g', 'e', 'D', 'r', 'i', 'l', 'l', 'S', 'i', 'z', 'e', '(', 'O', 'b', 'j', 'e', 'c', 't', ',', ' ', 'd', 'e', 'l', 't', 'a', ')', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'D', 'r', 'i', 'l', 'l', 'S', 'i', 'z', 'e', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'i', 'n', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'V', 'i', 'a', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'O', 'b', 'j', 'e', 'c', 't', 's', ',', ' ', 'd', 'e', 'l', 't', 'a', ')' };
static char changedrillsize_help[43] = { 'C', 'h', 'a', 'n', 'g', 'e', 's', ' ', 't', 'h', 'e', ' ', 'd', 'r', 'i', 'l', 'l', 'i', 'n', 'g', ' ', 'h', 'o', 'l', 'e', ' ', 's', 'i', 'z', 'e', ' ', 'o', 'f', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', '.' };
static char changeclearsize_syntax[193] = { 'C', 'h', 'a', 'n', 'g', 'e', 'C', 'l', 'e', 'a', 'r', 'S', 'i', 'z', 'e', '(', 'O', 'b', 'j', 'e', 'c', 't', ',', ' ', 'd', 'e', 'l', 't', 'a', ')', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'C', 'l', 'e', 'a', 'r', 'S', 'i', 'z', 'e', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'i', 'n', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'a', 'd', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'V', 'i', 'a', 's', ',', ' ', 'd', 'e', 'l', 't', 'a', ')', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'C', 'l', 'e', 'a', 'r', 'S', 'i', 'z', 'e', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'L', 'i', 'n', 'e', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'A', 'r', 'c', 's', ',', ' ', 'd', 'e', 'l', 't', 'a', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'C', 'l', 'e', 'a', 'r', 'S', 'i', 'z', 'e', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'O', 'b', 'j', 'e', 'c', 't', 's', ',', ' ', 'd', 'e', 'l', 't', 'a', ')' };
static char changeclearsize_help[39] = { 'C', 'h', 'a', 'n', 'g', 'e', 's', ' ', 't', 'h', 'e', ' ', 'c', 'l', 'e', 'a', 'r', 'a', 'n', 'c', 'e', ' ', 's', 'i', 'z', 'e', ' ', 'o', 'f', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', '.' };
static char minmaskgap_syntax[46] = { 'M', 'i', 'n', 'M', 'a', 's', 'k', 'G', 'a', 'p', '(', 'd', 'e', 'l', 't', 'a', ')', '\n', 'M', 'i', 'n', 'M', 'a', 's', 'k', 'G', 'a', 'p', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', ',', ' ', 'd', 'e', 'l', 't', 'a', ')' };
static char minmaskgap_help[59] = { 'E', 'n', 's', 'u', 'r', 'e', 's', ' ', 't', 'h', 'e', ' ', 'm', 'a', 's', 'k', ' ', 'i', 's', ' ', 'a', ' ', 'm', 'i', 'n', 'i', 'm', 'u', 'm', ' ', 'd', 'i', 's', 't', 'a', 'n', 'c', 'e', ' ', 'f', 'r', 'o', 'm', ' ', 'p', 'i', 'n', 's', ' ', 'a', 'n', 'd', ' ', 'p', 'a', 'd', 's', '.' };
static char mincleargap_syntax[48] = { 'M', 'i', 'n', 'C', 'l', 'e', 'a', 'r', 'G', 'a', 'p', '(', 'd', 'e', 'l', 't', 'a', ')', '\n', 'M', 'i', 'n', 'C', 'l', 'e', 'a', 'r', 'G', 'a', 'p', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', ',', ' ', 'd', 'e', 'l', 't', 'a', ')' };
static char mincleargap_help[59] = { 'E', 'n', 's', 'u', 'r', 'e', 's', ' ', 't', 'h', 'a', 't', ' ', 'p', 'o', 'l', 'y', 'g', 'o', 'n', 's', ' ', 'a', 'r', 'e', ' ', 'a', ' ', 'm', 'i', 'n', 'i', 'm', 'u', 'm', ' ', 'd', 'i', 's', 't', 'a', 'n', 'c', 'e', ' ', 'f', 'r', 'o', 'm', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', '.' };
static char changepinname_syntax[45] = { 'C', 'h', 'a', 'n', 'g', 'e', 'P', 'i', 'n', 'N', 'a', 'm', 'e', '(', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'N', 'a', 'm', 'e', ',', 'P', 'i', 'n', 'N', 'u', 'm', 'b', 'e', 'r', ',', 'P', 'i', 'n', 'N', 'a', 'm', 'e', ')' };
static char changepinname_help[55] = { 'S', 'e', 't', 's', ' ', 't', 'h', 'e', ' ', 'n', 'a', 'm', 'e', ' ', 'o', 'f', ' ', 'a', ' ', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'c', ' ', 'p', 'i', 'n', ' ', 'o', 'n', ' ', 'a', ' ', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'c', ' ', 'e', 'l', 'e', 'm', 'e', 'n', 't', '.' };
static char changename_syntax[44] = { 'C', 'h', 'a', 'n', 'g', 'e', 'N', 'a', 'm', 'e', '(', 'O', 'b', 'j', 'e', 'c', 't', ')', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'N', 'a', 'm', 'e', '(', 'L', 'a', 'y', 'o', 'u', 't', '|', 'L', 'a', 'y', 'e', 'r', ')' };
static char changename_help[26] = { 'S', 'e', 't', 's', ' ', 't', 'h', 'e', ' ', 'n', 'a', 'm', 'e', ' ', 'o', 'f', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', '.' };
static char morphpolygon_syntax[30] = { 'M', 'o', 'r', 'p', 'h', 'P', 'o', 'l', 'y', 'g', 'o', 'n', '(', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', ')' };
static char morphpolygon_help[54] = { 'C', 'o', 'n', 'v', 'e', 'r', 't', 's', ' ', 'd', 'e', 'a', 'd', ' ', 'p', 'o', 'l', 'y', 'g', 'o', 'n', ' ', 'i', 's', 'l', 'a', 'n', 'd', 's', ' ', 'i', 'n', 't', 'o', ' ', 's', 'e', 'p', 'a', 'r', 'a', 't', 'e', ' ', 'p', 'o', 'l', 'y', 'g', 'o', 'n', 's', '.' };
static char togglehidename_syntax[40] = { 'T', 'o', 'g', 'g', 'l', 'e', 'H', 'i', 'd', 'e', 'N', 'a', 'm', 'e', '(', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'E', 'l', 'e', 'm', 'e', 'n', 't', 's', ')' };
static char togglehidename_help[41] = { 'T', 'o', 'g', 'g', 'l', 'e', 's', ' ', 't', 'h', 'e', ' ', 'v', 'i', 's', 'i', 'b', 'i', 'l', 'i', 't', 'y', ' ', 'o', 'f', ' ', 'e', 'l', 'e', 'm', 'e', 'n', 't', ' ', 'n', 'a', 'm', 'e', 's', '.' };
static char changejoin_syntax[61] = { 'C', 'h', 'a', 'n', 'g', 'e', 'J', 'o', 'i', 'n', '(', 'T', 'o', 'g', 'g', 'l', 'e', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'L', 'i', 'n', 'e', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'A', 'r', 'c', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', ')' };
static char changejoin_help[58] = { 'C', 'h', 'a', 'n', 'g', 'e', 's', ' ', 't', 'h', 'e', ' ', 'j', 'o', 'i', 'n', ' ', '(', 'c', 'l', 'e', 'a', 'r', 'a', 'n', 'c', 'e', ' ', 't', 'h', 'r', 'o', 'u', 'g', 'h', ' ', 'p', 'o', 'l', 'y', 'g', 'o', 'n', 's', ')', ' ', 'o', 'f', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', '.' };
static char changesquare_syntax[110] = { 'C', 'h', 'a', 'n', 'g', 'e', 'S', 'q', 'u', 'a', 'r', 'e', '(', 'T', 'o', 'g', 'g', 'l', 'e', 'O', 'b', 'j', 'e', 'c', 't', ')', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'S', 'q', 'u', 'a', 'r', 'e', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'E', 'l', 'e', 'm', 'e', 'n', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'i', 'n', 's', ')', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'S', 'q', 'u', 'a', 'r', 'e', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'O', 'b', 'j', 'e', 'c', 't', 's', ')' };
static char changesquare_help[42] = { 'C', 'h', 'a', 'n', 'g', 'e', 's', ' ', 't', 'h', 'e', ' ', 's', 'q', 'u', 'a', 'r', 'e', ' ', 'f', 'l', 'a', 'g', ' ', 'o', 'f', ' ', 'p', 'i', 'n', 's', ' ', 'a', 'n', 'd', ' ', 'p', 'a', 'd', 's', '.' };
static char setsquare_syntax[54] = { 'S', 'e', 't', 'S', 'q', 'u', 'a', 'r', 'e', '(', 'T', 'o', 'g', 'g', 'l', 'e', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'E', 'l', 'e', 'm', 'e', 'n', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'i', 'n', 's', ')' };
static char setsquare_help[33] = { 's', 'e', 't', 's', ' ', 't', 'h', 'e', ' ', 's', 'q', 'u', 'a', 'r', 'e', '-', 'f', 'l', 'a', 'g', ' ', 'o', 'f', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', '.' };
static char clearsquare_syntax[56] = { 'C', 'l', 'e', 'a', 'r', 'S', 'q', 'u', 'a', 'r', 'e', '(', 'T', 'o', 'g', 'g', 'l', 'e', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'E', 'l', 'e', 'm', 'e', 'n', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'i', 'n', 's', ')' };
static char clearsquare_help[41] = { 'C', 'l', 'e', 'a', 'r', 's', ' ', 't', 'h', 'e', ' ', 's', 'q', 'u', 'a', 'r', 'e', '-', 'f', 'l', 'a', 'g', ' ', 'o', 'f', ' ', 'p', 'i', 'n', 's', ' ', 'a', 'n', 'd', ' ', 'p', 'a', 'd', 's', '.' };
static char changeoctagon_syntax[118] = { 'C', 'h', 'a', 'n', 'g', 'e', 'O', 'c', 't', 'a', 'g', 'o', 'n', '(', 'O', 'b', 'j', 'e', 'c', 't', '|', 'T', 'o', 'g', 'g', 'l', 'e', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'O', 'b', 'j', 'e', 'c', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', ')', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'O', 'c', 't', 'a', 'g', 'o', 'n', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'E', 'l', 'e', 'm', 'e', 'n', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'i', 'n', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'V', 'i', 'a', 's', ')' };
static char changeoctagon_help[43] = { 'C', 'h', 'a', 'n', 'g', 'e', 's', ' ', 't', 'h', 'e', ' ', 'o', 'c', 't', 'a', 'g', 'o', 'n', '-', 'f', 'l', 'a', 'g', ' ', 'o', 'f', ' ', 'p', 'i', 'n', 's', ' ', 'a', 'n', 'd', ' ', 'v', 'i', 'a', 's', '.' };
static char setoctagon_syntax[58] = { 'S', 'e', 't', 'O', 'c', 't', 'a', 'g', 'o', 'n', '(', 'O', 'b', 'j', 'e', 'c', 't', '|', 'T', 'o', 'g', 'g', 'l', 'e', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'E', 'l', 'e', 'm', 'e', 'n', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', ')' };
static char setoctagon_help[34] = { 'S', 'e', 't', 's', ' ', 't', 'h', 'e', ' ', 'o', 'c', 't', 'a', 'g', 'o', 'n', '-', 'f', 'l', 'a', 'g', ' ', 'o', 'f', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', '.' };
static char clearoctagon_syntax[116] = { 'C', 'l', 'e', 'a', 'r', 'O', 'c', 't', 'a', 'g', 'o', 'n', '(', 'T', 'o', 'g', 'g', 'l', 'e', 'O', 'b', 'j', 'e', 'c', 't', '|', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'O', 'b', 'j', 'e', 'c', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', ')', '\n', 'C', 'l', 'e', 'a', 'r', 'O', 'c', 't', 'a', 'g', 'o', 'n', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'E', 'l', 'e', 'm', 'e', 'n', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'i', 'n', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'V', 'i', 'a', 's', ')' };
static char clearoctagon_help[42] = { 'C', 'l', 'e', 'a', 'r', 's', ' ', 't', 'h', 'e', ' ', 'o', 'c', 't', 'a', 'g', 'o', 'n', '-', 'f', 'l', 'a', 'g', ' ', 'o', 'f', ' ', 'p', 'i', 'n', 's', ' ', 'a', 'n', 'd', ' ', 'v', 'i', 'a', 's', '.' };
static char changehold_syntax[54] = { 'C', 'h', 'a', 'n', 'g', 'e', 'H', 'o', 'l', 'e', '(', 'T', 'o', 'g', 'g', 'l', 'e', 'O', 'b', 'j', 'e', 'c', 't', '|', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'V', 'i', 'a', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', ')' };
static char changehold_help[34] = { 'C', 'h', 'a', 'n', 'g', 'e', 's', ' ', 't', 'h', 'e', ' ', 'h', 'o', 'l', 'e', ' ', 'f', 'l', 'a', 'g', ' ', 'o', 'f', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', '.' };
static char changepaste_syntax[55] = { 'C', 'h', 'a', 'n', 'g', 'e', 'P', 'a', 's', 't', 'e', '(', 'T', 'o', 'g', 'g', 'l', 'e', 'O', 'b', 'j', 'e', 'c', 't', '|', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'a', 'd', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', ')' };
static char changepaste_help[38] = { 'C', 'h', 'a', 'n', 'g', 'e', 's', ' ', 't', 'h', 'e', ' ', 'n', 'o', ' ', 'p', 'a', 's', 't', 'e', ' ', 'f', 'l', 'a', 'g', ' ', 'o', 'f', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', '.' };
static char select_syntax[246] = { 'S', 'e', 'l', 'e', 'c', 't', '(', 'T', 'o', 'g', 'g', 'l', 'e', 'O', 'b', 'j', 'e', 'c', 't', ')', '\n', 'S', 'e', 'l', 'e', 'c', 't', '(', 'A', 'l', 'l', '|', 'B', 'l', 'o', 'c', 'k', '|', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', ')', '\n', 'S', 'e', 'l', 'e', 'c', 't', '(', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'O', 'b', 'j', 'e', 'c', 't', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'P', 'a', 'd', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'P', 'i', 'n', 'B', 'y', 'N', 'a', 'm', 'e', ')', '\n', 'S', 'e', 'l', 'e', 'c', 't', '(', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'O', 'b', 'j', 'e', 'c', 't', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'P', 'a', 'd', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'P', 'i', 'n', 'B', 'y', 'N', 'a', 'm', 'e', ',', ' ', 'N', 'a', 'm', 'e', ')', '\n', 'S', 'e', 'l', 'e', 'c', 't', '(', 'T', 'e', 'x', 't', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'V', 'i', 'a', 'B', 'y', 'N', 'a', 'm', 'e', ')', '\n', 'S', 'e', 'l', 'e', 'c', 't', '(', 'T', 'e', 'x', 't', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'V', 'i', 'a', 'B', 'y', 'N', 'a', 'm', 'e', ',', ' ', 'N', 'a', 'm', 'e', ')', '\n', 'S', 'e', 'l', 'e', 'c', 't', '(', 'C', 'o', 'n', 'v', 'e', 'r', 't', ')' };
static char select_help[30] = { 'T', 'o', 'g', 'g', 'l', 'e', 's', ' ', 'o', 'r', ' ', 's', 'e', 't', 's', ' ', 't', 'h', 'e', ' ', 's', 'e', 'l', 'e', 'c', 't', 'i', 'o', 'n' };
static char unselect_syntax[220] = { 'U', 'n', 's', 'e', 'l', 'e', 'c', 't', '(', 'A', 'l', 'l', '|', 'B', 'l', 'o', 'c', 'k', '|', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', ')', '\n', 'U', 'n', 's', 'e', 'l', 'e', 'c', 't', '(', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'O', 'b', 'j', 'e', 'c', 't', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'P', 'a', 'd', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'P', 'i', 'n', 'B', 'y', 'N', 'a', 'm', 'e', ')', '\n', 'U', 'n', 's', 'e', 'l', 'e', 'c', 't', '(', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'O', 'b', 'j', 'e', 'c', 't', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'P', 'a', 'd', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'P', 'i', 'n', 'B', 'y', 'N', 'a', 'm', 'e', ',', ' ', 'N', 'a', 'm', 'e', ')', '\n', 'U', 'n', 's', 'e', 'l', 'e', 'c', 't', '(', 'T', 'e', 'x', 't', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'V', 'i', 'a', 'B', 'y', 'N', 'a', 'm', 'e', ')', '\n', 'U', 'n', 's', 'e', 'l', 'e', 'c', 't', '(', 'T', 'e', 'x', 't', 'B', 'y', 'N', 'a', 'm', 'e', '|', 'V', 'i', 'a', 'B', 'y', 'N', 'a', 'm', 'e', ',', ' ', 'N', 'a', 'm', 'e', ')', '\n' };
static char unselect_help[70] = { 'u', 'n', 's', 'e', 'l', 'e', 'c', 't', 's', ' ', 't', 'h', 'e', ' ', 'o', 'b', 'j', 'e', 'c', 't', ' ', 'a', 't', ' ', 't', 'h', 'e', ' ', 'p', 'o', 'i', 'n', 't', 'e', 'r', ' ', 'l', 'o', 'c', 'a', 't', 'i', 'o', 'n', ' ', 'o', 'r', ' ', 't', 'h', 'e', ' ', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'd', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's' };
static char saveto_syntax[127] = { 'S', 'a', 'v', 'e', 'T', 'o', '(', 'L', 'a', 'y', 'o', 'u', 't', '|', 'L', 'a', 'y', 'o', 'u', 't', 'A', 's', ',', 'f', 'i', 'l', 'e', 'n', 'a', 'm', 'e', ')', '\n', 'S', 'a', 'v', 'e', 'T', 'o', '(', 'A', 'l', 'l', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 's', '|', 'A', 'l', 'l', 'U', 'n', 'u', 's', 'e', 'd', 'P', 'i', 'n', 's', '|', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 's', ',', 'f', 'i', 'l', 'e', 'n', 'a', 'm', 'e', ')', '\n', 'S', 'a', 'v', 'e', 'T', 'o', '(', 'P', 'a', 's', 't', 'e', 'B', 'u', 'f', 'f', 'e', 'r', ',', 'f', 'i', 'l', 'e', 'n', 'a', 'm', 'e', ')' };
static char saveto_help[22] = { 'S', 'a', 'v', 'e', 's', ' ', 'd', 'a', 't', 'a', ' ', 't', 'o', ' ', 'a', ' ', 'f', 'i', 'l', 'e', '.' };
static char savesettings_syntax[35] = { 'S', 'a', 'v', 'e', 'S', 'e', 't', 't', 'i', 'n', 'g', 's', '(', ')', '\n', 'S', 'a', 'v', 'e', 'S', 'e', 't', 't', 'i', 'n', 'g', 's', '(', 'l', 'o', 'c', 'a', 'l', ')' };
static char savesettings_help[16] = { 'S', 'a', 'v', 'e', 's', ' ', 's', 'e', 't', 't', 'i', 'n', 'g', 's', '.' };
static char loadfrom_syntax[72] = { 'L', 'o', 'a', 'd', 'F', 'r', 'o', 'm', '(', 'L', 'a', 'y', 'o', 'u', 't', '|', 'L', 'a', 'y', 'o', 'u', 't', 'T', 'o', 'B', 'u', 'f', 'f', 'e', 'r', '|', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'T', 'o', 'B', 'u', 'f', 'f', 'e', 'r', '|', 'N', 'e', 't', 'l', 'i', 's', 't', '|', 'R', 'e', 'v', 'e', 'r', 't', ',', 'f', 'i', 'l', 'e', 'n', 'a', 'm', 'e', ')' };
static char loadfrom_help[30] = { 'L', 'o', 'a', 'd', ' ', 'l', 'a', 'y', 'o', 'u', 't', ' ', 'd', 'a', 't', 'a', ' ', 'f', 'r', 'o', 'm', ' ', 'a', ' ', 'f', 'i', 'l', 'e', '.' };
static char new_syntax[12] = { 'N', 'e', 'w', '(', '[', 'n', 'a', 'm', 'e', ']', ')' };
static char new_help[21] = { 'S', 't', 'a', 'r', 't', 's', ' ', 'a', ' ', 'n', 'e', 'w', ' ', 'l', 'a', 'y', 'o', 'u', 't', '.' };
static char pastebuffer_syntax[147] = { 'P', 'a', 's', 't', 'e', 'B', 'u', 'f', 'f', 'e', 'r', '(', 'A', 'd', 'd', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', '|', 'C', 'l', 'e', 'a', 'r', '|', '1', '.', '.', 'M', 'A', 'X', '_', 'B', 'U', 'F', 'F', 'E', 'R', ')', '\n', 'P', 'a', 's', 't', 'e', 'B', 'u', 'f', 'f', 'e', 'r', '(', 'R', 'o', 't', 'a', 't', 'e', ',', ' ', '1', '.', '.', '3', ')', '\n', 'P', 'a', 's', 't', 'e', 'B', 'u', 'f', 'f', 'e', 'r', '(', 'C', 'o', 'n', 'v', 'e', 'r', 't', '|', 'S', 'a', 'v', 'e', '|', 'R', 'e', 's', 't', 'o', 'r', 'e', '|', 'M', 'i', 'r', 'r', 'o', 'r', ')', '\n', 'P', 'a', 's', 't', 'e', 'B', 'u', 'f', 'f', 'e', 'r', '(', 'T', 'o', 'L', 'a', 'y', 'o', 'u', 't', ',', ' ', 'X', ',', ' ', 'Y', ',', ' ', 'u', 'n', 'i', 't', 's', ')' };
static char pastebuffer_help[40] = { 'V', 'a', 'r', 'i', 'o', 'u', 's', ' ', 'o', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 's', ' ', 'o', 'n', ' ', 't', 'h', 'e', ' ', 'p', 'a', 's', 't', 'e', ' ', 'b', 'u', 'f', 'f', 'e', 'r', '.' };
static char undo_syntax[23] = { 'U', 'n', 'd', 'o', '(', ')', '\n', 'U', 'n', 'd', 'o', '(', 'C', 'l', 'e', 'a', 'r', 'L', 'i', 's', 't', ')' };
static char undo_help[21] = { 'U', 'n', 'd', 'o', ' ', 'r', 'e', 'c', 'e', 'n', 't', ' ', 'c', 'h', 'a', 'n', 'g', 'e', 's', '.' };
static char redo_syntax[7] = { 'R', 'e', 'd', 'o', '(', ')' };
static char redo_help[31] = { 'R', 'e', 'd', 'o', ' ', 'r', 'e', 'c', 'e', 'n', 't', ' ', '"', 'u', 'n', 'd', 'o', '"', ' ', 'o', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 's', '.' };
static char polygon_syntax[29] = { 'P', 'o', 'l', 'y', 'g', 'o', 'n', '(', 'C', 'l', 'o', 's', 'e', '|', 'P', 'r', 'e', 'v', 'i', 'o', 'u', 's', 'P', 'o', 'i', 'n', 't', ')' };
static char polygon_help[28] = { 'S', 'o', 'm', 'e', ' ', 'p', 'o', 'l', 'y', 'g', 'o', 'n', ' ', 'r', 'e', 'l', 'a', 't', 'e', 'd', ' ', 's', 't', 'u', 'f', 'f', '.' };
static char routestyle_syntax[20] = { 'R', 'o', 'u', 't', 'e', 'S', 't', 'y', 'l', 'e', '(', '1', '|', '2', '|', '3', '|', '4', ')' };
static char routestyle_help[59] = { 'C', 'o', 'p', 'i', 'e', 's', ' ', 't', 'h', 'e', ' ', 'i', 'n', 'd', 'i', 'c', 'a', 't', 'e', 'd', ' ', 'r', 'o', 'u', 't', 'i', 'n', 'g', ' ', 's', 't', 'y', 'l', 'e', ' ', 'i', 'n', 't', 'o', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', ' ', 's', 'i', 'z', 'e', 's', '.' };
static char moveobject_syntax[20] = { 'M', 'o', 'v', 'e', 'O', 'b', 'j', 'e', 'c', 't', '(', 'X', ',', 'Y', ',', 'd', 'i', 'm', ')' };
static char moveobject_help[38] = { 'M', 'o', 'v', 'e', 's', ' ', 't', 'h', 'e', ' ', 'o', 'b', 'j', 'e', 'c', 't', ' ', 'u', 'n', 'd', 'e', 'r', ' ', 't', 'h', 'e', ' ', 'c', 'r', 'o', 's', 's', 'h', 'a', 'i', 'r', '.' };
static char movetocurrentlayer_syntax[43] = { 'M', 'o', 'v', 'e', 'T', 'o', 'C', 'u', 'r', 'r', 'e', 'n', 't', 'L', 'a', 'y', 'e', 'r', '(', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'O', 'b', 'j', 'e', 'c', 't', 's', ')' };
static char movetocurrentlayer_help[36] = { 'M', 'o', 'v', 'e', 's', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', ' ', 't', 'o', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'l', 'a', 'y', 'e', 'r', '.' };
static char setsame_syntax[10] = { 'S', 'e', 't', 'S', 'a', 'm', 'e', '(', ')' };
static char setsame_help[54] = { 'S', 'e', 't', 's', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'l', 'a', 'y', 'e', 'r', ' ', 'a', 'n', 'd', ' ', 's', 'i', 'z', 'e', 's', ' ', 't', 'o', ' ', 'm', 'a', 't', 'c', 'h', ' ', 'i', 'n', 'd', 'i', 'c', 'a', 't', 'e', 'd', ' ', 'i', 't', 'e', 'm', '.' };
static char setflag_syntax[231] = { 'S', 'e', 't', 'F', 'l', 'a', 'g', '(', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'O', 'b', 'j', 'e', 'c', 't', 's', ',', ' ', 'f', 'l', 'a', 'g', ')', '\n', 'S', 'e', 't', 'F', 'l', 'a', 'g', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'L', 'i', 'n', 'e', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'i', 'n', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'V', 'i', 'a', 's', ',', ' ', 'f', 'l', 'a', 'g', ')', '\n', 'S', 'e', 't', 'F', 'l', 'a', 'g', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'a', 'd', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'T', 'e', 'x', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'N', 'a', 'm', 'e', 's', ',', ' ', 'f', 'l', 'a', 'g', ')', '\n', 'S', 'e', 't', 'F', 'l', 'a', 'g', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'E', 'l', 'e', 'm', 'e', 'n', 't', 's', ',', ' ', 'f', 'l', 'a', 'g', ')', '\n', 'f', 'l', 'a', 'g', ' ', '=', ' ', 's', 'q', 'u', 'a', 'r', 'e', ' ', '|', ' ', 'o', 'c', 't', 'a', 'g', 'o', 'n', ' ', '|', ' ', 't', 'h', 'e', 'r', 'm', 'a', 'l', ' ', '|', ' ', 'j', 'o', 'i', 'n' };
static char setflag_help[23] = { 'S', 'e', 't', 's', ' ', 'f', 'l', 'a', 'g', 's', ' ', 'o', 'n', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', '.' };
static char clrflag_syntax[231] = { 'C', 'l', 'r', 'F', 'l', 'a', 'g', '(', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'O', 'b', 'j', 'e', 'c', 't', 's', ',', ' ', 'f', 'l', 'a', 'g', ')', '\n', 'C', 'l', 'r', 'F', 'l', 'a', 'g', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'L', 'i', 'n', 'e', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'i', 'n', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'V', 'i', 'a', 's', ',', ' ', 'f', 'l', 'a', 'g', ')', '\n', 'C', 'l', 'r', 'F', 'l', 'a', 'g', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'a', 'd', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'T', 'e', 'x', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'N', 'a', 'm', 'e', 's', ',', ' ', 'f', 'l', 'a', 'g', ')', '\n', 'C', 'l', 'r', 'F', 'l', 'a', 'g', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'E', 'l', 'e', 'm', 'e', 'n', 't', 's', ',', ' ', 'f', 'l', 'a', 'g', ')', '\n', 'f', 'l', 'a', 'g', ' ', '=', ' ', 's', 'q', 'u', 'a', 'r', 'e', ' ', '|', ' ', 'o', 'c', 't', 'a', 'g', 'o', 'n', ' ', '|', ' ', 't', 'h', 'e', 'r', 'm', 'a', 'l', ' ', '|', ' ', 'j', 'o', 'i', 'n' };
static char clrflag_help[25] = { 'C', 'l', 'e', 'a', 'r', 's', ' ', 'f', 'l', 'a', 'g', 's', ' ', 'o', 'n', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', '.' };
static char changeflag_syntax[285] = { 'C', 'h', 'a', 'n', 'g', 'e', 'F', 'l', 'a', 'g', '(', 'O', 'b', 'j', 'e', 'c', 't', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'O', 'b', 'j', 'e', 'c', 't', 's', ',', ' ', 'f', 'l', 'a', 'g', ',', ' ', 'v', 'a', 'l', 'u', 'e', ')', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'F', 'l', 'a', 'g', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'L', 'i', 'n', 'e', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'i', 'n', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'V', 'i', 'a', 's', ',', ' ', 'f', 'l', 'a', 'g', ',', ' ', 'v', 'a', 'l', 'u', 'e', ')', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'F', 'l', 'a', 'g', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'P', 'a', 'd', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'T', 'e', 'x', 't', 's', '|', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'N', 'a', 'm', 'e', 's', ',', ' ', 'f', 'l', 'a', 'g', ',', ' ', 'v', 'a', 'l', 'u', 'e', ')', '\n', 'C', 'h', 'a', 'n', 'g', 'e', 'F', 'l', 'a', 'g', '(', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'E', 'l', 'e', 'm', 'e', 'n', 't', 's', ',', ' ', 'f', 'l', 'a', 'g', ',', ' ', 'v', 'a', 'l', 'u', 'e', ')', '\n', 'f', 'l', 'a', 'g', ' ', '=', ' ', 's', 'q', 'u', 'a', 'r', 'e', ' ', '|', ' ', 'o', 'c', 't', 'a', 'g', 'o', 'n', ' ', '|', ' ', 't', 'h', 'e', 'r', 'm', 'a', 'l', ' ', '|', ' ', 'j', 'o', 'i', 'n', '\n', 'v', 'a', 'l', 'u', 'e', ' ', '=', ' ', '0', ' ', '|', ' ', '1' };
static char changeflag_help[33] = { 'S', 'e', 't', 's', ' ', 'o', 'r', ' ', 'c', 'l', 'e', 'a', 'r', 's', ' ', 'f', 'l', 'a', 'g', 's', ' ', 'o', 'n', ' ', 'o', 'b', 'j', 'e', 'c', 't', 's', '.' };
static char executefile_syntax[22] = { 'E', 'x', 'e', 'c', 'u', 't', 'e', 'F', 'i', 'l', 'e', '(', 'f', 'i', 'l', 'e', 'n', 'a', 'm', 'e', ')' };
static char executefile_help[33] = { 'R', 'u', 'n', ' ', 'a', 'c', 't', 'i', 'o', 'n', 's', ' ', 'f', 'r', 'o', 'm', ' ', 't', 'h', 'e', ' ', 'g', 'i', 'v', 'e', 'n', ' ', 'f', 'i', 'l', 'e', '.' };
HID_Action action_action_list[58] = { { "AddRats", 0, &ActionAddRats, &addrats_help, &addrats_syntax }
, { "Atomic", 0, &ActionAtomic, &atomic_help, &atomic_syntax }
, { "AutoPlaceSelected", 0, &ActionAutoPlaceSelected, &autoplace_help, &autoplace_syntax }
, { "AutoRoute", 0, &ActionAutoRoute, &autoroute_help, &autoroute_syntax }
, { "ChangeClearSize", 0, &ActionChangeClearSize, &changeclearsize_help, &changeclearsize_syntax }
, { "ChangeDrillSize", 0, &ActionChange2ndSize, &changedrillsize_help, &changedrillsize_syntax }
, { "ChangeHole", 0, &ActionChangeHole, &changehold_help, &changehold_syntax }
, { "ChangeJoin", 0, &ActionChangeJoin, &changejoin_help, &changejoin_syntax }
, { "ChangeName", 0, &ActionChangeName, &changename_help, &changename_syntax }
, { "ChangePaste", 0, &ActionChangePaste, &changepaste_help, &changepaste_syntax }
, { "ChangePinName", 0, &ActionChangePinName, &changepinname_help, &changepinname_syntax }
, { "ChangeSize", 0, &ActionChangeSize, &changesize_help, &changesize_syntax }
, { "ChangeSquare", 0, &ActionChangeSquare, &changesquare_help, &changesquare_syntax }
, { "ChangeOctagon", 0, &ActionChangeOctagon, &changeoctagon_help, &changeoctagon_syntax }
, { "ClearSquare", 0, &ActionClearSquare, &clearsquare_help, &clearsquare_syntax }
, { "ClearOctagon", 0, &ActionClearOctagon, &clearoctagon_help, &clearoctagon_syntax }
, { "Connection", 0, &ActionConnection, &connection_help, &connection_syntax }
, { "Delete", 0, &ActionDelete, &delete_help, &delete_syntax }
, { "DeleteRats", 0, &ActionDeleteRats, &deleterats_help, &deleterats_syntax }
, { "DisperseElements", 0, &ActionDisperseElements, &disperseelements_help, &disperseelements_syntax }
, { "Display", 0, &ActionDisplay, &display_help, &display_syntax }
, { "DRC", 0, &ActionDRCheck, &drc_help, &drc_syntax }
, { "DumpLibrary", 0, &ActionDumpLibrary, &dumplibrary_help, &dumplibrary_syntax }
, { "ExecuteFile", 0, &ActionExecuteFile, &executefile_help, &executefile_syntax }
, { "Flip", "Click on Object or Flip Point", &ActionFlip, &flip_help, &flip_syntax }
, { "LoadFrom", 0, &ActionLoadFrom, &loadfrom_help, &loadfrom_syntax }
, { "MarkCrosshair", 0, &ActionMarkCrosshair, &markcrosshair_help, &markcrosshair_syntax }
, { "Message", 0, &ActionMessage, &message_help, &message_syntax }
, { "MinMaskGap", 0, &ActionMinMaskGap, &minmaskgap_help, &minmaskgap_syntax }
, { "MinClearGap", 0, &ActionMinClearGap, &mincleargap_help, &mincleargap_syntax }
, { "Mode", 0, &ActionMode, &mode_help, &mode_syntax }
, { "MorphPolygon", 0, &ActionMorphPolygon, &morphpolygon_help, &morphpolygon_syntax }
, { "PasteBuffer", 0, &ActionPasteBuffer, &pastebuffer_help, &pastebuffer_syntax }
, { "Quit", 0, &ActionQuit, &quit_help, &quit_syntax }
, { "RemoveSelected", 0, &ActionRemoveSelected, &removeselected_help, &removeselected_syntax }
, { "Renumber", 0, &ActionRenumber, &renumber_help, &renumber_syntax }
, { "RipUp", 0, &ActionRipUp, &ripup_help, &ripup_syntax }
, { "Select", 0, &ActionSelect, &select_help, &select_syntax }
, { "Unselect", 0, &ActionUnselect, &unselect_help, &unselect_syntax }
, { "SaveSettings", 0, &ActionSaveSettings, &savesettings_help, &savesettings_syntax }
, { "SaveTo", 0, &ActionSaveTo, &saveto_help, &saveto_syntax }
, { "SetSquare", 0, &ActionSetSquare, &setsquare_help, &setsquare_syntax }
, { "SetOctagon", 0, &ActionSetOctagon, &setoctagon_help, &setoctagon_syntax }
, { "SetThermal", 0, &ActionSetThermal, &setthermal_help, &setthermal_syntax }
, { "SetValue", 0, &ActionSetValue, &setvalue_help, &setvalue_syntax }
, { "ToggleHideName", 0, &ActionToggleHideName, &togglehidename_help, &togglehidename_syntax }
, { "Undo", 0, &ActionUndo, &undo_help, &undo_syntax }
, { "Redo", 0, &ActionRedo, &redo_help, &redo_syntax }
, { "SetSame", "Select item to use attributes from", &ActionSetSame, &setsame_help, &setsame_syntax }
, { "SetFlag", 0, &ActionSetFlag, &setflag_help, &setflag_syntax }
, { "ClrFlag", 0, &ActionClrFlag, &clrflag_help, &clrflag_syntax }
, { "ChangeFlag", 0, &ActionChangeFlag, &changeflag_help, &changeflag_syntax }
, { "Polygon", 0, &ActionPolygon, &polygon_help, &polygon_syntax }
, { "RouteStyle", 0, &ActionRouteStyle, &routestyle_help, &routestyle_syntax }
, { "MoveObject", "Select an Object", &ActionMoveObject, &moveobject_help, &moveobject_syntax }
, { "MoveToCurrentLayer", 0, &ActionMoveToCurrentLayer, &movetocurrentlayer_help, &movetocurrentlayer_syntax }
, { "New", 0, &ActionNew, &new_help, &new_syntax }
, { "pscalib", 0, &ActionPSCalib, 0, 0 }
 };
void ClearWarnings( void )
{
  int eax;
  int ecx;
  int ch;
  int ebp_36;
  int ebp_32;
{
  Cardinal n;
  ElementTypePtr element;
  Settings.RatWarn = 0;
  n = PCB->Data->ElementN + -1;
  if ( PCB->Data->ElementN + -1 != -1 )
  {
    ebp_32 = ( PCB->Data->ElementN * 300 ) + -300;
    while ( element = ebp_32 + *(int*)(*(int*)(ecx + 8716) + 32), element->PinN == 0 )
    {
      n += -1;
      ebp_32 += -300;
      if ( n == -1 )
      {
        Cardinal n = PCB->Data->ElementN + -1;
        ElementTypePtr element;
        if ( PCB->Data->ElementN + -1 == -1 )
        {
        }
        ebp_36 = ( PCB->Data->ElementN * 300 ) + -300;
        while ( 1 )
        {
          Cardinal n = 0;
          Cardinal sn;
          PadTypePtr pad;
          element += PCB->Data->Element / 300;
          while ( 1 )
          {
            sn = element->PadN;
            do
            {
              if ( sn == 0 || sn <= n )
              {
                n += -1;
                ebp_36 += -300;
                if ( n == -1 )
                {
                }
                break;
                while ( 1 )
                {
                  Cardinal n = 0;
                  Cardinal sn;
                  PadTypePtr pad;
                  element += PCB->Data->Element / 300;
                  while ( 1 )
                  {
                    sn = element->PadN;
                  }
                }
              }
              else
              {
                pad = element->Pad + 0;
                pad->Flags.f = element->Pad->Flags.f;
                if ( ( ( ch & 2 ) & 255 ) == 0 )
                {
                  if ( element->PadN != sn )
                    continue;
                }
                else
                {
                  pad->Flags.f = pad->Flags.f;
                  DrawPad( pad, 0 );
                  sn = element->PadN;
                }
              }
            }
            while ( element->PadN != element->PadN );
            n++;
          }
        }
      }
      else
      {
      }
    }
    n = 0;
    while ( 1 )
    {
      pin = element->Pin + ( n * 76 );
      pin->Flags.f = element->Pin->Flags.f;
      if ( ( ( ch & 2 ) & 255 ) == 0 )
      {
        if ( sn == 0 )
        {
          n += -1;
          ebp_32 += -300;
        }
      }
      else
      {
        pin->Flags.f = pin->Flags.f;
        DrawPin( pin, 0 );
        sn = element->PinN;
        if ( element->PinN == 0 )
        {
        }
      }
      n = ( sn + n + 1 ) - sn;
      if ( sn <= ( sn + n + 1 ) - element->PinN )
        continue;
      else
      {
      }
    }
  }
}
}
void click_cb( hidval hv )
{
  if ( Note.Click )
  {
    Note.Click = 0;
    if ( Note.Moving )
    {
      gui->shift_is_pressed( );
      if ( gui == 0 )
      {
        HideCrosshair( 1 );
        Note.Buffer = Settings.BufferNumber;
        SetBufferNumber( 4 );
        ClearBuffer( &Buffers[ Settings.BufferNumber ] );
        AddSelectedToBuffer( &Buffers[ Settings.BufferNumber ], Note.X, Note.Y, 1 );
        SaveUndoSerialNumber( );
        RemoveSelected( );
        SaveMode( );
        saved_mode = 1;
        SetMode( 5 );
        RestoreCrosshair( 1 );
        return;
      }
    }
    if ( Note.Hit )
    {
      gui->shift_is_pressed( );
      if ( gui == 0 )
      {
        HideCrosshair( 1 );
        SaveMode( );
        saved_mode = 1;
        gui->control_is_pressed( );
        SetMode( ( 0 - ( ( gui < 1 ) & 1 ) ) + 105 );
        Crosshair.AttachedObject.Ptr1 = Note.ptr1;
        Crosshair.AttachedObject.Ptr2 = Note.ptr2;
        Crosshair.AttachedObject.Ptr3 = Note.ptr3;
        Crosshair.AttachedObject.Type = Note.Hit;
        AttachForCopy( Note.X, Note.Y );
        RestoreCrosshair( 1 );
        return;
      }
    }
  {
    BoxType box;
    Note.Hit = 0;
    Note.Moving = 0;
    HideCrosshair( 1 );
    SaveUndoSerialNumber( );
    box.X1 = 0xff676980;
    box.Y1 = 0xff676980;
    box.X2 = 0x989680;
    box.Y2 = 0x989680;
    gui->shift_is_pressed( );
    if ( gui == 0 && ( SelectBlock( &box, 0 ) & 255 ) )
      SetChangedFlag( 1 );
    NotifyBlock( );
    Crosshair.AttachedBox.Point1.X = Note.X;
    Crosshair.AttachedBox.Point1.Y = Note.Y;
    RestoreCrosshair( 1 );
  }
  }
  return;
}
int hashfunc( String s )
{
  int edx;
  int i = 0;
  if ( s & 255 )
  {
    do
    {
      int __res = s[0];
      if ( __res + 128 <= 383 )
      {
      }
      s[0] = s[1];
      i = __res ^ ( ( i ^ ( i >> 16 ) ) * 13 );
    }
    while ( s[0] );
    i -= ( (/*HI*/int)( i * 0xff00ff01 ) >> 8 ) * 257;
  }
  return i - ( ( (/*HI*/int)( i * 0xff00ff01 ) >> 8 ) * 257 );
}
int GetFunctionID( String Ident )
{
  int edx;
  int i, h;
  if ( Ident )
  {
    if ( hash_initted == 0 )
    {
      hash_initted = 1;
      do
      {
        hashfunc( &changeflag_syntax[ 70 + ( ( 115 + -1 ) << 3 ) ] );
        while ( 1 )
        {
          function_hash[ ( h + 1 ) - ( ( ( (/*HI*/int)( ( h + 1 ) * 0x7f807f81 ) >> 7 ) - ( ( h + 1 ) >> 31 ) ) * 257 ) ] = 115 + -1;
          if ( 115 + -1 != 1 )
          {
            do
            {
              hashfunc( &changeflag_syntax[ 70 + ( ( 115 + -1 ) << 3 ) ] );
              while ( 1 )
              {
                function_hash[ ( h + 1 ) - ( ( ( (/*HI*/int)( ( h + 1 ) * 0x7f807f81 ) >> 7 ) - ( ( h + 1 ) >> 31 ) ) * 257 ) ] = 115 + -1;
              }
            }
            while ( 115 + -1 == 1 );
          }
          else
          {
            if ( function_hash[ hashfunc( Ident ) ] == 0 )
            {
              break;
            }
            do
            {
              if ( strcasecmp( Ident, Functions[ function_hash[ ( i + 1 ) - ( ( ( (/*HI*/int)( ( i + 1 ) * 0x7f807f81 ) >> 7 ) - ( ( i + 1 ) >> 31 ) ) * 257 ) ] + -1 ].Identifier ) == 0 )
              {
                break;
              }
            }
            while ( function_hash[ ( ( ( i + 1 ) - ( ( ( (/*HI*/int)( ( i + 1 ) * 0x7f807f81 ) >> 7 ) - ( ( i + 1 ) >> 31 ) ) * 257 ) ) + 1 ) - ( ( ( (/*HI*/int)( ( ( ( i + 1 ) - ( ( ( (/*HI*/int)( ( i + 1 ) * 0x7f807f81 ) >> 7 ) - ( ( i + 1 ) >> 31 ) ) * 257 ) ) + 1 ) * 0x7f807f81 ) >> 7 ) - ( ( ( ( i + 1 ) - ( ( ( (/*HI*/int)( ( i + 1 ) * 0x7f807f81 ) >> 7 ) - ( ( i + 1 ) >> 31 ) ) * 257 ) ) + 1 ) >> 31 ) ) * 257 ) ] );
          }
        }
      }
      while ( 115 + -1 == 1 );
    }
  }
}
void AdjustAttachedObjects( void )
{
  PointTypePtr pnt;
  switch ( Settings.Mode )
  {
  case 109:
    gui->shift_is_pressed( );
    break;
  default:
    if ( eax < 2 )
    {
      if ( PCB == 109 )
      {
        gui->shift_is_pressed( );
      }
      if ( Crosshair.AttachedBox.State == 1 )
      {
        Crosshair.AttachedBox.Point2.X = Crosshair.X;
        Crosshair.AttachedBox.Point2.Y = Crosshair.Y;
        return;
      }
      return;
    }
    else
    {
      if ( Settings.Mode == 0 )
      else
      {
        return;
      }
    }
  case 110:
    if ( Crosshair.AttachedBox.State )
    {
      Crosshair.AttachedBox.Point2.X = Crosshair.X;
      Crosshair.AttachedBox.Point2.Y = Crosshair.Y;
      return;
    }
    return;
    break;
  case 2:
    if ( PCB->RatDraw == 0 && PCB->Clipping )
    {
      AdjustTwoLine( AdjustInsertPoint( ) + -1 );
      return;
    }
  case 106:
    if ( pnt )
    {
      InsertedPoint.X = pnt->X;
      InsertedPoint.Y = pnt->Y;
      InsertedPoint.X2 = pnt->X2;
      InsertedPoint.Y2 = pnt->Y2;
      InsertedPoint.ID = *(int*)AdjustInsertPoint( )/*.16*/;
      return;
    }
    return;
    break;
    return;
    break;
  case 4:
    break;
  }
  Crosshair.AttachedBox.otherway = gui;
  return;
}
void NotifyLine( void )
{
  int eax;
  double fp6;
  int type;
  void *ptr1, *ptr2, *ptr3;
  if ( !Marked.status || ( ( PCB->Flags.f/*.1_1of4*/ & 2 ) & 255 ) )
  {
    SetLocalRef( Crosshair.X, Crosshair.Y, 1 );
    if ( Crosshair.AttachedLine.State == 0 )
      goto B4;
    else
    {
      if ( Crosshair.AttachedLine.State == 1 )
      {
        lastLayer = PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76;
      }
      Crosshair.AttachedLine.State = 2;
      return;
    }
  }
  else
  if ( Crosshair.AttachedLine.State == 0 )
    goto B4;
  else
  {
  }
B4:;
  if ( PCB->RatDraw )
  {
    if ( SearchScreen( Crosshair.X, Crosshair.Y, 768, &ptr1, &ptr1, &ptr1 ) )
    {
    }
    else
    {
      gui->beep( );
      return;
    }
  }
  if ( PCB->Flags.f/*.1_1of4*/ < 0 && Settings.Mode == 2 )
  {
    type = SearchScreen( Crosshair.X, Crosshair.Y, 769, &ptr1, &ptr2, &ptr3 );
    LookupConnection( Crosshair.X, Crosshair.Y, 1, (int)( 1.000000000000 / Zoom_Multiplier ), "12 # (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 )" );
    if ( type == 1 || type == 256 )
    {
      Crosshair.AttachedLine.Point2.X = ((int*)ptr2);
      Crosshair.AttachedLine.Point1.X = ((int*)ptr2);
      Crosshair.AttachedLine.Point2.Y = ((int*)ptr2);
      Crosshair.AttachedLine.Point1.Y = ((int*)ptr2);
      Crosshair.AttachedLine.State = 1;
      return;
    }
    else
    if ( type == 512 )
    {
      PadTypePtr pad = &ptr2[0];
      /* phantom */ float d1, d2;
      if ( ( (double)( Crosshair.X - pad->Point2.X ) * (double)( Crosshair.X - pad->Point2.X ) ) * 0.000000000000 < ( (double)( Crosshair.X - pad->Point1.X ) * (double)( Crosshair.X - pad->Point1.X ) ) * 0.000000000000 )
      {
        Crosshair.AttachedLine.Point2.X = pad->Point2.X;
        Crosshair.AttachedLine.Point2.Y = pad->Point2.Y;
        Crosshair.AttachedLine.Point2.X2 = pad->Point2.X2;
        Crosshair.AttachedLine.Point2.Y2 = pad->Point2.Y2;
        *(int*)(ptr2) = ((int*)ptr2);
      }
      else
      {
        Crosshair.AttachedLine.Point2.X = pad->Point1.X;
        Crosshair.AttachedLine.Point2.Y = pad->Point1.Y;
        Crosshair.AttachedLine.Point2.X2 = pad->Point1.X2;
        Crosshair.AttachedLine.Point2.Y2 = pad->Point1.Y2;
        pad->Point1.ID = ((int*)ptr2);
      }
      Crosshair.AttachedLine.Point2.ID = ((int*)ptr2);
      Crosshair.AttachedLine.Point1.X = pad->Point2.X;
      Crosshair.AttachedLine.Point1.Y = pad->Point2.Y;
      Crosshair.AttachedLine.Point1.X2 = pad->Point2.X2;
      Crosshair.AttachedLine.Point1.Y2 = pad->Point2.Y2;
      Crosshair.AttachedLine.Point1.ID = ((int*)ptr2);
      Crosshair.AttachedLine.State = 1;
      return;
    }
  }
  Crosshair.AttachedLine.Point2.X = Crosshair.X;
  Crosshair.AttachedLine.Point1.X = Crosshair.X;
  Crosshair.AttachedLine.Point2.Y = Crosshair.Y;
  Crosshair.AttachedLine.Point1.Y = Crosshair.Y;
  Crosshair.AttachedLine.State = 1;
  return;
}
void NotifyBlock( void )
{
  HideCrosshair( 1 );
  if ( Crosshair.AttachedBox.State == 0 )
  {
    Crosshair.AttachedBox.State = 1;
    Crosshair.AttachedBox.Point2.X = Crosshair.X;
    Crosshair.AttachedBox.Point1.X = Crosshair.X;
    Crosshair.AttachedBox.Point2.Y = Crosshair.Y;
    Crosshair.AttachedBox.Point1.Y = Crosshair.Y;
  }
  else
  if ( Crosshair.AttachedBox.State == 1 )
  {
    Crosshair.AttachedBox.State = 2;
    RestoreCrosshair( 1 );
    return;
  }
  RestoreCrosshair( 1 );
  return;
}
void NotifyMode( void )
{
  int eax;
  int ah;
  int ecx;
  int edx;
  int dh;
  int ebp_320;
#error unstructured control flow
}
int ActionAtomic( int argc, char **argv, int x, int y )
{
  int eax;
  if ( argc != 1 )
  {
    Message( "Syntax error.  Usage:\n%s\n", atomic_syntax[0] );
    return 1;
  }
  if ( GetFunctionID( argv[0] ) == 14 )
  {
    RestoreUndoSerialNumber( );
    IncrementUndoSerialNumber( );
    return 0;
  }
  if ( eax >= 14 )
  {
    if ( GetFunctionID( argv[0] ) == 66 )
    {
      RestoreUndoSerialNumber( );
      return 0;
    }
    if ( GetFunctionID( argv[0] ) == 68 )
    {
      SaveUndoSerialNumber( );
      return 0;
    }
  }
  else
  if ( GetFunctionID( argv[0] ) == 7 )
  {
    RestoreUndoSerialNumber( );
    if ( Bumped )
    {
      IncrementUndoSerialNumber( );
      return 0;
    }
  }
  return 0;
}
int ActionDRCheck( int argc, char **argv, int x, int y )
{
  int count;
  if ( gui->drc_gui == 0 || gui->drc_gui->log_drc_overview )
    Message( "Rules are minspace %d.%02d, minoverlap %d.%d minwidth %d.%02d, minsilk %d.%02d\nmin drill %d.%02d, min annular ring %d.%02d\n", ( PCB->Bloat + 1 ) / 100, __MOD(( PCB->Bloat + 1 ),100), PCB->Shrink / 100, __MOD(PCB->Shrink,100), PCB->minWid / 100, __MOD(PCB->minWid,100), PCB->minSlk / 100, __MOD(PCB->minSlk,100), PCB->minDrill / 100, __MOD(PCB->minDrill,100), PCB->minRing / 100, __MOD(PCB->minRing,100) );
  HideCrosshair( 1 );
  DRCAll( );
  if ( gui->drc_gui == 0 || gui->drc_gui->log_drc_overview )
  {
    if ( count )
    {
      if ( count >= 0 )
        Message( "Found %d design rule errors.\n", count );
      else
        Message( "Aborted DRC after %d design rule errors.\n", 0 - ( 0 - count ) );
    }
    else
      Message( "No DRC problems found.\n" );
  }
  RestoreCrosshair( 1 );
  return 0;
}
int ActionDumpLibrary( int argc, char **argv, int x, int y )
{
  int i, j;
  __printf_chk( 1, "**** Do not count on this format.  It will change ****\n\n" );
  __printf_chk( 1, "MenuN   = %d\n", Library.MenuN );
  __printf_chk( 1, "MenuMax = %d\n", (int)Library.MenuMax );
  if ( Library.MenuN )
  {
    i = 0;
    do
    {
      __printf_chk( 1, "Library #%d:\n", i );
      __printf_chk( 1, "    EntryN    = %d\n", Library.Menu->EntryN );
      __printf_chk( 1, "    EntryMax  = %d\n", Library.Menu->Name[0] );
      __printf_chk( 1, "    Name      = \"%s\"\n", "(unknown)" );
      __printf_chk( 1, "    directory = \"%s\"\n", "(unknown)" );
      __printf_chk( 1, "    Style     = \"%s\"\n", "(unknown)" );
      __printf_chk( 1, "    flag      = %d\n", Library.Menu->__pad[ ( i * 28 ) - 1 - 1 ] );
      if ( Library.Menu->Name[0] )
      {
        j = 0;
        do
        {
          __printf_chk( 1, "    #%4d: ", j );
          if ( *(int*)(*(int*)(ebp_28 + Library.Menu + 20) + ( esi * 24 )) == -1 )
          {
            __printf_chk( 1, "newlib: \"%s\"\n", "(unknown)" );
          }
          else
          {
            __printf_chk( 1, "\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"\n", &eax, &edx, &ecx, &esi, &edi );
          }
          j++;
        }
        while ( *(int*)(ebp_28 + Library.Menu + 12) <= j + 1 );
      }
      i++;
    }
    while ( Library.MenuN <= i );
  }
  return 0;
}
int ActionFlip( int argc, char **argv, int x, int y )
{
  int eax;
  char *function;
  /* phantom */ ElementTypePtr element;
  void *ptrtmp;
  /* phantom */ int err;
  if ( argc > 0 && argv[0] )
  {
    HideCrosshair( 1 );
    switch ( GetFunctionID( function ) )
    {
    case '.':
      if ( SearchScreen( x, y, 2, &ptrtmp, &ptrtmp, &ptrtmp ) == 0 )
      {
        RestoreCrosshair( 1 );
        return 0;
      }
      ChangeElementSide( &ptrtmp[0], ( Crosshair.Y * 2 ) - PCB->MaxHeight );
      IncrementUndoSerialNumber( );
      Draw( );
      break;
    case 'F':
    case 'H':
      ChangeSelectedElementSide( );
      break;
    default:
      RestoreCrosshair( 1 );
      break;
    }
  }
  Message( "Syntax error.  Usage:\n%s\n", flip_syntax[0] );
  return 0;
}
int ActionMessage( int argc, char **argv, int x, int y )
{
  int i = 0;
  if ( argc <= 0 )
  {
    Message( "Syntax error.  Usage:\n%s\n", message_syntax[0] );
  }
  do
  {
    i++;
    Message( &argv );
    Message( "\n" );
  }
  while ( argc <= i );
  return 0;
}
int ActionSetThermal( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  char *function;
  char *style;
  void *ptr1, *ptr2, *ptr3;
  int type, kind;
  /* phantom */ int err;
  if ( argc > 0 && function && style && function[0] && style[0] )
  {
    Boolean absolute;
    HideCrosshair( 1 );
    if ( absolute )
    {
      kind = (int)( (float)( GetValue( style, 0, &absolute ) ) );
      switch ( GetFunctionID( function ) + -46 )
      {
      case 0:
        if ( type == 0 )
        {
          RestoreCrosshair( 1 );
          return 0;
        }
        ChangeObjectThermal( type, ptr1, ptr2, ptr3, kind );
        IncrementUndoSerialNumber( );
        Draw( );
        function[0] = function;
        break;
      case 31:
        ChangeSelectedThermals( 256, kind );
        break;
      case 33:
        ChangeSelectedThermals( 1, kind );
        break;
      case 24:
      case 26:
        ChangeSelectedThermals( 257, kind );
        break;
      default:
        break;
      }
    }
    RestoreCrosshair( 1 );
  }
  Message( "Syntax error.  Usage:\n%s\n", setthermal_syntax[0] );
  return 0;
}
void ActionMovePointer( char *deltax, char *deltay )
{
  LocationType x = Crosshair.X;
  LocationType y = Crosshair.Y;
  LocationType dx = (int)( PCB->Grid * (double)( strtol( deltax, 0, 10 ) ) );
  LocationType dy = (int)( PCB->Grid * (double)( strtol( deltay, 0, 10 ) ) );
  dy = Settings.ShowSolderSide != 0 ? (int)( PCB->Grid * (double)( strtol( deltay, 0, 10 ) ) ) : 0 - (int)( PCB->Grid * (double)( strtol( deltay, 0, 10 ) ) );
  MoveCrosshairRelative( dx, Settings.ShowSolderSide != 0 ? (int)( PCB->Grid * (double)( strtol( deltay, 0, 10 ) ) ) : 0 - (int)( PCB->Grid * (double)( strtol( deltay, 0, 10 ) ) ) );
  FitCrosshairIntoGrid( Crosshair.X, Crosshair.Y );
  Crosshair.X = x;
  Crosshair.Y = y;
  HideCrosshair( 0 );
  dy = Settings.ShowSolderSide != 0 ? (int)( PCB->Grid * (double)( strtol( deltay, 0, 10 ) ) ) : 0 - (int)( PCB->Grid * (double)( strtol( deltay, 0, 10 ) ) );
  MoveCrosshairRelative( dx, Settings.ShowSolderSide != 0 ? (int)( PCB->Grid * (double)( strtol( deltay, 0, 10 ) ) ) : 0 - (int)( PCB->Grid * (double)( strtol( deltay, 0, 10 ) ) ) );
  AdjustAttachedObjects( );
  deltax = 0;
}
void EventMoveCrosshair( int ev_x, int ev_y )
{
  int eax;
  int edx;
  if ( 1 )
  {
    if ( MoveCrosshairAbsolute( ev_x, ev_y ) & 255 )
    {
      AdjustAttachedObjects( );
      ev_x = 0;
    }
  }
  else
  {
    IgnoreMotionEvents = 0;
  }
  return;
}
int ActionSetValue( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int ebx;
  int esi;
  int edi;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  char *function;
  char *val;
  char *units;
  Boolean r;
  float value;
  /* phantom */ int err;
  if ( argc > 0 && argc != 1 && val && function )
  {
    HideCrosshair( 1 );
    if ( GetFunctionID( function ) != 82 )
    {
      if ( eax >= 82 )
      {
        if ( GetFunctionID( function ) != 109 )
        {
          if ( eax < 109 )
          {
            if ( GetFunctionID( function ) == 112 )
            {
              SetViaDrillingHole( r == 0 ? (int)( GetValue( val, units, &r ) + (double)( Settings.ViaDrillingHole ) ) : (int)( GetValue( val, units, &r ) ), 0 );
              hid_action( "RouteStylesChanged" );
              RestoreCrosshair( 1 );
              return 0;
            }
            else
            if ( GetFunctionID( function ) == 113 )
              goto B17;
            else
              units[0] = units;
          }
          else
          {
            units[0] = units;
            if ( GetFunctionID( function ) != 84 )
            {
            }
          }
        }
B17:;
        SetViaSize( r == 0 ? (int)( GetValue( val, units, &r ) + (double)( Settings.ViaThickness ) ) : (int)( GetValue( val, units, &r ) ), 0 );
        hid_action( "RouteStylesChanged" );
        units[0] = units;
      }
      else
      if ( GetFunctionID( function ) != 31 )
      {
        if ( ccdep2 <= ccdep1 )
        {
          if ( GetFunctionID( function ) + -37 > 1 )
          {
          }
          else
          {
            SetLineSize( r == 0 ? (int)( GetValue( val, units, &r ) + (double)( Settings.LineThickness ) ) : (int)( GetValue( val, units, &r ) ) );
            hid_action( "RouteStylesChanged" );
          }
        }
        else
        {
        }
      }
      else
      {
        if ( r == 0 )
        {
          if ( (double)( (int)( GetValue( val, units, &r ) ) ) != 0.000000000000 || (double)( (int)( GetValue( val, units, &r ) ) ) != 0.000000000000 )
            fp5 = 0.000000000000;
          else
          if ( (double)( (int)( 0.000000000000 ) ) == 0.000000000000 )
          {
            if ( (double)( (int)( 0.000000000000 ) ) == 0.000000000000 )
            {
              value = 1.000000000000;
              if ( 1.000000000000 <= fp6 + fp5 )
              {
                if ( fp5 != fp2 )
                {
                }
                else
                if ( fp5 == fp2 )
                {
                }
                else
                {
                }
                SetGrid( (float)( fp6 ), 0 );
              }
              else
                SetGrid( (float)( value ), 0 );
            }
            else
            {
            }
          }
          else
          {
          }
          if ( ( (double)( (int)( GetValue( val, units, &r ) ) ) == 0.000000000000 && (double)( (int)( GetValue( val, units, &r ) ) ) == 0.000000000000 ) || (double)( (int)( 0.000000000000 ) ) == 0.000000000000 )
          {
            if ( fp5 == 1.000000000000 )
            {
              if ( 0 )
              {
              }
            }
            else
            {
            }
            Message( "Don't combine metric/English grids like that!\n" );
          }
        }
        SetGrid( (float)( 0.000000000000 ), 0 );
      }
      RestoreCrosshair( 1 );
      units[0] = units;
    }
    *(double*)(GetValue( val, units, &r )) /= 45.000000000000;
    SetTextScale( eax );
  }
  Message( "Syntax error.  Usage:\n%s\n", setvalue_syntax[0] );
  return 0;
}
int ActionQuit( int argc, char **argv, int x, int y )
{
  char *force;
  if ( argc > 0 && argv[0] && strcasecmp( force, "force" ) == 0 )
  {
    PCB->Changed = 0;
    exit( 0 );
  }
  if ( PCB->Changed )
  {
    gui->close_confirm_dialog( );
    if ( gui == 1 )
    {
      QuitApplication( );
      return 1;
    }
    return 1;
  }
  QuitApplication( );
  return 1;
}
int ActionConnection( int argc, char **argv, int x, int y )
{
  int eax;
  char *function;
  if ( argc <= 0 || argv[0] == 0 )
  {
    Message( "Syntax error.  Usage:\n%s\n", connection_syntax[0] );
    return 1;
  }
  HideCrosshair( 1 );
  if ( GetFunctionID( function ) != 63 )
  {
    if ( eax < 63 )
    {
      if ( GetFunctionID( function ) == 64 )
        goto B16;
      else
      {
        if ( GetFunctionID( function ) == 65 )
        {
          ResetFoundPinsViasAndPads( 1 );
          RestoreCrosshair( 1 );
          return 0;
        }
      }
    }
    else
    if ( GetFunctionID( function ) == 28 )
    {
      gui->get_coords( "Click on a connection", x, y );
      LookupConnection( x, y, 1, 1, 4 );
    }
  }
  else
  {
    SaveUndoSerialNumber( );
    ResetFoundPinsViasAndPads( 1 );
    RestoreUndoSerialNumber( );
  }
B16:;
  ResetFoundLinesAndPolygons( 1 );
}
int ActionDisperseElements( int argc, char **argv, int x, int y )
{
  int eax;
  char *function;
  long minx, miny, maxx, maxy, dx, dy;
  int all, bad;
  if ( argc > 0 && argv[0] && function[0] )
  {
    if ( GetFunctionID( function ) == 1 )
      all = 1;
    else
    {
      all = 0;
      if ( GetFunctionID( function ) == 70 )
        goto B10;
    }
  {
B10:;
    Cardinal n = PCB->Data->ElementN + -1;
    ElementTypePtr element;
    if ( PCB->Data->ElementN + -1 != -1 )
    {
      miny = 10000;
      minx = 10000;
      while ( element = ( PCB->Data->ElementN * 300 ) + -300 + -300 + PCB->Data->Element, n == -1 )
      {
      }
    }
    IncrementUndoSerialNumber( );
    ClearAndRedrawOutput( );
    SetChangedFlag( 1 );
    return 0;
  }
  }
  Message( "Syntax error.  Usage:\n%s\n", disperseelements_syntax[0] );
  return 1;
}
int ActionDisplay( int argc, char **argv, int childX, int childY )
{
  int eax;
  int ah;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  char *function, *str_dir;
  int id;
  /* phantom */ int err;
  if ( argc > 0 && function )
  {
    if ( str_dir == 0 || str_dir[0] == 0 )
    {
      HideCrosshair( 1 );
      switch ( edx )
      {
      case 4:
        gui->invalidate_all( );
        break;
      case 49:
      {
        BoxType area;
        area.X1 = 0;
        area.Y1 = 0;
        area.X2 = Output.Width;
        area.Y2 = Output.Height;
        RedrawOutput( &area );
      }
        break;
      case 0:
      case 34:
      case 103:
      {
        Cardinal n = PCB->Data->ElementN + -1;
        /* phantom */ ElementTypePtr element;
        if ( PCB->Data->ElementN + -1 != -1 )
        {
          PCB->Data->ElementN = ( PCB->Data->ElementN * 300 ) + -300;
          while ( 1 )
          {
            n += -1;
            EraseElementName( PCB->Data->Element + ( PCB->Data->ElementN * 300 ) + -300 + -300 );
            if ( n == -1 )
            {
            }
            else
            {
            }
          }
        }
        PCB->Flags.f &= -97;
        if ( id == 8 )
          PCB->Flags.f |= 32;
        else
        if ( id == 42 )
          PCB->Flags.f |= 64;
      {
        Cardinal n = PCB->Data->ElementN + -1;
        /* phantom */ ElementTypePtr element;
        if ( PCB->Data->ElementN + -1 != -1 )
        {
          while ( 1 )
          {
            n += -1;
            DrawElementName( PCB->Data->Element + ( PCB->Data->ElementN * 300 ) + -300 + -300, 0 );
            if ( n == -1 )
            {
              void *ptr1, *ptr2, *ptr3;
              Draw( );
            }
            else
            {
            }
          }
        }
      }
      }
        break;
      case 79:
        PCB->Flags.f ^= 256;
        AdjustAttachedObjects( );
        break;
      case 10:
        if ( ( ah & 1 ) & 255 )
        {
          PCB->Flags.f = PCB->Flags.f;
          PCB->Clipping = 0;
        }
        else
          PCB->Clipping = __MOD(( *(int*)(PCB + 108) + 1 ),3);
        AdjustAttachedObjects( );
        break;
      case 11:
        Crosshair.shape = Crosshair.shape + 1 != 3 ? Basic_Crosshair_Shape : Crosshair.shape + 1;
        break;
      case 90:
        PCB->Flags.f ^= 16;
        break;
      case 91:
        PCB->Flags.f ^= 512;
        break;
      case 100:
        PCB->Flags.f ^= 1024;
        break;
      case 92:
        PCB->Flags.f ^= 4096;
        break;
      case 98:
        PCB->Flags.f ^= 2;
        break;
      case 93:
        PCB->Flags.f ^= 16384;
        ClearAndRedrawOutput( );
        break;
      case 96:
        PCB->Flags.f ^= 131072;
        ClearAndRedrawOutput( );
        break;
      case 94:
        PCB->Flags.f = ( PCB->Flags.f ^ 0x40000 ) & 0xfff7ffff;
        break;
      case 95:
        PCB->Flags.f = ( PCB->Flags.f ^ 0x80000 ) & 0xfffbffff;
        break;
      case 84:
        PCB->Flags.f ^= 2097152;
        ClearAndRedrawOutput( );
        break;
      case 88:
        PCB->Flags.f ^= 8;
        break;
      case 89:
        PCB->Flags.f ^= 65536;
        break;
      case 80:
        PCB->Flags.f = ( (unsigned char)( PCB->Flags.f ) ^ 128 );
        if ( (_Bool)( ( ( (unsigned char)( PCB->Flags.f ) ^ 128 ) >> 7 ) & 1 ) && Settings.Mode == 2 )
        {
          SaveUndoSerialNumber( );
          ResetFoundPinsViasAndPads( 1 );
          RestoreUndoSerialNumber( );
          ResetFoundLinesAndPolygons( 1 );
          if ( Crosshair.AttachedLine.State )
            LookupConnection( Crosshair.AttachedLine.Point1.X, Crosshair.AttachedLine.Point1.Y, 1, 1, 4 );
        }
        break;
      case 99:
        PCB->Flags.f ^= 4;
        ClearAndRedrawOutput( );
        break;
      case 97:
        PCB->Flags.f ^= 32768;
        break;
      case 86:
        PCB->Flags.f ^= 1;
        UpdateAll( );
        break;
      case 85:
        PCB->Flags.f ^= 8192;
        UpdateAll( );
        break;
      case 81:
        PCB->Flags.f ^= 2048;
        break;
      case 82:
        PCB->Flags.f ^= 1048576;
        break;
      case 83:
      {
        /* phantom */ float oldGrid;
        PCB->Grid = 1.000000000000;
        if ( MoveCrosshairAbsolute( childX, childY ) & 255 )
          RestoreCrosshair( 0 );
        SetGrid( (float)( PCB->Grid ), 1 );
      }
        break;
      case 23:
        Settings.DrawGrid = Settings.DrawGrid == 0;
        UpdateAll( );
        break;
      case 44:
      {
        /* phantom */ ElementTypePtr element;
        void *ptrtmp;
        int x, y;
        gui->get_coords( "Click on an element", x, x, y );
        if ( SearchScreen( x, y, 2, &ptr1, &ptr1, &ptr1 ) )
          gui->show_item( ptr1 );
      }
        break;
      case 43:
        if ( SearchScreen( Crosshair.X, Crosshair.Y, 771, &ptr1, &ptr2, &ptr3 ) != 2 )
        {
          if ( eax < 2 )
          {
            if ( SearchScreen( Crosshair.X, Crosshair.Y, 771, &ptr1, &ptr2, &ptr3 ) == 256 )
            {
              DrawPinName( &ptr2[0], 0 );
              AddObjectToFlagUndoList( 256, ptr1, ptr2, ptr3 );
              ((int*)ptr2) ^= 32;
            }
            else
            if ( SearchScreen( Crosshair.X, Crosshair.Y, 771, &ptr1, &ptr2, &ptr3 ) == 512 )
            {
              argv[0] = &argv;
              DrawPadName( &ptr2[0], 0 );
            }
          }
          else
          {
            argv[0] = &argv;
            if ( SearchScreen( Crosshair.X, Crosshair.Y, 771, &ptr1, &ptr2, &ptr3 ) == 1 )
            {
              argv[0] = &argv;
              DrawViaName( &ptr2[0], 0 );
            }
          }
          AddObjectToFlagUndoList( ebp_136, ebp_132, ebp_128, ebp_124 );
          ((int*)ptr2) ^= 32;
        }
        else
        {
          Cardinal n;
          Cardinal sn = ((int*)ptr1);
          PinTypePtr pin;
          if ( ((int*)ptr1) )
          {
            n = 0;
            while ( 1 )
            {
              DrawPinName( pin, 0 );
              AddObjectToFlagUndoList( 256, ptr1, (void*)pin, (void*)pin );
              pin->Flags.f ^= 32;
              sn = ((int*)ptr1);
              if ( ((int*)ptr1) == 0 || sn <= ( sn + n + 1 ) - sn )
                goto B68;
              else
              {
                sn = ((int*)ptr1);
              }
            }
          }
        {
B68:;
          Cardinal n = 0;
          Cardinal sn = ((int*)ptr1);
          PadTypePtr pad;
          while ( sn && n < sn )
          {
            pad = ((int*)ptr1) + 0;
            DrawPadName( pad, 0 );
            AddObjectToFlagUndoList( 512, ptr1, (void*)pad, (void*)pad );
            pad->Flags.f ^= 32;
            sn = ((int*)ptr1);
            if ( ((int*)ptr1) == ((int*)ptr1) )
            {
              n++;
            }
          }
        }
        }
        SetChangedFlag( 1 );
        IncrementUndoSerialNumber( );
        break;
      default:
        RestoreCrosshair( 1 );
        argv[0] = &argv;
        break;
      }
      RestoreCrosshair( 1 );
      return 0;
    }
    else
    {
      if ( GetFunctionID( function ) == 91 )
      {
        if ( argc > 2 )
        {
          PCB->GridOffsetX = strtol( argv[1], 0, 10 );
          PCB->GridOffsetY = strtol( argv[2], 0, 10 );
          if ( Settings.DrawGrid )
          {
            UpdateAll( );
            return 0;
          }
        }
        else
          argv[0] = &argv;
      }
    }
    Message( "Syntax error.  Usage:\n%s\n", display_syntax[0] );
    return 0;
  }
  return 0;
}
int ActionMode( int argc, char **argv, int x, int y )
{
  int eax;
  char *function;
  if ( argc <= 0 || argv[0] == 0 )
  {
    Message( "Syntax error.  Usage:\n%s\n", mode_syntax[0] );
    return 1;
  }
  Note.X = Crosshair.X;
  Note.Y = Crosshair.Y;
  HideCrosshair( 1 );
  switch ( GetFunctionID( function ) + -5 )
  {
  case 53:
    if ( Note.Click )
    {
      Note.Click = 0;
      SaveUndoSerialNumber( );
      gui->shift_is_pressed( );
      if ( gui == 0 )
      {
        if ( SelectBlock( ebp_40, 0 ) & 255 )
          SetChangedFlag( 1 );
        if ( Note.Moving )
        {
          Note.Moving = 0;
          Note.Hit = 0;
          RestoreCrosshair( 1 );
          return 0;
        }
      }
      RestoreUndoSerialNumber( );
      if ( SelectObject( ) & 255 )
        SetChangedFlag( 1 );
      Note.Hit = 0;
      Note.Moving = 0;
    }
    else
    if ( Note.Moving == 0 )
    {
      if ( Note.Hit )
      {
        NotifyMode( );
        Note.Hit = 0;
      }
      else
      if ( Settings.Mode == 110 )
      {
        RestoreUndoSerialNumber( );
        if ( SelectBlock( ebp_24, 1 ) & 255 )
        {
          SetChangedFlag( 1 );
        }
        else
        if ( Bumped )
        {
          IncrementUndoSerialNumber( );
        }
        Crosshair.AttachedBox.State = 0;
      }
    }
    else
    {
      RestoreUndoSerialNumber( );
      NotifyMode( );
      ClearBuffer( &Buffers[ Settings.BufferNumber ] );
      SetBufferNumber( (int)Note.Buffer );
      Note.Moving = 0;
      Note.Hit = 0;
    }
    if ( saved_mode )
      RestoreMode( );
    saved_mode = 0;
    break;
  case 12:
    SetMode( 105 );
    break;
  case 27:
    SetMode( 106 );
    break;
  case 34:
    SetMode( 111 );
    break;
  case 36:
    SetMode( 104 );
    break;
  case 39:
    SetMode( 0 );
    break;
  case 4:
  {
    static int saved_mode;
    saved_mode = Settings.Mode;
    SetMode( 0 );
    SetMode( saved_mode );
  }
    break;
  case 22:
    switch ( Settings.Mode )
    {
      if ( eax < 109 )
      {
        if ( Settings.Mode == 111 )
        {
          SetMode( 0 );
          SetMode( 110 );
        }
      }
      else
      {
        if ( Settings.Mode < 102 )
        {
          RestoreCrosshair( 1 );
          return 0;
        }
      }
      break;
    default:
      if ( SelectObject( ) != 2 )
      {
        if ( Settings.Mode == 3 )
        {
          if ( Crosshair.AttachedBox.State )
          {
            SetMode( 0 );
            SetMode( 3 );
          }
        }
        else
        {
          if ( Settings.Mode == 4 )
          {
            if ( Crosshair.AttachedLine.State )
            {
              SetMode( 0 );
              SetMode( 4 );
            }
          }
        }
      }
      else
      {
        if ( Crosshair.AttachedLine.State )
        {
          SetMode( 0 );
          SetMode( 2 );
        }
      }
      break;
    case 5:
    case 6:
      break;
    case 109:
      if ( Crosshair.AttachedBox.State )
        SetMode( 0 );
        SetMode( 109 );
      break;
    }
    break;
  case 1:
    break;
  case 0:
    break;
  case 43:
    SetMode( 5 );
    break;
  case 55:
    SetMode( 103 );
    break;
  case 62:
    SetMode( 102 );
    break;
  case 76:
    if ( Settings.Mode != 2 )
    {
      if ( Settings.Mode == 109 )
      {
        if ( Crosshair.AttachedBox.State )
          continue;
      }
      else
      if ( Settings.Mode == 3 )
      {
        if ( Crosshair.AttachedBox.State )
        {
          SetMode( 3 );
        }
      }
      else
      if ( Settings.Mode == 4 && Crosshair.AttachedLine.State )
        SetMode( 4 );
    }
    else
    if ( Crosshair.AttachedLine.State )
    SaveMode( );
    saved_mode = 1;
    SetMode( 110 );
    NotifyMode( );
  case 32:
    SetMode( 2 );
    break;
  case 51:
    SetMode( 3 );
    break;
  case 48:
    SetMode( 4 );
    break;
  case 40:
    NotifyMode( );
    break;
  case 77:
    SetMode( 6 );
    break;
  case 80:
    SetMode( 108 );
    break;
  case 104:
    SetMode( 1 );
    break;
  case 61:
    RestoreMode( );
    break;
  case 63:
    SaveMode( );
    break;
  default:
    break;
  }
}
int ActionRemoveSelected( int argc, char **argv, int x, int y )
{
  HideCrosshair( 1 );
  if ( RemoveSelected( ) & 255 )
    SetChangedFlag( 1 );
  RestoreCrosshair( 1 );
  return 0;
}
int ActionRenumber( int argc, char **argv, int x, int y )
{
  int eax;
  int ah;
  int ecx;
  int edx;
  int ebp_52;
  int ebp_48;
  int ebp_36;
#error unstructured control flow
}
// Lost vars at line 3561 through condition folding
// Lost vars at line 3572 through condition folding
int ActionRipUp( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  char *function;
  Boolean changed;
  if ( argc > 0 && argv[0] )
  {
    HideCrosshair( 1 );
    switch ( GetFunctionID( function ) )
    {
    case 1:
    {
      Cardinal l = 0;
      LayerTypePtr layer = &PCB->Data->Layer;
      if ( PCB->Data->LayerN != -2 )
      {
        *(int*)&changed = 0;
      {
        while ( n = layer->LineN + -1, layer->LineN + -1 == -1 )
        {
          l++;
          if ( PCB->Data->LayerN + 2 <= l )
          {
          }
          else
          {
            layer++;
          }
        }
        do
        {
          line = layer->Line + ( layer->LineN * 88 ) + -88 + -88;
          if ( ( line->Flags.f & 8320 ) + -128 == 0 )
          {
            n += -1;
            RemoveObject( 4, (void*)layer, (void*)line, (void*)line );
            *(int*)&changed = 1;
            if ( n != -1 )
              continue;
            else
            {
              break;
            }
          }
          else
          {
            n += -1;
          }
        }
        while ( n + -1 != -1 );
        l++;
      }
      }
    {
      Cardinal n;
      Cardinal sn = PCB->Data->ViaN;
      PinTypePtr via;
      if ( PCB->Data->ViaN )
      {
        n = 0;
        while ( via = PCB->Data->Via + ( n * 76 ), ( via->Flags.f & 8320 ) + -128 )
        {
          sn = PCB->Data->ViaN;
          if ( PCB->Data->ViaN == 0 || sn <= ( sn + n + 1 ) - sn )
            goto B51;
          else
          {
          }
        }
        RemoveObject( 1, (void*)via, (void*)via, (void*)via );
        sn = PCB->Data->ViaN;
      }
B51:;
      if ( 1 )
      {
        IncrementUndoSerialNumber( );
        SetChangedFlag( 1 );
      }
    }
    }
      break;
    case 70:
    {
      Cardinal l;
      LayerTypePtr layer = &PCB->Data->Layer;
      if ( PCB->Data->LayerN != -2 )
      {
        l = 0;
        while ( layer->On == 0 || layer->LineN + -1 == -1 )
        {
          l++;
          if ( PCB->Data->LayerN + 2 <= l + 1 )
            goto B13;
          else
          {
            layer++;
          }
        }
        do
        {
          line = layer->Line + ( layer->LineN * 88 ) + -88 + -88;
          if ( ( line->Flags.f & 8384 ) == 192 )
          {
            n += -1;
            RemoveObject( 4, (void*)layer, (void*)line, (void*)line );
            if ( n != -1 )
              continue;
            else
              break;
          }
          else
          {
            n += -1;
          }
        }
        while ( n + -1 != -1 );
        l = l;
        l++;
      }
B13:;
      if ( PCB->ViaOn && PCB->Data->ViaN )
      {
        n = 0;
        while ( via = PCB->Data->Via + ( n * 76 ), ( via->Flags.f & 8384 ) != 192 )
        {
          sn = PCB->Data->ViaN;
          if ( PCB->Data->ViaN == 0 || sn <= ( sn + n + 1 ) - sn )
            goto B26;
          else
          {
          }
        }
        RemoveObject( 1, (void*)via, (void*)via, (void*)via );
        sn = PCB->Data->ViaN;
      }
B26:;
      if ( 1 )
      {
        IncrementUndoSerialNumber( );
        SetChangedFlag( 1 );
      }
    }
      break;
    case 23:
    {
      void *ptr1, *ptr2, *ptr3;
      if ( SearchScreen( Crosshair.X, Crosshair.Y, 2, &ptr1, &ptr2, &ptr3 ) )
      {
        Note.Buffer = Settings.BufferNumber;
        SetBufferNumber( 4 );
        ClearBuffer( &Buffers[ Settings.BufferNumber ] );
        CopyObjectToBuffer( Buffers[ Settings.BufferNumber ].Data, &PCB->Data, 2, ptr1, ptr2, ptr3 );
        SmashBufferElement( &Buffers[ Settings.BufferNumber ] );
        Buffers[ Settings.BufferNumber ].X = 0;
        Buffers[ Settings.BufferNumber ].Y = 0;
        SaveUndoSerialNumber( );
        EraseObject( 2, ptr1, ptr1 );
        MoveObjectToRemoveUndoList( 2, ptr1, ptr2, ptr3 );
        RestoreUndoSerialNumber( );
        CopyPastebufferToLayout( 0, 0 );
        SetBufferNumber( (int)Note.Buffer );
        SetChangedFlag( 1 );
      }
    }
      break;
    }
    RestoreCrosshair( 1 );
  }
  return 0;
}
int ActionAddRats( int argc, char **argv, int x, int y )
{
  int eax;
  double fp6;
  double fp7;
  char *function;
  RatTypePtr shorty;
  float len, small;
  if ( argc > 0 && argv[0] )
  {
    if ( Settings.RatWarn )
      ClearWarnings( );
    HideCrosshair( 1 );
    if ( GetFunctionID( function ) != 14 )
    {
      if ( eax >= 14 )
      {
        if ( GetFunctionID( function ) == 70 )
          goto B14;
        else
        if ( GetFunctionID( function ) == 80 )
          goto B14;
B14:;
        if ( ( AddAllRats( 1, 0 ) & 255 ) == 0 )
        {
          RestoreCrosshair( 1 );
          return 0;
        }
      }
      else
      if ( AddAllRats( 1, 0 ) == 3 )
      {
        if ( ( AddAllRats( 0, 0 ) & 255 ) == 0 )
        {
          RestoreCrosshair( 1 );
          return 0;
        }
      }
      SetChangedFlag( 1 );
      RestoreCrosshair( 1 );
    }
    else
    {
      Cardinal n = PCB->Data->RatN + -1;
      /* phantom */ RatTypePtr line;
      if ( PCB->Data->RatN + -1 != -1 )
      {
        shorty = 0;
        PCB->Data->RatN = ( PCB->Data->RatN * 92 ) + -92 + PCB->Data->Rat;
        do
        {
          if ( ( ( *(char*)(( PCB->Data->RatN * 92 ) + -92 + PCB->Data->Rat + 20) & 64 ) & 255 ) == 0 )
          {
            if ( ( (double)( *(int*)(( PCB->Data->RatN * 92 ) + -92 + PCB->Data->Rat + 44) - *(int*)(( PCB->Data->RatN * 92 ) + -92 + PCB->Data->Rat + 64) ) * (double)( *(int*)(( PCB->Data->RatN * 92 ) + -92 + PCB->Data->Rat + 44) - *(int*)(( PCB->Data->RatN * 92 ) + -92 + PCB->Data->Rat + 64) ) ) * 0.000000000000 < 0.000000000000 )
              shorty = ( PCB->Data->RatN * 92 ) + -92 + PCB->Data->Rat;
            else
            {
            }
          }
          n += -1;
          PCB->Data->Rat->BoundingBox.X1 = ( PCB->Data->RatN * 92 ) + -92 + PCB->Data->Rat + -92;
        }
        while ( n + -1 != -1 );
        if ( shorty == 0 )
        {
          RestoreCrosshair( 1 );
          return 0;
        }
        AddObjectToFlagUndoList( 32, (void*)shorty, (void*)shorty, (void*)shorty );
        shorty->Flags.f |= 64;
        DrawRat( shorty, 0 );
        Draw( );
        CenterDisplay( ( shorty->Point2.X + shorty->Point1.X ) / 2, ( shorty->Point2.Y + shorty->Point1.Y ) / 2, 0 );
      }
    }
  }
  return 0;
}
int ActionDelete( int argc, char **argv, int x, int y )
{
  int eax;
  char *function;
  int id;
  *(int*)&function[0] = 0;
  id = GetFunctionID( function );
  Note.X = Crosshair.X;
  Note.Y = Crosshair.Y;
  if ( GetFunctionID( function ) == -1 )
  {
    if ( RemoveSelected( ) & 255 )
      HideCrosshair( 1 );
    else
    {
      HideCrosshair( 1 );
      SaveMode( );
      SetMode( 103 );
      NotifyMode( );
      RestoreMode( );
    }
  }
  else
  {
    HideCrosshair( 1 );
    switch ( id )
    {
    default:
      break;
    case 46:
      SaveMode( );
      SetMode( 103 );
      NotifyMode( );
      RestoreMode( );
      break;
    case 70:
      RemoveSelected( );
      break;
    case 3:
      if ( DeleteRats( 0 ) & 255 )
      {
        SetChangedFlag( 1 );
      }
      break;
    case 80:
      if ( DeleteRats( 1 ) & 255 )
      {
        SetChangedFlag( 1 );
      }
      break;
    }
  }
  RestoreCrosshair( 1 );
  return 0;
}
int ActionDeleteRats( int argc, char **argv, int x, int y )
{
  int eax;
  char *function;
  if ( argc > 0 && argv[0] )
  {
    if ( Settings.RatWarn )
      ClearWarnings( );
    HideCrosshair( 1 );
    switch ( GetFunctionID( function ) )
    {
    case 3:
      if ( DeleteRats( 0 ) & 255 )
        SetChangedFlag( 1 );
      break;
    case 70:
    case 80:
      if ( DeleteRats( 1 ) & 255 )
        SetChangedFlag( 1 );
      break;
    }
    RestoreCrosshair( 1 );
  }
  return 0;
}
int ActionAutoPlaceSelected( int argc, char **argv, int x, int y )
{
  hid_action( "Busy" );
  gui->confirm_dialog( (long long)( "Auto-placement can NOT be undone.\nDo you want to continue anyway?\n" ) );
  if ( gui == 0 )
  {
    return 0;
  }
  HideCrosshair( 1 );
  if ( AutoPlaceSelected( ) & 255 )
  {
    SetChangedFlag( 1 );
  }
  RestoreCrosshair( 1 );
  return 0;
}
int ActionAutoRoute( int argc, char **argv, int x, int y )
{
  int eax;
  char *function;
  if ( argc <= 0 )
  {
    hid_action( "Busy" );
    return 0;
  }
  function[0] = argv[0];
  hid_action( "Busy" );
  if ( function )
  {
    HideCrosshair( 1 );
    switch ( GetFunctionID( function ) )
    {
    case 3:
      if ( ( AutoRoute( 0 ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
      }
      SetChangedFlag( 1 );
      break;
    case 70:
    case 80:
      if ( ( AutoRoute( 1 ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
      }
      SetChangedFlag( 1 );
      break;
    }
  }
  return 0;
}
int ActionMarkCrosshair( int argc, char **argv, int x, int y )
{
  char *function;
  if ( argc <= 0 || argv[0] == 0 || function[0] == 0 )
  {
    if ( Marked.status )
    {
      DrawMark( 1 );
      Marked.status = 0;
      return 0;
    }
  }
  else
  {
    if ( GetFunctionID( function ) == 10 )
    {
      DrawMark( 1 );
    }
    else
    {
      return 0;
    }
  }
  Marked.status = 1;
  Marked.X = Crosshair.X;
  Marked.Y = Crosshair.Y;
  DrawMark( 0 );
  return 0;
}
int ActionChangeSize( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int ebx;
  int esi;
  int edi;
  double fp7;
  char *function;
  char *delta;
  char *units;
  Boolean r;
  float value;
  if ( argc > 0 && argc != 1 && delta && function )
  {
    HideCrosshair( 1 );
    switch ( GetFunctionID( function ) + -46 )
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
      units[0] = units;
      break;
    default:
      break;
    case 0:
    {
      int type;
      void *ptr1, *ptr2, *ptr3;
      if ( type == 0 )
      {
      }
      else
      {
        Message( "Sorry, the object is locked\n" );
      }
      if ( ChangeObjectSize( type, ptr1, ptr2, ptr3, (int)( 0.000000000000 ), r ) & 255 )
      {
        SetChangedFlag( 1 );
        RestoreCrosshair( 1 );
      }
    }
      break;
    case 33:
      if ( ChangeSelectedSize( 1, (int)( 0.000000000000 ), r ) & 255 )
      {
        SetChangedFlag( 1 );
        RestoreCrosshair( 1 );
      }
      break;
    case 31:
      if ( ChangeSelectedSize( 256, (int)( 0.000000000000 ), r ) & 255 )
      {
        SetChangedFlag( 1 );
        RestoreCrosshair( 1 );
      }
      break;
    case 30:
      if ( ChangeSelectedSize( 512, (int)( 0.000000000000 ), r ) & 255 )
      {
        SetChangedFlag( 1 );
        RestoreCrosshair( 1 );
      }
      break;
    case 25:
      if ( ChangeSelectedSize( 16384, (int)( 0.000000000000 ), r ) & 255 )
      {
        SetChangedFlag( 1 );
        RestoreCrosshair( 1 );
      }
      break;
    case 27:
      if ( ChangeSelectedSize( 4, (int)( 0.000000000000 ), r ) & 255 )
      {
        SetChangedFlag( 1 );
        RestoreCrosshair( 1 );
      }
      break;
    case 32:
      if ( ChangeSelectedSize( 16, (int)( 0.000000000000 ), r ) & 255 )
      {
        SetChangedFlag( 1 );
        RestoreCrosshair( 1 );
      }
      break;
    case 28:
      if ( ChangeSelectedSize( 1024, (int)( 0.000000000000 ), r ) & 255 )
      {
        SetChangedFlag( 1 );
        RestoreCrosshair( 1 );
      }
      break;
    case 26:
      if ( ChangeSelectedSize( 2, (int)( 0.000000000000 ), r ) & 255 )
      {
        SetChangedFlag( 1 );
        RestoreCrosshair( 1 );
      }
      break;
    case 24:
    case 29:
      if ( ChangeSelectedSize( 18207, (int)( 0.000000000000 ), r ) & 255 )
      {
        SetChangedFlag( 1 );
        RestoreCrosshair( 1 );
      }
      break;
    }
    RestoreCrosshair( 1 );
  }
  return 0;
}
int ActionChange2ndSize( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int ebx;
  int esi;
  int edi;
  char *function;
  char *delta;
  char *units;
  Boolean r;
  float value;
  if ( argc > 0 && argc != 1 && delta && function )
  {
    value = GetValue( delta, units, &r );
    HideCrosshair( 1 );
    switch ( GetFunctionID( function ) + -46 )
    {
    case 0:
    {
      int type;
      void *ptr1, *ptr2, *ptr3;
      gui->get_coords( "Select an Object", x, y );
      if ( type == 0 || ( ChangeObject2ndSize( type, ptr1, ptr2, ptr3, (int)( value ), r, 1 ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
      }
    }
      break;
    case 33:
      value/*.1_1of4*/ = '';
      if ( ( ChangeSelected2ndSize( 1, (int)( value ), r ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
      }
      break;
    case 31:
      value/*.1_1of4*/ = '';
      if ( ( ChangeSelected2ndSize( 256, (int)( value ), r ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
      }
      break;
    case 24:
    case 29:
      value/*.1_1of4*/ = '';
      if ( ( ChangeSelected2ndSize( 257, (int)( value ), r ) & 255 ) == 0 )
    default:
      break;
    }
    SetChangedFlag( 1 );
  }
  return 0;
}
int ActionChangeClearSize( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int ebx;
  int esi;
  int edi;
  double fp7;
  char *function;
  char *delta;
  char *units;
  Boolean r;
  float value;
  if ( argc > 0 && argc != 1 && delta && function )
  {
    HideCrosshair( 1 );
    switch ( GetFunctionID( function ) + -46 )
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 26:
    case 28:
    case 32:
      break;
    default:
      break;
    case 0:
    {
      int type;
      void *ptr1, *ptr2, *ptr3;
      gui->get_coords( "Select an Object", x, y, (float)( 0.000000000000 ) );
      if ( type )
      {
        if ( ( ChangeObjectClearSize( type, ptr1, ptr2, ptr3, (int)( 0.000000000000 ), r ) & 255 ) == 0 )
        {
          RestoreCrosshair( 1 );
        }
        SetChangedFlag( 1 );
      }
      else
        units[0] = units;
    }
      break;
    case 33:
      if ( ( ChangeSelectedClearSize( 1, (int)( 0.000000000000 ), r ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
      }
      break;
    case 30:
      if ( ( ChangeSelectedClearSize( 512, (int)( 0.000000000000 ), r ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
      }
      break;
    case 31:
      if ( ( ChangeSelectedClearSize( 256, (int)( 0.000000000000 ), r ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
      }
      break;
    case 27:
      if ( ( ChangeSelectedClearSize( 4, (int)( 0.000000000000 ), r ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
      }
      break;
    case 25:
      if ( ( ChangeSelectedClearSize( 16384, (int)( 0.000000000000 ), r ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
      }
      break;
    case 24:
    case 29:
      if ( ( ChangeSelectedClearSize( 17157, (int)( 0.000000000000 ), r ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
      }
      break;
    }
  }
  return 0;
}
int ActionMinMaskGap( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  int ebp_68;
  char *function;
  char *delta;
  char *units;
  Boolean r;
  int value;
  int flags;
  if ( argc > 0 )
  {
    function[0] = argv[0];
    if ( argc != 1 )
    {
      *(int*)&units[0] = 0;
      delta[0] = argv[1];
      if ( argc != 2 )
        units[0] = argv[2];
      if ( function )
      {
        flags = 64;
        if ( strcasecmp( function, "Selected" ) )
        {
          units[0] = delta;
          delta[0] = function;
        }
        value = (int)( GetValue( delta, units, &r ) * 0.000000000000 );
        HideCrosshair( 1 );
        SaveUndoSerialNumber( );
      {
        Cardinal n = PCB->Data->ElementN + -1;
        ElementTypePtr element;
        if ( PCB->Data->ElementN + -1 != -1 )
        {
          ebp_68 = ( PCB->Data->ElementN * 300 ) + -300;
          while ( element = ebp_68 + PCB->Data->Element, element->PinN == 0 )
          {
            Cardinal n = 0;
            Cardinal sn;
            PadTypePtr pad;
            while ( 1 )
            {
              sn = element->PadN;
              do
              {
                if ( sn == 0 || sn <= n )
                {
                  n += -1;
                  ebp_68 += -300;
                  if ( n != -1 )
                  {
                    break;
                    while ( element = ebp_68 + PCB->Data->Element, element->PinN == 0 )
                    {
                      Cardinal n = 0;
                      Cardinal sn;
                      PadTypePtr pad;
                      while ( 1 )
                      {
                        sn = element->PadN;
                      }
                    }
                    n = 0;
                    while ( 1 )
                    {
                      pin = element->Pin + ( n * 76 );
                      if ( pin->Flags.f != flags || pin->Thickness + value <= pin->Mask )
                      {
                        if ( sn == 0 )
                          continue;
                      }
                      else
                      {
                        ChangeObjectMaskSize( 256, (void*)element, (void*)pin, 0, pin->Thickness + value, 1 );
                        RestoreUndoSerialNumber( );
                        sn = element->PinN;
                        if ( element->PinN == 0 )
                          continue;
                      }
                      n = ( sn + n + 1 ) - sn;
                      if ( sn <= ( sn + n + 1 ) - element->PinN )
                        continue;
                      else
                      {
                      }
                    }
                  }
                  else
                  {
                  }
                }
                else
                {
                  pad = element->Pad + 0;
                  if ( flags == ( pad->Flags.f & flags ) && pad->Mask < pad->Thickness + value )
                  {
                    ChangeObjectMaskSize( 512, (void*)element, (void*)pad, 0, pad->Thickness + value, 1 );
                    RestoreUndoSerialNumber( );
                    sn = element->PadN;
                    if ( element->PadN != element->PadN )
                      continue;
                  }
                  else
                }
              }
              while ( element->PadN != sn );
              n++;
            }
          }
        }
      {
        Cardinal n;
        Cardinal sn = *(int*)(0);
        PinTypePtr via;
        if ( *(int*)(0) )
        {
          n = 0;
          while ( via = PCB->Data->Via + ( n * 76 ), via->Flags.f != flags || via->Mask == 0 || via->Thickness + value <= via->Mask )
          {
            sn = PCB->Data->ViaN;
            if ( PCB->Data->ViaN == 0 || sn <= ( sn + n + 1 ) - units[0] )
            {
              RestoreUndoSerialNumber( );
              IncrementUndoSerialNumber( );
              break;
            }
          }
          ChangeObjectMaskSize( 1, (void*)via, 0, 0, via->Thickness + value, 1 );
          RestoreUndoSerialNumber( );
          sn = PCB->Data->ViaN;
        }
        RestoreUndoSerialNumber( );
        IncrementUndoSerialNumber( );
      }
      }
      }
      return 0;
    }
  }
  else
    *(int*)&function[0] = 0;
  *(int*)&delta[0] = 0;
  *(int*)&units[0] = 0;
}
int ActionMinClearGap( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  int ebp_68;
  char *function;
  char *delta;
  char *units;
  Boolean r;
  int value;
  int flags;
  if ( argc > 0 )
  {
    function[0] = argv[0];
    if ( argc != 1 )
    {
      *(int*)&units[0] = 0;
      delta[0] = argv[1];
      if ( argc != 2 )
        units[0] = argv[2];
      if ( function )
      {
        flags = 64;
        if ( strcasecmp( function, "Selected" ) )
        {
          units[0] = delta;
          delta[0] = function;
        }
        value = (int)( GetValue( delta, units, &r ) * 0.000000000000 );
        HideCrosshair( 1 );
        SaveUndoSerialNumber( );
      {
        Cardinal n = PCB->Data->ElementN + -1;
        ElementTypePtr element;
        if ( PCB->Data->ElementN + -1 != -1 )
        {
          ebp_68 = ( PCB->Data->ElementN * 300 ) + -300;
          while ( element = ebp_68 + PCB->Data->Element, element->PinN == 0 )
          {
            Cardinal n = 0;
            Cardinal sn;
            PadTypePtr pad;
            while ( 1 )
            {
              sn = element->PadN;
              do
              {
                if ( sn == 0 || sn <= n )
                {
                  n += -1;
                  ebp_68 += -300;
                  if ( n != -1 )
                  {
                    break;
                    while ( element = ebp_68 + PCB->Data->Element, element->PinN == 0 )
                    {
                      Cardinal n = 0;
                      Cardinal sn;
                      PadTypePtr pad;
                      while ( 1 )
                      {
                        sn = element->PadN;
                      }
                    }
                    n = 0;
                    while ( 1 )
                    {
                      pin = element->Pin + ( n * 76 );
                      if ( pin->Flags.f != flags || value <= pin->Clearance )
                      {
                        if ( sn == 0 )
                          continue;
                      }
                      else
                      {
                        ChangeObjectClearSize( 256, (void*)element, (void*)pin, 0, value, 1 );
                        RestoreUndoSerialNumber( );
                        sn = element->PinN;
                        if ( element->PinN == 0 )
                        {
                        }
                      }
                      n = ( sn + n + 1 ) - sn;
                      if ( sn <= ( sn + n + 1 ) - element->PinN )
                        continue;
                      else
                      {
                      }
                    }
                  }
                  else
                  {
                  }
                }
                else
                {
                  pad = element->Pad + 0;
                  if ( pad->Flags.f != flags || value <= pad->Clearance )
                    continue;
                  else
                  {
                    ChangeObjectClearSize( 512, (void*)element, (void*)pad, 0, value, 1 );
                    RestoreUndoSerialNumber( );
                    sn = element->PadN;
                    if ( element->PadN != element->PadN )
                      continue;
                    else
                    {
                      break;
                    }
                  }
                }
              }
              while ( element->PadN != sn );
              n++;
            }
          }
        }
      {
        Cardinal n;
        Cardinal sn = PCB->Data->ViaN;
        PinTypePtr via;
        if ( PCB->Data->ViaN )
        {
          n = 0;
          while ( 1 )
          {
            via = PCB->Data->Via + ( n * 76 );
            if ( via->Flags.f != flags || value <= via->Clearance )
            {
              sn = PCB->Data->ViaN;
              if ( PCB->Data->ViaN )
                goto B50;
            }
            else
            {
              ChangeObjectClearSize( 1, (void*)via, 0, 0, value, 1 );
              RestoreUndoSerialNumber( );
              sn = PCB->Data->ViaN;
              if ( PCB->Data->ViaN )
                goto B50;
            }
B50:;
            n = ( sn + n + 1 ) - sn;
            if ( sn <= ( sn + n + 1 ) - units[0] )
              goto B45;
            else
            {
            }
          }
        }
      {
B45:;
        Cardinal l;
        LayerTypePtr layer = PCB->Data + 76;
        if ( PCB->Data->LayerN != -2 )
        {
          l = 0;
        {
          while ( n = layer->LineN + -1, layer->LineN + -1 == -1 )
          {
            l++;
            if ( PCB->Data->LayerN + 2 <= l )
            {
              Cardinal l;
              LayerTypePtr layer;
              layer += 0;
              if ( PCB->Data->LayerN == -2 )
              {
                RestoreUndoSerialNumber( );
                IncrementUndoSerialNumber( );
                break;
              }
              l = 0;
            {
              while ( n = layer->ArcN + -1, layer->ArcN + -1 == -1 )
              {
                l++;
                if ( PCB->Data->LayerN + 2 <= l )
                {
                  RestoreUndoSerialNumber( );
                  IncrementUndoSerialNumber( );
                  break;
                }
                layer++;
              }
              do
              {
                arc = layer->Arc + ( layer->ArcN * 68 ) + -68 + -68;
                if ( arc->Flags.f == flags && arc->Clearance < value )
                {
                  n += -1;
                  ChangeObjectClearSize( 16384, (void*)layer, (void*)arc, 0, value, 1 );
                  RestoreUndoSerialNumber( );
                  if ( n != -1 )
                    continue;
                }
                else
                {
                  n += -1;
                }
              }
              while ( n + -1 != -1 );
              l++;
            }
            }
            else
            {
              layer++;
            }
          }
          do
          {
            line = layer->Line + ( layer->LineN * 88 ) + -88 + -88;
            if ( line->Flags.f == flags && line->Clearance < value )
            {
              n += -1;
              ChangeObjectClearSize( 4, (void*)layer, (void*)line, 0, value, 1 );
              RestoreUndoSerialNumber( );
              if ( n != -1 )
                continue;
            }
            else
            {
              n += -1;
            }
          }
          while ( n + -1 != -1 );
          l++;
        }
        }
      }
      }
      }
      }
      return 0;
    }
  }
  else
    *(int*)&function[0] = 0;
  *(int*)&delta[0] = 0;
  *(int*)&units[0] = 0;
}
int ActionChangePinName( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  int ebp_44;
  int changed;
  char *refdes, *pinnum, *pinname;
  if ( argc != 3 )
  {
    Message( "Syntax error.  Usage:\n%s\n", changepinname_syntax[0] );
    return 1;
  }
  pinnum[0] = argv[1];
  refdes = argv[0];
  pinname = argv[2];
{
  Cardinal n = PCB->Data->ElementN + -1;
  ElementTypePtr element;
  if ( PCB->Data->ElementN + -1 != -1 )
  {
    changed = 0;
    ebp_44 = ( PCB->Data->ElementN * 300 ) + -300;
    while ( refdes == 0 || element->Name[1].TextString == 0 || strcmp( refdes, &element->Name[1].TextString ) )
    {
      n += -1;
      ebp_44 += -300;
      if ( n == -1 )
      {
        if ( changed )
        {
          IncrementUndoSerialNumber( );
          gui->invalidate_all( );
          return 0;
        }
      }
      else
      {
      }
    }
  {
    Cardinal n;
    Cardinal sn = element->PinN;
    PinTypePtr pin;
    if ( element->PinN )
    {
      n = 0;
      for ( ; pinnum == 0 || pin->Number == 0;  )
      {
        if ( sn == 0 || sn <= ( sn + n + 1 ) - sn )
          element = element;
        else
        {
          sn = element->PinN;
        }
      }
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      if ( strcmp( pinnum, &pin->Number ) == 0 )
      {
        AddObjectToChangeNameUndoList( 256, 0, 0, (void*)pin, &pin->Name );
        pin->Name = __strdup( pinname );
        SetChangedFlag( 1 );
        changed = 1;
      }
      sn = element->PinN;
    }
    }
  {
    Cardinal n = 0;
    Cardinal sn = element->PadN;
    PadTypePtr pad;
    for ( ; sn && n < sn;  )
    {
      if ( pinnum && pad->Number && strcmp( pinnum, &pad->Number ) == 0 )
      {
        AddObjectToChangeNameUndoList( 512, 0, 0, (void*)pad, &pad->Name );
        pad->Name = __strdup( pinname );
        SetChangedFlag( 1 );
        changed = 1;
        sn = element->PadN;
      }
      n += element->PadN == sn;
    }
    n += -1;
    ebp_44 += -300;
  }
  }
  }
  return 0;
}
}
int ActionChangeName( int argc, char **argv, int x, int y )
{
  int eax;
  int edx;
  char *function;
  char *name;
  if ( argc > 0 && argv[0] )
  {
    HideCrosshair( 1 );
    switch ( GetFunctionID( function ) )
    {
    case '.':
    {
      int type;
      void *ptr1, *ptr2, *ptr3;
      gui->get_coords( "Select an Object", x, y );
      if ( SearchScreen( x, y, 1815, &ptr1, &ptr2, &ptr3 ) )
      {
        SaveUndoSerialNumber( );
        if ( QueryInputAndChangeObjectName( type, ptr1, ptr2, ptr3 ) )
        {
          SetChangedFlag( 1 );
          if ( type == 2 )
          {
            RubberbandTypePtr ptr;
            int i;
            RestoreUndoSerialNumber( );
            Crosshair.AttachedObject.RubberbandN = 0;
            LookupRatLines( 2, ptr1, ptr2, ptr3 );
            ptr = Crosshair.AttachedObject.Rubberband;
            if ( Crosshair.AttachedObject.RubberbandN )
            {
              i = 0;
              for ( ; PCB->RatOn == 0; ptr++ )
              {
                MoveObjectToRemoveUndoList( 32, &ptr->Line, &ptr->Line, &ptr->Line );
                i++;
                if ( Crosshair.AttachedObject.RubberbandN <= i )
                  goto B43;
                else
                {
                  // ptr++;
                }
              }
              EraseRat( &ptr->Line->BoundingBox.X1 );
              MoveObjectToRemoveUndoList( 32, &ptr->Line, &ptr->Line, &ptr->Line );
              i++;
            }
B43:;
            IncrementUndoSerialNumber( );
            Draw( );
          }
        }
      }
    }
      break;
    case '"':
      gui->prompt_for( "Enter the layout name:", PCB->Name == 0 ? PCB->Name : "" );
      if ( name && ( ChangeLayoutName( name ) & 255 ) )
        SetChangedFlag( 1 );
      break;
    case '!':
      if ( *(int*)(PCB->SilkActive ? *(int*)(PCB + 8716) + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(*(int*)(PCB + 8716) + 24) ) * 92 ) + 76 : PCB->Data + ( LayerStack[0] * 92 ) + 76) == 0 )
        goto B16;
      else
      {
      }
B16:;
      ebx( "Enter the layer name:", edx );
      if ( name && ( ChangeLayerName( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, name ) & 255 ) )
        SetChangedFlag( 1 );
      break;
    }
    RestoreCrosshair( 1 );
  }
  return 0;
}
int ActionMorphPolygon( int argc, char **argv, int x, int y )
{
  int eax;
  char *function;
  if ( argc > 0 && argv[0] )
  {
    HideCrosshair( 1 );
    switch ( GetFunctionID( function ) )
    {
    case '.':
    {
      int type;
      void *ptr1, *ptr2, *ptr3;
      gui->get_coords( "Select an Object", x, y );
      if ( type == 0 )
      {
        return 0;
      }
      MorphPolygon( &ptr1[0], &ptr3[0] );
      Draw( );
      IncrementUndoSerialNumber( );
    }
      break;
    case 'F':
    case 'K':
    {
      Cardinal l;
      LayerTypePtr layer = &PCB->Data->Layer;
      if ( PCB->Data->LayerN != -2 )
      {
        l = 0;
      {
        while ( n = layer->PolygonN + -1, layer->PolygonN + -1 == -1 )
        {
          l++;
          if ( PCB->Data->LayerN + 2 <= l )
          {
            Draw( );
            IncrementUndoSerialNumber( );
          }
          layer++;
        }
        do
        {
          polygon = layer->Polygon + ( layer->PolygonN * 60 ) + -60 + -60;
          if ( ( polygon->Flags.f/*.1_1of4*/ & 64 ) & 255 )
          {
            n += -1;
            MorphPolygon( layer, polygon );
          }
          else
          {
            n += -1;
            if ( n + -1 != -1 )
              continue;
            else
              break;
          }
        }
        while ( n != -1 );
        l++;
      }
      }
      Draw( );
      IncrementUndoSerialNumber( );
    }
      break;
    }
    return 0;
  }
  return 0;
}
int ActionToggleHideName( int argc, char **argv, int x, int y )
{
  int eax;
  char *function;
  if ( argc <= 0 || argv[0] == 0 || PCB->ElementOn == 0 )
  {
    return 0;
  }
  HideCrosshair( 1 );
  switch ( GetFunctionID( function ) )
  {
  case '.':
  {
    int type;
    void *ptr1, *ptr2, *ptr3;
    gui->get_coords( "Select an Object", x, y );
    if ( type == 0 )
    {
      RestoreCrosshair( 1 );
      return 0;
    }
    AddObjectToFlagUndoList( type, ptr1, ptr2, ptr3 );
    EraseElementName( &ptr2[0] );
    ((int*)ptr2) ^= 16;
    DrawElementName( &ptr2[0], 0 );
    Draw( );
    IncrementUndoSerialNumber( );
  }
    break;
  case 'F':
  case 'H':
  {
    Cardinal n = PCB->Data->ElementN + -1;
    ElementTypePtr element;
    if ( PCB->Data->ElementN + -1 == -1 )
    {
      RestoreCrosshair( 1 );
      return 0;
    }
    changed = 0;
    while ( 1 )
    {
      element = ( PCB->Data->ElementN * 300 ) + -300 + -300 + PCB->Data->Element;
      if ( ( ( ( (unsigned char)( element->Flags.f ) & 64 ) & 255 ) == 0 && ( ( element->Name[1].Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 ) || ( Settings.ShowSolderSide != ( ( element->Flags.f >> 7 ) & 1 ) && PCB->InvisibleObjectsOn == 0 ) )
        goto B18;
      else
      {
        AddObjectToFlagUndoList( 2, (void*)element, (void*)element, (void*)element );
        EraseElementName( element );
        element->Flags.f ^= 16;
        DrawElementName( element, 0 );
        changed = 1;
      }
B18:;
      n += -1;
      if ( n + -1 == -1 )
        break;
      else
      {
      }
    }
    if ( changed == 0 )
    {
      RestoreCrosshair( 1 );
      return 0;
    }
    Draw( );
    IncrementUndoSerialNumber( );
  }
    break;
  }
}
int ActionChangeJoin( int argc, char **argv, int x, int y )
{
  int eax;
  char *function;
  if ( argc > 0 && argv[0] )
  {
    HideCrosshair( 1 );
    switch ( GetFunctionID( function ) + -46 )
    {
    case 0:
    case 49:
    {
      int type;
      void *ptr1, *ptr2, *ptr3;
      gui->get_coords( "Select an Object", x, y );
      if ( type && ( ChangeObjectJoin( type, ptr1, ptr2, ptr3 ) & 255 ) )
      {
        SetChangedFlag( 1 );
        RestoreCrosshair( 1 );
      }
    }
      break;
    case 27:
      if ( ChangeSelectedJoin( 4 ) & 255 )
        continue;
      break;
    case 25:
      if ( ChangeSelectedJoin( 16384 ) & 255 )
        continue;
      break;
    case 24:
    case 29:
      if ( ChangeSelectedJoin( 16404 ) & 255 )
        continue;
      break;
    default:
      break;
    }
  }
  return 0;
}
int ActionChangeSquare( int argc, char **argv, int x, int y )
{
  int eax;
  char *function;
  if ( argc > 0 && argv[0] )
  {
    HideCrosshair( 1 );
    switch ( GetFunctionID( function ) + -46 )
    {
    case 0:
    case 49:
    {
      int type;
      void *ptr1, *ptr2, *ptr3;
      gui->get_coords( "Select an Object", x, y );
      if ( type && ( ChangeObjectSquare( type, ptr1, ptr2, ptr3 ) & 255 ) )
      {
        SetChangedFlag( 1 );
        RestoreCrosshair( 1 );
      }
    }
      break;
    case 26:
      if ( ChangeSelectedSquare( 2 ) & 255 )
        continue;
      break;
    case 24:
    case 29:
    case 31:
      if ( ChangeSelectedSquare( 768 ) & 255 )
        continue;
      break;
    default:
      break;
    }
  }
  return 0;
}
int ActionSetSquare( int argc, char **argv, int x, int y )
{
  char *function;
  if ( argc <= 0 )
  {
    return 0;
  }
  function[0] = argv[0];
  if ( argv[0] == 0 )
  {
    return 0;
  }
  if ( function[0] )
  {
  }
  return 0;
}
int ActionClearSquare( int argc, char **argv, int x, int y )
{
  char *function;
  if ( argc <= 0 )
  {
    return 0;
  }
  function[0] = argv[0];
  if ( argv[0] == 0 )
  {
    return 0;
  }
  if ( function[0] )
  {
  }
  return 0;
}
int ActionChangeOctagon( int argc, char **argv, int x, int y )
{
  char *function;
  if ( argc > 0 && argv[0] )
  {
    switch ( GetFunctionID( function ) + -46 )
    {
    case 0:
    case 49:
    {
      int type;
      void *ptr1, *ptr2, *ptr3;
      gui->get_coords( "Select an Object", x, y );
      if ( type && ( ChangeObjectOctagon( type, ptr1, ptr2, ptr3 ) & 255 ) )
      {
        SetChangedFlag( 1 );
        return 0;
      }
    }
      break;
    case 26:
      if ( ChangeSelectedOctagon( 2 ) & 255 )
      {
        SetChangedFlag( 1 );
        return 0;
      }
      break;
    case 31:
      if ( ChangeSelectedOctagon( 256 ) & 255 )
      {
        SetChangedFlag( 1 );
        return 0;
      }
      break;
    case 33:
      if ( ChangeSelectedOctagon( 1 ) & 255 )
      {
        SetChangedFlag( 1 );
        return 0;
      }
      break;
    case 24:
    case 29:
      if ( ChangeSelectedOctagon( 257 ) & 255 )
      {
        SetChangedFlag( 1 );
        return 0;
      }
    default:
      break;
    }
  }
  return 0;
}
int ActionSetOctagon( int argc, char **argv, int x, int y )
{
  char *function;
  if ( argc > 0 && argv[0] )
  {
    switch ( GetFunctionID( function ) + -46 )
    {
    case 0:
    case 49:
    {
      int type;
      void *ptr1, *ptr2, *ptr3;
      gui->get_coords( "Select an object", x, y );
      if ( type && ( SetObjectOctagon( type, ptr1, ptr2, ptr3 ) & 255 ) )
      {
        SetChangedFlag( 1 );
        return 0;
      }
    }
      break;
    case 26:
      if ( SetSelectedOctagon( 2 ) & 255 )
      {
        SetChangedFlag( 1 );
        return 0;
      }
      break;
    case 31:
      if ( SetSelectedOctagon( 256 ) & 255 )
      {
        SetChangedFlag( 1 );
        return 0;
      }
      break;
    case 33:
      if ( SetSelectedOctagon( 1 ) & 255 )
      {
        SetChangedFlag( 1 );
        return 0;
      }
      break;
    case 24:
    case 29:
      if ( SetSelectedOctagon( 257 ) & 255 )
      {
        SetChangedFlag( 1 );
        return 0;
      }
    default:
      break;
    }
  }
  return 0;
}
int ActionClearOctagon( int argc, char **argv, int x, int y )
{
  char *function;
  if ( argc > 0 && argv[0] )
  {
    switch ( GetFunctionID( function ) + -46 )
    {
    case 0:
    case 49:
    {
      int type;
      void *ptr1, *ptr2, *ptr3;
      gui->get_coords( "Select an Object", x, y );
      if ( type && ( ClrObjectOctagon( type, ptr1, ptr2, ptr3 ) & 255 ) )
      {
        SetChangedFlag( 1 );
        return 0;
      }
    }
      break;
    case 26:
      if ( ClrSelectedOctagon( 2 ) & 255 )
      {
        SetChangedFlag( 1 );
        return 0;
      }
      break;
    case 31:
      if ( ClrSelectedOctagon( 256 ) & 255 )
      {
        SetChangedFlag( 1 );
        return 0;
      }
      break;
    case 33:
      if ( ClrSelectedOctagon( 1 ) & 255 )
      {
        SetChangedFlag( 1 );
        return 0;
      }
      break;
    case 24:
    case 29:
      if ( ClrSelectedOctagon( 257 ) & 255 )
      {
        SetChangedFlag( 1 );
        return 0;
      }
    default:
      break;
    }
  }
  return 0;
}
int ActionChangeHole( int argc, char **argv, int x, int y )
{
  char *function;
  if ( argc > 0 && argv[0] )
  {
    if ( GetFunctionID( function ) != 70 )
    {
      if ( eax >= 70 )
      {
        if ( GetFunctionID( function ) == 79 )
          goto B6;
        else
        if ( GetFunctionID( function ) == 95 )
          goto B11;
        else
        {
        }
      }
      else
      if ( GetFunctionID( function ) == 46 )
        goto B11;
    {
B11:;
      int type;
      void *ptr1, *ptr2, *ptr3;
      gui->get_coords( "Select an Object", x, y );
      if ( type && ( ChangeHole( &ptr3[0] ) & 255 ) )
      {
        IncrementUndoSerialNumber( );
      }
    }
    }
B6:;
    if ( ChangeSelectedHole( ) & 255 )
    {
      SetChangedFlag( 1 );
      return 0;
    }
  {
B11:;
    int type;
    void *ptr1, *ptr2, *ptr3;
    gui->get_coords( "Select an Object", x, y );
  }
  }
  return 0;
}
int ActionChangePaste( int argc, char **argv, int x, int y )
{
  char *function;
  if ( argc > 0 && argv[0] )
  {
    if ( GetFunctionID( function ) != 70 )
    {
      if ( eax >= 70 )
      {
        if ( GetFunctionID( function ) == 76 )
          goto B6;
        else
        if ( GetFunctionID( function ) == 95 )
          goto B11;
        else
        {
        }
      }
      else
      if ( GetFunctionID( function ) == 46 )
        goto B11;
    {
B11:;
      int type;
      void *ptr1, *ptr2, *ptr3;
      gui->get_coords( "Select an Object", x, y );
      if ( type && ( ChangePaste( &ptr3[0] ) & 255 ) )
      {
        IncrementUndoSerialNumber( );
      }
    }
    }
B6:;
    if ( ChangeSelectedPaste( ) & 255 )
    {
      SetChangedFlag( 1 );
      return 0;
    }
  {
B11:;
    int type;
    void *ptr1, *ptr2, *ptr3;
    gui->get_coords( "Select an Object", x, y );
  }
  }
  return 0;
}
int ActionSelect( int argc, char **argv, int x, int y )
{
  int eax;
  int edx;
  int esi;
  double (null);
  double (null);
  double (null);
  double (null);
  char *function;
  if ( argc <= 0 || argv[0] == 0 )
  {
  }
  HideCrosshair( 1 );
  switch ( GetFunctionID( function ) )
  {
  case 24:
    type = 2;
    argv[0] = &argv;
  {
    char *pattern;
    if ( argc == 1 || argv[1] == 0 )
    {
      gui->prompt_for( "Enter pattern:", "", type );
      pattern[0] = gui;
      if ( gui == 0 )
      {
        RestoreCrosshair( 1 );
      }
    }
    if ( SelectObjectByName( type, pattern, 1 ) & 255 )
      SetChangedFlag( 1 );
    if ( argc == 1 || argv[1][4] == 0 )
      free( pattern );
  }
    break;
  case 47:
    type = -1;
    argv[0] = &argv;
    break;
  case 49:
    type = 512;
    argv[0] = &argv;
    break;
  case 50:
    type = 256;
    break;
  case 83:
    type = 16;
    break;
  case 110:
    type = 1;
    argv[0] = &argv;
    break;
  case 46:
  case 95:
    if ( ( SelectObject( ) & 255 ) == 0 )
    {
      RestoreCrosshair( 1 );
    }
    SetChangedFlag( 1 );
    break;
  case 7:
  {
    BoxType box;
    box.X1 = Crosshair.AttachedBox.Point1.X <= Crosshair.AttachedBox.Point2.X ? Crosshair.AttachedBox.Point2.X : Crosshair.AttachedBox.Point1.X;
    box.Y1 = Crosshair.AttachedBox.Point1.Y <= Crosshair.AttachedBox.Point2.Y ? Crosshair.AttachedBox.Point2.Y : Crosshair.AttachedBox.Point1.Y;
    box.X2 = (unsigned char)( ( Crosshair.AttachedBox.Point1.X < Crosshair.AttachedBox.Point2.X ) ^ 1 ) ? Crosshair.AttachedBox.Point2.X : Crosshair.AttachedBox.Point1.X;
    box.Y2 = (unsigned char)( ( Crosshair.AttachedBox.Point1.Y < Crosshair.AttachedBox.Point2.Y ) ^ 1 ) ? Crosshair.AttachedBox.Point2.Y : Crosshair.AttachedBox.Point1.Y;
    NotifyBlock( );
    if ( Crosshair.AttachedBox.State != 2 || ( SelectBlock( &box, 1 ) & 255 ) == 0 )
    {
      RestoreCrosshair( 1 );
    }
    SetChangedFlag( 1 );
    Crosshair.AttachedBox.State = 0;
  }
    break;
  case 1:
  {
    BoxType box;
    box.X1 = 0xff676980;
    box.Y1 = 0xff676980;
    box.X2 = 0x989680;
    box.Y2 = 0x989680;
    if ( ( SelectBlock( &box, 1 ) & 255 ) == 0 )
    {
      RestoreCrosshair( 1 );
    }
  }
    break;
  case 15:
    if ( ( SelectConnection( 1 ) & 255 ) == 0 )
    {
      RestoreCrosshair( 1 );
    }
    IncrementUndoSerialNumber( );
    break;
  case 16:
  {
    int x, y;
    Note.Buffer = Settings.BufferNumber;
    SetBufferNumber( 4 );
    ClearBuffer( &Buffers[ Settings.BufferNumber ] );
    gui->get_coords( "Select the Element's Mark Location", x, y );
    x = (int)( ( PCB->Grid * (double)( (int)( ( (double)( x - PCB->GridOffsetX ) + ( PCB->Grid * 0.500000000000 ) ) / PCB->Grid ) ) ) + 0.500000000000 + (double)( PCB->GridOffsetX ) );
    x = (int)( ( PCB->Grid * (double)( (int)( ( (double)( x - PCB->GridOffsetX ) + ( PCB->Grid * 0.500000000000 ) ) / PCB->Grid ) ) ) + 0.500000000000 + (double)( PCB->GridOffsetX ) );
    y = (int)( ( PCB->Grid * (double)( x ) ) + 0.500000000000 + (double)( x ) );
    AddSelectedToBuffer( (int)( ( PCB->Grid * (double)( x ) ) + 0.500000000000 + (double)( x ) ), (int)( ( PCB->Grid * (double)( x ) ) + 0.500000000000 + (double)( x ) ), (int)( ( PCB->Grid * (double)( x ) ) + 0.500000000000 + (double)( x ) ), (int)( ( PCB->Grid * (double)( x ) ) + 0.500000000000 + (double)( x ) ) );
    SaveUndoSerialNumber( );
    RemoveSelected( );
    ConvertBufferToElement( &Buffers[ Settings.BufferNumber ] );
    RestoreUndoSerialNumber( );
    CopyPastebufferToLayout( x, y );
    SetBufferNumber( (int)Note.Buffer );
  }
    break;
  default:
  {
    int type;
    RestoreCrosshair( 1 );
    Message( "Syntax error.  Usage:\n%s\n", select_syntax[0] );
  }
    break;
  }
  return 0;
}
int FlagHaveRegex( int parm )
{
  return 1;
}
int ActionUnselect( int argc, char **argv, int x, int y )
{
  int eax;
  int edx;
  int esi;
  char *function;
  if ( argc <= 0 || argv[0] == 0 )
  {
  }
  HideCrosshair( 1 );
  if ( GetFunctionID( function ) != 47 )
  {
    if ( eax >= 47 )
    {
      if ( GetFunctionID( function ) != 50 )
      {
        if ( eax < 50 )
        {
          if ( GetFunctionID( function ) == 83 )
          {
            type = 16;
            argv[0] = &argv;
          }
          else
          {
            if ( GetFunctionID( function ) == 110 )
              type = 1;
          }
        }
        else
        {
          argv[0] = &argv;
          if ( GetFunctionID( function ) == 49 )
          {
            type = 512;
            argv[0] = &argv;
          }
        }
      }
      else
      {
        type = 256;
        argv[0] = &argv;
      }
    }
    else
    if ( GetFunctionID( function ) != 7 )
    {
      argv[0] = &argv;
      if ( eax < 7 )
      {
        argv[0] = &argv;
        if ( GetFunctionID( function ) == 15 )
        {
          if ( ( SelectConnection( 0 ) & 255 ) == 0 )
          {
            RestoreCrosshair( 1 );
          }
          IncrementUndoSerialNumber( );
        }
        else
        {
          if ( GetFunctionID( function ) == 24 )
            type = 2;
        }
      }
      else
      {
        argv[0] = &argv;
        if ( GetFunctionID( function ) == 1 )
        {
          BoxType box;
          box.X1 = 0xff676980;
          box.Y1 = 0xff676980;
          box.X2 = 0x989680;
          box.Y2 = 0x989680;
          if ( ( SelectBlock( &box, 0 ) & 255 ) == 0 )
          {
            RestoreCrosshair( 1 );
          }
        }
      }
      SetChangedFlag( 1 );
    }
    else
    {
      static BoxType box;
      box.X1 = Crosshair.AttachedBox.Point1.X <= Crosshair.AttachedBox.Point2.X ? Crosshair.AttachedBox.Point2.X : Crosshair.AttachedBox.Point1.X;
      box.Y1 = Crosshair.AttachedBox.Point1.Y <= Crosshair.AttachedBox.Point2.Y ? Crosshair.AttachedBox.Point2.Y : Crosshair.AttachedBox.Point1.Y;
      box.X2 = (unsigned char)( ( Crosshair.AttachedBox.Point1.X < Crosshair.AttachedBox.Point2.X ) ^ 1 ) ? Crosshair.AttachedBox.Point2.X : Crosshair.AttachedBox.Point1.X;
      box.Y2 = (unsigned char)( ( Crosshair.AttachedBox.Point1.Y < Crosshair.AttachedBox.Point2.Y ) ^ 1 ) ? Crosshair.AttachedBox.Point2.Y : Crosshair.AttachedBox.Point1.Y;
      NotifyBlock( );
      if ( Crosshair.AttachedBox.State != 2 || ( SelectBlock( &box, 0 ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
      }
      SetChangedFlag( 1 );
      Crosshair.AttachedBox.State = 0;
    }
  {
    int type;
    argv[0] = &argv;
    RestoreCrosshair( 1 );
    Message( "Syntax error.  Usage:\n%s\n", unselect_syntax[0] );
  }
  }
  else
  {
    type = -1;
    argv[0] = &argv;
  }
{
  char *pattern;
  if ( argc == 1 || argv[1] == 0 )
  {
    gui->prompt_for( "Enter pattern:", "", type );
    pattern[0] = gui;
    if ( gui == 0 )
    {
      RestoreCrosshair( 1 );
    }
  }
  if ( SelectObjectByName( type, pattern, 0 ) & 255 )
    SetChangedFlag( 1 );
  if ( argc == 1 || argv[1] == 0 )
    free( pattern );
}
  return 0;
}
int ActionSaveTo( int argc, char **argv, int x, int y )
{
  char *function;
  char *name;
  function[0] = argv[0];
  name[0] = argv[1];
  if ( strcasecmp( argv[0], "Layout" ) )
  {
    if ( argc == 2 )
    {
      if ( strcasecmp( function, "LayoutAs" ) == 0 )
      {
        SaveFree( &PCB->Filename );
        PCB->Filename = 0;
        function[20] = MyStrdup( name, __FUNCTION__ );
      }
      else
      {
        if ( strcasecmp( function, "AllConnections" ) == 0 )
        {
          FILE *fp;
          Boolean result;
          if ( CheckAndOpenFile( name, 1, 0, &result, 0 ) == 0 )
          {
            return 1;
          }
          LookupConnectionsToAllElements( CheckAndOpenFile( name, 1, 0, &result, 0 ) );
        }
        else
        {
          if ( strcasecmp( function, "AllUnusedPins" ) == 0 )
          {
            static FILE *fp;
            Boolean result;
            if ( CheckAndOpenFile( name, 1, 0, &result, 0 ) == 0 )
            {
              return 1;
            }
            LookupUnusedPins( CheckAndOpenFile( name, 1, 0, &result, 0 ) );
          }
          else
          {
            if ( strcasecmp( function, "ElementConnections" ) == 0 )
            {
              /* phantom */ ElementTypePtr element;
              void *ptrtmp;
              FILE *fp;
              Boolean result;
              if ( SearchScreen( Crosshair.X, Crosshair.Y, 2, &ptrtmp, &ptrtmp, &ptrtmp ) && CheckAndOpenFile( name, 1, 0, &result, 0 ) )
              {
                LookupElementConnections( &ptrtmp[0], CheckAndOpenFile( name, 1, 0, &result, 0 ) );
                fclose( fp );
                SetChangedFlag( 1 );
                return 1;
              }
            }
            else
            {
              if ( strcasecmp( function, "PasteBuffer" ) == 0 )
              {
                SaveBufferElements( name );
                return 1;
              }
            }
          }
        }
        fclose( fp );
        SetChangedFlag( 1 );
        return 0;
      }
    }
    Message( "Syntax error.  Usage:\n%s\n", saveto_syntax[0] );
    return 1;
  }
  SavePCB( &PCB->Filename );
  return 0;
}
int ActionSaveSettings( int argc, char **argv, int x, int y )
{
  int eax;
  int locally = 0;
  if ( argc > 0 )
  {
    locally/*.1_1of4*/ = locally == 0;
    locally = locally == 0;
  }
  hid_save_settings( locally );
  return 0;
}
int ActionLoadFrom( int argc, char **argv, int x, int y )
{
  int eax;
  int edx;
  char *function;
  char *name;
  char fname[256];
  if ( argc <= 1 )
  {
    Message( "Syntax error.  Usage:\n%s\n", loadfrom_syntax[0] );
  }
  else
  {
    function[0] = argv[0];
    name[0] = argv[1];
    HideCrosshair( 1 );
    if ( strcasecmp( function, "ElementToBuffer" ) == 0 )
    {
      if ( ( LoadElementToBuffer( &Buffers[ Settings.BufferNumber ], name, 1 ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
      }
    }
    else
    {
      if ( strcasecmp( function, "LayoutToBuffer" ) == 0 )
      {
        if ( ( LoadLayoutToBuffer( &Buffers[ Settings.BufferNumber ], name ) & 255 ) == 0 )
          continue;
      }
      else
      {
        if ( strcasecmp( function, "Layout" ) == 0 )
        {
          if ( PCB->Changed )
          {
            gui->confirm_dialog( (long long)( "OK to override layout data?" ) );
            if ( gui == 0 )
              continue;
          }
          LoadPCB( name );
          name[0] = name;
        }
        else
        {
          if ( strcasecmp( function, "Netlist" ) == 0 )
          {
            if ( PCB->Netlistname )
            {
              SaveFree( &PCB->Netlistname );
            }
            PCB->Netlistname = StripWhiteSpaceAndDup( name );
            FreeLibraryMemory( &PCB->NetlistLib );
            if ( ImportNetlist( &PCB->Netlistname ) == 0 )
              hid_action( "NetlistChanged" );
          }
          else
          {
            if ( !strcasecmp( function, "Revert" ) && PCB->Filename )
            {
              if ( PCB->Changed )
              {
                gui->confirm_dialog( (long long)( "OK to override changes?" ) );
                if ( gui )
                {
                }
              }
              __strcpy_chk( fname, &PCB->Filename, 256 );
              LoadPCB( fname );
            }
          }
        }
      }
    }
    SetMode( 5 );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return 0;
}
int ActionNew( int argc, char **argv, int x, int y )
{
  int eax;
  char *name;
  *(int*)&name[0] = 0;
  HideCrosshair( 1 );
  if ( PCB->Changed )
  {
    gui->confirm_dialog( (long long)( "OK to clear layout data?" ) );
    if ( gui == 0 )
    {
      RestoreCrosshair( 1 );
      return 1;
    }
  }
  if ( name )
  {
    name[0] = MyStrdup( name, "ActionNew" );
  }
  else
  {
    gui->prompt_for( "Enter the layout name:", "" );
    name[0] = gui;
  }
  if ( name == 0 )
  {
    RestoreCrosshair( 1 );
    return 1;
  }
  if ( PCB->Changed && Settings.SaveInTMP )
  {
    SaveInTMP( );
  }
  RemovePCB( PCB );
  PCB = CreateNewPCB( 1 );
  *(int*)(*(int*)CreateNewPCB( 1 )/*.8716*/ + 24) = 8;
  CreateNewPCBPost( PCB, 1 );
  PCB->Name = name;
  ResetStackAndVisibility( );
  CreateDefaultFont( );
  SetCrosshairRange( 0, 0, PCB->MaxWidth, PCB->MaxHeight );
  CenterDisplay( PCB->MaxWidth / 2, PCB->MaxHeight / 2, 0 );
  ClearAndRedrawOutput( );
  hid_action( "PCBChanged" );
  RestoreCrosshair( 1 );
  return 0;
}
void ActionBell( char *volume )
{
  ;
}
int ActionPasteBuffer( int argc, char **argv, int x, int y )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  int edi;
  static char *default_file;
  char *function;
  char *sbufnum;
  char *name;
  /* phantom */ int free_name;
  if ( argc )
  {
    function[0] = argv[0];
    if ( argc > 1 )
      sbufnum = argv[1];
    else
      sbufnum = "";
    HideCrosshair( 1 );
    if ( function == 0 )
    {
      RestoreCrosshair( 1 );
      return 1;
    }
    if ( GetFunctionID( function ) != 40 )
    {
      if ( eax >= 40 )
      {
        function[0] = function;
        if ( GetFunctionID( function ) != 67 )
        {
          if ( eax >= 67 )
          {
            function[0] = function;
            if ( GetFunctionID( function ) == 68 )
            {
              if ( Buffers[ Settings.BufferNumber ].Data->ElementN == 0 )
                Message( "Buffer has no elements!\n" );
              else
              {
                if ( argc <= 1 )
                {
                  gui->fileselect( "Save Paste Buffer As ...", "Choose a file to save the contents of the\npaste buffer to.\n", default_file, ".fp" );
                  name[0] = gui;
                  if ( default_file )
                  {
                    free( default_file );
                    default_file = 0;
                  }
                  if ( name && name[0] )
                  {
                    default_file = __strdup( name );
                  }
                }
                else
                  name[0] = argv[1];
              {
                FILE *exist;
                if ( exist )
                {
                  fclose( exist );
                  gui->confirm_dialog( (long long)( "File exists!  Ok to overwrite?" ) );
                  if ( gui == 0 )
                  {
                    if ( 0 & 255 )
                      free( name );
                  }
                }
                SaveBufferElements( name );
              }
              }
            }
            else
            {
              function[0] = function;
              if ( GetFunctionID( function ) == 86 )
              {
                static int oldx, oldy;
                int x, y;
                Boolean r;
                if ( argc != 1 )
                {
                  function[0] = function;
                  if ( argc + -3 <= 1 )
                  {
                    x = r == 0 ? (int)( GetValue( argv[1], argv[3], &r ) ) : oldx + (int)( GetValue( argv[1], argv[3], &r ) );
                    y = r == 0 ? (int)( GetValue( argv[2], argv[3], &r ) ) : oldy + (int)( GetValue( argv[2], argv[3], &r ) );
                  }
                  else
                  {
                    RestoreCrosshair( 1 );
                    Message( "Syntax error.  Usage:\n%s\n", pastebuffer_syntax[0] );
                    return 1;
                  }
                }
                else
                {
                  y = 0;
                  x = 0;
                }
                oldx = x;
                oldy = y;
                if ( CopyPastebufferToLayout( x, y ) & 255 )
                  SetChangedFlag( 1 );
              }
              else
              {
                int number;
                if ( number )
                  SetBufferNumber( number + -1 + -1 );
              }
            }
          }
          else
          {
            if ( GetFunctionID( sbufnum ) != 66 )
              continue;
            else
              SmashBufferElement( &Buffers[ Settings.BufferNumber ] );
          }
        }
        else
        {
          if ( sbufnum == 0 )
          {
            RestoreCrosshair( 1 );
            return 1;
          }
          RotateBuffer( &Buffers[ Settings.BufferNumber ], strtol( sbufnum, 0, 10 ) );
          SetCrosshairRangeToBuffer( );
        }
      }
      else
      {
        switch ( GetFunctionID( sbufnum ) )
        {
        default:
          break;
        case 11:
          ClearBuffer( &Buffers[ Settings.BufferNumber ] );
          break;
        case 0:
          AddSelectedToBuffer( &Buffers[ Settings.BufferNumber ], 0, 0, 0 );
          break;
        case 16:
          ConvertBufferToElement( &Buffers[ Settings.BufferNumber ] );
          break;
        }
      }
    }
  }
  else
  {
    function[0] = "";
    HideCrosshair( 1 );
    sbufnum = function;
    if ( GetFunctionID( sbufnum ) != 40 )
    {
    }
  }
  MirrorBuffer( &Buffers[ Settings.BufferNumber ] );
}
int ActionUndo( int argc, char **argv, int x, int y )
{
  int eax;
  int edx;
  char *function;
  if ( argc <= 0 || argv[0] == 0 || function[0] == 0 )
  {
    if ( Crosshair.AttachedObject.State == 0 && ( Crosshair.AttachedBox.State == 0 || Settings.Mode == 109 ) )
    {
      HideCrosshair( 1 );
      if ( Settings.Mode == 4 )
      {
        if ( Crosshair.AttachedPolygon.PointN )
        {
          GoToPreviousPoint( );
          RestoreCrosshair( 1 );
          return 1;
        }
      }
      else
      if ( Settings.Mode == 2 )
      {
        if ( Crosshair.AttachedLine.State == 1 )
        {
          if ( PCB->Flags.f/*.1_1of4*/ < 0 )
            Undo( 1 );
          Crosshair.AttachedLine.State = 0;
          SetLocalRef( 0, 0, 0 );
          RestoreCrosshair( 1 );
          return 1;
        }
        else
        {
          if ( Crosshair.AttachedLine.State == 2 )
          {
            int type;
            void *ptr1, *ptr3, *ptrtmp;
            LineTypePtr ptr2;
            SearchObjectByLocation( 36, &ptr1, &ptrtmp, &ptr3, Crosshair.AttachedLine.Point1.X, Crosshair.AttachedLine.Point1.Y, 0 );
            Crosshair.AttachedLine.Point2.X = ((int*)ptrtmp);
            Crosshair.AttachedLine.Point2.Y = ((int*)ptrtmp);
            if ( type )
            {
              SetChangedFlag( 1 );
              if ( ( ( (unsigned char)( type ) & 64 ) & 255 ) == 0 )
              {
                Crosshair.AttachedLine.Point2.X = Crosshair.AttachedLine.Point1.X;
                Crosshair.AttachedLine.Point2.Y = Crosshair.AttachedLine.Point1.Y;
                RestoreCrosshair( 1 );
                return 1;
              }
              Crosshair.AttachedLine.Point1.X = Crosshair.AttachedLine.Point2.X;
              Crosshair.AttachedLine.Point1.Y = Crosshair.AttachedLine.Point2.Y;
              if ( ( type & 4 ) & 255 )
              {
                SearchObjectByLocation( 36, &ptr1, &ptrtmp, &ptr3, Crosshair.AttachedLine.Point2.X, Crosshair.AttachedLine.Point2.Y, 0 );
                ptr2 = &ptrtmp[0];
                if ( PCB->Flags.f/*.1_1of4*/ < 0 )
                {
                  ptr2->Flags.f |= 4;
                  DrawLine( *(char*)(PCB + 39) == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB + 8716) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, ptr2, 0 );
                  ptr2 = ptr2;
                }
                Crosshair.AttachedLine.Point2.X = ptr2->Point2.X;
                Crosshair.AttachedLine.Point1.X = ptr2->Point2.X;
                Crosshair.AttachedLine.Point2.Y = ptr2->Point2.Y;
                Crosshair.AttachedLine.Point1.Y = ptr2->Point2.Y;
              }
              FitCrosshairIntoGrid( Crosshair.X, Crosshair.Y );
              AdjustAttachedObjects( );
              addedLines += -1;
              if ( addedLines + -1 == 0 )
              {
                Crosshair.AttachedLine.State = 1;
                if ( PCB->SilkActive )
                  ptr1 = ((char*)ptr1)[8716] + ( ( ((char*)ptr1)[8716] + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76;
                else
                  PCB = PCB->Data + ( LayerStack[0] * 92 ) + 76;
              }
              else
              {
                SearchObjectByLocation( 36, &ptr1, &ptrtmp, &ptr3, Crosshair.AttachedLine.Point1.Y, 0 );
              }
              lastLayer = &ptr1[0];
            }
            Crosshair.AttachedLine.Point2.X = Crosshair.AttachedLine.Point1.X;
            Crosshair.AttachedLine.Point2.Y = Crosshair.AttachedLine.Point1.Y;
            RestoreCrosshair( 1 );
            return 1;
          }
        }
      }
      else
      {
        if ( Settings.Mode == 109 )
        {
          if ( Crosshair.AttachedBox.State == 1 )
            Crosshair.AttachedBox.State = 0;
          else
          {
            if ( Crosshair.AttachedBox.State == 2 )
            {
              void *ptr1, *ptr2, *ptr3;
              BoxTypePtr bx;
              SearchObjectByLocation( 16384, &ptrtmp, &ptr3, &ptr1, Crosshair.AttachedBox.Point1.X, Crosshair.AttachedBox.Point1.Y, 0 );
              Crosshair.AttachedBox.Point2.X = bx->X1;
              Crosshair.AttachedBox.Point1.X = bx->X1;
              Crosshair.AttachedBox.Point2.Y = *(int*)GetArcEnds( &ptr3[0] )/*.4*/;
              Crosshair.AttachedBox.Point1.Y = *(int*)GetArcEnds( &ptr3[0] )/*.4*/;
              AdjustAttachedObjects( );
              addedLines += -1;
              if ( addedLines + -1 == 0 )
                Crosshair.AttachedBox.State = 1;
            }
          }
        }
      }
      if ( Undo( 1 ) )
        SetChangedFlag( 1 );
    }
    else
    {
      return 1;
    }
  }
  else
  {
    if ( GetFunctionID( function ) == 13 )
    {
      ClearUndoList( 0 );
    }
  }
  RestoreCrosshair( 1 );
  return 1;
}
int ActionRedo( int argc, char **argv, int x, int y )
{
  int eax;
  int edx;
  if ( ( Settings.Mode == 4 && Crosshair.AttachedPolygon.PointN ) || Crosshair.AttachedLine.State == 1 )
  {
    return 1;
  }
  HideCrosshair( 1 );
  if ( Redo( 1 ) )
  {
    SetChangedFlag( 1 );
    if ( Settings.Mode == 2 && Crosshair.AttachedLine.State )
    {
      static LineTypePtr line = "21 21 5 1";
      Crosshair.AttachedLine.Point2.X = *(int*)(( PCB->SilkActive == 0 ? *(int*)(*(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + ( LayerStack[0] * 92 ) + 112) : *(int*)(*(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(*(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + 24) ) * 92 ) + 112) ) + ( ( *(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 4) + -1 ) * 88 ) + 64);
      Crosshair.AttachedLine.Point1.X = *(int*)(( PCB->SilkActive == 0 ? *(int*)(*(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + ( LayerStack[0] * 92 ) + 112) : *(int*)(*(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(*(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + 24) ) * 92 ) + 112) ) + ( ( *(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 4) + -1 ) * 88 ) + 64);
      Crosshair.AttachedLine.Point2.Y = *(int*)(( PCB->SilkActive == 0 ? *(int*)(*(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + ( LayerStack[0] * 92 ) + 112) : *(int*)(*(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(*(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + 24) ) * 92 ) + 112) ) + ( ( *(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 4) + -1 ) * 88 ) + 68);
      Crosshair.AttachedLine.Point1.Y = *(int*)(( PCB->SilkActive == 0 ? *(int*)(*(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + ( LayerStack[0] * 92 ) + 112) : *(int*)(*(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(*(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + 24) ) * 92 ) + 112) ) + ( ( *(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 4) + -1 ) * 88 ) + 68);
      addedLines++;
    }
  }
  RestoreCrosshair( 1 );
  return 0;
}
int ActionPolygon( int argc, char **argv, int x, int y )
{
  int eax;
  char *function;
  if ( argc > 0 && argv[0] && Settings.Mode == 4 )
  {
    HideCrosshair( 1 );
    if ( GetFunctionID( function ) == 14 )
      ClosePolygon( );
    else
    if ( GetFunctionID( function ) == 54 )
      GoToPreviousPoint( );
    RestoreCrosshair( 1 );
    return 0;
  }
  else
  {
    return 0;
  }
}
int ActionRouteStyle( int argc, char **argv, int x, int y )
{
  char *str;
  /* phantom */ RouteStyleType *rts;
  int number;
  if ( argc > 0 && argv[0] && number + -1 <= 3 )
  {
    number = PCB->RouteStyle[ number ].Thick;
    SetLineSize( PCB->RouteStyle[ number ].Thick );
    number = PCB->Flags.t[0];
    SetViaSize( PCB->Flags.t[0], number + 358 );
    number = PCB->Flags.t[4];
    SetViaDrillingHole( PCB->Flags.t[4], number + 358 );
    number = PCB->Name;
    SetKeepawayWidth( PCB->Name );
    hid_action( "RouteStylesChanged" );
    number = 0;
    return 0;
  }
  number = 0;
  return 0;
}
int ActionMoveObject( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  char *x_str;
  char *y_str;
  char *units;
  LocationType nx;
  LocationType ny;
  Boolean r1;
  Boolean r2;
  void *ptr1, *ptr2, *ptr3;
  int type;
  if ( argc > 0 )
  {
    x_str[0] = argv[0];
    if ( argc != 1 )
    {
      *(int*)&units[0] = 0;
      y_str[0] = argv[1];
      if ( argc != 2 )
        units[0] = argv[2];
      if ( type == 0 )
      {
        Message( "Nothing found under crosshair\n" );
        return 1;
      }
      nx = (int)( GetValue( x_str, units, &r2 ) );
      Crosshair.AttachedObject.RubberbandN = 0;
      nx = r1 != 0 ? (int)( GetValue( x_str, units, &r2 ) ) : (int)( GetValue( x_str, units, &r2 ) ) - x;
      ny = r2 != 0 ? (int)( (float)( GetValue( y_str, units, &r1 ) ) ) : (int)( (float)( GetValue( y_str, units, &r1 ) ) ) - y;
      if ( ( PCB->Flags.f/*.1_1of4*/ & 16 ) & 255 )
      {
        LookupRubberbandLines( type, ptr1, ptr2, ptr3 );
        if ( type == 2 )
          goto B15;
        else
        {
          MoveObjectAndRubberband( type, ptr1, ptr2, ptr3, nx, ny );
          SetChangedFlag( 1 );
          return 0;
        }
      }
      else
      if ( type == 2 )
        goto B15;
B15:;
      LookupRatLines( 2, ptr1, ptr2, ptr3 );
    }
  }
  else
    *(int*)&x_str[0] = 0;
  *(int*)&y_str[0] = 0;
  *(int*)&units[0] = 0;
}
int ActionMoveToCurrentLayer( int argc, char **argv, int x, int y )
{
  int eax;
  int edx;
  char *function;
  if ( argc > 0 && argv[0] )
  {
    HideCrosshair( 1 );
    switch ( GetFunctionID( function ) )
    {
    case '.':
    {
      int type;
      void *ptr1, *ptr2, *ptr3;
      gui->get_coords( "Select an Object", x, y );
      if ( type && MoveObjectToLayer( type, ptr1, ptr2, ptr3, PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, 0 ) )
        SetChangedFlag( 1 );
    }
      break;
    case 'F':
    case 'K':
      if ( MoveSelectedObjectsToLayer( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) & 255 )
        SetChangedFlag( 1 );
      break;
    }
    RestoreCrosshair( 1 );
  }
  return 0;
}
int ActionSetSame( int argc, char **argv, int x, int y )
{
  int ecx;
  void *ptr1, *ptr2, *ptr3;
  int type;
  LayerTypePtr layer;
  switch ( type )
  {
  default:
    return 1;
    break;
  case 4:
    HideCrosshair( 1 );
    Settings.LineThickness = ((int*)ptr2);
    Settings.Keepaway = ((int*)ptr2) / 2;
    if ( Settings.Mode != 2 )
      SetMode( 2 );
    break;
  case 16384:
    HideCrosshair( 1 );
    Settings.LineThickness = ((int*)ptr2);
    Settings.Keepaway = ((int*)ptr2) / 2;
    if ( Settings.Mode != 109 )
    {
      SetMode( 109 );
    }
    break;
  case 8:
    layer = &ptr1[0];
    if ( layer != ( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB + 8716) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) )
    {
      ChangeGroupVisibility( GetLayerNumber( &PCB->Data, layer ), 1, 1 );
      ClearAndRedrawOutput( );
      return 0;
    }
    return 1;
    break;
  case 1:
    HideCrosshair( 1 );
    Settings.ViaThickness = ((int*)ptr2);
    Settings.ViaDrillingHole = ((int*)ptr2);
    Settings.Keepaway = ((int*)ptr2) / 2;
    if ( Settings.Mode != 1 )
      SetMode( 1 );
    break;
  }
  RestoreCrosshair( 1 );
  hid_action( "RouteStylesChanged" );
}
int ActionSetFlag( int argc, char **argv, int x, int y )
{
  int eax;
  int edx;
  char *function;
  char *flag;
  *(int*)&function[0] = 0;
  *(int*)&flag[0] = 0;
  ChangeFlag( function, flag, 1, "SetFlag" );
  return 0;
}
int ActionClrFlag( int argc, char **argv, int x, int y )
{
  int eax;
  int edx;
  char *function;
  char *flag;
  *(int*)&function[0] = 0;
  *(int*)&flag[0] = 0;
  ChangeFlag( function, flag, 0, "ClrFlag" );
  return 0;
}
int ActionChangeFlag( int argc, char **argv, int x, int y )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  char *function;
  char *flag;
  int value;
  if ( argc <= 0 || argc == 1 || argc == 2 || strtol( argv[2], 0, 10 ) > 1 )
  {
    Message( "Syntax error.  Usage:\n%s\n", changeflag_syntax[0], ebp_8, ebp_4 );
    return 1;
  }
  ChangeFlag( function, flag, ecx, "ChangeFlag" );
  return 0;
}
void ChangeFlag( char *what, char *flag_name, int value, char *cmd_name )
{
  int eax;
  int edx;
  Boolean (*set_object)( int , void *, void *, void * );
  Boolean (*set_selected)( int  );
  if ( !1 )
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    strcmp( "square", flag_name );
    if ( 1 )
    {
      set_selected = what + -46 != 0 ? &ClrSelectedSquare : &SetSelectedSquare;
      set_object = what + -46 != 0 ? &ClrObjectSquare : &SetObjectSquare;
    }
    else
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      strcmp( "octagon", flag_name );
      if ( 1 )
      {
        set_selected = value != 0 ? &ClrSelectedOctagon : &SetSelectedOctagon;
        set_object = value != 0 ? &ClrObjectOctagon : &SetObjectOctagon;
      }
      else
      {
        /* phantom */ size_t __s1_len;
        /* phantom */ size_t __s2_len;
        strcmp( "join", flag_name );
        if ( 1 )
        {
          set_selected = value != 0 ? &SetSelectedJoin : &ClrSelectedJoin;
          set_object = value != 0 ? &SetObjectJoin : &ClrObjectJoin;
        }
      }
    }
    HideCrosshair( 1 );
    switch ( GetFunctionID( what ) + -46 )
    {
    case 0:
    {
      int type;
      void *ptr1, *ptr2, *ptr3;
      if ( type == 0 )
      {
      }
      else
      {
        Message( "Sorry, the object is locked\n" );
      }
      if ( ( set_object( type, ptr1, ptr3, &type ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
        return;
      }
      set_selected = set_selected;
    }
      break;
    case 33:
      if ( ( set_selected( value ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
        return;
      }
      break;
    case 31:
      set_selected = set_selected;
      if ( ( eax & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
        return;
      }
      break;
    case 30:
      set_selected = set_selected;
      if ( ( eax & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
        return;
      }
      break;
    case 27:
      set_selected = set_selected;
      if ( ( eax & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
        return;
      }
      break;
    case 32:
      set_selected = set_selected;
      if ( ( set_selected( set_selected( value ) ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
        return;
      }
      break;
    case 28:
      set_selected = set_selected;
      if ( ( eax & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
        return;
      }
      break;
    case 26:
      set_selected = set_selected;
      if ( ( set_selected( set_selected( set_selected( value ) ) ) & 255 ) == 0 )
      {
        RestoreCrosshair( 1 );
        return;
      }
      break;
    case 24:
    case 29:
      set_selected = set_selected;
      if ( ( eax & 255 ) == 0 )
    default:
      break;
    }
    SetChangedFlag( 1 );
    set_selected = set_selected;
  }
  Message( "%s():  Flag \"%s\" is not valid\n", cmd_name, flag_name );
  return;
}
int ActionExecuteFile( int argc, char **argv, int x, int y )
{
  int eax;
  int edx;
  FILE *fp;
  char *fname;
  char line[256];
  int n;
  char *sp;
  if ( argc != 1 )
  {
    Message( "Syntax error.  Usage:\n%s\n", executefile_syntax[0] );
  }
  else
  {
    fname = argv[0];
    if ( fopen( argv[0], "r" ) )
    {
      sp[0] = line[0];
      n = 0;
      while ( fgets( sp, 256, fp ) == 0 )
      {
        n++;
        if ( line[0] != '\r' && ( line[0] & 255 ) )
        {
          do
          {
          }
          while ( sp[0] != '\n' && sp[0] != '\r' && ( sp[0] & 255 ) );
        }
        else
        {
        }
        sp[0] = 0;
        if ( line[0] )
        {
          if ( line[0] == ' ' || line[0] == '\t' )
          {
            sp = &sp[0];
            do
            {
              sp++;
              if ( sp[0] == 0 )
                continue;
              else
            }
            while ( sp[0] != '\t' && sp[0] != ' ' );
          }
          if ( sp[0] != '#' && ( sp[0] & 255 ) )
          {
            Message( "%s : line %-3d : \"%s\"\n", fname, n, sp, sp );
            hid_parse_actions( sp, 0 );
          }
        }
      }
      fclose( fp );
    }
    else
    {
      __fprintf_chk( stderr, 1, "Could not open actions file \"%s\".\n", fname );
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return 1;
}
int ActionPSCalib( int argc, char **argv, int x, int y )
{
  HID *ps;
  ;
}
void register_action_action_list( void )
{
  hid_register_actions( action_action_list, 58 );
  return;
}
#if 0
#endif
