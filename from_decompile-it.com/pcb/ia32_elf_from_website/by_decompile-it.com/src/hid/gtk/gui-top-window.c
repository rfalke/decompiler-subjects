#include "gui-top-window.c.h"
char *gpcb_menu_default[548] = { "# -*- c -*-", "# Note - gpcb-menu.res is used to build gpcb-menu.h", "# Note - parameters are sensitive to extra spaces around the commas", "", "#", "# NOTE:  I have not figured out what to do with this", "# section yet.  The Mouse section is currently ignored until", "# I figure out how to handle it.", "#", "", "Mouse =", "{", "  Left = {", "    Mode(Notify)", "    ctrl = { Mode(Save) Mode(None) Mode(Restore) Mode(Notify) }", "    shift-ctrl = { Mode(Save) Mode(Remove) Mode(Notify) Mode(Restore) }", "    up = Mode(Release)", "  }", "  Right = {", "    Pan(1)", "    up = Pan(0)", "    shift = Popup(Popup1)", "    ctrl = Display(CycleCrosshair)", "  }", "  Middle = {", "    Mode(Stroke)", "    up = Mode(Release)", "    ctrl = { Mode(Save) Mode(Copy) Mode(Notify) }", "    up-ctrl = { Mode(Notify) Mode(Restore) }", "    shift-ctrl = { Display(ToggleRubberbandMode) Mode(Save) Mode(Move) Mode(Notify) }", "    up-shift-ctrl = { Mode(Notify) Mode(Restore) Display(ToggleRubberbandMode) }", "  }", "  Up = {", "    Zoom(0.8)", "    shift = Scroll(up)", "    ctrl = Scroll(left)", "  }", "  Down = {", "    Zoom(1.25)", "    shift = Scroll(down)", "    ctrl = Scroll(right)", "  }", "# If you want zoom to center, do this instead.", "  #Up = { {Zoom(0.8) Center()} }", "  #Down = { {Zoom(1.25) Center()} }", "}", "", "MainMenu =", "{", "", "#", "# File Menu", "#", "", "  {File", "   {\"Save layout\" Save(Layout) tip=\"Saves current layout\"}", "   {\"Save layout as...\" Save(LayoutAs) tip=\"Saves current layout into a new file\"}", "   -", "   {\"Revert\" Load(Revert,none) tip=\"Revert to the layout stored on disk\"}", "   -", "   {\"Load layout\" Load(Layout) tip=\"Load a layout from a file\"}", "   {\"Load element data to paste-buffer\" PasteBuffer(Clear) Load(ElementTobuffer)}", "   {\"Load layout data to paste-buffer\" PasteBuffer(Clear) Load(LayoutTobuffer)}", "   {\"Load netlist file\" Load(Netlist)}", "   {\"Load vendor resource file\" LoadVendorFrom()}", "   -", "   {\"Save connection data of\"", "     {\" a single element\" GetXY(Click to set the element mark &lt;&gt;) Save(ElementConnections)}", "     {\" all elements\" Save(AllConnections)}", "     {\" unused pins\" Save(AllUnusedPins)}", "   }", "   -", "   {\"Print layout...\" Print()}", "   {\"Export layout...\" Export()}", "   {\"Calibrate Printer...\" PrintCalibrate()}", "   -", "   {\"Start new layout\" New()}", "   -", "   {\"Preferences...\" DoWindows(Preferences)}", "   -", "   {\"Quit Program\" Quit()  a={\"Ctrl-Q\" \"Ctrl&lt;Key&gt;q\"}}", "  }", "", "#", "# Edit Menu", "#", "", "  {Edit ", "   {\"Undo last operation\" Undo() a={\"U\" \"&lt;Key&gt;u\"}}", "   {\"Redo last undone operation\" Redo() a={\"Shift-R\" \"Shift&lt;Key&gt;r\"}}", "   {\"Clear undo-buffer\" Undo(ClearList) a={\"Shift-Ctrl-U\" \"Shift Ctrl&lt;Key&gt;u\"}}", "   -", "   {\"Cut selection to buffer\" GetXY(Click to set the snap point for this buffer)", "    PasteBuffer(Clear) PasteBuffer(AddSelected) RemoveSelected() Mode(PasteBuffer)", "    a={\"Ctrl-X\" \"Ctrl&lt;Key&gt;x\"}}", "   {\"Copy selection to buffer\" GetXY(Click to set the snap point for this buffer)", "    PasteBuffer(Clear) PasteBuffer(AddSelected) Unselect(All) Mode(PasteBuffer)", "    a={\"Ctrl-C\" \"Ctrl&lt;Key&gt;c\"}}", "   {\"Paste buffer to layout\" Mode(PasteBuffer) a={\"Ctrl-V\" \"Ctrl&lt;Key&gt;v\"}}", "   -", "   {\"Unselect all\" Unselect(All) a={\"Shift-Alt-A\" \"Shift Alt&lt;Key&gt;a\"}}", "   {\"Select all visible\" Select(All) a={\"Alt-A\" \"Alt&lt;Key&gt;a\"}}", "   -", "   {\"Edit name of\"", "     {\"text on layout\" ChangeName(Object) a={\"N\" \"&lt;Key&gt;n\"}}", "     {\"layout\" ChangeName(Layout)}", "     {\"active layer\" ChangeName(Layer)}", "   }", "   -", "   {\"Move to current layer\" MoveToCurrentLayer(Object) a={\"M\" \"&lt;Key&gt;m\"}}", "   {\"Move selected to current layer\" MoveToCurrentLayer(Selected) a={\"Shift-M\" \"Shift&lt;Key&gt;m\"}}", "   {\"Route Styles\" @routestyles", "    -", "    {\"Edit...\" AdjustStyle(0)}", "   }", "  }", "", "#", "# View Menu", "#", "", "  {View ", "   {\"Enable visible grid\" checked=drawgrid Display(Grid)}", "   {\"Grid units\"", "    {\"mil\" checked=grid_units_mm,0 SetUnits(mil)}", "    {\"mm\"  checked=grid_units_mm,1 SetUnits(mm)}", "   }", "   {\"Grid size\"", "    {\"No Grid\" checked=gridsize,1 SetValue(Grid,1)}", "    -", "    {  \"0.1 mil\" checked=gridsize,10 SetUnits(mil) SetValue(Grid,10)}", "    {  \"1 mil\"   checked=gridsize,100 SetUnits(mil) SetValue(Grid,100)}", "    {  \"5 mil\"   checked=gridsize,500 SetUnits(mil) SetValue(Grid,500)}", "    { \"10 mil\"   checked=gridsize,1000 SetUnits(mil) SetValue(Grid,1000)}", "    { \"25 mil\"   checked=gridsize,2500 SetUnits(mil) SetValue(Grid,2500)}", "    { \"50 mil\"   checked=gridsize,5000 SetUnits(mil) SetValue(Grid,5000)}", "    {\"100 mil\"   checked=gridsize,10000 SetUnits(mil) SetValue(Grid,10000)}", "    -", "    {\"0.01 mm\" checked=gridsize,39 SetUnits(mm) SetValue(Grid,39.37007874)}", "    {\"0.05 mm\" checked=gridsize,197 SetUnits(mm) SetValue(Grid,196.85039370)}", "    {\"0.1 mm\"  checked=gridsize,394 SetUnits(mm) SetValue(Grid,393.70078740)}", "    {\"0.25 mm\" checked=gridsize,984 SetUnits(mm) SetValue(Grid,984.25197)}", "    {\"0.5 mm\"  checked=gridsize,1969 SetUnits(mm) SetValue(Grid,1968.503937)}", "    {\"1 mm\"    checked=gridsize,3937 SetUnits(mm) SetValue(Grid,3937.00787400)}", "    -", "    {\"Grid -5mil\" SetValue(Grid,-5,mil) a={\"Shift-G\" \"Shift&lt;Key&gt;g\"}}", "    {\"Grid +5mil\" SetValue(Grid,+5,mil) a={\"G\" \"&lt;Key&gt;g\"}}", "    {\"Grid -0.05mm\" SetValue(Grid,-0.05,mm) a={\"Shift-Ctrl-G\" \"Shift Ctrl&lt;Key&gt;g\"}}", "    {\"Grid +0.05mm\" SetValue(Grid,+0.05,mm) a={\"Ctrl-G\" \"Ctrl&lt;Key&gt;g\"}}", "   }", "   {\"Realign grid\" GetXY(Click to set the grid origin) Display(ToggleGrid)}", "   -", "   {\"Displayed element name\"", "    {\"Description\" Display(Description) checked=elementname,1}", "    {\"Reference Designator\" Display(NameOnPCB) checked=elementname,2}", "    {\"Value\" Display(Value) checked=elementname,3}", "   }", "   {\"Enable Pinout shows number\" checked=shownumber Display(ToggleName)}", "   {\"Pins/Via show Name/Number\" Display(PinOrPadName) a={\"D\" \"&lt;Key&gt;d\"}}", "   -", "   {\"Zoom In 20%\" Zoom(-1.2) m=Z a={\"Z\" \"&lt;Key&gt;z\"}}", "   {\"Zoom Out 20%\" Zoom(+1.2) m=O a={\"Shift-Z\" \"Shift&lt;Key&gt;z\"}}", "   {\"More zooms and view changes\"", "    {\"Zoom Max\" Zoom() m=M a={\"V\" \"&lt;Key&gt;v\"}}", "    {\"Zoom In 2X\" Zoom(-2)}", "    {\"Zoom Out 2X\" Zoom(+2)}", "    {\"Zoom to 0.1mil/px\" Zoom(=10)}", "    {\"Zoom to 0.01mm/px\" Zoom(=39.37)}", "    {\"Zoom to 1mil/px\" Zoom(=100)}", "    {\"Zoom to 0.05mm/px\" Zoom(=196.8504)}", "    {\"Zoom to 2.5mil/px\" Zoom(=250)}", "    {\"Zoom to 0.1mm/px\" Zoom(=393.7)}", "    {\"Zoom to 10mil/px\" Zoom(=1000)}", "    {\"Zoom In 20% and center\" Zoom(-1.2) Center() m=Z }", "    {\"Zoom Out 20% and center\" Zoom(+1.2) Center() m=O }", "    {\"Flip up/down\" checked=flip_y SwapSides(V) a={\"Tab\" \"&lt;Key&gt;Tab\"}}", "    {\"Flip left/right\" checked=flip_x SwapSides(H) a={\"Shift-Tab\" \"Shift&lt;Key&gt;Tab\"}}", "    {\"Spin 180 degrees\" SwapSides(R) a={\"Ctrl-Tab\" \"Ctrl&lt;Key&gt;Tab\"}}", "    {\"Swap Sides\" SwapSides() a={\"Ctrl-Shift-Tab\" \"Ctrl Shift&lt;Key&gt;Tab\"}}", "    {\"Center cursor\" Center() a={\"C\" \"&lt;Key&gt;c\"}}", "   }", "   -", "   {\"Shown Layers\"", "    @layerview", "    -", "    {\"Edit Layer Groups\" EditLayerGroups()}", "   }", "   {\"Current Layer\"", "    @layerpick", "    -", "    {\"Delete current layer\" MoveLayer(c,-1)}", "    {\"Add new layer\" MoveLayer(-1,c)}", "    {\"Move current layer up\" MoveLayer(c,up)}", "    {\"Move current layer down\" MoveLayer(c,down)}", "   }", "  }", "", "#", "# Settings menu", "#  ", "  {Settings", "   {\"'All-direction' lines\" checked=alldirection Display(Toggle45Degree) a={\".\" \"&lt;Key&gt;.\"}}", "   {\"Auto swap line start angle\" checked=swapstartdir Display(ToggleStartDirection)}", "   {\"Orthogonal moves\" checked=orthomove Display(ToggleOrthoMove)}", "   {\"Crosshair snaps to pins and pads\" checked=snappin Display(ToggleSnapPin)}", "   {\"Crosshair shows DRC clearance\" checked=showdrc Display(ToggleShowDRC)}", "   {\"Auto enforce DRC clearance\" checked=autodrc Display(ToggleAutoDRC)}", "   {\"Lock Names\" checked=locknames Display(ToggleLockNames)}", "   {\"Only Names\" checked=onlynames Display(ToggleOnlyNames)}", "   {\"Hide Names\" checked=hidenames Display(ToggleHideNames)}", "   -", "   {\"Rubber band mode\" checked=rubberband Display(ToggleRubberBandMode)}", "   {\"Require unique element names\" checked=uniquename Display(ToggleUniqueNames)}", "   {\"Auto-zero delta measurements\" checked=localref Display(ToggleLocalRef)}", "   {\"New lines, arcs clear polygons\" checked=clearnew Display(ToggleClearLine)}", "   {\"New polygons are full ones\" checked=newfullpoly Display(ToggleFullPoly)}", "   {\"Show autorouter trials\" checked=liveroute Display(ToggleLiveRoute)}", "   {\"Thin draw\" checked=thindraw Display(ToggleThindraw) a={\"|\" \"&lt;Key&gt;|\"}}", "   {\"Thin draw poly\" checked=thindrawpoly Display(ToggleThindrawPoly) a={\"Ctrl-Shift-P\" \"Ctrl Shift&lt;Key&gt;p\"}}", "   {\"Check polygons\" checked=checkplanes Display(ToggleCheckPlanes)}", "   -", "   {\"Vendor drill mapping\" ToggleVendor() checked=VendorMapOn}", "  }", "    ", "#", "# Select menu", "#", "  {Select ", "   {\"Select all visible objects\" Select(All)}", "   {\"Select all connected objects\" Select(Connection)}", "   -", "   {\"Unselect all objects\" Unselect(All)}", "   {\"unselect all connected objects\" Unselect(Connection)}", "   -", "   {\"Select by name\"", "    {\"All objects\" Select(ObjectByName) active=have_regex}", "    {\"Elements\" Select(ElementByName) active=have_regex}", "    {\"Pads\" Select(PadByName) active=have_regex}", "    {\"Pins\" Select(PinByName) active=have_regex}", "    {\"Text\" Select(TextByName) active=have_regex}", "    {\"Vias\" Select(ViaByName) active=have_regex}", "   }", "   -", "   {\"Auto-place selected elements\" AutoPlaceSelected() a={\"Ctrl-P\" \"Ctrl&lt;Key&gt;p\"}}", "   {\"Disperse all elements\" DisperseElements(All)}", "   {\"Disperse selected elements\" DisperseElements(Selected)}", "   -", "   {\"Move selected elements to other side\" Flip(SelectedElements) a={\"Shift-B\" \"Shift&lt;Key&gt;b\"}}", "   {\"Remove selected objects\" RemoveSelected() a={\"Shift-Delete\" \"Shift&lt;Key&gt;Delete\"}}", "   {\"Convert selection to element\" Select(Convert)}", "   -", "   {\"Optimize selected rats\" DeleteRats(SelectedRats) AddRats(SelectedRats)}", "   {\"Auto-route selected rats\" AutoRoute(SelectedRats) a={\"Alt-R\" \"Alt&lt;Key&gt;r\"}}", "   {\"Rip-up selected auto-routed tracks\" RipUp(Selected)}", "   -", "   {\"Change size of selected objects\"", "    {\"Lines -10 mil\" ChangeSize(SelectedLines,-10,mil) ChangeSize(SelectedArcs,-10,mil)}", "    {\"Lines +10 mil\" ChangeSize(SelectedLines,+10,mil) ChangeSize(SelectedArcs,+10,mil)}", "    {\"Pads -10 mil\" ChangeSize(SelectedPads,-10,mil)}", "    {\"Pads +10 mil\" ChangeSize(SelectedPads,+10,mil)}", "    {\"Pins -10 mil\" ChangeSize(SelectedPins,-10,mil)}", "    {\"Pins +10 mil\" ChangeSize(SelectedPins,+10,mil)}", "    {\"Texts -10 mil\" ChangeSize(SelectedTexts,-10,mil)}", "    {\"Texts +10 mil\" ChangeSize(SelectedTexts,+10,mil)}", "    {\"Vias -10 mil\" ChangeSize(SelectedVias,-10,mil)}", "    {\"Vias +10 mil\" ChangeSize(SelectedVias,+10,mil)}", "   }", "   -", "   {\"Change drilling hole of selected objects\"", "    {\"Vias -10 mil\" ChangeDrillSize(SelectedVias,-10,mil)}", "    {\"Vias +10 mil\" ChangeDrillSize(SelectedVias,+10,mil)}", "    {\"Pins -10 mil\" ChangeDrillSize(SelectedPins,-10,mil)}", "    {\"Pins +10 mil\" ChangeDrillSize(SelectedPins,+10,mil)}", "   }", "   -", "   {\"Change square-flag of selected objects\"", "    {\"Elements\" ChangeSquare(SelectedElements)}", "    {\"Pins\" ChangeSquare(SelectedPins)}", "   }", "  }", "", "#", "# Buffer menu", "#", "  {Buffer", "   {\"Cut selection to buffer\" GetXY(Click to set the snap point for this buffer)", "    PasteBuffer(Clear) PasteBuffer(AddSelected) RemoveSelected() Mode(PasteBuffer)}", "   {\"Paste buffer to layout\" Mode(PasteBuffer)}", "   -", "   {\"Rotate buffer 90 deg CCW\" Mode(PasteBuffer) PasteBuffer(Rotate,1)", "    a={\"Shift-F7\" \"Shift&lt;Key&gt;F7\"}}", "   {\"Rotate buffer 90 deg CW\" Mode(PasteBuffer) PasteBuffer(Rotate,3)}", "   {\"Mirror buffer (up/down)\" Mode(PasteBuffer) PasteBuffer(Mirror)}", "   {\"Mirror buffer (left/right)\" Mode(PasteBuffer) PasteBuffer(Rotate,1)", "    PasteBuffer(Mirror) PasteBuffer(Rotate,3)}", "   -", "   {\"Clear buffer\" PasteBuffer(Clear)}", "   {\"Convert buffer to element\" PasteBuffer(Convert)}", "   {\"Break buffer elements to pieces\" PasteBuffer(Restore)}", "   {\"Save buffer elements to file\" Save(PasteBuffer)}", "   -", "   {\"Select current buffer\" foreground=grey50 sensitive=false}", "   {\"#1\" checked=buffer,1 PasteBuffer(1) a={\"Shift-1\" \"Shift&lt;Key&gt;1\"}}", "   {\"#2\" checked=buffer,2 PasteBuffer(2) a={\"Shift-2\" \"Shift&lt;Key&gt;2\"}}", "   {\"#3\" checked=buffer,3 PasteBuffer(3) a={\"Shift-3\" \"Shift&lt;Key&gt;3\"}}", "   {\"#4\" checked=buffer,4 PasteBuffer(4) a={\"Shift-4\" \"Shift&lt;Key&gt;4\"}}", "   {\"#5\" checked=buffer,5 PasteBuffer(5) a={\"Shift-5\" \"Shift&lt;Key&gt;5\"}}", "  }", "    ", "#", "# Connects menu", "#", "  {Connects ", "   {\"Lookup connection to object\" GetXY(Click on the object) Connection(Find) a={\"Ctrl-F\" \"Ctrl&lt;Key&gt;f\"}}", "   {\"Reset scanned pads/pins/vias\" Connection(ResetPinsViasAndPads) Display(Redraw)}", "   {\"Reset scanned lines/polygons\" Connection(ResetLinesAndPolygons) Display(Redraw)}", "   {\"Reset all connections\" Connection(Reset) Display(Redraw) a={\"Shift-F\" \"Shift&lt;Key&gt;f\"}}", "   -", "   {\"Optimize rats nest\" Atomic(Save) DeleteRats(AllRats)", "    Atomic(Restore) AddRats(AllRats) Atomic(Block) a={\"O\" \"&lt;Key&gt;o\"}}", "   {\"Erase rats nest\" DeleteRats(AllRats) a={\"E\" \"&lt;Key&gt;e\"}}", "   {\"Erase selected rats\" DeleteRats(SelectedRats) a={\"Shift-E\" \"Shift&lt;Key&gt;e\"}}", "   -", "   {\"Auto-route selected rats\" AutoRoute(Selected)}", "   {\"Auto-route all rats\" AutoRoute(AllRats)}", "   {\"Rip up all auto-routed tracks\" RipUp(All)}", "   -", "   {\"Optimize routed tracks\"", "    {\"Auto-Optimize\" djopt(auto)  a={\"Shift-=\" \"Shift&lt;Key&gt;=\"}}", "    {\"Debumpify\" djopt(debumpify) }", "    {\"Unjaggy\" djopt(unjaggy) }", "    {\"Vianudge\" djopt(vianudge) }", "    {\"Viatrim\" djopt(viatrim) }", "    {\"Ortho pull\" djopt(orthopull) }", "    {\"Simple optimization\" djopt(simple)  a={\"=\" \"&lt;Key&gt;=\"}}", "    {\"Miter\" djopt(miter) }", "    {\"Puller\" a={\"Y\" \"&lt;Key&gt;y\"} Puller() }", "    {\"Global Puller\"", "     {\"Selected\" GlobalPuller(selected) }", "     {\"Found\" GlobalPuller(found) }", "     {\"All\" GlobalPuller() }", "    }", "    -", "    {\"Only autorouted nets\" OptAutoOnly() checked=optautoonly}", "   }", "   -", "   {\"Design Rule Checker\" DRC()}", "   -", "   {\"Apply vendor drill mapping\" ApplyVendor()}", "  }", "    ", "#", "# Info Menu", "#", "  {Info", "   {\"Generate object report\" ReportObject() a={\"Ctrl-R\" \"Ctrl&lt;Key&gt;r\"}}", "   {\"Generate drill summary\" Report(DrillReport)}", "   {\"Report found pins/pads\" Report(FoundPins)}", "   {\"Key Bindings\"", "    {\"Remove\" a={\"Delete\" \"&lt;Key&gt;Delete\"}", "     Mode(Save)", "     Mode(Remove)", "     Mode(Notify)", "     Mode(Restore)", "    }", "    {\"Remove Selected\" a={\"Backspace\" \"&lt;Key&gt;BackSpace\"}", "     RemoveSelected()", "    }", "    {\"Remove Connected\" a={\"Shift-Backspace\" \"Shift&lt;Key&gt;BackSpace\"}", "     Atomic(Save)", "     Connection(Reset)", "     Atomic(Restore)", "     Unselect(All)", "     Atomic(Restore)", "     Connection(Find)", "     Atomic(Restore)", "     Select(Connection)", "     Atomic(Restore)", "     RemoveSelected()", "     Atomic(Restore)", "     Connection(Reset)", "     Atomic(Restore)", "     Unselect(All)", "     Atomic(Block)", "    }", "    {\"Remove Connected\"", "     Atomic(Save)", "     Connection(Reset)", "     Atomic(Restore)", "     Unselect(All)", "     Atomic(Restore)", "     Connection(Find)", "     Atomic(Restore)", "     Select(Connection)", "     Atomic(Restore)", "     RemoveSelected()", "     Atomic(Restore)", "     Connection(Reset)", "     Atomic(Restore)", "     Unselect(All)", "     Atomic(Block)", "    }", "    {\"Set Same\" a={\"A\" \"&lt;Key&gt;a\"} SetSame()}", "    {\"Flip Object\" a={\"B\" \"&lt;Key&gt;b\"} Flip(Object)}", "    {\"Find Connections\" a={\"F\" \"&lt;Key&gt;f\"} Connection(Reset) Connection(Find)}", "    {\"ToggleHideName Object\" a={\"H\" \"&lt;Key&gt;h\"} ToggleHideName(Object)}", "    {\"ToggleHideName SelectedElement\" a={\"Shift-H\" \"Shift&lt;Key&gt;h\"} ToggleHideName(SelectedElements)}", "    {\"ChangeHole Object\" a={\"Ctrl-H\" \"Ctrl&lt;Key&gt;h\"} ChangeHole(Object)}", "    {\"ChangeJoin Object\" a={\"J\" \"&lt;Key&gt;j\"} ChangeJoin(Object)}", "    {\"ChangeJoin SelectedObject\" a={\"Shift-J\" \"Shift&lt;Key&gt;j\"} ChangeJoin(SelectedObjects)}", "    {\"Clear Object +2 mil\" a={\"K\" \"&lt;Key&gt;k\"} ChangeClearSize(Object,+2,mil)}", "    {\"Clear Object -2 mil\" a={\"Shift-K\" \"Shift&lt;Key&gt;k\"} ChangeClearSize(Object,-2,mil)}", "    {\"Clear Selected +2 mil\" a={\"Ctrl-K\" \"Ctrl&lt;Key&gt;k\"} ChangeClearSize(SelectedObjects,+2,mil)}", "    {\"Clear Selected -2 mil\" a={\"Shift-Ctrl-K\" \"Shift Ctrl&lt;Key&gt;k\"} ChangeClearSize(SelectedObjects,-2,mil)}", "    {\"Linesize +5 mil\" a={\"L\" \"&lt;Key&gt;l\"} SetValue(LineSize,+5,mil)}", "    {\"Linesize -5 mil\" a={\"Shift-L\" \"Shift&lt;Key&gt;l\"} SetValue(LineSize,-5,mil)}", "    {\"MarkCrosshair\" a={\"Ctrl-M\" \"Ctrl&lt;Key&gt;m\"} MarkCrosshair()}", "    {\"Select shortest rat\" a={\"Shift-N\" \"Shift&lt;Key&gt;n\"} AddRats(Close)}", "    {\"AddRats to selected pins\" a={\"Shift-O\" \"Shift&lt;Key&gt;o\"}", "     Atomic(Save)", "     DeleteRats(AllRats)", "     Atomic(Restore)", "     AddRats(SelectedRats)", "     Atomic(Block) }", "    {\"ChangeOctagon Object\" a={\"Ctrl-O\" \"Ctrl&lt;Key&gt;o\"} ChangeOctagon(Object)}", "    {\"Polygon PreviousPoint\" a={\"P\" \"&lt;Key&gt;p\"} Polygon(PreviousPoint)}", "    {\"Polygon Close\" a={\"Shift-P\" \"Shift&lt;Key&gt;p\"} Polygon(Close)}", "    {\"ChangeSquare Object\" a={\"Q\" \"&lt;Key&gt;q\"} ChangeSquare(ToggleObject)}", "    {\"ChangeSize +5 mil\" a={\"S\" \"&lt;Key&gt;s\"} ChangeSize(Object,+5,mil)}", "    {\"ChangeSize -5 mil\" a={\"Shift-S\" \"Shift&lt;Key&gt;s\"} ChangeSize(Object,-5,mil)}", "    {\"ChangeDrill +5 mil\" a={\"Alt-S\" \"Alt&lt;Key&gt;s\"} ChangeDrillSize(Object,+5,mil)}", "    {\"ChangeDrill -5 mil\" a={\"Alt-Shift-S\" \"Alt Shift&lt;Key&gt;s\"} ChangeDrillSize(Object,-5,mil)}", "    {\"TextScale +10 mil\" a={\"T\" \"&lt;Key&gt;t\"} SetValue(TextScale,+10,mil)}", "    {\"TextScale -10 mil\" a={\"Shift-T\" \"Shift&lt;Key&gt;t\"} SetValue(TextScale,-10,mil)}", "    {\"ViaSize +5 mil\" a={\"Shift-V\" \"Shift&lt;Key&gt;v\"} SetValue(ViaSize,+5,mil)}", "    {\"ViaSize -5 mil\" a={\"Shift-Ctrl-V\" \"Shift Ctrl&lt;Key&gt;v\"} SetValue(ViaSize,-5,mil)}", "    {\"ViaDrill +5 mil\" a={\"Alt-V\" \"Alt&lt;Key&gt;v\"} SetValue(ViaDrillingHole,+5,mil)}", "    {\"ViaDrill -5 mil\" a={\"Alt-Shift-V\" \"Alt Shift&lt;Key&gt;v\"} SetValue(ViaDrillingHole,-5,mil)}", "    {\"AddRats Selected\" a={\"Shift-W\" \"Shift&lt;Key&gt;w\"} AddRats(SelectedRats)}", "    {\"Add All Rats\" a={\"W\" \"&lt;Key&gt;w\"} AddRats(AllRats)}", "    {\"Cycle Clip\" a={\"/\" \"&lt;Key&gt;/\"} Display(CycleClip)}", "    {\"Arrow Mode\" a={\"Space\" \"&lt;Key&gt;space\"} Mode(Arrow) checked=arrowmode,1}", "    {\"Temp Arrow ON\" a={\"[\" \"&lt;Key&gt;[\"} Mode(Save) Mode(Arrow) Mode(Notify)}", "    {\"Temp Arrow OFF\" a={\"]\" \"&lt;Key&gt;]\"} Mode(Release) Mode(Restore)}", "    -", "    {\"Step Up\" a={\"Up\" \"&lt;Key&gt;Up\"} Cursor(Warp,0,1,grid)}", "    {\"Step Down\" a={\"Down\" \"&lt;Key&gt;Down\"} Cursor(Warp,0,-1,grid)}", "    {\"Step Left\" a={\"Left\" \"&lt;Key&gt;Left\"} Cursor(Warp,-1,0,grid)}", "    {\"Step Right\" a={\"Right\" \"&lt;Key&gt;Right\"} Cursor(Warp,1,0,grid)}", "    {\"Step +Up\" a={\"Up\" \"Shift&lt;Key&gt;Up\"} Cursor(Pan,0,50,view)}", "    {\"Step +Down\" a={\"Down\" \"Shift&lt;Key&gt;Down\"} Cursor(Pan,0,-50,view)}", "    {\"Step +Left\" a={\"Left\" \"Shift&lt;Key&gt;Left\"} Cursor(Pan,-50,0,view)}", "    {\"Step +Right\" a={\"Right\" \"Shift&lt;Key&gt;Right\"} Cursor(Pan,50,0,view)}", "    {'\"Click\"' a={\"Enter\" \"&lt;Key&gt;Enter\"} Mode(Notify) Mode(Release)}", "    -", "   }", "  }", "#", "# Window Menu", "#", "  {Window", "   {\"Library\" DoWindows(Library) a={\"i\" \"&lt;Key&gt;i\"}}", "   {\"Message Log\" DoWindows(Log)}", "   {\"DRC Check\" DoWindows(DRC)}", "   {\"Netlist\" DoWindows(Netlist)}", "   {\"Command Entry\" Command() a={\":\" \"&lt;Key&gt;:\"}}", "   {\"Pinout\" Display(Pinout) a={\"Shift-D\" \"Shift&lt;Key&gt;d\"}}", "   -", "   {\"About...\" About()}", "  }", "}", "", "PopupMenus =", "  {", "    Popup1 =", "    {", "      {\"Operations on selections\"", "       {\"Unselect all objects\" Unselect(All)}", "       {\"Remove selected objects\" RemoveSelected()}", "       {\"Copy selection to buffer\" ", "\tGetXY(Click to set the snap point for this buffer) ", "\tPasteBuffer(Clear)", "\tPasteBuffer(AddSelected)", "\tMode(PasteBuffer)", "       }", "       {\"Cut selection to buffer\"", "\tGetXY(Click to set the snap point for this buffer) ", "\tPasteBuffer(Clear)", "\tPasteBuffer(AddSelected)", "\tRemoveSelected()", "\tMode(PasteBuffer)", "       }", "       {\"Convert selection to element\" Select(Convert)}", "       {\"Auto place selected elements\" AutoPlaceSelected()}", "       {\"Autoroute selected elements\" AutoRoute(SelectedRats)}", "       {\"Rip up selected auto routed tracks\" RipUp(Selected)}", "      }", "      {\"Operations on this location\"", "       {\"Generate object report\" GetXY(Click on the object) Report(Object)}", "      }", "      -", "      {\"Undo last operation\" Undo()}", "      {\"Redo last undone operation\" Redo()}", "      -", "      {Tools", "       {\"None\" checked=nomode,1 Mode(None)}", "       {\"Via\" checked=viamode,1 Mode(Via) a={\"F1\" \"&lt;Key&gt;F1\"}}", "       {\"Line\" checked=linemode,1 Mode(Line) a={\"F2\" \"&lt;Key&gt;F2\"}}", "       {\"Arc\" checked=arcmode,1 Mode(Arc) a={\"F3\" \"&lt;Key&gt;F3\"}}", "       {\"Text\" checked=textmode,1 Mode(Text) a={\"F4\" \"&lt;Key&gt;F4\"}}", "       {\"Rectangle\" checked=rectanglemode,1 Mode(Rectangle) a={\"F5\" \"&lt;Key&gt;F5\"}}", "       {\"Polygon\" checked=polygonmode,1 Mode(Polygon) a={\"F6\" \"&lt;Key&gt;F6\"}}", "       {\"Buffer\" checked=pastebuffermode,1 Mode(PasteBuffer) a={\"F7\" \"&lt;Key&gt;F7\"}}", "       {\"Remove\" checked=removemode,1 Mode(Remove) a={\"F8\" \"&lt;Key&gt;F8\"}}", "       {\"Rotate\" checked=rotatemode,1 Mode(Rotate) a={\"F9\" \"&lt;Key&gt;F9\"}}", "       {\"Thermal\" checked=thermalmode,1 Mode(Thermal) a={\"F10\" \"&lt;Key&gt;F10\"}}", "       {\"Arrow\" checked=arrowmode,1 Mode(Arrow)  a={\"F11\" \"&lt;Key&gt;F11\"}}", "       {\"Insert Point\" checked=insertpointmode,1 Mode(InsertPoint) a={\"Insert\" \"&lt;Key&gt;Insert\"}}", "       {\"Move\" checked=movemode,1 Mode(Move)}", "       {\"Copy\" checked=copymode,1 Mode(Copy)}", "       {\"Lock\" checked=lockmode,1 Mode(Lock)}", "       {\"Cancel\" Mode(Escape) a={\"Esc\" \"&lt;Key&gt;Escape\"}}", "      }", "    }", "", "#", "# A dummy popup menu  to help test out the parser and also", "# it will be used to help test the Popup() action when", "# I get around to writing it.", "#", "    Popup2 =", "    {", "      {\"Submenu1\"", "       {\"Choice1a\"}", "       {\"Choice1b\"}", "       {\"Choice1c\"}", "       {\"Choice1d\"}", "      }", "      {\"Submenu2\"", "       {\"Choice2a\"}", "       {\"Choice2b\"}", "      }", "      {\"Choice1\"}", "      {\"Choice2\"}", "    }", "  }", "", 0 };
static char *arc[26] = { "21 21 4 1", "  c black", ". c #4E85b7", "X c gray100", "o c None", "ooooo.ooooooooooooooo", "ooooo.ooooooooooooooo", "ooooo.ooooooooooooooo", "ooooo.ooooooooooooooo", "oooooo.oooooooooooooo", "oooooo.oooooooooooooo", "ooooooo.ooooooooooooo", "ooooooo..oooooooooooo", "oooooooo..ooooooooooo", "oooooooooo..ooooooooo", "oooooooooooo....ooooo", "ooooooooooooooooooooo", "ooo oooo    oooo   oo", "oo o ooo ooo oo ooo o", "oo o ooo ooo oo ooo o", "o ooo oo    ooo ooooo", "o     oo  ooooo ooooo", "o ooo oo o oooo ooooo", "o ooo oo oo ooo ooo o", "o ooo oo ooo ooo   oo", "ooooooooooooooooooooo" };
static char *icon_bits[39] = { "32 32 6 1", "  c black", ". c #53E336", "X c #E34736", "o c #BED7E3", "O c #E7E3E7", "+ c None", "++++++++++++++++++++++++++++++++", "++++++++++++++++++++++++++++++++", "++++++++++++++++++++++++++++++++", "++++++++++++++++++++++++++++++++", "+                              +", "+ o   oo   o   oo   o   oo   o +", "+ o + oo + o + oo + o + oo + o +", "+ o   oo   o   oo   o   oo   o +", "+ oooooooooooooooooooooooooooo +", "+   oooooooooooooooooooooooooo +", "+   oooooooooooooooooooooooooo +", "+   oooooooooooooooooooooooooo +", "+   oooooooooooooooooooooooooo +", "+ oooooooooooooooooooooooooooo +", "+ o   oo   o   oo   o   oo   o +", "+ o + oo + o + oo + o + oo + o +", "+ o   oo . o   oo   o   oo X o +", "+        .                 X   +", "+++++++++.+++++++++++++++++X++++", "+++++++++.+++++++++++++++++X++++", "+++++++++.+++++++++++++++++X++++", "+++++++++.+++++++++++++++++X++++", "++++++++.++++++++++++++++++X++++", "+++++++.++++ +++ ++++++++++X++++", "+++++++.++++ ++  +++++++++XX++++", "++++++ . +++ + o ++++   +XX+++++", "++++++ .      oo      XXXX++++++", "++++++   +++ + o ++++   ++++++++", "++++++++++++ ++  +++++++++++++++", "++++++++++++ +++ +++++++++++++++", "++++++++++++++++++++++++++++++++", "++++++++++++++++++++++++++++++++" };
static char *buf[26] = { "21 21 4 1", "  c black", ". c #D0C7AD", "X c gray100", "o c None", "oooooooo  oo  ooooooo", "oooooo.. o  o ..ooooo", "oooooooo oooo ooooooo", "oooooo.. oooo ..ooooo", "oooooooo oooo ooooooo", "oooooo.. oooo ..ooooo", "oooooooo oooo ooooooo", "oooooo.. oooo ..ooooo", "oooooooo oooo ooooooo", "oooooo.. oooo ..ooooo", "oooooooo      ooooooo", "ooooooooooooooooooooo", "oo     oo ooo o     o", "ooo ooo o ooo o ooooo", "ooo ooo o ooo o ooooo", "ooo ooo o ooo o    oo", "ooo    oo ooo o ooooo", "ooo ooo o ooo o ooooo", "ooo ooo o ooo o ooooo", "oo     ooo   oo ooooo", "ooooooooooooooooooooo" };
static unsigned char rotateIcon_bits[32] = { 240, 3, 248, 135, '', 204, 6, 248, 3, 176, 1, 152, 0, 252, 0, 0, 0, 0, '?', 0, 25, 128, '\r', 192, 31, '`', ';', '0', 225, '?', 192, 15 };
static unsigned char rotateMask_bits[32] = { 240, 3, 248, 135, '', 204, 6, 248, 3, 240, 1, 248, 0, 252, 0, 0, 0, 0, '?', 0, 31, 128, 15, 192, 31, '`', ';', '0', 225, '?', 192, 15 };
static unsigned char handIcon_bits[32] = { 128, 0, 'H', '\t', 'T', 21, 'T', 21, 'T', 21, 'd', 203, 'h', 171, '+', '[', 5, 'X', 5, ' ', 1, ' ', 2, ' ', 2, '0', 4, 16, 8, 8, 240, 15 };
static char *del[25] = { "21 21 3 1", "  c black", ". c gray100", "X c None", "XXX XXXXXXXXXXXX XXXX", "XXXX XXX    XXX XXXXX", "XXXXX X      X XXXXXX", "XXXXXX XX  XX XXXXXXX", "XXXXX  XX  XX  XXXXXX", "XXXXX          XXXXXX", "XXXXXX        XXXXXXX", "XXXXXXX  XX  XXXXXXXX", "XXXXXXX  XX XXXXXXXXX", "XXXXXX X XX  XXXXXXXX", "XXXX  XX    X  XXXXXX", "XX  XXXXX  XXXX  XXXX", "XXXXXXXXXXXXXXXXXXXXX", "XX     XX     X XXXXX", "XXX XXX X XXXXX XXXXX", "XXX XXX X XXXXX XXXXX", "XXX XXX X XXXXX XXXXX", "XXX XXX X    XX XXXXX", "XXX XXX X XXXXX XXXXX", "XXX XXX X XXXXX XXXXX", "XX     XX     X     X" };
static unsigned char handMask_bits[32] = { 128, 0, 200, '\t', 220, 29, 220, 29, 220, 29, 252, 207, '8', 238, 31, 'x', 15, 'x', 7, '0', 7, '0', 14, '8', 30, '<', '<', 30, 248, 15, 240, 15 };
static unsigned char lockIcon_bits[32] = { 0, 0, 224, 7, '0', '', 16, 8, 24, 24, 8, 16, 8, 0, 252, '?', 4, ' ', 252, '?', 4, ' ', 252, '?', 4, ' ', 252, '?', 4, ' ', 252, '?' };
static unsigned char lockMask_bits[32] = { 240, 15, 240, 15, 248, 31, '8', 28, 28, '<', 28, '8', 28, '0', 254, 127, 254, 127, 254, 127, 254, 127, 254, 127, 254, 127, 254, 127, 254, 127, 254, 127 };
static char *ins[26] = { "21 21 4 1", "  c black", ". c #7A8584", "X c gray100", "o c None", "oooooo...oooooooooooo", "ooooo.ooo.ooooooooooo", "ooooo.o.o.ooooooooooo", "oooooo....ooooooooooo", "ooooooooooooooooooooo", "oooo  ooooo  oooooooo", "ooooooooooooooooooooo", "oo...ooooooooooo...oo", "o.oo..ooooooooo.ooo.o", "o.o o...........o o.o", "o.ooo.ooooooooo.ooo.o", "oo...ooooooooooo...oo", "ooooooooooooooooooooo", "ooo   o ooo oo    ooo", "oooo oo ooo o ooooooo", "oooo oo  oo o ooooooo", "oooo oo o o oo   oooo", "oooo oo oo  ooooo ooo", "oooo oo ooo ooooo ooo", "oooo oo ooo ooooo ooo", "ooo   o ooo o    oooo" };
static char *line[27] = { "21 21 5 1", "  c black", ". c #7A8584", "X c #4E85b7", "o c gray100", "O c None", "OOOOOOOOOOOOOOOOOOOOO", "OO...OOOOOOOOOOOOOOOO", "O.OOO.OOOOOOOOOOOOOOO", "O.OXXXOOOOOOOOOOOOOOO", "O.OOO.XXXOOOOOOOOOOOO", "OO...OOOOXXXOOOO...OO", "OOOOOOOOOOOOXXX.OOO.O", "OOOOOOOOOOOOOOOXXXO.O", "OOOOOOOOOOOOOOO.OOO.O", "OOOOOOOOOOOOOOOO...OO", "OOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOO", " OOOO   O OOOO O    O", " OOOOO OO  OOO O OOOO", " OOOOO OO O OO O OOOO", " OOOOO OO O OO O OOOO", " OOOOO OO OO O O   OO", " OOOOO OO OO O O OOOO", " OOOOO OO OOO  O OOOO", "    O   O OOOO O    O", "OOOOOOOOOOOOOOOOOOOOO" };
static gchar *new_ui_info;
static size_t new_ui_info_sz;
static GtkActionEntry *new_entries;
static gint menuitem_cnt;
static char *lock[25] = { "21 21 3 1", "  c black", ". c gray100", "X c None", "XXXXXXXX     XXXXXXXX", "XXXXXXX  XXX  XXXXXXX", "XXXXXXX XXXXX XXXXXXX", "XXXXXX  XXXXX  XXXXXX", "XXXXXX XXXXXXX XXXXXX", "XXXXXX XXXXXXX XXXXXX", "XXXX             XXXX", "XXXX XXXXXXXXXXX XXXX", "XXXX             XXXX", "XXXX XXXXXXXXXXX XXXX", "XXXX             XXXX", "XXXX XXXXXXXXXXX XXXX", "XXXX             XXXX", "XXXXXXXXXXXXXXXXXXXXX", "XX XXXX  XXX  X XX XX", "XX XXX XX X XXX XX XX", "XX XXX XX X XXX X XXX", "XX XXX XX X XXX  XXXX", "XX XXX XX X XXX X XXX", "XX XXX XX X XXX XX XX", "XX   XX  XXX  X XX XX" };
static GtkToggleActionEntry *new_toggle_entries;
static gint tmenuitem_cnt;
static Resource **action_resources;
static Resource **toggle_action_resources;
static GtkToggleActionEntry layerview_toggle_entries[22];
static Resource *layerview_resources[22];
static GtkToggleActionEntry layerpick_toggle_entries[22];
static Resource *layerpick_resources[22];
static GtkToggleActionEntry routestyle_toggle_entries[7];
static Resource *routestyle_resources[7];
static ToggleFlagType *tflags;
static int n_tflags;
static int max_tflags;
GhidGui _ghidgui;
GhidGui *ghidgui;
GHidPort ghid_port;
GHidPort *gport;
static GdkColor WhitePixel;
static GdkColor BlackPixel;
static gchar *bg_image_file;
static char *ghid_hotkey_actions[256];
static RouteStyleButton route_style_button[7];
static gint route_style_index;
static GtkWidget *route_style_edit_button;
static char *poly[26] = { "21 21 4 1", "  c black", ". c #6EA5D7", "X c gray100", "o c None", "ooooooooooo.ooooooooo", "oooooooooo..ooooooooo", "ooooooooo...ooooooooo", "oooooooo....ooooooooo", "ooooooo.....ooooooooo", "oooooo.......oooooooo", "ooooo.........ooooooo", "oooo...........oooooo", "oooo............ooooo", "oooo.............oooo", "oooo..............ooo", "ooooooooooooooooooooo", "o    ooo   oo oo ooo ", "o ooo o ooo o oo ooo ", "o ooo o ooo o ooo o o", "o    oo ooo o oooo oo", "o ooooo ooo o oooo oo", "o ooooo ooo o oooo oo", "o ooooo ooo o oooo oo", "o oooooo   oo    o oo", "ooooooooooooooooooooo" };
static char *rect[26] = { "21 21 4 1", "  c black", ". c #6EA5D7", "X c gray100", "o c None", "ooooooooooooooooooooo", "oo..................o", "oo..................o", "oo..................o", "oo..................o", "oo..................o", "oo..................o", "oo..................o", "oo..................o", "oo..................o", "ooooooooooooooooooooo", "ooooooooooooooooooooo", "o   oo    oo  oo     ", "o oo o oooo oo ooo oo", "o oo o oooo oooooo oo", "o   oo oooo oooooo oo", "o o oo   oo oooooo oo", "o oo o oooo oooooo oo", "o oo o oooo oo ooo oo", "o oo o    oo  oooo oo", "ooooooooooooooooooooo" };
static char *rot[26] = { "21 21 4 1", "  c black", ". c #4E85b7", "X c gray100", "o c None", "ooooooooooo.ooooooooo", "oooooooooo..ooooooooo", "ooooooooo....oooooooo", "oooooooooo..o.ooooooo", "ooooooooooo.oo.oooooo", "oooooooooooooo.oooooo", "oooooooooooooo.oooooo", "oooooooooooooo.oooooo", "oooooooooooooo.oooooo", "ooooooooooooo.ooooooo", "oooooooooooo.oooooooo", "oooooooooo..ooooooooo", "ooooooooooooooooooooo", "ooo    ooo   oo     o", "ooo ooo o ooo ooo ooo", "ooo ooo o ooo ooo ooo", "ooo    oo ooo ooo ooo", "ooo   ooo ooo ooo ooo", "ooo o  oo ooo ooo ooo", "ooo oo  o ooo ooo ooo", "ooo ooo oo   oooo ooo" };
static char *sel[26] = { "21 21 4 1", "  c black", ". c #6EA5D7", "X c gray100", "o c None", "oo .. ooooooooooooooo", "oo .... ooooooooooooo", "ooo ...... oooooooooo", "ooo ........ oooooooo", "ooo ....... ooooooooo", "oooo ..... oooooooooo", "oooo ...... ooooooooo", "ooooo .. ... oooooooo", "ooooo . o ... ooooooo", "oooooooooo ... oooooo", "ooooooooooo .. oooooo", "oooooooooooo  ooooooo", "ooooooooooooooooooooo", "ooo   oo     o oooooo", "oo ooo o ooooo oooooo", "ooo oooo ooooo oooooo", "oooo ooo    oo oooooo", "ooooo oo ooooo oooooo", "oooooo o ooooo oooooo", "oo ooo o ooooo oooooo", "ooo   oo     o     oo" };
static char *text[26] = { "21 21 4 1", "  c black", ". c #4E85b7", "X c gray100", "o c None", "ooooooooooooooooooooo", "ooooooooooooooooooooo", "ooooooooooooooooooooo", "oo.ooo.ooo.ooo.ooo.oo", "o.o.o.o.o.o.o.o.o.o.o", "oo.ooo.ooo.ooo.ooo.oo", "ooooooooooooooooooooo", "ooooooooooooooooooooo", "ooooooooooooooooooooo", "ooooooooooooooooooooo", "ooooooooooooooooooooo", "ooooooooooooooooooooo", "     o   o ooo o     ", "oo ooo ooo ooo ooo oo", "oo ooo oooo o oooo oo", "oo ooo ooooo ooooo oo", "oo ooo  ooo o oooo oo", "oo ooo ooo ooo ooo oo", "oo ooo ooo ooo ooo oo", "oo ooo   o ooo ooo oo", "ooooooooooooooooooooo" };
static gdouble grid_mil_values[11] = { 10.000000000000, 20.000000000000, 50.000000000000, 100.000000000000, 200.000000000000, 500.000000000000, 1000.000000000000, 2000.000000000000, 2500.000000000000, 5000.000000000000, 10000.000000000000 };
static char *thrm[26] = { "21 21 4 1", "  c black", ". c #69E1B0", "X c gray100", "o c None", "ooooooooooooooooooooo", "oooo ooooooooo oooooo", "ooooo ooooooo ooooooo", "oooooo o...o oooooooo", "ooooooo ooo ooooooooo", "oooooo.ooooo.oooooooo", "oooooo.ooooo.oooooooo", "oooooo.ooooo.oooooooo", "ooooooo ooo ooooooooo", "oooooo o...o oooooooo", "ooooo ooooooo ooooooo", "oooo ooooooooo oooooo", "ooooooooooooooooooooo", "     o oo o   oo ooo ", "oo ooo oo o oo o  o  ", "oo ooo oo o oo o o o ", "oo ooo oo o   oo o o ", "oo ooo    o o oo ooo ", "oo ooo oo o oo o ooo ", "oo ooo oo o oo o ooo ", "oo ooo oo o oo o ooo " };
static gdouble grid_mm_values[11] = { 7.874015748031, 19.685039370079, 39.370078740157, 78.740157480315, 196.850393700787, 393.700787401575, 787.401574803150, 984.251968503937, 1968.503937007874, 3937.007874015748, 7874.015748031497 };
static char *via[26] = { "21 21 4 1", "  c black", ". c #7A8584", "X c gray100", "o c None", "ooooooooooooooooooooo", "ooooooooo...ooooooooo", "oooooooo.....oooooooo", "ooooooo..ooo..ooooooo", "oooooo..ooooo..oooooo", "oooooo..ooooo..oooooo", "oooooo..ooooo..oooooo", "ooooooo..ooo..ooooooo", "oooooooo.....oooooooo", "ooooooooo...ooooooooo", "ooooooooooooooooooooo", "ooooooooooooooooooooo", "ooooooooooooooooooooo", "ooo ooo o   ooo ooooo", "ooo ooo oo ooo o oooo", "ooo ooo oo oo ooo ooo", "oooo o ooo oo ooo ooo", "oooo o ooo oo     ooo", "oooo o ooo oo ooo ooo", "ooooo ooo   o ooo ooo", "ooooooooooooooooooooo" };
static GtkRadioActionEntry radio_grid_mil_setting_entries[12] = { { "grid-user", 0, "user value", 0, 0, 0 }
, { "grid0", 0, "0.1 mil", 0, 0, 0 }
, { "grid1", 0, "0.2 mil", 0, 0, 1 }
, { "grid2", 0, "0.5 mil", 0, 0, 2 }
, { "grid3", 0, "1 mil", 0, 0, 3 }
, { "grid4", 0, "2 mil", 0, 0, 4 }
, { "grid5", 0, "5 mil", 0, 0, 5 }
, { "grid6", 0, "10 mil", 0, 0, 6 }
, { "grid7", 0, "20 mil", 0, 0, 7 }
, { "grid8", 0, "25 mil", 0, 0, 8 }
, { "grid9", 0, "50 mil", 0, 0, 9 }
, { "grid10", 0, "100 mil", 0, 0, 10 }
 };
