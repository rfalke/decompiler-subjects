#include "main.c.h"
static char *command_line_pcb;
static int show_help;
static int show_version;
static int show_copyright;
static int show_defaults;
static int show_actions;
static int do_dump_actions;
HID_Attribute main_attribute_list[133] = { { "help", "Show Help", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &show_help, 0 }
, { "version", "Show Version", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &show_version, 0 }
, { "verbose", "Be verbose", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &Settings.verbose, 0 }
, { "copyright", "Show Copyright", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &show_copyright, 0 }
, { "show-defaults", "Show option defaults", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &show_defaults, 0 }
, { "show-actions", "Show actions", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &show_actions, 0 }
, { "dump-actions", "Dump actions (for documentation)", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &do_dump_actions, 0 }
, { "grid-units-mm", 0, 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &Settings, 0 }
, { "black-color", "color for black", 3, 0, 0, { 0, "#000000", 0.000000000000 }
, 0, &Settings.BlackColor, 0 }
, { "white-color", "color for white", 3, 0, 0, { 0, "#ffffff", 0.000000000000 }
, 0, &Settings.WhiteColor, 0 }
, { "background-color", "color for background", 3, 0, 0, { 0, "#e5e5e5", 0.000000000000 }
, 0, &Settings.BackgroundColor, 0 }
, { "crosshair-color", "color for the crosshair", 3, 0, 0, { 0, "#ff0000", 0.000000000000 }
, 0, &Settings.CrosshairColor, 0 }
, { "cross-color", "color for cross", 3, 0, 0, { 0, "#cdcd00", 0.000000000000 }
, 0, &Settings.CrossColor, 0 }
, { "via-color", "color for vias", 3, 0, 0, { 0, "#7f7f7f", 0.000000000000 }
, 0, &Settings.ViaColor, 0 }
, { "via-selected-color", "color for selected vias", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.ViaSelectedColor, 0 }
, { "pin-color", "color for pins", 3, 0, 0, { 0, "#4d4d4d", 0.000000000000 }
, 0, &Settings.PinColor, 0 }
, { "pin-selected-color", "color for selected pins", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.PinSelectedColor, 0 }
, { "pin-name-color", "color for pin names and numbers", 3, 0, 0, { 0, "#ff0000", 0.000000000000 }
, 0, &Settings.PinNameColor, 0 }
, { "element-color", "color for elements", 3, 0, 0, { 0, "#000000", 0.000000000000 }
, 0, &Settings.ElementColor, 0 }
, { "rat-color", "color for ratlines", 3, 0, 0, { 0, "#b8860b", 0.000000000000 }
, 0, &Settings.RatColor, 0 }
, { "invisible-objects-color", "color for invisible objects", 3, 0, 0, { 0, "#cccccc", 0.000000000000 }
, 0, &Settings.InvisibleObjectsColor, 0 }
, { "invisible-mark-color", "color for invisible marks", 3, 0, 0, { 0, "#cccccc", 0.000000000000 }
, 0, &Settings.InvisibleMarkColor, 0 }
, { "element-selected-color", "color for selected elements", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.ElementSelectedColor, 0 }
, { "rat-selected-color", "color for selected rats", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.RatSelectedColor, 0 }
, { "connected-color", "color for connections", 3, 0, 0, { 0, "#00ff00", 0.000000000000 }
, 0, &Settings.ConnectedColor, 0 }
, { "off-limit-color", "color for off-limits areas", 3, 0, 0, { 0, "#cccccc", 0.000000000000 }
, 0, &Settings.OffLimitColor, 0 }
, { "grid-color", "color for the grid", 3, 0, 0, { 0, "#ff0000", 0.000000000000 }
, 0, &Settings.GridColor, 0 }
, { "layer-color-1", "Color for layer 1", 3, 0, 0, { 0, "#8b2323", 0.000000000000 }
, 0, &Settings.LayerColor[0], 0 }
, { "layer-color-2", "Color for layer 2", 3, 0, 0, { 0, "#3a5fcd", 0.000000000000 }
, 0, &Settings.LayerColor[1], 0 }
, { "layer-color-3", "Color for layer 3", 3, 0, 0, { 0, "#104e8b", 0.000000000000 }
, 0, &Settings.LayerColor[2], 0 }
, { "layer-color-4", "Color for layer 4", 3, 0, 0, { 0, "#cd3700", 0.000000000000 }
, 0, &Settings.LayerColor[3], 0 }
, { "layer-color-5", "Color for layer 5", 3, 0, 0, { 0, "#548b54", 0.000000000000 }
, 0, &Settings.LayerColor[4], 0 }
, { "layer-color-6", "Color for layer 6", 3, 0, 0, { 0, "#8b7355", 0.000000000000 }
, 0, &Settings.LayerColor[5], 0 }
, { "layer-color-7", "Color for layer 7", 3, 0, 0, { 0, "#00868b", 0.000000000000 }
, 0, &Settings.LayerColor[6], 0 }
, { "layer-color-8", "Color for layer 8", 3, 0, 0, { 0, "#228b22", 0.000000000000 }
, 0, &Settings.LayerColor[7], 0 }
, { "layer-color-9", "Color for layer 9", 3, 0, 0, { 0, "#8b2323", 0.000000000000 }
, 0, &Settings.LayerColor[8], 0 }
, { "layer-color-10", "Color for layer 10", 3, 0, 0, { 0, "#3a5fcd", 0.000000000000 }
, 0, &Settings.LayerColor[9], 0 }
, { "layer-color-11", "Color for layer 11", 3, 0, 0, { 0, "#104e8b", 0.000000000000 }
, 0, &Settings.LayerColor[10], 0 }
, { "layer-color-12", "Color for layer 12", 3, 0, 0, { 0, "#cd3700", 0.000000000000 }
, 0, &Settings.LayerColor[11], 0 }
, { "layer-color-13", "Color for layer 13", 3, 0, 0, { 0, "#548b54", 0.000000000000 }
, 0, &Settings.LayerColor[12], 0 }
, { "layer-color-14", "Color for layer 14", 3, 0, 0, { 0, "#8b7355", 0.000000000000 }
, 0, &Settings.LayerColor[13], 0 }
, { "layer-color-15", "Color for layer 15", 3, 0, 0, { 0, "#00868b", 0.000000000000 }
, 0, &Settings.LayerColor[14], 0 }
, { "layer-color-16", "Color for layer 16", 3, 0, 0, { 0, "#228b22", 0.000000000000 }
, 0, &Settings.LayerColor[15], 0 }
, { "layer-selected-color-1", "Color for layer 1 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[0], 0 }
, { "layer-selected-color-2", "Color for layer 2 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[1], 0 }
, { "layer-selected-color-3", "Color for layer 3 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[2], 0 }
, { "layer-selected-color-4", "Color for layer 4 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[3], 0 }
, { "layer-selected-color-5", "Color for layer 5 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[4], 0 }
, { "layer-selected-color-6", "Color for layer 6 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[5], 0 }
, { "layer-selected-color-7", "Color for layer 7 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[6], 0 }
, { "layer-selected-color-8", "Color for layer 8 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[7], 0 }
, { "layer-selected-color-9", "Color for layer 9 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[8], 0 }
, { "layer-selected-color-10", "Color for layer 10 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[9], 0 }
, { "layer-selected-color-11", "Color for layer 11 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[10], 0 }
, { "layer-selected-color-12", "Color for layer 12 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[11], 0 }
, { "layer-selected-color-13", "Color for layer 13 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[12], 0 }
, { "layer-selected-color-14", "Color for layer 14 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[13], 0 }
, { "layer-selected-color-15", "Color for layer 15 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[14], 0 }
, { "layer-selected-color-16", "Color for layer 16 when selected", 3, 0, 0, { 0, "#00ffff", 0.000000000000 }
, 0, &Settings.LayerSelectedColor[15], 0 }
, { "warn-color", "color for warnings", 3, 0, 0, { 0, "#ff8000", 0.000000000000 }
, 0, &Settings.WarnColor, 0 }
, { "mask-color", "color for solder mask", 3, 0, 0, { 0, "#ff0000", 0.000000000000 }
, 0, &Settings.MaskColor, 0 }
, { "via-thickness", 0, 1, 0, 0, { 6000, 0, 0.000000000000 }
, 0, &Settings.ViaThickness, 0 }
, { "via-drilling-hole", 0, 1, 0, 0, { 2800, 0, 0.000000000000 }
, 0, &Settings.ViaDrillingHole, 0 }
, { "line-thickness", "Initial thickness of new lines.", 1, 0, 0, { 1000, 0, 0.000000000000 }
, 0, &Settings.LineThickness, 0 }
, { "rat-thickness", 0, 1, 0, 0, { 1000, 0, 0.000000000000 }
, 0, &Settings.RatThickness, 0 }
, { "keepaway", 0, 1, 0, 0, { 1000, 0, 0.000000000000 }
, 0, &Settings.Keepaway, 0 }
, { "default-PCB-width", 0, 1, 0, 0, { 600000, 0, 0.000000000000 }
, 0, &Settings.MaxWidth, 0 }
, { "default-PCB-height", 0, 1, 0, 0, { 500000, 0, 0.000000000000 }
, 0, &Settings.MaxHeight, 0 }
, { "text-scale", 0, 1, 0, 0, { 100, 0, 0.000000000000 }
, 0, &Settings.TextScale, 0 }
, { "alignment-distance", 0, 1, 0, 0, { 200, 0, 0.000000000000 }
, 0, &Settings.AlignmentDistance, 0 }
, { "bloat", 0, 1, 0, 0, { 1000, 0, 0.000000000000 }
, 0, &Settings.Bloat, 0 }
, { "shrink", 0, 1, 0, 0, { 1000, 0, 0.000000000000 }
, 0, &Settings.Shrink, 0 }
, { "min-width", "DRC minimum copper spacing", 1, 0, 0, { 1000, 0, 0.000000000000 }
, 0, &Settings.minWid, 0 }
, { "min-silk", "DRC minimum silk width", 1, 0, 0, { 1000, 0, 0.000000000000 }
, 0, &Settings.minSlk, 0 }
, { "min-drill", "DRC minimum drill diameter", 1, 0, 0, { 1500, 0, 0.000000000000 }
, 0, &Settings.minDrill, 0 }
, { "min-ring", "DRC minimum annular ring", 1, 0, 0, { 1000, 0, 0.000000000000 }
, 0, &Settings.minRing, 0 }
, { "grid", 0, 2, 0, 0, { 0, 0, 1000.000000000000 }
, 0, &Settings.Grid, 0 }
, { "grid-increment-mm", 0, 2, 0, 0, { 0, 0, 0.100000000000 }
, 0, &Settings.grid_increment_mm, 0 }
, { "grid-increment-mil", 0, 2, 0, 0, { 0, 0, 5.000000000000 }
, 0, &Settings.grid_increment_mil, 0 }
, { "size-increment-mm", 0, 2, 0, 0, { 0, 0, 0.200000000000 }
, 0, &Settings.size_increment_mm, 0 }
, { "size-increment-mil", 0, 2, 0, 0, { 0, 0, 10.000000000000 }
, 0, &Settings.size_increment_mil, 0 }
, { "line-increment-mm", 0, 2, 0, 0, { 0, 0, 0.100000000000 }
, 0, &Settings.line_increment_mm, 0 }
, { "line-increment-mil", 0, 2, 0, 0, { 0, 0, 5.000000000000 }
, 0, &Settings.line_increment_mil, 0 }
, { "clear-increment-mm", 0, 2, 0, 0, { 0, 0, 0.050000000000 }
, 0, &Settings.clear_increment_mm, 0 }
, { "clear-increment-mil", 0, 2, 0, 0, { 0, 0, 2.000000000000 }
, 0, &Settings.clear_increment_mil, 0 }
, { "minimum polygon area", 0, 2, 0, 0, { 0, 0, 200000000.000000000000 }
, 0, &Settings.IsleArea, 0 }
, { "backup-interval", 0, 1, 0, 0, { 60, 0, 0.000000000000 }
, 0, &Settings.BackupInterval, 0 }
, { "layer-name-1", "Name for layer 1", 3, 0, 0, { 0, "component", 0.000000000000 }
, 0, &Settings.DefaultLayerName[0], 0 }
, { "layer-name-2", "Name for layer 2", 3, 0, 0, { 0, "solder", 0.000000000000 }
, 0, &Settings.DefaultLayerName[1], 0 }
, { "layer-name-3", "Name for layer 3", 3, 0, 0, { 0, "GND", 0.000000000000 }
, 0, &Settings.DefaultLayerName[2], 0 }
, { "layer-name-4", "Name for layer 4", 3, 0, 0, { 0, "power", 0.000000000000 }
, 0, &Settings.DefaultLayerName[3], 0 }
, { "layer-name-5", "Name for layer 5", 3, 0, 0, { 0, "signal1", 0.000000000000 }
, 0, &Settings.DefaultLayerName[4], 0 }
, { "layer-name-6", "Name for layer 6", 3, 0, 0, { 0, "signal2", 0.000000000000 }
, 0, &Settings.DefaultLayerName[5], 0 }
, { "layer-name-7", "Name for layer 7", 3, 0, 0, { 0, "signal3", 0.000000000000 }
, 0, &Settings.DefaultLayerName[6], 0 }
, { "layer-name-8", "Name for layer 8", 3, 0, 0, { 0, "signal4", 0.000000000000 }
, 0, &Settings.DefaultLayerName[7], 0 }
, { "font-command", 0, 3, 0, 0, { 0, "", 0.000000000000 }
, 0, &Settings.FontCommand, 0 }
, { "file-command", "Command to read a file.", 3, 0, 0, { 0, "", 0.000000000000 }
, 0, &Settings.FileCommand, 0 }
, { "element-command", 0, 3, 0, 0, { 0, "M4PATH='%p';export M4PATH;echo 'include(%f)' | /usr/bin/m4", 0.000000000000 }
, 0, &Settings.ElementCommand, 0 }
, { "print-file", 0, 3, 0, 0, { 0, "%f.output", 0.000000000000 }
, 0, &Settings.PrintFile, 0 }
, { "lib-command-dir", 0, 3, 0, 0, { 0, "/usr/share/pcb", 0.000000000000 }
, 0, &Settings.LibraryCommandDir, 0 }
, { "lib-command", 0, 3, 0, 0, { 0, "QueryLibrary.sh '%p' '%f' %a", 0.000000000000 }
, 0, &Settings.LibraryCommand, 0 }
, { "lib-contents-command", 0, 3, 0, 0, { 0, "ListLibraryContents.sh '%p' '%f'", 0.000000000000 }
, 0, &Settings.LibraryContentsCommand, 0 }
, { "lib-newlib", "Top level directory for the newlib style library", 3, 0, 0, { 0, "/usr/share/pcb/newlib:/usr/share/pcb/pcblib-newlib", 0.000000000000 }
, 0, &Settings.LibraryTree, 0 }
, { "save-command", 0, 3, 0, 0, { 0, "", 0.000000000000 }
, 0, &Settings.SaveCommand, 0 }
, { "lib-name", 0, 3, 0, 0, { 0, "pcblib", 0.000000000000 }
, 0, &Settings.LibraryFilename, 0 }
, { "default-font", "File name of default font.", 3, 0, 0, { 0, "default_font", 0.000000000000 }
, 0, &Settings.FontFile, 0 }
, { "groups", 0, 3, 0, 0, { 0, "1,c:2,s:3:4:5:6:7:8", 0.000000000000 }
, 0, &Settings.Groups, 0 }
, { "route-styles", 0, 3, 0, 0, { 0, "Signal,1000,3600,2000,1000:Power,2500,6000,3500,1000:Fat,4000,6000,3500,1000:Skinny,600,2402,1181,600", 0.000000000000 }
, 0, &Settings.Routes, 0 }
, { "file-path", 0, 3, 0, 0, { 0, "", 0.000000000000 }
, 0, &Settings.FilePath, 0 }
, { "rat-command", 0, 3, 0, 0, { 0, "", 0.000000000000 }
, 0, &Settings.RatCommand, 0 }
, { "font-path", 0, 3, 0, 0, { 0, ".:/usr/share/pcb", 0.000000000000 }
, 0, &Settings.FontPath, 0 }
, { "element-path", 0, 3, 0, 0, { 0, ".:/usr/share/pcb", 0.000000000000 }
, 0, &Settings.ElementPath, 0 }
, { "lib-path", 0, 3, 0, 0, { 0, ".:/usr/share/pcb", 0.000000000000 }
, 0, &Settings.LibraryPath, 0 }
, { "menu-file", 0, 3, 0, 0, { 0, "pcb-menu.res", 0.000000000000 }
, 0, &Settings.MenuFile, 0 }
, { "action-script", "If set, this file is executed at startup.", 3, 0, 0, { 0, 0, 0.000000000000 }
, 0, &Settings.ScriptFilename, 0 }
, { "action-string", "If set, this is executed at startup.", 3, 0, 0, { 0, 0, 0.000000000000 }
, 0, &Settings.ActionString, 0 }
, { "fab-author", 0, 3, 0, 0, { 0, "", 0.000000000000 }
, 0, &Settings.FabAuthor, 0 }
, { "layer-stack", "Initial layer stackup, for setting up an export.", 3, 0, 0, { 0, "", 0.000000000000 }
, 0, &Settings.InitialLayerStack, 0 }
, { "pinout-offset-x", 0, 1, 0, 0, { 100, 0, 0.000000000000 }
, 0, &Settings.PinoutOffsetX, 0 }
, { "pinout-offset-y", 0, 1, 0, 0, { 100, 0, 0.000000000000 }
, 0, &Settings.PinoutOffsetY, 0 }
, { "pinout-text-offset-x", 0, 1, 0, 0, { 800, 0, 0.000000000000 }
, 0, &Settings.PinoutTextOffsetX, 0 }
, { "pinout-text-offset-y", 0, 1, 0, 0, { -100, 0, 0.000000000000 }
, 0, &Settings.PinoutTextOffsetY, 0 }
, { "draw-grid", "default to drawing the grid at startup", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &Settings.DrawGrid, 0 }
, { "clear-line", 0, 4, 0, 0, { 1, 0, 0.000000000000 }
, 0, &Settings.ClearLine, 0 }
, { "full-poly", 0, 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &Settings.FullPoly, 0 }
, { "unique-names", 0, 4, 0, 0, { 1, 0, 0.000000000000 }
, 0, &Settings.UniqueNames, 0 }
, { "snap-pin", 0, 4, 0, 0, { 1, 0, 0.000000000000 }
, 0, &Settings.SnapPin, 0 }
, { "save-last-command", 0, 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &Settings.SaveLastCommand, 0 }
, { "save-in-tmp", 0, 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &Settings.SaveInTMP, 0 }
, { "all-direction-lines", 0, 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &Settings.AllDirectionLines, 0 }
, { "show-number", 0, 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &Settings.ShowNumber, 0 }
, { "reset-after-element", 0, 4, 0, 0, { 1, 0, 0.000000000000 }
, 0, &Settings.ResetAfterElement, 0 }
, { "ring-bell-finished", 0, 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &Settings.RingBellWhenFinished, 0 }
 };
char *bindir;
char *exec_prefix;
char *pcblibdir;
char *pcblibpath;
char *pcbtreedir;
char *pcbtreepath;
char *homedir;
char *program_name;
char *program_basename;
char *program_directory;
void copyright( void )
{
  __printf_chk( 1, "\n                COPYRIGHT for %s version %s\n\n    PCB, interactive printed circuit board design\n    Copyright (C) 1994,1995,1996,1997 Thomas Nau\n    Copyright (C) 1998, 1999, 2000 Harry Eaton\n\n    This program is free software; you can redistribute it and/or modify\n    it under the terms of the GNU General Public License as published by\n    the Free Software Foundation; either version 2 of the License, or\n    (at your option) any later version.\n\n    This program is distributed in the hope that it will be useful,\n    but WITHOUT ANY WARRANTY; without even the implied warranty of\n    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n    GNU General Public License for more details.\n\n    You should have received a copy of the GNU General Public License\n    along with this program; if not, write to the Free Software\n    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.\n\n", Progname, "20091103" );
  exit( 0 );
}
void u( char *fmt, ... )
{
  /* phantom */ va_list ap;
  __vfprintf_chk( stderr, 1, fmt, ebp_12 );
  fputc( 10, stderr );
  return;
}
void usage_attr( HID_Attribute *a )
{
  static char buf[200];
  int i;
  if ( a->help_text != 1 )
  {
    switch ( a->type )
    {
    case 7:
      break;
    case 1:
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
    case 6:
      __sprintf_chk( buf, 1, 200, "--%s ", "--%s " );
      if ( a->type == HID_Mixed )
        __strcat_chk( buf, " &lt;val&gt;", 200 );
      if ( a->enumerations[0] )
      {
        i = 0;
        do
        {
          __strcat_chk( buf, "&lt;", 200 );
          i++;
          __strcat_chk( buf, a->enumerations[0], 200 );
        }
        while ( a->enumerations[0] == 0 );
      }
      __strcat_chk( buf, "&gt;", 200 );
    default:
      do
      {
      }
      while ( ( ( a->help_text + 0xfefefeff ) & ~a->help_text & 0x80808080 ) == 0 );
      if ( ( ( ( ( a->help_text + 0xfefefeff ) & ~a->help_text & 0x80808080 & 32896 ) == 0 ? a->name[0] + 4 : a->name[0] + 4 + 2 ) + -3 ) - ( 0 & 1 ) - buf[0] <= 30 )
      {
        if ( a->help_text )
        {
          __fprintf_chk( stderr, 1, " %-30s\t%s\n", buf, a->help_text );
          return;
        }
        __fprintf_chk( stderr, 1, " %-30s\n", buf );
      }
      else
      {
        if ( a->help_text )
        {
          if ( ebx + eax > 71 )
          {
            __fprintf_chk( stderr, 1, " %s\n\t\t\t%s\n", buf, a->help_text );
          }
          else
          {
            __fprintf_chk( stderr, 1, " %s\t%s\n", buf, a->help_text );
          }
        }
        else
        {
          __fprintf_chk( stderr, 1, " %s\n", buf );
        }
      }
    case 0:
      break;
    }
    __sprintf_chk( buf, 1, 200, ebp_44, ebp_40 );
  }
  return;
}
void usage_hid( HID *h )
{
  HID_Attribute *e;
  int i, n;
  if ( ( ( h->bits_at_12 & 1 ) & 255 ) == 0 )
  {
    __fprintf_chk( stderr, 1, "\n%s options:\n", h->name );
    exporter = h;
    ;
  }
{
  HID **hl = hid_enumerate( );
  HID_AttrNode *ha;
  __fprintf_chk( stderr, 1, "\ngui options:\n" );
  ha = hid_attr_nodes;
  if ( hid_attr_nodes )
  {
    do
    {
      if ( hl[0] )
      {
        ;
      }
      if ( ha->n > 0 )
      {
        i = 0;
        do
        {
          i++;
          usage_attr( ha->attributes + 0 + 48 );
        }
        while ( ha->n <= i );
      }
      else
      if ( ha == 0 )
        break;
    }
    while ( ha );
  }
  return;
}
}
void usage( void )
{
  int edx;
  HID **hl = hid_enumerate( );
  /* phantom */ int i;
  int n_printer, n_gui, n_exporter;
  if ( hl[0] )
  {
    n_exporter = 0;
    n_gui = 0;
    n_printer = 0;
    do
    {
      n_gui = ( n_gui + 1 ) - ( ( ( *(char*)(hl[0] + 12) & 1 ) < ( 1 & 255 ) ) & 1 );
      n_printer = ( n_printer + 1 ) - ( ( ( *(char*)(hl[0] + 12) & 2 ) < ( 1 & 255 ) ) & 1 );
      n_exporter = ( n_exporter + 1 ) - ( ( ( *(char*)(hl[1] + 12) & 4 ) < ( 1 & 255 ) ) & 1 );
      hl[0] = hl + 4;
    }
    while ( hl[2] );
    u( "PCB Printed Circuit Board editing program, http://pcb.sourceforge.net" );
    u( "%s [-h|-V|--copyright]\t\t\tHelp, version, copyright", Progname );
    u( "%s [gui options] &lt;pcb file&gt;\t\tto edit", Progname );
    u( "Available GUI hid%s:", "s" );
    if ( hl[0] )
    {
      do
      {
        if ( ( *(char*)(hl[1] + 12) & 1 ) & 255 )
        {
          __fprintf_chk( stderr, 1, "\t%s\t%s\n", &hl[1]->name, &hl[1]->description );
        }
        else
        if ( hl[2] )
          continue;
        else
          break;
      }
      while ( hl[2] );
    }
    u( "%s -p [printing options] &lt;pcb file&gt;\tto print", Progname );
    u( "Available printing hid%s:", n_printer == 1 ? "s" : "" );
    if ( hl[0] )
    {
      do
      {
        if ( ( *(char*)(hl[1] + 12) & 2 ) & 255 )
        {
          __fprintf_chk( stderr, 1, "\t%s\t%s\n", &hl[1]->name, &hl[1]->description );
        }
        else
        if ( hl[2] )
          continue;
        else
          break;
      }
      while ( hl[2] );
    }
    u( "%s -x hid [export options] &lt;pcb file&gt;\tto export", Progname );
    u( "Available export hid%s:", n_exporter == 1 ? "s" : "" );
    if ( hl[0] )
    {
      do
      {
        if ( ( *(char*)(n_printer + 12) & 4 ) & 255 )
        {
          __fprintf_chk( stderr, 1, "\t%s\t%s\n", &n_printer, &n_printer );
        }
        else
        if ( n_printer )
          continue;
        else
          break;
      }
      while ( n_printer );
      if ( hl[0] == 0 )
      {
        exit( 1 );
      }
      do
      {
        if ( ( *(char*)(hl[1] + 12) & 1 ) & 255 )
        {
          usage_hid( &eax );
        }
        else
        if ( hl[2] )
          continue;
        else
          break;
      }
      while ( hl[2] );
      if ( hl[0] == 0 )
      {
        exit( 1 );
      }
      do
      {
        if ( ( *(char*)(hl[1] + 12) & 2 ) & 255 )
        {
          usage_hid( &eax );
        }
        else
        if ( hl[2] )
          continue;
        else
          break;
      }
      while ( hl[2] );
      if ( hl[0] == 0 )
      {
        exit( 1 );
      }
      do
      {
        if ( ( *(char*)(n_printer + 12) & 4 ) & 255 )
        {
          usage_hid( &eax );
        }
        else
        {
          if ( n_printer == 0 )
            break;
        }
      }
      while ( n_printer );
    }
  }
  else
  {
    n_printer = 0;
    n_exporter = 0;
    u( "PCB Printed Circuit Board editing program, http://pcb.sourceforge.net" );
    u( "%s [-h|-V|--copyright]\t\t\tHelp, version, copyright", Progname );
    u( "%s [gui options] &lt;pcb file&gt;\t\tto edit", Progname );
  }
  u( "Available GUI hid%s:", "s" );
}
void print_defaults_1( HID_Attribute *a, void *value )
{
  int ecx;
  int edx;
  double fp7;
  int i;
  double d;
  char *s;
  switch ( a->type )
  {
  case HID_Integer:
    __fprintf_chk( stderr, 1, "%s %d\n", (char*)a, i );
    return;
    break;
  case HID_Boolean:
    i = "yes";
    break;
  case HID_Real:
    __fprintf_chk( stderr, 1, "%s %g\n", (char*)a, value ? value : a->default_val.real_value );
    return;
    break;
  case HID_String:
  case HID_Path:
    __fprintf_chk( stderr, 1, "%s \"%s\"\n", (char*)a, s );
    return;
    break;
  case HID_Enum:
    break;
  case HID_Mixed:
    __fprintf_chk( stderr, 1, "%s %g%s\n", (char*)a, value ? i : a->default_val.real_value, a->enumerations[0] );
    return;
    break;
  case HID_Label:
    return;
    break;
  }
  __fprintf_chk( stderr, 1, "%s %s\n", (char*)a, a->enumerations[0] );
  return;
}
void register_main_attribute_list( void )
{
  hid_register_attributes( main_attribute_list, 133 );
  return;
}
void print_version( void )
{
  __printf_chk( 1, "PCB version %s\n", "20091103" );
  exit( 0 );
}
// Lost vars at line 877 through condition folding
int main( int argc, char **argv )
{
  int eax;
  int ecx;
  int edx;
  int i;
  register_action_action_list( );
  register_rotate_action_list( );
  register_command_action_list( );
  register_djopt_flag_list( );
  register_djopt_action_list( );
  register_flags_flag_list( );
  register_fontmode_action_list( );
  register_main_attribute_list( );
  register_move_action_list( );
  register_netlist_action_list( );
  register_puller_action_list( );
  register_report_action_list( );
  register_vendor_action_list( );
  register_vendor_flag_list( );
  register_toporouter_action_list( );
  setbuf( stdout, 0 );
  strlen( argv[0] );
  while ( 0 + 1 != strlen( argv[0] ) )
  {
  }
  if ( *(char*)(0 + argv[0]) == '/' ? 0 : 1 )
  {
    bindir = __strdup( lrealpath( argv[0] ) );
  }
  else
  {
    if ( getenv( "PATH" ) )
    {
      if ( strtok( __strdup( getenv( "PATH" ) ), ":" ) )
      {
        do
        {
          if ( *(char*)(strtok( __strdup( getenv( "PATH" ) ), ":" )) )
          {
            if ( eax == 0 )
            {
              __fprintf_chk( stderr, 1, "InitPaths():  malloc failed\n" );
              exit( 1 );
            }
            __sprintf_chk( eax, 1, -1, "%s%s%s", &ebx, "/", &edi );
            if ( eax == 0 )
            {
              bindir = lrealpath( Settings.InitialLayerStack );
              free( Settings.InitialLayerStack );
              free( Settings.InitialLayerStack );
            }
            else
            {
              free( &esi );
            }
          }
          else
            break;
        }
        while ( strtok( 0, ":" ) );
      }
      free( __strdup( getenv( "PATH" ) ) );
    }
    if ( calloc( 1, 9 ) )
    {
      *(int*)(calloc( 1, 9 )) = 0x7273752f;
      *(int*)calloc( 1, 9 )/*.4*/ = 0x6e69622f;
      *(int*)calloc( 1, 9 )/*.8*/ = 0;
    }
    bindir = (char*)calloc( 1, 9 );
    exec_prefix = (char*)calloc( 1, strlen( bindir ) + 4 );
    if ( exec_prefix == 0 )
    {
      __fprintf_chk( stderr, 1, "InitPaths():  malloc failed\n" );
      exit( 1 );
    }
    __sprintf_chk( exec_prefix, 1, -1, "%s%s%s", bindir, "/", ".." );
    pcblibdir = (char*)calloc( 1, strlen( bindir ) + 14 );
    if ( pcblibdir == 0 )
    {
      __fprintf_chk( stderr, 1, "InitPaths():  malloc failed\n" );
      exit( 1 );
    }
    __sprintf_chk( pcblibdir, 1, -1, "%s%s%s", bindir, "/", "../share/pcb" );
    pcbtreedir = (char*)calloc( 1, strlen( bindir ) + 21 );
    if ( pcbtreedir == 0 )
    {
      __fprintf_chk( stderr, 1, "InitPaths():  malloc failed\n" );
      exit( 1 );
    }
    __sprintf_chk( pcbtreedir, 1, -1, "%s%s%s", bindir, "/", "../share/pcb/newlib" );
    pcblibpath = (char*)calloc( 1, strlen( pcblibdir ) + 3 );
    if ( pcblibpath == 0 )
    {
      __fprintf_chk( stderr, 1, "InitPaths():  malloc failed\n" );
      exit( 1 );
    }
    __sprintf_chk( pcblibpath, 1, -1, ".%s%s", ":", pcblibdir );
    pcbtreepath = (char*)calloc( 1, strlen( pcblibdir ) + strlen( pcbtreedir ) + 16 );
    if ( pcbtreepath == 0 )
    {
      __fprintf_chk( stderr, 1, "InitPaths():  malloc failed\n" );
      exit( 1 );
    }
    __sprintf_chk( pcbtreepath, 1, -1, "%s%s%s%spcblib-newlib", ":", pcblibdir, "/" );
    do
    {
      if ( *(int*)(main_attribute_list[0].name + 0 + 48) )
      {
        strcmp( "lib-command-dir", *(int*)(main_attribute_list[0].name + 0 + 48) );
        if ( 1 )
        {
        }
        strcmp( "font-path", *(int*)(main_attribute_list[0].name + 0 + 48) );
        if ( (unsigned char)( ccdep2 < ccdep1 ) )
        {
          strcmp( "element-path", pcbtreepath );
          if ( (unsigned char)( ccdep2 < ccdep1 ) )
          {
            strcmp( "lib-path", pcbtreepath );
            if ( !1 )
            {
              strcmp( "lib-newlib", *(int*)(0) );
              if ( 1 )
                *(int*)(main_attribute_list->default_val.str_value + 0) = pcbtreepath;
            }
          }
        }
        if ( *(int*)(main_attribute_list[0].name + 0 + 48) )
        {
          strcmp( "lib-newlib", *(int*)(0) );
        }
        else
        {
          if ( 0 + 48 + 48 != 6384 )
            continue;
          else
            break;
        }
      }
    }
    while ( 0 + 48 + 48 != 6384 );
    if ( getenv( "HOME" ) || getenv( "USERPROFILE" ) )
    {
      homedir = __strdup( getenv( "HOME" ) );
    }
    else
      homedir = 0;
    bindtextdomain( "pcb", "/usr/share/locale" );
    bind_textdomain_codeset( "pcb", "UTF-8" );
    hid_init( );
    hid_load_settings( );
    program_name = argv[0];
    program_basename = strrchr( argv[0], '/' );
    if ( program_basename )
    {
      program_directory = __strdup( argv[0] );
      *(char*)(strrchr( __strdup( argv[0] ), '/' )) = 0;
      program_basename++;
    }
    else
    {
      program_directory = ".";
      program_basename = argv[0];
    }
    Progname = &program_basename[1];
    if ( argc > 1 )
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      unsigned char *__s1 = (unsigned char*)argv[1];
      /* phantom */ int __result;
      if ( __s1[0] == 45 && __s1[1] == 104 && argv[1][2] == 0 )
      {
        usage( );
        if ( argc > 1 )
        {
        }
      }
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      /* phantom */ unsigned char *__s1;
      /* phantom */ int __result;
      if ( argv[1][0] == 45 && argv[1][1] == 86 && argv[1][2] == 0 )
      {
        print_version( );
        if ( argc > 1 )
        {
        }
      }
      else
      {
      }
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      /* phantom */ unsigned char *__s1;
      /* phantom */ int __result;
      if ( argv[1][0] == 45 && *(int*)calloc( 1, 9 )/*.1*/ == 112 && *(int*)calloc( 1, 9 )/*.2*/ == 0 )
      {
        argc += -1;
        gui = hid_find_printer( );
        exporter = hid_find_printer( );
        if ( gui )
        {
          i = 0;
        {
          do
          {
            char buf[20];
            i++;
            __sprintf_chk( ebp_36, 1, 20, "signal%d", i + 1 );
            Settings.LayerColor[ i + -1 ] = "#c49350";
            Settings.LayerColor[ i + 15 ] = "#00ffff";
            Settings.DefaultLayerName[ i + -1 ] = MyStrdup( ebp_36, "DefaultLayerNames" );
          }
          while ( i == 16 );
          gui->parse_arguments( argc, argc, ebp_144 );
          if ( show_help == 0 && ( argc <= 1 || argv[4][0] != '-' ) )
          {
            if ( show_version )
            {
              print_version( );
              if ( show_defaults )
              {
                if ( *(int*)(hid_enumerate( )) == 0 )
                {
                  exit( 1 );
                }
                do
                {
                  if ( ( ( *(char*)(*(int*)(hid_enumerate( )) + 12) & 1 ) & 255 ) == 0 )
                  {
                    __fprintf_chk( stderr, 1, "\n%s defaults:\n", *(int*)(*(int*)hid_enumerate( )/*.4*/ + 4) );
                    ;
                  }
                  __fprintf_chk( stderr, 1, "\ngui defaults:\n" );
                  if ( hid_attr_nodes )
                  {
                    do
                    {
                      if ( hid_attr_nodes->n > 0 )
                      {
                        do
                        {
                          print_defaults_1( 0 + 48 + hid_attr_nodes->attributes, *(int*)(0 + 48 + *(int*)(hid_attr_nodes + 4) + 40) );
                        }
                        while ( 0 + 1 < hid_attr_nodes->n );
                      }
                    }
                    while ( hid_attr_nodes->next );
                  }
                }
                while ( *(int*)(hid_enumerate( ) + 4 + 4) );
              }
              else
              {
                if ( show_copyright )
                {
                  copyright( );
                }
                gui->make_gc( );
                &Output.bgGC = &gui->struct_size;
                gui->make_gc( );
                Output.fgGC = gui;
                gui->make_gc( );
                Output.pmGC = gui;
                gui->make_gc( );
                Output.GridGC = gui;
                if ( Settings.LibraryCommand[0] + -46 < 1 )
                {
                  Settings.LibraryCommand = Concat( Settings.LibraryCommandDir, "/", (long long)( Settings.LibraryCommand ) );
                }
                if ( Settings.LibraryContentsCommand[0] + -46 < 1 )
                {
                  Settings.LibraryContentsCommand = Concat( Settings.LibraryCommandDir, "/", (long long)( Settings.LibraryContentsCommand ) );
                }
                if ( Settings.LineThickness + -1 > 0x98967f )
                  Settings.LineThickness = 1000;
                if ( Settings.ViaThickness + -2000 > 0x988eb0 )
                {
                  Settings.ViaThickness = 4000;
                  if ( Settings.ViaDrillingHole <= 0 )
                    goto B173;
                  else
                  {
                    Settings.MaxWidth = ( (unsigned char)( ( Settings.MaxWidth < 1000 ) ^ 1 ) ? 1000 : Settings.MaxWidth ) > 0x989680 ? (unsigned char)( ( Settings.MaxWidth < 1000 ) ^ 1 ) ? 1000 : Settings.MaxWidth : 0x989680;
                    Settings.MaxHeight = ( (unsigned char)( ( Settings.MaxHeight < 1000 ) ^ 1 ) ? 1000 : Settings.MaxHeight ) <= 0x989680 ? 0x989680 : (unsigned char)( ( Settings.MaxHeight < 1000 ) ^ 1 ) ? 1000 : Settings.MaxHeight;
                    ParseRouteString( Settings.Routes, &Settings.RouteStyle, 1 );
                    if ( show_actions == 0 )
                    {
                      if ( do_dump_actions )
                      {
                        dump_actions( );
                        exit( 0 );
                      }
                      PCB = CreateNewPCB( 1 );
                      *(int*)(*(int*)CreateNewPCB( 1 )/*.8716*/ + 24) = 8;
                      ParseGroupString( Settings->Groups, &PCB->LayerGroups.Number[0], 8 );
                      CreateNewPCBPost( PCB, 1 );
                      if ( argc > 1 )
                        command_line_pcb = argv[1];
                      ResetStackAndVisibility( );
                      CreateDefaultFont( );
                      if ( ( gui->bits_at_12 & 1 ) & 255 )
                        InitCrosshair( );
                      signal( 13, 1 );
                      InitBuffers( );
                      SetMode( 110 );
                      if ( command_line_pcb && LoadPCB( command_line_pcb ) )
                      {
                        PCB->Filename = MyStrdup( command_line_pcb, "main()" );
                      }
                      if ( Settings.InitialLayerStack && Settings.InitialLayerStack[0] )
                        LayerStringToLayerStack( Settings.InitialLayerStack );
                      if ( ( gui->bits_at_12 & 6 ) & 255 )
                      {
                        ;
                      }
                      atexit( &EmergencySave );
                      if ( !ReadLibraryContents( ) && Library )
                        hid_action( "LibraryChanged" );
                      Settings.init_done = 0;
                      if ( Settings.ScriptFilename )
                      {
                        Message( "Executing startup script file %s\n", Settings.ScriptFilename );
                        hid_actionl( "ExecuteFile", (long long)( Settings.ScriptFilename ) );
                      }
                      if ( Settings.ActionString )
                      {
                        Message( "Executing startup action %s\n", Settings.ActionString );
                        hid_parse_actions( Settings.ActionString, 0 );
                      }
                      if ( Settings.init_done == 0 )
                      {
                        Settings.init_done = 1;
                        pcb_dbus_setup( );
                        EnableAutosave( );
                        gui->do_export( 0 );
                        pcb_dbus_finish( );
                      }
                      if ( ( 0 ^ 0 ) == 0 )
                      {
                        return 0;
                      }
                      __stack_chk_fail( );
                    }
                    print_actions( );
                    exit( 0 );
                  }
                }
                else
                if ( Settings.ViaDrillingHole <= 0 )
                  goto B173;
B173:;
                Settings.ViaDrillingHole = ( Settings.ViaThickness * 40 ) / 100;
              }
            }
          }
          else
          {
            usage( );
            if ( show_version )
            {
              print_version( );
            }
          }
          if ( show_defaults )
          {
          }
          else
          {
          }
        }
        }
      }
      else
      {
        if ( program_basename[1] > 2 && argv[1][0] == 45 && argv[1][1] == 120 && argv[1][2] == 0 )
        {
          argc += -2;
          gui = hid_find_exporter( argv[2] );
          exporter = hid_find_exporter( argv[2] );
        }
      }
    }
    }
    }
    gui = hid_find_gui( );
  }
  if ( strchr( bindir, '/' ) && *(char*)(strchr( bindir, '/' )) )
  {
    while ( strchr( strchr( bindir, '/' ) + 1, '/' ) == 0 || *(char*)(strchr( bindir, '/' )) == 0 )
    {
    }
    *(char*)(strchr( bindir, '/' )) = 0;
  }
}
void *mymemset( void *dst, int s, size_t count )
{
  int eax;
  int ecx;
  /* phantom */ char *a;
  if ( count )
  {
    do
    {
      *(char*)(dst + 0) = s/*.1_1of4*/;
    }
    while ( count != 0 + 1 + 1 );
  }
  return dst;
}
#if 0
#endif