static GtkRadioActionEntry radio_grid_mm_setting_entries[12] = { { "grid-user", 0, "user value", 0, 0, 0 }
, { "grid0", 0, "0.002 mm", 0, 0, 0 }
, { "grid1", 0, "0.005 mm", 0, 0, 1 }
, { "grid2", 0, "0.01 mm", 0, 0, 2 }
, { "grid3", 0, "0.02 mm", 0, 0, 3 }
, { "grid4", 0, "0.05 mm", 0, 0, 4 }
, { "grid5", 0, "0.1 mm", 0, 0, 5 }
, { "grid6", 0, "0.2 mm", 0, 0, 6 }
, { "grid7", 0, "0.25 mm", 0, 0, 7 }
, { "grid8", 0, "0.5 mm", 0, 0, 8 }
, { "grid9", 0, "1 mm", 0, 0, 9 }
, { "grid10", 0, "2 mm", 0, 0, 10 }
 };
static void *T/*.529*/ = 0;
static LayerButtonSet layer_buttons[22];
static gint layer_select_button_index;
static gboolean layer_enable_button_cb_hold_off;
static gboolean layer_select_button_cb_hold_off;
static ModeButton mode_buttons[13] = { { 0, 0, 0, "via", 1, &via }
, { 0, 0, 0, "line", 2, &line }
, { 0, 0, 0, "arc", 109, &arc }
, { 0, 0, 0, "text", 6, &text }
, { 0, 0, 0, "rectangle", 3, &rect }
, { 0, 0, 0, "polygon", 4, &poly }
, { 0, 0, 0, "buffer", 5, &buf }
, { 0, 0, 0, "remove", 103, &del }
, { 0, 0, 0, "rotate", 102, &rot }
, { 0, 0, 0, "insertPoint", 106, &ins }
, { 0, 0, 0, "thermal", 108, &thrm }
, { 0, 0, 0, "select", 110, &sel }
, { 0, 0, 0, "lock", 111, &lock }
 };
static GtkWidget *ghid_left_sensitive_box;
static gulong button_press_handler;
static gulong button_release_handler;
static gulong key_press_handler;
static gulong key_release_handler;
static int stdin_listen;
HID_Attribute ghid_attribute_list[2] = { { "listen", "Listen for actions on stdin", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, &stdin_listen, 0 }
, { "bg-image", "Background Image", 3, 0, 0, { 0, 0, 0.000000000000 }
, 0, &bg_image_file, 0 }
 };
static char toggleview_syntax[92] = { 'T', 'o', 'g', 'g', 'l', 'e', 'V', 'i', 'e', 'w', '(', '1', '.', '.', 'M', 'A', 'X', 'L', 'A', 'Y', 'E', 'R', ')', '\n', 'T', 'o', 'g', 'g', 'l', 'e', 'V', 'i', 'e', 'w', '(', 'l', 'a', 'y', 'e', 'r', 'n', 'a', 'm', 'e', ')', '\n', 'T', 'o', 'g', 'g', 'l', 'e', 'V', 'i', 'e', 'w', '(', 'S', 'i', 'l', 'k', '|', 'R', 'a', 't', 's', '|', 'P', 'i', 'n', 's', '|', 'V', 'i', 'a', 's', '|', 'M', 'a', 's', 'k', '|', 'B', 'a', 'c', 'k', 'S', 'i', 'd', 'e', ')' };
static char toggleview_help[61] = { 'T', 'o', 'g', 'g', 'l', 'e', ' ', 't', 'h', 'e', ' ', 'v', 'i', 's', 'i', 'b', 'i', 'l', 'i', 't', 'y', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'd', ' ', 'l', 'a', 'y', 'e', 'r', ' ', 'o', 'r', ' ', 'l', 'a', 'y', 'e', 'r', ' ', 'g', 'r', 'o', 'u', 'p', '.' };
static char selectlayer_syntax[35] = { 'S', 'e', 'l', 'e', 'c', 't', 'L', 'a', 'y', 'e', 'r', '(', '1', '.', '.', 'M', 'A', 'X', 'L', 'A', 'Y', 'E', 'R', '|', 'S', 'i', 'l', 'k', '|', 'R', 'a', 't', 's', ')' };
static char selectlayer_help[41] = { 'S', 'e', 'l', 'e', 'c', 't', ' ', 'w', 'h', 'i', 'c', 'h', ' ', 'l', 'a', 'y', 'e', 'r', ' ', 'i', 's', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'l', 'a', 'y', 'e', 'r', '.' };
HID_Action gtk_topwindow_action_list[3] = { { "LayersChanged", 0, &LayersChanged, &layerschanged_help, &layerschanged_syntax }
, { "SelectLayer", 0, &SelectLayer, &selectlayer_help, &selectlayer_syntax }
, { "ToggleView", 0, &ToggleView, &toggleview_help, &toggleview_syntax }
 };
static char *pcbmenu_path = "gpcb-menu.res";
static HID_Attribute pcbmenu_attr[1] = { { "pcb-menu", "Location of gpcb-menu.res file", 3, 0, 0, { 0, "/usr/share/pcb/gpcb-menu.res", 0.000000000000 }
, 0, &pcbmenu_path, 0 }
 };
static void *T/*.528*/ = 0;
static KeyTable key_table[7] = { { ':', 0 }
, { '=', 0 }
, { '/', 0 }
, { '[', 0 }
, { ']', 0 }
, { '.', 0 }
, { '|', 0 }
 };
static void *T/*.526*/ = 0;
static char adjuststyle_syntax[15] = { 'A', 'd', 'j', 'u', 's', 't', 'S', 't', 'y', 'l', 'e', '(', ')', '\n' };
static char adjuststyle_help[57] = { 'O', 'p', 'e', 'n', ' ', 't', 'h', 'e', ' ', 'w', 'i', 'n', 'd', 'o', 'w', ' ', 'w', 'h', 'i', 'c', 'h', ' ', 'a', 'l', 'l', 'o', 'w', 's', ' ', 'e', 'd', 'i', 't', 'i', 'n', 'g', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'r', 'o', 'u', 't', 'e', ' ', 's', 't', 'y', 'l', 'e', 's' };
static char editlayergroups_syntax[19] = { 'E', 'd', 'i', 't', 'L', 'a', 'y', 'e', 'r', 'G', 'r', 'o', 'u', 'p', 's', '(', ')', '\n' };
static char editlayergroups_help[69] = { 'O', 'p', 'e', 'n', ' ', 't', 'h', 'e', ' ', 'p', 'r', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'e', 's', ' ', 'w', 'i', 'n', 'd', 'o', 'w', ' ', 'w', 'h', 'i', 'c', 'h', ' ', 'a', 'l', 'l', 'o', 'w', 's', ' ', 'e', 'd', 'i', 't', 'i', 'n', 'g', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'l', 'a', 'y', 'e', 'r', ' ', 'g', 'r', 'o', 'u', 'p', 's' };
HID_Action ghid_menu_action_list[2] = { { "AdjustStyle", 0, &AdjustStyle, &adjuststyle_help, &adjuststyle_syntax }
, { "EditLayerGroups", 0, &EditLayerGroups, &editlayergroups_help, &editlayergroups_syntax }
 };
char *ghid_check_unique_accel( char *accelerator )
{
  int edx;
  static int n_list;
  static char **accel_list;
  static int amax;
  int i;
  char *a;
  if ( accelerator && accelerator[0] )
  {
    if ( amax < n_list )
    {
    }
    else
    {
      n_list += 128;
      accel_list = realloc( accel_list, ( n_list + 128 ) * sizeof( char* ) );
      if ( accel_list == 0 )
      {
        __fprintf_chk( stderr, 1, "%s():  realloc failed\n", __FUNCTION__ );
        exit( 1 );
      }
    }
    i = 0;
    if ( amax <= 0 )
      a[0] = accelerator;
    else
    {
      do
      {
        if ( eax == 0 )
        {
          *(int*)&a[0] = 0;
          Message( "Duplicate accelerator found: \"%s\"\nThe second occurance will be dropped\n", accelerator );
        }
        else
        {
          i++;
        }
      }
      while ( amax <= i + 1 );
      a[0] = accelerator;
    }
    accelerator = a;
    amax++;
  }
  return accelerator;
}
void note_toggle_flag( char *actionname, MenuFlagType type, char *name )
{
  int ebx;
  int esi;
  int edi;
  if ( n_tflags < max_tflags )
  {
  }
  else
  {
    max_tflags += 20;
    tflags = (ToggleFlagType*)MyRealloc( (void*)tflags, ( max_tflags + 20 ) * 20, __FUNCTION__ );
  }
  tflags->actionname[0] = __strdup( actionname );
  tflags[ n_tflags ].oldval = -1;
  tflags[ n_tflags ].flagname = name;
  tflags[ n_tflags ].flagtype = type;
  tflags[ n_tflags ].xres = "none";
  n_tflags++;
  return;
}
void ghid_update_toggle_flags( void )
{
  int i;
  GtkAction *a;
  gboolean old_holdoff;
  gboolean active;
  char tmpnm[40];
  GValue setfalse;
  GValue settrue;
  GValue setlabel;
  setfalse.g_type = 0;
  *(int*)(ebp_2147483632 + -80) = 0;
  *(int*)(ebp_2147483632 + -72) = 0;
  settrue.g_type = 0;
  *(int*)(ebp_2147483632 + -100) = 0;
  *(int*)(ebp_2147483632 + -92) = 0;
  setlabel.g_type = 0;
  *(int*)(ebp_2147483632 + -120) = 0;
  *(int*)(ebp_2147483632 + -112) = 0;
  g_value_init( &setfalse, 20 );
  g_value_init( &settrue, 20 );
  g_value_set_boolean( &setfalse, 0 );
  g_value_set_boolean( &settrue, 1 );
  g_value_init( &setlabel, 64 );
  old_holdoff = ghidgui->toggle_holdoff = 1;
  if ( n_tflags > 0 )
  {
    i = 0;
    do
    {
      if ( tflags[1].flagtype == 0 )
      {
        int v = hid_get_flag( &tflags[1].flagname );
        g_object_set_property( (GObject*)g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, *(int*)(tflags + 0) ), 80 ), "sensitive", v != 0 ? &setfalse : &settrue );
        tflags->oldval = v;
      }
      else
      if ( tflags[1].flagtype != 1 )
      {
        __printf_chk( 1, "Skipping flagtype %d\n", tflags[1].flagtype );
        i++;
      }
      else
      {
        int v = hid_get_flag( &tflags[1].flagname );
        gtk_toggle_action_set_active( g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, &tflags[1].actionname ), gtk_toggle_action_get_type( ) ), v != 0 );
        tflags[1].oldval = v;
      }
      i++;
      if ( i + 1 < n_tflags )
        continue;
      else
        break;
    }
    while ( i < n_tflags );
  }
  else
  {
  }
  i = 0;
  __sprintf_chk( tmpnm, 1, 40, "%s%d", "RouteStyle", 0 );
  a = gtk_action_group_get_action( &ghidgui->main_actions, tmpnm );
  while ( 1 )
  {
    gtk_toggle_action_set_active( eax, ebp_152 );
    if ( i != 7 )
    {
      __sprintf_chk( tmpnm, 1, 40, "%s%d", "RouteStyle", i );
      a = gtk_action_group_get_action( &ghidgui->main_actions, tmpnm );
      if ( i > 3 )
      {
        g_object_set_property( (GObject*)g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, tmpnm ), 80 ), "visible", &setfalse );
      }
    }
    else
    {
      g_value_unset( &setfalse );
      g_value_unset( &settrue );
      g_value_unset( &setlabel );
      ghidgui->toggle_holdoff = old_holdoff;
      if ( 0 ^ 0 )
      {
        __stack_chk_fail( );
      }
      break;
    }
  }
}
void h_adjustment_changed_cb( GtkAdjustment *adj, GhidGui *g )
{
  int edx;
  double fp0;
  double fp1;
  /* phantom */ gdouble xval;
  /* phantom */ gdouble yval;
  if ( g->adjustment_changed_holdoff == 0 )
  {
    gtk_adjustment_get_value( adj );
    gtk_adjustment_get_value( (GtkAdjustment*)g_type_check_instance_cast( &ghidgui->v_adjustment->parent_instance.g_type_instance, gtk_adjustment_get_type( ) ) );
  }
  return;
}
void v_adjustment_changed_cb( GtkAdjustment *adj, GhidGui *g )
{
  int edx;
  double fp0;
  double fp1;
  /* phantom */ gdouble xval;
  /* phantom */ gdouble yval;
  if ( g->adjustment_changed_holdoff == 0 )
  {
    gtk_adjustment_get_value( adj );
    gtk_adjustment_get_value( (GtkAdjustment*)g_type_check_instance_cast( &ghidgui->h_adjustment->parent_instance.g_type_instance, gtk_adjustment_get_type( ) ) );
  }
  return;
}
gint top_window_configure_event_cb( GtkWidget *widget, GdkEventConfigure *ev, GHidPort *port )
{
  int eax;
  int esi;
  gboolean new_w = widget->allocation.width != *(int*)(ghidgui + 184);
  /* phantom */ gboolean new_h;
  ghidgui->top_window_width = widget->allocation.width;
  ghidgui->top_window_height = widget->allocation.height;
  if ( ( ( widget->allocation.height != *(int*)(ghidgui + 188) ) & 1 ) || new_w )
  {
    ghidgui->config_modified = 1;
  }
  return 0;
}
void ghid_menu_cb( GtkAction *action, gpointer data )
{
  int eax;
  static int in_cb;
  gchar *name;
  int id;
  int vi;
  Resource *node;
  /* phantom */ gboolean old_holdoff;
  if ( in_cb == 0 )
  {
    name[0] = data;
    in_cb = 1;
    if ( action )
      gtk_action_get_name( action );
    if ( name )
    {
      strcmp( "MenuItem", name );
      if ( !1 )
      {
        strcmp( "TMenuItem", name );
        if ( !1 )
        {
          strcmp( "LayerPick", name );
          if ( !1 )
          {
            strcmp( "LayerView", name );
            if ( !1 )
            {
              strcmp( "RouteStyle", name );
              if ( !1 )
              {
                __fprintf_chk( stderr, 1, "ERROR:  ghid_menu_cb():  name = \"%s\" is unknown\n", name );
                ghidgui->toggle_holdoff = 1;
                ghid_update_toggle_flags( );
                name[0] = ghidgui;
                ghidgui->toggle_holdoff = 1;
                in_cb = 0;
                if ( name + 128 == 0 )
                {
                  HideCrosshair( 1 );
                  AdjustAttachedObjects( );
                  ghid_invalidate_all( );
                  RestoreCrosshair( 1 );
                  ghid_screen_update( );
                }
                return;
              }
              else
              {
                name[0] = name + 10;
                strtol( name + 10, 0, 10 );
                if ( ghidgui->toggle_holdoff != 1 )
                {
                  ghid_route_style_button_set_active( name );
                }
              }
            }
            else
            {
              name[0] = name + 9;
              strtol( name + 9, 0, 10 );
              if ( ghidgui->toggle_holdoff != 1 )
                node = layerview_resources[ name ];
            }
          }
          else
          {
            name[0] = name + 9;
            strtol( name + 9, 0, 10 );
            if ( ghidgui->toggle_holdoff != 1 )
              node = layerpick_resources[ name ];
          }
        }
        else
        {
          name[0] = name + 9;
          strtol( name + 9, 0, 10 );
          if ( ghidgui->toggle_holdoff != 1 )
            node = toggle_action_resources[ name ];
        }
      }
      else
      {
        name[0] = name + 8;
        node = action_resources[ name ];
      }
      if ( node == 0 || node->c <= 1 )
        goto B34;
      else
      {
        do
        {
          name[0] = ( ~( 0 - ( ( *(int*)(node->v + 12 + 12) < 1 ) & 1 ) ) & 100 ) + ( *(int*)(node->v + 12 + 12 + 8) != 0 ) + ( ~( 0 - ( ( *(int*)(node->v + 12 + 12 + 4) < 1 ) & 1 ) ) & 10 );
          if ( ( ~( 0 - ( ( *(int*)(node->v + 12) < 1 ) & 1 ) ) & 100 ) + ( *(int*)(node->v + 12 + 8) != 0 ) + ( ~( 0 - ( ( *(int*)(node->v + 12 + 4) < 1 ) & 1 ) ) & 10 ) == 10 )
          {
            name[0] = node->v[2].value;
            hid_parse_actions( &node->v[2].value, 0 );
            vi++;
            if ( node->c <= vi )
            {
              break;
            }
          }
          else
          {
            vi++;
          }
        }
        while ( vi + 1 < node->c );
      }
B34:;
    }
    else
    {
      __fprintf_chk( stderr, 1, "%s(%p, %p):  name == NULL\n", __FUNCTION__, action, data );
      in_cb = 0;
      return;
    }
  }
  else
  {
    return;
  }
}
void ghid_hotkey_cb( int which )
{
  if ( ghid_hotkey_actions[ which ] )
  {
    ghid_menu_cb( 0, ghid_hotkey_actions[ which ] );
  }
  return;
}
void radio_grid_mil_setting_cb( GtkAction *action, GtkRadioAction *current )
{
  /* phantom */ gdouble value;
  /* phantom */ gchar *grid;
  gint index;
  __printf_chk( 1, "radio_grid_mil_setting_cb()\n" );
  if ( ghidgui->toggle_holdoff == 0 )
  {
    hid_actionl( "SetValue", "Grid", g_strdup_printf( "%f", grid_mil_values[ index ] ), (long long)( "" ) );
    g_free( g_strdup_printf( "%f", grid_mil_values[ index ] ) );
  }
  return;
}
void radio_grid_mm_setting_cb( GtkAction *action, GtkRadioAction *current )
{
  /* phantom */ gdouble value;
  /* phantom */ gchar *grid;
  gint index;
  __printf_chk( 1, "radio_grid_mm_setting_cb()\n" );
  if ( ghidgui->toggle_holdoff == 0 )
  {
    hid_actionl( "SetValue", "Grid", g_strdup_printf( "%f", grid_mm_values[ index ] ), (long long)( "" ) );
    g_free( g_strdup_printf( "%f", grid_mm_values[ index ] ) );
  }
  return;
}
void ghid_grid_setting_update_menu_actions( void )
{
  int edx;
  double fp5;
  double fp6;
  double fp7;
  GtkAction *action;
  gint i;
  if ( ghidgui->grid_actions )
  {
    gtk_ui_manager_remove_action_group( &ghidgui->ui_manager->parent.g_type_instance.g_class->g_type, &ghidgui->grid_actions );
    g_object_unref( &ghidgui->grid_actions );
  }
  ghidgui->grid_actions = gtk_action_group_new( "GridActions" );
  gtk_action_group_set_translation_domain( &ghidgui->grid_actions, 0 );
  gtk_ui_manager_insert_action_group( &ghidgui->ui_manager->parent.g_type_instance.g_class->g_type, &ghidgui->grid_actions, 0 );
  i = 0;
  do
  {
    if ( Settings.grid_units_mm & 255 )
      gtk_action_group_add_radio_actions( &ghidgui->grid_actions, radio_grid_mm_setting_entries[0].name, 12, i, &radio_grid_mm_setting_cb, 0 );
    else
      gtk_action_group_add_radio_actions( &ghidgui->grid_actions, radio_grid_mil_setting_entries[0].name, 12, i, &radio_grid_mil_setting_cb, 0 );
    if ( action == 0 )
      break;
    g_object_set( &action, "sensitive", (long long)0 );
    break;
  }
  while ( i + 1 == 11 );
  i = -1;
}
void ghid_set_menu_toggle_button( GtkActionGroup *ag, gchar *name, gboolean state )
{
  GtkAction *action;
  gboolean old_holdoff = ghidgui->toggle_holdoff;
  ghidgui->toggle_holdoff = 1;
  if ( gtk_action_group_get_action( ag, name ) )
  {
    gtk_toggle_action_set_active( g_type_check_instance_cast( &action[0].object.g_type_instance, gtk_toggle_action_get_type( ) ), state );
  }
  ghidgui->toggle_holdoff = old_holdoff;
  return;
}
void ghid_sync_with_new_layout( void )
{
  /* phantom */ gboolean old_holdoff;
  pcb_use_route_style( &PCB->RouteStyle );
  ghid_route_style_button_set_active( 0 );
  ghid_config_handle_units_changed( );
}
void ghid_init_toggle_states( void )
{
  GtkAction *action;
  gboolean old_holdoff = ghidgui->toggle_holdoff;
  ghidgui->toggle_holdoff = 1;
  gtk_toggle_action_set_active( g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, "ToggleDrawGrid" ), gtk_toggle_action_get_type( ) ), Settings.DrawGrid );
  gtk_toggle_action_set_active( g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, "ToggleGridUnitsMm" ), gtk_toggle_action_get_type( ) ), Settings.grid_units_mm );
  gtk_toggle_action_set_active( g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, "TogglePinoutShowsNumber" ), gtk_toggle_action_get_type( ) ), Settings.ShowNumber );
  gtk_toggle_action_set_active( g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, "Toggle45degree" ), gtk_toggle_action_get_type( ) ), Settings.AllDirectionLines );
  gtk_toggle_action_set_active( g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, "ToggleRubberBand" ), gtk_toggle_action_get_type( ) ), Settings.RubberBandMode );
  gtk_toggle_action_set_active( g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, "ToggleStartDirection" ), gtk_toggle_action_get_type( ) ), Settings.SwapStartDirection );
  gtk_toggle_action_set_active( g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, "ToggleUniqueNames" ), gtk_toggle_action_get_type( ) ), Settings.UniqueNames );
  gtk_toggle_action_set_active( g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, "ToggleSnapPin" ), gtk_toggle_action_get_type( ) ), Settings.SnapPin );
  gtk_toggle_action_set_active( g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, "ToggleClearLine" ), gtk_toggle_action_get_type( ) ), Settings.ClearLine );
  gtk_toggle_action_set_active( g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, "ToggleOrthogonalMoves" ), gtk_toggle_action_get_type( ) ), Settings.OrthogonalMoves );
  gtk_toggle_action_set_active( g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, "ToggleLiveRoute" ), gtk_toggle_action_get_type( ) ), Settings.liveRouting );
  gtk_toggle_action_set_active( g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, "ToggleShowDRC" ), gtk_toggle_action_get_type( ) ), Settings.ShowDRC );
  gtk_toggle_action_set_active( g_type_check_instance_cast( (GTypeInstance*)gtk_action_group_get_action( &ghidgui->main_actions, "ToggleAutoDrC" ), gtk_toggle_action_get_type( ) ), Settings.AutoDRC );
  ghidgui->toggle_holdoff = old_holdoff;
}
void layer_process( gchar **color_string, char **text, int *set, int i )
{
  int eax;
  int ebx;
  int esi;
  int tmp;
  char *tmps;
  gchar *tmpc;
  color_string[0] = color_string == 0 ? &color_string : tmpc;
  text[0] = text[0] == 0 ? text[0] : tmps;
  set[0] = set[0] == 0 ? set[0] : tmp;
  switch ( i + -16 )
  {
  case 0:
    color_string[0] = &PCB->ElementColor;
    text[0] = dcgettext( "pcb", "silk", 5 );
    set[0] = PCB->ElementOn;
    break;
  case 1:
    color_string[0] = &PCB->RatColor;
    text[0] = dcgettext( "pcb", "rat lines", 5 );
    set[0] = PCB->RatOn;
    break;
  case 2:
    color_string[0] = &PCB->PinColor;
    text[0] = dcgettext( "pcb", "pins/pads", 5 );
    set[0] = PCB->PinOn;
    break;
  case 3:
    color_string[0] = &PCB->ViaColor;
    text[0] = dcgettext( "pcb", "vias", 5 );
    set[0] = PCB->ViaOn;
    break;
  case 4:
    color_string[0] = &PCB->InvisibleObjectsColor;
    text[0] = dcgettext( "pcb", "far side", 5 );
    set[0] = PCB->InvisibleObjectsOn;
    break;
  case 5:
    color_string[0] = &PCB->MaskColor;
    text[0] = dcgettext( "pcb", "solder mask", 5 );
    set[0] = ( PCB->Flags.f >> 13 ) & 1;
    break;
  default:
    text[0] = PCB->Data->Layer[ i ].Name == 0 || PCB->Data->Layer[ i ].Name[0] == 0 ? &PCB->Data->Layer[ i ].Name : "(unknown)";
    set[0] = PCB->Data->Layer->On;
    set[0] = set;
    break;
  }
  return;
}
void ghid_window_set_name_label( gchar *name )
{
  int eax;
  int edx;
  gchar *str;
  if ( ghidgui )
  {
    dup_string( ghidgui + 120, name );
    if ( ghidgui->name_label_string == 0 || ghidgui->name_label_string[0] == 0 )
    {
      ghidgui->name_label_string = g_strdup( dcgettext( "pcb", "Unnamed", 5 ) );
    }
    if ( *(int*)(ebx + 20) == 0 )
    {
      return;
    }
    if ( *(int*)(ebx + 164) )
    {
      gtk_widget_hide( &ghidgui->label_hbox );
      str[0] = g_strdup_printf( "PCB:  %s", ghidgui->name_label_string );
      gtk_window_set_title( (GtkWindow*)g_type_check_instance_cast( &gport->top_window->object.parent_instance.g_type_instance.g_class->g_type, gtk_window_get_type( ) ), str );
      name = str;
    }
    gtk_widget_show( *(int*)(ebx + 72) );
    str[0] = g_strdup_printf( " &lt;b&gt;&lt;big&gt;%s&lt;/big&gt;&lt;/b&gt; ", ghidgui->name_label_string );
    gtk_label_set_markup( g_type_check_instance_cast( &ghidgui->name_label->object.parent_instance.g_type_instance, gtk_label_get_type( ) ), str );
    gtk_window_set_title( (GtkWindow*)g_type_check_instance_cast( &gport->top_window->object.parent_instance.g_type_instance.g_class->g_type, gtk_window_get_type( ) ), "PCB" );
    name = str;
  }
  return;
}
void grid_units_button_cb( GtkWidget *widget, gpointer data )
{
  int edx;
  double fp5;
  double fp6;
  double fp7;
  while ( 1 )
  {
    Settings.grid_units_mm = ( Settings.grid_units_mm & 255 ) == 0;
    PCB->Grid = ( ( Settings.grid_units_mm & 255 ) == 0 ) & 255 ? grid_mm_values[ 0 + 1 ] : grid_mil_values[ 0 + 1 ];
    ghid_grid_setting_update_menu_actions( );
    hid_actionl( "SetValue", "Grid", g_strdup_printf( "%f", PCB->Grid ), (long long)( "" ) );
    g_free( g_strdup_printf( "%f", PCB->Grid ) );
    ghid_config_handle_units_changed( );
  }
}
void absolute_label_size_req_cb( GtkWidget *widget, GtkRequisition *req, gpointer data )
{
  static gint w;
  if ( w < req->width )
  {
    w = req->width;
    return;
  }
  req = &w;
  return;
}
void relative_label_size_req_cb( GtkWidget *widget, GtkRequisition *req, gpointer data )
{
  static gint w;
  if ( w < req->width )
  {
    w = req->width;
    return;
  }
  req = &w;
  return;
}
void layer_select_button_cb( GtkWidget *widget, LayerButtonSet *lb )
{
  int eax;
  static gboolean in_cb;
  gboolean active;
  if ( active && layer_select_button_cb_hold_off == 0 && in_cb == 0 )
  {
    in_cb = 1;
    PCB->SilkActive = lb->index == 16;
    PCB->RatDraw = lb->index == 17;
    if ( lb->index < PCB->Data->LayerN )
    {
      ChangeGroupVisibility( lb->index, 1, 1 );
    }
    layer_select_button_index = lb->index;
    layer_select_button_cb_hold_off = 1;
    layer_enable_button_cb_hold_off = 1;
    ghid_layer_buttons_update( );
    layer_select_button_cb_hold_off = 0;
    layer_enable_button_cb_hold_off = 0;
    ghid_invalidate_all( );
    in_cb = 0;
  }
  return;
}
void layer_enable_button_cb( GtkWidget *widget, gpointer data )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  /* phantom */ LayerButtonSet *lb;
  gint i;
  gint group;
  /* phantom */ gint layer;
  gboolean active = gtk_toggle_button_get_active( (GtkToggleButton*)g_type_check_instance_cast( &widget->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ) );
  gboolean redraw;
  if ( layer_enable_button_cb_hold_off == 0 )
  {
    switch ( data + -16 )
    {
    case 0:
      PCB->ElementOn = active/*.1_1of4*/;
      PCB->Data->Layer[ PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ].On = active/*.1_1of4*/;
      PCB->Data->Layer[ PCB->Data->LayerN + ( Settings.ShowSolderSide != 0 ) ].On = active/*.1_1of4*/;
      break;
    case 1:
      PCB->RatOn = active/*.1_1of4*/;
      break;
    case 2:
      redraw = 0;
      PCB->PinOn = active/*.1_1of4*/;
      redraw/*.1_1of4*/ = PCB->Data->ElementN != 0;
      layer_select_button_cb_hold_off = 1;
      layer_enable_button_cb_hold_off = 1;
      ghid_layer_buttons_update( );
      layer_select_button_cb_hold_off = 0;
      layer_enable_button_cb_hold_off = 0;
      if ( redraw )
      {
      }
      return;
      break;
    case 3:
      redraw = 0;
      PCB->ViaOn = active/*.1_1of4*/;
      redraw/*.1_1of4*/ = PCB->Data->ViaN != 0;
      layer_select_button_cb_hold_off = 1;
      layer_enable_button_cb_hold_off = 1;
      ghid_layer_buttons_update( );
      layer_select_button_cb_hold_off = 0;
      layer_enable_button_cb_hold_off = 0;
      break;
    case 4:
      PCB->InvisibleObjectsOn = active/*.1_1of4*/;
      if ( active )
      {
      }
      PCB->Data->Layer->On = *(char*)(data + -16 + 35) != 0;
      break;
    case 5:
      if ( active )
        PCB->Flags.f |= 8192;
      else
        PCB->Flags.f &= -8193;
      break;
    default:
      group = GetGroupOfLayer( data );
      if ( group == GetGroupOfLayer( ( PCB->SilkActive == 0 ? LayerStack[0] : ( Settings.ShowSolderSide == 0 ) + PCB->Data->LayerN ) < PCB->Data->LayerN ? PCB->Data->LayerN : PCB->SilkActive == 0 ? LayerStack[0] : ( Settings.ShowSolderSide == 0 ) + PCB->Data->LayerN ) )
      {
        i = __MOD(( data + 1 ),( PCB->Data->LayerN + 1 ));
        if ( data != __MOD(( data + 1 ),( PCB->Data->LayerN + 1 )) )
        {
          ecx = PCB->Data;
          do
          {
            if ( active/*.1_1of4*/ == 1 )
            {
              if ( group != GetGroupOfLayer( i ) )
              {
                active = active;
                ChangeGroupVisibility( i, 1, 1 );
              }
              else
              {
              }
            }
            i = __MOD(( i + 1 ),( PCB->Data->LayerN + 1 ));
          }
          while ( data != __MOD(( i + 1 ),( PCB->Data->LayerN + 1 )) );
          widget = widget;
        }
        data = 1;
        widget = &eax[0].g_class[0].g_type;
      }
      ChangeGroupVisibility( data, ecx, 0 );
      break;
    }
    layer_select_button_cb_hold_off = 1;
    layer_enable_button_cb_hold_off = 1;
    ghid_layer_buttons_update( );
    layer_select_button_cb_hold_off = 0;
    layer_enable_button_cb_hold_off = 0;
  }
  else
  {
    return;
  }
}
void layer_button_set_color( LayerButtonSet *lb, gchar *color_string )
{
  GdkColor color;
  if ( lb->layer_enable_ebox )
  {
    color.blue = 0;
    color.green = 0;
    color.red = 0;
    ghid_map_color_string( color_string, &color );
    gtk_widget_modify_bg( lb->layer_enable_ebox, 1, &color );
    gtk_widget_modify_bg( lb->layer_enable_ebox, 2, &color );
    gtk_widget_modify_fg( lb->label, 1, &WhitePixel );
  }
  return;
}
void layer_enable_button_set_label( GtkWidget *label, gchar *text )
{
  int eax;
  int ebx;
  int esi;
  gchar *s;
  gtk_label_set_markup( g_type_check_instance_cast( &label[0].object.parent_instance.g_type_instance, gtk_label_get_type( ) ), s );
  label = &s[0];
}
void ghid_show_layer_buttons( void )
{
  /* phantom */ LayerButtonSet *lb;
  gint i = 0;
  do
  {
    if ( i < PCB->Data->LayerN )
    {
      gtk_widget_show( layer_buttons->layer_enable_button );
      gtk_widget_show( *(int*)(layer_buttons->layer_enable_button + -4) );
      i++;
    }
    else
    {
      gtk_widget_hide( layer_buttons->layer_enable_button );
      gtk_widget_hide( *(int*)(layer_buttons[1].layer_enable_button + -4) );
      i++;
      if ( i == 16 )
        break;
    }
  }
  while ( i != 16 );
  return;
}
void ghid_layer_buttons_color_update( void )
{
  int eax;
  int edx;
  gchar *color_string;
  /* phantom */ LayerButtonSet *lb;
  gint i;
  if ( gport->drawing_area )
  {
    i = 0;
    pcb_colors_from_settings( PCB );
    do
    {
      i++;
      layer_process( &color_string, 0, 0, i );
      layer_button_set_color( &layer_buttons[1], color_string );
    }
    while ( i == 22 );
  }
  return;
}
void ghid_layer_enable_buttons_update( void )
{
  int eax;
  int edx;
  LayerButtonSet *lb;
  gchar *s;
  gint i;
  layer_enable_button_cb_hold_off = 1;
  if ( PCB->Data->LayerN > 0 )
  {
    i = 0;
    do
    {
      if ( dup_string( &lb->text + 16, s ) )
      {
        layer_enable_button_set_label( layer_buttons[1].label, dcgettext( "pcb", s, 5 ) );
        ghid_config_layer_name_update( dcgettext( "pcb", s, 5 ), i );
        if ( Settings.verbose == 0 )
          goto B13;
        else
        {
          gboolean active = gtk_toggle_button_get_active( (GtkToggleButton*)g_type_check_instance_cast( &layer_buttons[1].layer_enable_button->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ) );
          gboolean new = PCB->Data->Layer[ i ].On;
          if ( PCB->Data->Layer[ i ].On != new )
          {
            __printf_chk( 1, "ghid_layer_enable_buttons_update: active=%d new=%d\n", active, new );
            active = PCB->Data->ViaN/*.1_1of4*/;
            gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &layer_buttons[1].layer_enable_button->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), active );
            i++;
          }
        }
      }
      else
      if ( Settings.verbose == 0 )
        goto B13;
      else
      {
        gboolean active = gtk_toggle_button_get_active( (GtkToggleButton*)g_type_check_instance_cast( &layer_buttons[1].layer_enable_button->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ) );
        gboolean new = PCB->Data->Layer[ i ].On;
      }
B13:;
      active = PCB->Data->Layer[ i ].On;
    }
    while ( i < PCB->Data->LayerN );
  }
  else
  {
  }
  gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &layer_buttons[16].layer_enable_button->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), *(char*)(ebp_32 + 35) );
  gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &layer_buttons[17].layer_enable_button->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), PCB->RatOn );
  gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &layer_buttons[18].layer_enable_button->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), PCB->PinOn );
  gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &layer_buttons[19].layer_enable_button->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), PCB->ViaOn );
  gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &layer_buttons[20].layer_enable_button->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), PCB->InvisibleObjectsOn );
  layer_enable_button_cb_hold_off = 0;
  return;
}
void ghid_layer_button_select( gint layer )
{
  if ( layer_select_button_index != layer )
  {
    gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &layer_buttons[ layer ].radio_select_button[0].object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), 1 );
    layer_select_button_index = layer;
  }
  return;
}
void ghid_layer_buttons_update( void )
{
  int ecx;
  int edx;
  gint layer;
  gboolean active;
  gboolean old_holdoff;
  char tmpnm[40];
  int i;
  int set;
  gchar *text;
  GtkAction *a;
  GValue setfalse;
  GValue settrue;
  GValue setlabel;
  setfalse.g_type = 0;
  *(int*)(ebp_2147483632 + -88) = 0;
  *(int*)(ebp_2147483632 + -80) = 0;
  settrue.g_type = 0;
  *(int*)(ebp_2147483632 + -108) = 0;
  *(int*)(ebp_2147483632 + -100) = 0;
  setlabel.g_type = 0;
  *(int*)(ebp_2147483632 + -128) = 0;
  *(int*)(ebp_2147483632 + -120) = 0;
  g_value_init( &setfalse, 20 );
  g_value_init( &settrue, 20 );
  g_value_set_boolean( &setfalse, 0 );
  g_value_set_boolean( &settrue, 1 );
  g_value_init( &setlabel, 64 );
  if ( ghidgui && ghidgui->creating == 0 )
  {
    ghid_layer_enable_buttons_update( );
    layer = 17;
    if ( PCB->RatDraw == 0 )
    {
      layer = 16;
      layer = *(char*)(PCB + 39) == 0 ? 16 : LayerStack[0];
    }
    if ( layer < PCB->Data->LayerN )
    {
      active = *(char*)(*(int*)g_type_check_instance_cast( &layer_buttons[ layer ].radio_select_button[0].object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) )/*.8716*/ + ( layer * 92 ) + 144);
      if ( Settings.verbose == 0 )
      {
        i = 0;
        old_holdoff = ghidgui->toggle_holdoff = 1;
        do
        {
          __sprintf_chk( tmpnm, 1, 40, "%s%d", "LayerPick", i );
          a = gtk_action_group_get_action( &ghidgui->main_actions, tmpnm );
          layer_process( 0, &text, &set, i );
          g_value_set_string( &setlabel, text );
          if ( a )
          {
            g_object_set_property( (GObject*)g_type_check_instance_cast( &a[0].object.g_type_instance, 80 ), "visible", &settrue );
            gtk_toggle_action_set_active( g_type_check_instance_cast( &a[0].object.g_type_instance, gtk_toggle_action_get_type( ) ), ( set != 0 ) & ( layer == i ) );
            g_object_set_property( (GObject*)g_type_check_instance_cast( &a[0].object.g_type_instance, 80 ), "label", &setlabel );
          }
          __sprintf_chk( tmpnm, 1, 40, "%s%d", "LayerView", i );
          a = gtk_action_group_get_action( &ghidgui->main_actions, tmpnm );
          if ( gtk_action_group_get_action( &ghidgui->main_actions, tmpnm ) )
          {
            g_object_set_property( (GObject*)g_type_check_instance_cast( &a[0].object.g_type_instance, 80 ), "visible", &settrue );
            gtk_toggle_action_set_active( g_type_check_instance_cast( &a[0].object.g_type_instance, gtk_toggle_action_get_type( ) ), set != 0 );
            g_value_set_string( &setlabel, text );
            g_object_set_property( (GObject*)g_type_check_instance_cast( &a[0].object.g_type_instance, 80 ), "label", &setlabel );
          }
          i++;
        }
        while ( i + 1 == 22 );
        g_value_unset( &setfalse );
        g_value_unset( &settrue );
        g_value_unset( &setlabel );
        ghidgui->toggle_holdoff = old_holdoff;
        if ( active && layer_select_button_index != layer )
        {
          layer_select_button_cb_hold_off = 1;
          gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &layer_buttons[ layer ].radio_select_button[0].object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), 1 );
          layer_select_button_cb_hold_off = 0;
          layer_select_button_index = layer;
        }
      }
    }
    else
    {
      if ( layer == 16 )
        active = PCB->ElementOn;
      else
      {
        active = 0;
        if ( layer == 17 )
          active = PCB->RatOn;
      }
      if ( Settings.verbose == 0 )
        continue;
    }
    __printf_chk( 1, "ghid_layer_buttons_update cur_index=%d update_index=%d\n", layer_select_button_index, layer );
    if ( active && layer_select_button_index != layer )
      __printf_chk( 1, "\tActivating button %d\n", layer );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void route_style_edit_cb( GtkWidget *widget, GHidPort *port )
{
  widget = "AdjustStyle";
}
void route_style_select_button_cb( GtkToggleButton *button, gpointer data )
{
  int ebx;
  /* phantom */ RouteStyleType *rst;
  gchar buf[16];
  /* phantom */ gint index;
  if ( data != 6 && ghidgui->toggle_holdoff == 0 && route_style_index != data )
  {
    route_style_index = data;
    if ( data > 3 )
    {
      if ( data <= 5 )
      {
        SetLineSize( route_style_button[ route_style_index ].route_style.Thick );
        SetViaSize( route_style_button->route_style.Diameter, 1 );
        SetViaDrillingHole( route_style_button->route_style.Hole, 1 );
        SetKeepawayWidth( route_style_button->route_style.Keepaway );
      }
    }
    else
    {
      __snprintf_chk( buf, 16, 1, 16, "%d", data + 1 + 1 );
      if ( gtk_toggle_button_get_active( button ) )
        hid_actionl( "RouteStyle", (long long)( buf[0] ) );
    }
    gtk_widget_set_sensitive( route_style_edit_button, 1 );
    ghid_set_status_line_label( );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void ghid_route_style_button_set_active( gint n )
{
  if ( n <= 6 )
  {
    gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &route_style_button[ n << 5 ].button[0].object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), 1 );
  }
  return;
}
void ghid_route_style_buttons_update( void )
{
  int eax;
  int ecx;
  int edx;
  RouteStyleType *rst;
  gint i = 0;
  do
  {
    rst = PCB->ID + 8596;
    if ( i > 3 )
    {
      if ( route_style_button[ i ].shown )
        rst += route_style_button->route_style.Thick / 24;
      else
      {
        i++;
      }
    }
    if ( rst == Settings.LineThickness && rst->Diameter == Settings.ViaThickness && Settings.ViaDrillingHole == rst->Hole && Settings.Keepaway == rst->Keepaway )
    {
      break;
    }
    else
    {
      i++;
    }
  }
  while ( i + 1 != 6 );
  ghidgui->toggle_holdoff = 1;
  ghid_route_style_button_set_active( i );
  route_style_index = i;
  ghidgui->toggle_holdoff = 0;
  gtk_widget_set_sensitive( route_style_edit_button, i != 6 );
  return;
}
void ghid_route_style_set_button_label( gchar *name, gint index )
{
  int eax;
  int ebx;
  int esi;
  if ( index <= 3 && route_style_button[ index << 5 ] )
  {
    index = dcgettext( "pcb", name, 5 );
    name = (gchar*)g_type_check_instance_cast( &route_style_button[ index >> 5 ].button[0].object.parent_instance.g_type_instance, gtk_button_get_type( ) );
  }
  return;
}
void ghid_route_style_set_temp_style( RouteStyleType *rst, gint which )
{
  int ebx;
  int esi;
  int edi;
  RouteStyleButton *rsb;
  gchar *tmp;
  gint index;
  if ( which <= 1 )
  {
    index += 4;
    rsb = &route_style_button[ index + 4 ];
    gtk_widget_show( route_style_button[ index + 4 ].button );
    tmp[0] = rsb->route_style.Name;
    rsb->shown = 1;
    rsb->route_style.Thick = rst;
    rsb->route_style.Diameter = rst->Diameter;
    rsb->route_style.Hole = rst->Hole;
    rsb->route_style.Keepaway = rst->Keepaway;
    rsb->route_style.Name = rst->Name;
    rsb->route_style.index = rst->index;
    if ( route_style_index != index + 4 )
    {
      route_style_index = index;
      which = 1;
      rst = (RouteStyleType*)g_type_check_instance_cast( &route_style_button[ index + 4 ].button[0].object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) );
    }
  }
  return;
}
void mode_button_toggled_cb( GtkWidget *widget, ModeButton *mb )
{
  gboolean active;
  if ( active )
  {
    SetMode( mb->mode );
    ghid_mode_cursor( mb->mode );
    ghidgui->settings_mode = mb->mode;
  }
  return;
}
void ghid_mode_buttons_update( void )
{
  int eax;
  /* phantom */ ModeButton *mb;
  /* phantom */ gint i;
  do
  {
    if ( Settings.Mode == mode_buttons->mode )
    {
      gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &mode_buttons[1].button->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), 1 );
      return;
    }
  }
  while ( mode_buttons[2].button != 135698744 );
  return;
}
void ghid_pack_mode_buttons( void )
{
  int eax;
  static gint last_pack_compact = -1;
  /* phantom */ ModeButton *mb;
  /* phantom */ gint i;
  if ( last_pack_compact >= 0 )
  {
    gtk_container_remove( (GtkContainer*)g_type_check_instance_cast( 1 ? &ghidgui->mode_buttons0_frame_vbox->object.parent_instance.g_type_instance : &ghidgui->mode_buttons1_vbox->object.parent_instance.g_type_instance, ebp_52 ), &ghidgui->mode_buttons0_frame );
    do
    {
      gtk_container_remove( (GtkContainer*)g_type_check_instance_cast( last_pack_compact ? *(int*)(mode_buttons->box1 + 0 + 24) : *(int*)(mode_buttons->box0 + 0 + 24), ebp_52 ), &ghidgui->mode_buttons0_frame );
    }
    while ( 0 + 24 == 312 );
  }
  do
  {
    gtk_box_pack_start( eax, &edi, 0, 0, 0 );
  }
  while ( 0 + 24 == 312 );
  if ( ghidgui->compact_vertical )
  {
    gtk_box_pack_start( g_type_check_instance_cast( *(int*)gtk_container_get_type( )/*.84*/, gtk_box_get_type( ) ), *(int*)gtk_container_get_type( )/*.92*/, 0, 0, 0 );
    gtk_widget_show_all( &ghidgui->mode_buttons1_frame );
  }
  else
  {
    gtk_box_pack_start( g_type_check_instance_cast( &ghidgui->mode_buttons0_frame_vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), &ghidgui->mode_buttons0_frame, 0, 0, 0 );
    gtk_widget_show_all( &ghidgui->mode_buttons0_frame );
  }
  last_pack_compact = ghidgui->compact_vertical;
  return;
}
gint delete_chart_cb( GtkWidget *widget, GdkEvent *event, GHidPort *port )
{
  ghid_config_files_write( );
  hid_action( "Quit" );
  return 1;
}
void destroy_chart_cb( GtkWidget *widget, GHidPort *port )
{
}
void ghid_interface_input_signals_connect( void )
{
  button_press_handler = g_signal_connect_data( g_type_check_instance_cast( &gport->drawing_area->object.parent_instance.g_type_instance, 80 ), "button_press_event", &ghid_port_button_press_cb, &ghidgui->ui_manager->parent.g_type_instance.g_class->g_type, 0, 0 );
  button_release_handler = g_signal_connect_data( g_type_check_instance_cast( &gport->drawing_area->object.parent_instance.g_type_instance, 80 ), "button_release_event", &ghid_port_button_release_cb, &ghidgui->ui_manager->parent.g_type_instance.g_class->g_type, 0, 0 );
  key_press_handler = g_signal_connect_data( g_type_check_instance_cast( &gport->drawing_area->object.parent_instance.g_type_instance, 80 ), "key_press_event", &ghid_port_key_press_cb, &ghidgui->ui_manager->parent.g_type_instance.g_class->g_type, 0, 0 );
  key_release_handler = g_signal_connect_data( g_type_check_instance_cast( &gport->drawing_area->object.parent_instance.g_type_instance, 80 ), "key_release_event", &ghid_port_key_release_cb, &ghidgui->ui_manager->parent.g_type_instance.g_class->g_type, 0, 0 );
  return;
}
void ghid_interface_input_signals_disconnect( void )
{
  if ( button_press_handler )
    g_signal_handler_disconnect( &gport->drawing_area, button_release_handler );
  if ( button_release_handler )
    g_signal_handler_disconnect( &gport->drawing_area, key_press_handler );
  if ( key_press_handler )
    g_signal_handler_disconnect( &gport->drawing_area, key_release_handler );
  if ( key_release_handler )
  {
    g_signal_handler_disconnect( &gport->drawing_area, key_release_handler );
  }
  button_release_handler = 0;
  button_press_handler = 0;
  key_release_handler = 0;
  key_press_handler = 0;
  return;
}
void ghid_interface_set_sensitive( gboolean sensitive )
{
  gtk_widget_set_sensitive( ghid_left_sensitive_box, sensitive );
  gtk_widget_set_sensitive( &ghidgui->menu_hbox, sensitive );
  return;
}
void ghid_create_pcb_widgets( void )
{
  int eax;
  int ecx;
  int edx;
  int ebp_112;
  int ebp_108;
  int ebp_92;
  /* phantom */ GHidPort *port;
  GError *err = 0;
  gdk_color_parse( "white", ebp_244 );
  gdk_color_parse( "black", &BlackPixel );
  if ( bg_image_file )
  {
    ghidgui->bg_pixbuf = gdk_pixbuf_new_from_file( bg_image_file, err );
  }
  if ( err )
  {
    g_log( 0, 4, &err->message );
  }
  gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &gport->top_window->object.parent_instance.g_type_instance.g_class->g_type, gtk_container_get_type( ) ), gtk_vbox_new( 0, 0 ) );
  gtk_box_pack_start( g_type_check_instance_cast( (GTypeInstance*)gtk_vbox_new( 0, 0 ), gtk_box_get_type( ) ), gtk_hbox_new( 0, 4 ), 0, 0, 0 );
  ghidgui->top_hbox = gtk_hbox_new( 0, 4 );
  ghidgui->menu_hbox = gtk_hbox_new( 0, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( &ghidgui->top_hbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), &ghidgui->menu_hbox, 0, 0, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( &ghidgui->menu_hbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), gtk_vbox_new( 0, 0 ), 0, 0, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( (GTypeInstance*)gtk_vbox_new( 0, 0 ), gtk_box_get_type( ) ), gtk_hbox_new( 0, 0 ), 0, 0, 0 );
  do
  {
    ghid_hotkey_actions[ 0 ] = 0;
  }
  while ( 0 + 1 + 1 != 256 );
  if ( homedir == 0 )
    Message( "Warning:  could not determine home directory\n" );
  else
  {
    Message( "Note:  home directory is \"%s\"\n", homedir );
  }
  if ( access( "gpcb-menu.res", 4 ) && ( !Concat( homedir, "/", ".pcb", "/", (long long)( "gpcb-menu.res" ) ) || access( Concat( homedir, "/", ".pcb", "/", (long long)( "gpcb-menu.res" ) ), 4 ) ) )
  {
  }
  if ( resource_parse( 0, gpcb_menu_default ) == 0 )
  {
    __fprintf_chk( stderr, 1, "Error: internal menu resource didn't parse\n" );
    exit( 1 );
  }
  if ( edx )
  {
  }
  if ( Concat( homedir, "/", ".pcb", "/", (long long)( "gpcb-menu.res" ) ) )
    free( Concat( homedir, "/", ".pcb", "/", (long long)( "gpcb-menu.res" ) ) );
  if ( eax || resource_subres( ebp_92, "MainMenu" ) )
  {
    ghid_ui_info_append( "&lt;ui&gt;\n" );
    ghid_ui_info_indent( 5 );
    ghid_ui_info_append( "&lt;menubar name='MenuBar'&gt;\n" );
    T/*.526*/( );
    ghid_ui_info_indent( 5 );
    ghid_ui_info_append( "&lt;/menubar&gt;\n" );
  }
  if ( eax || resource_subres( ebp_92, "PopupMenus" ) )
  {
    ebp_108 = 0;
    ebp_112 = 0;
    for ( ; ebp_112 < ebp_116; ebp_108 += 12 )
    {
      if ( ( ~( 0 - ( ( *(int*)(ebp_108 + *(int*)(esi + 16)) < 1 ) & 1 ) ) & 100 ) + ( *(int*)(ebp_108 + *(int*)(esi + 16) + 8) != 0 ) + ( ~( 0 - ( ( *(int*)(ebp_108 + *(int*)(esi + 16) + 4) < 1 ) & 1 ) ) & 10 ) == 101 )
      {
        ghid_ui_info_indent( 5 );
        ghid_ui_info_append( "&lt;popup name='" );
        ghid_ui_info_append( *(int*)(ebp_108 + *(int*)(esi + 16)) );
        ghid_ui_info_append( "'&gt;\n" );
        T/*.526*/( );
        ghid_ui_info_indent( 5 );
        ghid_ui_info_append( "&lt;/popup&gt;\n" );
      }
      ebp_112++;
      // ebp_108 += 12;
    }
  }
  ghid_ui_info_append( "&lt;/ui&gt;\n" );
  if ( eax || resource_subres( ebp_92, "Mouse" ) )
    load_mouse_resource( resource_subres( ebp_92, "Mouse" ) );
  T/*.529*/( );
  gtk_widget_show( gtk_frame_new( 0 ) );
  g_object_ref( g_type_check_instance_cast( *ebp_248, 80 ) );
  ghidgui->mode_buttons1_vbox = ebp_104;
  ghidgui->mode_buttons1_frame = *ebp_248;
  ghidgui->mode_buttons1_hbox = gtk_hbox_new( 0, 0 );
  gtk_container_add( &eax[0].g_class[0].g_type, &edi );
  gtk_box_pack_end( eax, &esi, 0, 0, 0 );
  ghidgui->compact_vbox = gtk_vbox_new( 0, 0 );
  gtk_box_pack_end( eax, &edi, 0, 0, 0 );
  ghidgui->compact_hbox = gtk_hbox_new( 0, 0 );
  gtk_box_pack_start( eax, &edi, 1, 0, 0 );
  gtk_box_pack_start( eax, &edi, 1, 0, 2 );
  ghidgui->label_hbox = gtk_hbox_new( 0, 0 );
  gtk_label_set_use_markup( g_type_check_instance_cast( (GTypeInstance*)gtk_label_new( "" ), gtk_label_get_type( ) ), 1 );
  gtk_label_set_markup( eax, ebp_148 );
  g_free( ebp_148 );
  gtk_box_pack_start( eax, &esi, 0, 1, 4 );
  ghidgui->name_label = gtk_label_new( "" );
  ghidgui->position_hbox = gtk_hbox_new( 0, 0 );
  g_object_ref( g_type_check_instance_cast( &ghidgui->position_hbox->object.parent_instance.g_type_instance, 80 ) );
  if ( ghidgui->compact_horizontal )
  {
    gtk_box_pack_end( eax, &esi, 1, 0, 0 );
  }
  else
  {
    gtk_box_pack_end( eax, &esi, 0, 0, 4 );
  }
  ebp_92 = ghidgui->position_hbox;
  gtk_label_set_markup( g_type_check_instance_cast( (GTypeInstance*)gtk_label_new( "" ), ebp_108 ), Settings.grid_units_mm != 0 ? "&lt;b&gt;mil&lt;/b&gt; " : "&lt;b&gt;mm&lt;/b&gt; " );
  ghidgui->grid_units_label = *ebp_248;
  gtk_label_set_use_markup( g_type_check_instance_cast( &ghidgui->grid_units_label[0].object.parent_instance.g_type_instance, ebp_108 ), 1 );
  gtk_container_add( &eax[0].g_class[0].g_type, &esi );
  gtk_box_pack_end( eax, &edi, 0, 1, 0 );
  g_signal_connect_data( g_type_check_instance_cast( (GTypeInstance*)gtk_button_new( ), 80 ), "clicked", &grid_units_button_cb, 0, 0, 0 );
  gtk_box_pack_end( eax, &esi, 0, 1, 0 );
  gtk_container_set_border_width( &eax[0].g_class[0].g_type, 2 );
  gtk_frame_set_shadow_type( g_type_check_instance_cast( (GTypeInstance*)gtk_frame_new( 0 ), gtk_frame_get_type( ) ), 4 );
  gtk_container_add( &eax[0].g_class[0].g_type, &edi );
  ghidgui->cursor_position_absolute_label = gtk_label_new( "" );
  g_signal_connect_data( g_type_check_instance_cast( &ghidgui->cursor_position_absolute_label[0].object.parent_instance.g_type_instance, 80 ), "size-request", &absolute_label_size_req_cb, 0, 0, 0 );
  gtk_box_pack_end( eax, &esi, 0, 1, 0 );
  gtk_container_set_border_width( &eax[0].g_class[0].g_type, 2 );
  gtk_frame_set_shadow_type( g_type_check_instance_cast( (GTypeInstance*)gtk_frame_new( 0 ), gtk_frame_get_type( ) ), 4 );
  gtk_container_add( &eax[0].g_class[0].g_type, &edi );
  ghidgui->cursor_position_relative_label = gtk_label_new( " __.__  __.__ " );
  g_signal_connect_data( g_type_check_instance_cast( &ghidgui->cursor_position_relative_label[0].object.parent_instance.g_type_instance, 80 ), "size-request", &relative_label_size_req_cb, 0, 0, 0 );
  gtk_box_pack_start( eax, ebp_128, 1, 1, 3 );
  gtk_widget_set_events( gtk_event_box_new( ), 2 );
  gtk_box_pack_start( eax, &esi, 0, 0, 3 );
  ghid_left_sensitive_box = *ebp_248;
  gtk_container_add( &eax[0].g_class[0].g_type, ebp_116 );
  gtk_box_pack_start( eax, &esi, 0, 0, 4 );
  gtk_box_pack_start( eax, ebp_120, 0, 0, 3 );
  ebp_92 = 1;
  do
  {
    layer_buttons[1].index = 0 + 1;
    if ( layer_buttons->index <= 17 )
    {
      gtk_table_attach_defaults( g_type_check_instance_cast( (GTypeInstance*)gtk_table_new( 22, 2, 0 ), gtk_table_get_type( ) ), *ebp_248, 0, 1, layer_buttons[1].index, ebp_92 );
      layer_buttons[0].radio_select_button = *ebp_248;
      g_signal_connect_data( g_type_check_instance_cast( &layer_buttons[0].radio_select_button[0].object.parent_instance.g_type_instance, 80 ), "toggled", &layer_select_button_cb, &layer_buttons[1].radio_select_button, 0, 0 );
    }
    layer_process( ebp_76, ebp_72, ebp_80, layer_buttons[1].index );
    gtk_label_set_use_markup( g_type_check_instance_cast( (GTypeInstance*)gtk_label_new( "" ), ebp_108 ), 1 );
    layer_enable_button_set_label( gtk_label_new( "" ), ebp_72 );
    gtk_container_add( &eax[0].g_class[0].g_type, ebp_96 );
    gtk_container_add( &eax[0].g_class[0].g_type, ebp_148 );
    gtk_table_attach_defaults( g_type_check_instance_cast( (GTypeInstance*)gtk_table_new( 22, 2, 0 ), gtk_table_get_type( ) ), gtk_check_button_new( ), 1, 2, layer_buttons[1].index, ebp_92 );
    gtk_toggle_button_set_mode( (GtkToggleButton*)g_type_check_instance_cast( (GTypeInstance*)gtk_check_button_new( ), gtk_toggle_button_get_type( ) ), 0 );
    layer_buttons->layer_enable_button = gtk_check_button_new( );
    layer_buttons->layer_enable_ebox = gtk_event_box_new( );
    layer_buttons->label = gtk_label_new( "" );
    layer_buttons->text = g_strdup( ebp_72 );
    layer_button_set_color( &layer_buttons[1], ebp_76 );
    gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &layer_buttons->layer_enable_button[0].object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), 1 );
    g_signal_connect_data( g_type_check_instance_cast( &layer_buttons->layer_enable_button[0].object.parent_instance.g_type_instance, 80 ), "toggled", &layer_enable_button_cb, &layer_buttons[1].index, 0, 0 );
    ebp_92++;
  }
  while ( layer_buttons[1].index + 1 != 22 );
  gtk_box_pack_start( eax, &esi, 0, 0, 0 );
  ghidgui->mode_buttons0_frame_vbox = gtk_vbox_new( 0, 0 );
  ghidgui->mode_buttons0_frame = gtk_frame_new( 0 );
  gtk_widget_show( &ghidgui->mode_buttons0_frame );
  g_object_ref( g_type_check_instance_cast( *ebp_248, 80 ) );
  ghidgui->mode_buttons0_vbox = gtk_vbox_new( 0, 0 );
  gtk_container_add( &eax[0].g_class[0].g_type, &edi );
  ebp_92 = 0;
  do
  {
    mode_buttons[1].button = &eax[0].g_class[0].g_type;
    g_object_ref( g_type_check_instance_cast( &mode_buttons[1].button[0].object.parent_instance.g_type_instance, 80 ) );
    gtk_toggle_button_set_mode( (GtkToggleButton*)g_type_check_instance_cast( *ebp_248, gtk_toggle_button_get_type( ) ), 0 );
    if ( __MOD(ebp_92,ghidgui->n_mode_button_columns) == 0 )
    {
      gtk_box_pack_start( eax, ebp_96, 0, 0, 0 );
    }
    mode_buttons[1].box0 = ebp_96;
    mode_buttons[1].box1 = &ghidgui->mode_buttons1_hbox;
    g_object_unref( &eax );
    gtk_container_add( &eax[0].g_class[0].g_type, ebp_152 );
    if ( strcmp( mode_buttons->name, "select" ) == 0 )
    {
      gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( *ebp_248, ghidgui ), 1 );
    }
    g_signal_connect_data( &ebx, "toggled", &mode_button_toggled_cb, &esi, 0, 0 );
    ebp_92++;
  }
  while ( ebp_92 == 13 );
  ghid_pack_mode_buttons( );
  gtk_box_pack_end( eax, &esi, 0, 0, 0 );
  gtk_container_add( &eax[0].g_class[0].g_type, &edi );
  gtk_box_pack_start( eax, &esi, 0, 0, 1 );
  gtk_box_pack_start( eax, ebp_92, 0, 0, 4 );
  gtk_box_pack_start( eax, &esi, 0, 0, 2 );
  g_signal_connect_data( gtk_button_new_with_label( dcgettext( "pcb", "Route Style", 5 ) ), "clicked", &route_style_edit_cb, &ghid_port.top_window, 0, 0 );
  route_style_edit_button = gtk_button_new_with_label( dcgettext( "pcb", "Route Style", 5 ) );
  do
  {
    if ( 3 >= 0 )
    {
      gtk_box_pack_start( eax, &edi, 0, 0, 0 );
      route_style_button[0].button = *ebp_248;
    }
    else
    {
      __snprintf_chk( ebp_60, 32, 1, 32, dcgettext( "pcb", "Temp%d", 5 ), 0 + 1 + -3 );
      if ( route_style_button[1].route_style.Name == 0 )
      {
        route_style_button[1].route_style.Name = g_strdup( ebp_60 );
      }
      gtk_box_pack_start( eax, &edi, 0, 0, 0 );
      route_style_button[1].button = &edi;
      if ( 0 + 1 == 6 )
        break;
    }
    g_signal_connect_data( g_type_check_instance_cast( &route_style_button[0].button[0].object.parent_instance.g_type_instance, 80 ), "toggled", &route_style_select_button_cb, 0 + 1, 0, 0 );
  }
  while ( 0 + 1 != 7 );
  gtk_box_pack_start( eax, &esi, 1, 1, 0 );
  gtk_box_pack_start( eax, ebp_112, 1, 1, 0 );
  gtk_viewport_set_shadow_type( g_type_check_instance_cast( ebp_92, gtk_viewport_get_type( ) ), 1 );
  gtk_box_pack_start( eax, ebp_92, 1, 1, 0 );
  gport->drawing_area = gtk_drawing_area_new( );
  gtk_widget_add_events( &gport->drawing_area, 32518 );
  *(int*)g_type_check_instance_cast( &gport->drawing_area->object.parent_instance.g_type_instance, gtk_object_get_type( ) )/*.12*/ |= 2048;
  gtk_container_add( &eax[0].g_class[0].g_type, &edi );
  ghidgui->v_adjustment = gtk_adjustment_new( 0.000000000000, 0.000000000000, 100.000000000000, 10.000000000000, 10.000000000000, 10.000000000000 );
  ghidgui->v_range = gtk_vscrollbar_new( (GtkAdjustment*)g_type_check_instance_cast( &ghidgui->v_adjustment->parent_instance.g_type_instance, gtk_adjustment_get_type( ) ) );
  gtk_range_set_update_policy( g_type_check_instance_cast( &ghidgui->v_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ), 0 );
  gtk_box_pack_start( eax, &edi, 0, 0, 0 );
  g_signal_connect_data( g_type_check_instance_cast( &ghidgui->v_adjustment->parent_instance.g_type_instance, 80 ), "value_changed", &v_adjustment_changed_cb, &ghidgui, 0, 0 );
  ghidgui->h_adjustment = gtk_adjustment_new( 0.000000000000, 0.000000000000, 100.000000000000, 10.000000000000, 10.000000000000, 10.000000000000 );
  ghidgui->h_range = gtk_hscrollbar_new( (GtkAdjustment*)g_type_check_instance_cast( &ghidgui->h_adjustment->parent_instance.g_type_instance, gtk_adjustment_get_type( ) ) );
  gtk_range_set_update_policy( g_type_check_instance_cast( &ghidgui->h_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ), 0 );
  gtk_box_pack_start( eax, &edi, 0, 0, 0 );
  g_signal_connect_data( g_type_check_instance_cast( &ghidgui->h_adjustment->parent_instance.g_type_instance, 80 ), "value_changed", &h_adjustment_changed_cb, &ghidgui, 0, 0 );
  ghidgui->status_line_hbox = gtk_hbox_new( 0, 0 );
  gtk_box_pack_start( eax, &edi, 0, 0, 2 );
  gtk_label_set_use_markup( g_type_check_instance_cast( (GTypeInstance*)gtk_label_new( "" ), ebp_108 ), 1 );
  gtk_box_pack_start( eax, &esi, 0, 0, 0 );
  ghidgui->status_line_label = *ebp_248;
  g_signal_connect_data( g_type_check_instance_cast( &gport->drawing_area->object.parent_instance.g_type_instance, 80 ), "expose_event", &ghid_port_drawing_area_expose_event_cb, &ghid_port.top_window, 0, 0 );
  g_signal_connect_data( g_type_check_instance_cast( &gport->top_window->object.parent_instance.g_type_instance.g_class->g_type, 80 ), "configure_event", &top_window_configure_event_cb, &ghid_port.top_window, 0, 0 );
  g_signal_connect_data( g_type_check_instance_cast( &gport->drawing_area->object.parent_instance.g_type_instance, 80 ), "configure_event", &ghid_port_drawing_area_configure_event_cb, &ghid_port.top_window, 0, 0 );
  ghid_interface_input_signals_connect( );
  g_signal_connect_data( g_type_check_instance_cast( &gport->drawing_area->object.parent_instance.g_type_instance, 80 ), "scroll_event", &ghid_port_window_mouse_scroll_cb, &ghid_port.top_window, 0, 0 );
  g_signal_connect_data( g_type_check_instance_cast( &gport->drawing_area->object.parent_instance.g_type_instance, 80 ), "enter_notify_event", &ghid_port_window_enter_cb, &ghid_port.top_window, 0, 0 );
  g_signal_connect_data( g_type_check_instance_cast( &gport->drawing_area->object.parent_instance.g_type_instance, 80 ), "leave_notify_event", &ghid_port_window_leave_cb, &ghid_port.top_window, 0, 0 );
  g_signal_connect_data( g_type_check_instance_cast( &gport->drawing_area->object.parent_instance.g_type_instance, 80 ), "motion_notify_event", &ghid_port_window_motion_cb, &ghid_port.top_window, 0, 0 );
  g_signal_connect_data( g_type_check_instance_cast( &gport->top_window->object.parent_instance.g_type_instance.g_class->g_type, 80 ), "delete_event", &delete_chart_cb, &ghid_port.top_window, 0, 0 );
  g_signal_connect_data( g_type_check_instance_cast( &gport->top_window->object.parent_instance.g_type_instance.g_class->g_type, 80 ), "destroy", &destroy_chart_cb, &ghid_port.top_window, 0, 0 );
  ghidgui->creating = 0;
  gtk_widget_show_all( &gport->top_window->object.parent_instance.g_type_instance.g_class->g_type );
  gtk_widget_realize( ebp_124 );
  gtk_widget_realize( &ghidgui->ui_manager->parent.g_type_instance._GTypeInstance );
  gtk_widget_realize( ebp_92 );
  gtk_widget_realize( &gport->drawing_area );
  gdk_window_set_back_pixmap( &gport->drawing_area->window, 0, 0 );
  gtk_widget_hide( route_style_button[4].button );
  gtk_widget_hide( route_style_button[5].button );
  gtk_widget_hide( route_style_button[6].button );
  ghid_show_layer_buttons( );
  ghid_update_toggle_flags( );
  XC_clock_source = (GdkPixmap*)gdk_bitmap_create_from_data( &gport->bg_color.red, rotateIcon_bits, 16, 16 );
  XC_clock_mask = (GdkPixmap*)gdk_bitmap_create_from_data( &gport->bg_color.red, rotateMask_bits, 16, 16 );
  XC_hand_source = (GdkPixmap*)gdk_bitmap_create_from_data( &gport->bg_color.red, handIcon_bits, 16, 16 );
  XC_hand_mask = (GdkPixmap*)gdk_bitmap_create_from_data( &gport->bg_color.red, handMask_bits, 16, 16 );
  XC_lock_source = (GdkPixmap*)gdk_bitmap_create_from_data( &gport->bg_color.red, lockIcon_bits, 16, 16 );
  XC_lock_mask = (GdkPixmap*)gdk_bitmap_create_from_data( &gport->bg_color.red, lockMask_bits, 16, 16 );
  SetMode( 110 );
  ghid_mode_buttons_update( );
  if ( ebp_28 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
gboolean ghid_listener_cb( GIOChannel *source, GIOCondition condition, gpointer data )
{
  GIOStatus status;
  gchar *str;
  gsize len;
  gsize term;
  GError *err = 0;
  if ( ( (unsigned char)( condition ) & 16 ) & 255 )
  {
    gui->log( "Read end of pipe died!\n" );
    return 0;
  }
  if ( condition != G_IO_IN )
  {
    __fprintf_chk( stderr, 1, "Unknown condition in ghid_listener_cb\n" );
    return 1;
  }
  if ( status == G_IO_STATUS_NORMAL )
  {
    hid_parse_actions( str, 0 );
    g_free( str );
    return 1;
  }
  if ( 0 )
  {
    gui->log( "ERROR status from g_io_channel_read_line\n" );
    return 0;
  }
  if ( status == G_IO_STATUS_EOF )
  {
    gui->log( "Input pipe returned EOF.  The --listen option is \nprobably not running anymore in this session.\n" );
    return 0;
  }
  if ( status != G_IO_STATUS_AGAIN )
  {
    __fprintf_chk( stderr, 1, "ERROR:  unhandled case in ghid_listener_cb\n" );
    return 0;
  }
  gui->log( "AGAIN status from g_io_channel_read_line\n" );
  return 0;
}
void register_ghid_attribute_list( void )
{
  hid_register_attributes( ghid_attribute_list, 2 );
  return;
}
void ghid_parse_arguments( int *argc, char ***argv )
{
  int edx;
  /* phantom */ GtkWidget *window;
  gint i;
  GdkPixbuf *icon;
  gtk_set_locale( );
  setlocale( 1, "POSIX" );
  gtk_disable_setlocale( );
  gtk_init( argc, argv );
  gport = &ghid_port;
  pixel_slop = 300;
  ghid_port.zoom = 300.000000000000;
  ghid_config_files_read( argc, argv );
  Settings.AutoPlace = 0;
  if ( argc > 0 )
  {
    i = 0;
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    do
    {
      strcmp( "-auto-place", &argv[0] );
      if ( (unsigned char)( ccdep2 < ccdep1 ) == 0 )
        Settings.AutoPlace = 1;
      i++;
    }
    while ( argc <= i + 1 );
  }
  }
  bindtextdomain( "pcb", "/usr/share/locale" );
  textdomain( "pcb" );
  bind_textdomain_codeset( "pcb", "UTF-8" );
  gtk_window_set_default_icon( gdk_pixbuf_new_from_xpm_data( icon_bits ) );
  gport->top_window->object.parent_instance.g_type_instance.g_class->g_type = gtk_window_new( 0 );
  gtk_window_set_title( (GtkWindow*)g_type_check_instance_cast( &gport->top_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), "PCB" );
  gtk_window_set_default_size( (GtkWindow*)g_type_check_instance_cast( &gport->top_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), ghidgui->top_window_width, ghidgui->top_window_height );
  if ( Settings.AutoPlace )
  {
    gtk_widget_set_uposition( (GtkWidget*)g_type_check_instance_cast( &gport->top_window->object.parent_instance.g_type_instance, gtk_widget_get_type( ) ), 10, 10 );
  }
  gtk_widget_realize( &gport->top_window->object.parent_instance.g_type_instance.g_class->g_type );
  gtk_widget_show_all( &gport->top_window->object.parent_instance.g_type_instance.g_class->g_type );
  ghidgui->creating = 1;
  return;
}
void ghid_destroy_gc( hidGC gc )
{
  if ( gc->gc )
    g_object_unref( &gc->gc );
}
hidGC ghid_make_gc( void )
{
  /* phantom */ hidGC rv;
{
  /* phantom */ gsize __n;
  /* phantom */ gsize __s;
  /* phantom */ gpointer __p;
  *(int*)(g_malloc0( 32 )) = ghid_hid;
  *(int*)g_malloc0( 32 )/*.8*/ = Settings.BackgroundColor[0];
  return g_malloc0( 32 );
}
}
void ghid_do_export( HID_Attr_Val *options )
{
  ghid_create_pcb_widgets( );
  ghid_layer_buttons_update( );
  ghid_show_layer_buttons( );
  if ( stdin_listen )
  {
    g_io_add_watch( g_io_channel_unix_new( fileno( stdin ) ), 1, &ghid_listener_cb, 0 );
  }
  ghid_notify_gui_is_up( );
  gtk_main( );
}
gint LayersChanged( int argc, char **argv, int px, int py )
{
  if ( ghidgui && ghidgui->ui_manager->parent.g_type_instance.g_class->g_type )
  {
    ghid_config_groups_changed( );
    ghid_layer_buttons_update( );
    ghid_show_layer_buttons( );
    pcb_colors_from_settings( PCB );
  }
  return 0;
}
int ToggleView( int argc, char **argv, int x, int y )
{
  static gboolean in_toggle_view;
  int i, l;
  gboolean active;
  if ( in_toggle_view )
  {
    __fprintf_chk( stderr, 1, "ToggleView() called on top of another ToggleView()\nPlease report this and how it happened\n" );
    return 0;
  }
  in_toggle_view = 1;
  if ( argc )
  {
    if ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( argv[0] * 2 ) + 1) & 8 ) & 255 )
    {
      l = strtol( argv[0], 0, 10 ) + -1;
    }
    else
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      strcmp( "Silk", argv[0] );
      l = 16;
      if ( (unsigned char)( ccdep2 < ccdep1 ) )
      {
        /* phantom */ size_t __s1_len;
        /* phantom */ size_t __s2_len;
        strcmp( "Rats", argv[0] );
        l = 17;
        if ( (unsigned char)( ccdep2 < ccdep1 ) )
        {
          /* phantom */ size_t __s1_len;
          /* phantom */ size_t __s2_len;
          strcmp( "Pins", argv[0] );
          l = 18;
          if ( (unsigned char)( ccdep2 < ccdep1 ) )
          {
            /* phantom */ size_t __s1_len;
            /* phantom */ size_t __s2_len;
            strcmp( "Vias", argv[0] );
            l = 19;
            if ( (unsigned char)( ccdep2 < ccdep1 ) )
            {
              /* phantom */ size_t __s1_len;
              /* phantom */ size_t __s2_len;
              strcmp( "Mask", argv[0] );
              l = 21;
              if ( (unsigned char)( ccdep2 < ccdep1 ) )
              {
                /* phantom */ size_t __s1_len;
                /* phantom */ size_t __s2_len;
                strcmp( "BackSide", argv[0] );
                l = 20;
                if ( (unsigned char)( ccdep2 < ccdep1 ) )
                {
                  if ( PCB->Data->LayerN < 0 )
                  {
                    in_toggle_view = 0;
                    Message( "Syntax error.  Usage:\n%s\n", toggleview_syntax[0] );
                    return 1;
                  }
                {
                  do
                  {
                    if ( strcmp( argv[0], &PCB->Data->Layer[1].Name ) == 0 )
                    {
                    }
                    else
                    {
                      i++;
                    }
                  }
                  while ( i + 1 <= PCB->Data->LayerN + 1 );
                }
                }
              }
            }
          }
        }
      }
    }
    __printf_chk( 1, "ToggleView():  l = %d\n", l );
    active = gtk_toggle_button_get_active( (GtkToggleButton*)g_type_check_instance_cast( &layer_buttons->layer_enable_button->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ) );
    gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &layer_buttons->layer_enable_button->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), active != 1 );
    in_toggle_view = 0;
    return 0;
  }
}
int SelectLayer( int argc, char **argv, int x, int y )
{
  int newl;
  if ( argc == 0 )
  {
    Message( "Syntax error.  Usage:\n%s\n", selectlayer_syntax[0] );
    return 1;
  }
  newl = 16;
  if ( strcasecmp( argv[0], "silk" ) && strcasecmp( argv[0], "rats" ) )
  {
    newl = strtol( argv[0], 0, 10 ) + -1;
  }
  gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &layer_buttons[ newl ].radio_select_button[0].object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), 1 );
  return 0;
}
void register_gtk_topwindow_action_list( void )
{
  hid_register_actions( gtk_topwindow_action_list, 3 );
  return;
}
void register_pcbmenu_attr( void )
{
  hid_register_attributes( pcbmenu_attr, 1 );
  return;
}
void ghid_check_special_key( char *accel, char *name )
{
  int edx;
  int ebx;
  int esi;
  /* phantom */ size_t len;
  static unsigned int *mods;
  unsigned int ind;
  if ( !1 && accel )
  {
    mods[0] = ~( 0 - ( ( strstr( accel, "&lt;alt&gt;" ) < 1 ) & 1 ) ) & 128;
    mods[0] = strstr( accel, "&lt;control&gt;" ) != 0 ? ~( 0 - ( ( strstr( accel, "&lt;alt&gt;" ) < 1 ) & 1 ) ) & 128 : ( ~( 0 - ( ( strstr( accel, "&lt;alt&gt;" ) < 1 ) & 1 ) ) & 128 ) | 64;
    mods[0] = strstr( accel, "&lt;shift&gt;" ) != 0 ? strstr( accel, "&lt;control&gt;" ) != 0 ? ~( 0 - ( ( strstr( accel, "&lt;alt&gt;" ) < 1 ) & 1 ) ) & 128 : ( ~( 0 - ( ( strstr( accel, "&lt;alt&gt;" ) < 1 ) & 1 ) ) & 128 ) | 64 : ( strstr( accel, "&lt;control&gt;" ) != 0 ? ~( 0 - ( ( strstr( accel, "&lt;alt&gt;" ) < 1 ) & 1 ) ) & 128 : ( ~( 0 - ( ( strstr( accel, "&lt;alt&gt;" ) < 1 ) & 1 ) ) & 128 ) | 64 ) | 32;
    if ( strlen( accel ) > 2 )
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      unsigned char *__s1;
      /* phantom */ int __result;
      __s1[0] = accel + strlen( accel ) + -3;
      if ( __s1[0] == 84 && __s1[1] == 97 && __s1[2] == 98 && __s1[3] == 0 )
        ind = mods | 1;
        ghid_hotkey_actions[ ind ] = g_strdup( name );
    }
    else
    if ( 1 )
      goto B12;
  {
B12:;
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    unsigned char *__s1;
    /* phantom */ int __result;
    __s1[0] = accel + strlen( accel ) + -2;
    if ( __s1[0] == 85 && __s1[1] == 112 && __s1[2] == 0 )
      ind = mods | 2;
    else
    {
      if ( strlen( accel ) <= 3 )
      {
        return;
      }
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      strcmp( "Down", accel + strlen( accel ) + -4 );
      if ( 1 )
        ind = mods | 3;
      else
      {
        /* phantom */ size_t __s1_len;
        /* phantom */ size_t __s2_len;
        strcmp( "Left", accel + strlen( accel ) + -4 );
        if ( 1 )
          ind = mods | 4;
        else
        {
          if ( strlen( accel ) == 4 )
          {
            return;
          }
        {
          /* phantom */ size_t __s1_len;
          /* phantom */ size_t __s2_len;
          strcmp( "Right", accel + strlen( accel ) + -5 );
          if ( 1 )
            ind = mods | 5;
        }
        }
      }
    }
    }
  }
  }
  return;
}
void ghid_ui_info_indent( int indent )
{
  int i;
  if ( indent > 0 )
  {
    i = 0;
    do
    {
      i++;
      ghid_ui_info_append( " " );
    }
    while ( indent <= i );
  }
  return;
}
void ghid_ui_info_append( gchar *new )
{
  int edx;
  gchar *p;
  if ( new_ui_info_sz )
  {
    while ( strlen( np ) + strlen( new ) + 1 <= n )
    {
      size_t n;
      gchar *np;
      n += 1024;
      np[0] = realloc( np, n + 1024 );
      if ( realloc( np, n + 1024 ) == 0 )
      {
        __fprintf_chk( stderr, 1, "ghid_ui_info_append():  realloc of size %ld failed\n", (int)n );
        exit( 1 );
      }
      new_ui_info = (gchar*)realloc( np, n + 1024 );
      new_ui_info_sz = n;
    }
    while ( p[0] = p + np, new[0] )
    {
      p[0] = new[0] = new + 1;
      p[0] = p + 1;
    }
    p[0] = 0;
    return;
  }
  else
  {
    n = new_ui_info_sz = 1024;
    np[0] = calloc( 1024, 1 );
    new_ui_info = calloc( 1024, sizeof( gchar ) );
  }
}
int AdjustStyle( int argc, char **argv, int x, int y )
{
  RouteStyleType *rst;
  if ( argc > 1 )
  {
    Message( "Syntax error.  Usage:\n%s\n", adjuststyle_syntax[0] );
    return 1;
  }
  rst = 0;
  if ( route_style_index > 3 )
  {
    rst = &route_style_button[ 0 ].route_style;
    ghid_route_style_dialog( 0, &route_style_button[ 0 ].route_style );
  }
  ghid_route_style_dialog( route_style_index, rst );
  return 0;
}
int EditLayerGroups( int argc, char **argv, int x, int y )
{
  if ( argc )
  {
    Message( "Syntax error.  Usage:\n%s\n", editlayergroups_syntax[0] );
    return 1;
  }
  hid_actionl( "DoWindows", (long long)( "Preferences" ) );
  return 0;
}
void register_ghid_menu_action_list( void )
{
  hid_register_actions( ghid_menu_action_list, 2 );
  return;
}
#if 0
#endif
