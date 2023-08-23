typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    undefined8;
typedef qword Implementation;

typedef qword Cache;

typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef struct rpath_command rpath_command, *Prpath_command;

typedef struct lc_str lc_str, *Plc_str;

struct lc_str {
    dword offset;
};

struct rpath_command {
    dword cmd;
    dword cmdsize;
    struct lc_str path;
};

typedef struct build_tool_version build_tool_version, *Pbuild_tool_version;

struct build_tool_version {
    dword tool;
    dword version;
};

typedef struct dyld_info_command dyld_info_command, *Pdyld_info_command;

struct dyld_info_command {
    dword cmd;
    dword cmdsize;
    dword rebase_off;
    dword rebase_size;
    dword bind_off;
    dword bind_size;
    dword weak_bind_off;
    dword weak_bind_size;
    dword lazy_bind_off;
    dword lazy_bind_size;
    dword export_off;
    dword export_size;
};

typedef struct build_version_command build_version_command, *Pbuild_version_command;

struct build_version_command {
    dword cmd;
    dword cmdsize;
    dword platform;
    dword minos;
    dword sdk;
    dword ntools;
    struct build_tool_version build_tool_version[][1];
};

typedef struct dylib dylib, *Pdylib;

struct dylib {
    struct lc_str name;
    dword timestamp;
    dword current_version;
    dword compatibility_version;
};

typedef struct section section, *Psection;

struct section {
    char sectname[16];
    char segname[16];
    qword addr;
    qword size;
    dword offset;
    dword align;
    dword reloff;
    dword nrelocs;
    dword flags;
    dword reserved1;
    dword reserved2;
    dword reserved3;
};

typedef struct entry_point_command entry_point_command, *Pentry_point_command;

struct entry_point_command {
    dword cmd;
    dword cmdsize;
    qword entryoff;
    qword stacksize;
};

typedef struct encryption_info_command encryption_info_command, *Pencryption_info_command;

struct encryption_info_command {
    dword cmd;
    dword cmdsize;
    dword cryptoff;
    dword cryptsize;
    dword cryptid;
    dword pad;
};

typedef struct dysymtab_command dysymtab_command, *Pdysymtab_command;

struct dysymtab_command {
    dword cmd;
    dword cmdsize;
    dword ilocalsym;
    dword nlocalsym;
    dword iextdefsym;
    dword nextdefsym;
    dword iundefsym;
    dword nundefsym;
    dword tocoff;
    dword ntoc;
    dword modtaboff;
    dword nmodtab;
    dword extrefsymoff;
    dword nextrefsyms;
    dword indirectsymoff;
    dword nindirectsyms;
    dword extreloff;
    dword nextrel;
    dword locreloff;
    dword nlocrel;
};

typedef struct segment_command segment_command, *Psegment_command;

struct segment_command {
    dword cmd;
    dword cmdsize;
    char segname[16];
    qword vmaddr;
    qword vmsize;
    qword fileoff;
    qword filesize;
    dword maxprot;
    dword initprot;
    dword nsects;
    dword flags;
};

typedef struct dylib_command dylib_command, *Pdylib_command;

struct dylib_command {
    dword cmd;
    dword cmdsize;
    struct dylib dylib;
};

typedef struct symtab_command symtab_command, *Psymtab_command;

struct symtab_command {
    dword cmd;
    dword cmdsize;
    dword symoff;
    dword nsyms;
    dword stroff;
    dword strsize;
};

typedef struct source_version_command source_version_command, *Psource_version_command;

struct source_version_command {
    dword cmd;
    dword cmdsize;
    qword version;
};

typedef struct mach_header mach_header, *Pmach_header;

struct mach_header {
    dword magic;
    dword cputype;
    dword cpusubtype;
    dword filetype;
    dword ncmds;
    dword sizeofcmds;
    dword flags;
    dword reserved;
};

typedef struct dylinker_command dylinker_command, *Pdylinker_command;

struct dylinker_command {
    dword cmd;
    dword cmdsize;
    struct lc_str name;
};

typedef struct linkedit_data_command linkedit_data_command, *Plinkedit_data_command;

struct linkedit_data_command {
    dword cmd;
    dword cmdsize;
    dword dataoff;
    dword datasize;
};

typedef struct method_list_t method_list_t, *Pmethod_list_t;

struct method_list_t {
    dword entsizeAndFlags;
    dword count;
};

typedef struct ivar_list_t ivar_list_t, *Pivar_list_t;

struct ivar_list_t {
    dword entsize;
    dword count;
};

typedef struct method_t method_t, *Pmethod_t;

struct method_t {
    string * name;
    string * types;
    void * imp;
};

typedef dword bool;

typedef struct class_t class_t, *Pclass_t;

typedef struct class_rw_t class_rw_t, *Pclass_rw_t;

typedef struct protocol_list_t protocol_list_t, *Pprotocol_list_t;

typedef struct objc_property_list objc_property_list, *Pobjc_property_list;

struct class_rw_t {
    qword flags;
    qword instanceStart;
    qword instanceSize;
    char * name;
    struct method_list_t * baseMethods;
    struct protocol_list_t * baseProtocols;
    struct ivar_list_t * ivars;
    qword weakIvarLayout;
    struct objc_property_list * baseProperties;
};

struct objc_property_list {
    dword entsize;
    dword count;
};

struct class_t {
    struct class_t * isa;
    struct class_t * superclass;
    Cache cache;
    Implementation vtable;
    struct class_rw_t * data;
};

struct protocol_list_t {
    qword count;
};

typedef struct protocol_t protocol_t, *Pprotocol_t;

struct protocol_t {
    qword isa;
    string * name;
    struct protocol_list_t * protocols;
    struct method_list_t * instanceMethods;
    struct method_list_t * classMethods;
    struct method_list_t * optionalInstanceMethods;
    struct method_list_t * optionalClassMethods;
    struct objc_property_list * instanceProperties;
    qword unknown0;
    qword unknown1;
};

typedef struct ivar_t ivar_t, *Pivar_t;

struct ivar_t {
    qword * offset;
    string * name;
    string * type;
    dword alignment;
    dword size;
};

typedef struct method_list_t_1_ method_list_t_1_, *Pmethod_list_t_1_;

struct method_list_t_1_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
};

typedef struct protocol_list_t_1_ protocol_list_t_1_, *Pprotocol_list_t_1_;

struct protocol_list_t_1_ {
    qword count;
    struct protocol_t * protocol0;
};

typedef struct objc_property_list_4_ objc_property_list_4_, *Pobjc_property_list_4_;

typedef struct objc_property objc_property, *Pobjc_property;

struct objc_property {
    char * name;
    char * name;
};

struct objc_property_list_4_ {
    dword entsize;
    dword count;
    struct objc_property property0;
    struct objc_property property1;
    struct objc_property property2;
    struct objc_property property3;
};

typedef struct ivar_list_t_1_ ivar_list_t_1_, *Pivar_list_t_1_;

struct ivar_list_t_1_ {
    dword entsize;
    dword count;
    struct ivar_t var0;
};

typedef struct method_list_t_65_ method_list_t_65_, *Pmethod_list_t_65_;

struct method_list_t_65_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
    struct method_t method16;
    struct method_t method17;
    struct method_t method18;
    struct method_t method19;
    struct method_t method20;
    struct method_t method21;
    struct method_t method22;
    struct method_t method23;
    struct method_t method24;
    struct method_t method25;
    struct method_t method26;
    struct method_t method27;
    struct method_t method28;
    struct method_t method29;
    struct method_t method30;
    struct method_t method31;
    struct method_t method32;
    struct method_t method33;
    struct method_t method34;
    struct method_t method35;
    struct method_t method36;
    struct method_t method37;
    struct method_t method38;
    struct method_t method39;
    struct method_t method40;
    struct method_t method41;
    struct method_t method42;
    struct method_t method43;
    struct method_t method44;
    struct method_t method45;
    struct method_t method46;
    struct method_t method47;
    struct method_t method48;
    struct method_t method49;
    struct method_t method50;
    struct method_t method51;
    struct method_t method52;
    struct method_t method53;
    struct method_t method54;
    struct method_t method55;
    struct method_t method56;
    struct method_t method57;
    struct method_t method58;
    struct method_t method59;
    struct method_t method60;
    struct method_t method61;
    struct method_t method62;
    struct method_t method63;
    struct method_t method64;
};

typedef qword ID;

typedef struct method_list_t_26_ method_list_t_26_, *Pmethod_list_t_26_;

struct method_list_t_26_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
    struct method_t method16;
    struct method_t method17;
    struct method_t method18;
    struct method_t method19;
    struct method_t method20;
    struct method_t method21;
    struct method_t method22;
    struct method_t method23;
    struct method_t method24;
    struct method_t method25;
};

typedef struct method_list_t_16_ method_list_t_16_, *Pmethod_list_t_16_;

struct method_list_t_16_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
};

typedef struct method_list_t_4_ method_list_t_4_, *Pmethod_list_t_4_;

struct method_list_t_4_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
};

typedef struct objc_property_list_1_ objc_property_list_1_, *Pobjc_property_list_1_;

struct objc_property_list_1_ {
    dword entsize;
    dword count;
    struct objc_property property0;
};

typedef struct method_list_t_10_ method_list_t_10_, *Pmethod_list_t_10_;

struct method_list_t_10_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
};

typedef struct method_list_t_6_ method_list_t_6_, *Pmethod_list_t_6_;

struct method_list_t_6_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
};

typedef qword SEL;

typedef struct objc_image_info objc_image_info, *Pobjc_image_info;

struct objc_image_info {
    dword version;
    dword flags;
};




// Function Stack Size: 0x20 bytes

bool _TtC10HelloWorld11AppDelegate::application_didFinishLaunchingWithOptions_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  uint uVar1;
  
  uVar1 = __s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF(1);
  return uVar1 & 1;
}



// Function Stack Size: 0x28 bytes

ID _TtC10HelloWorld11AppDelegate::application_configurationForConnectingSceneSession_options_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  
  uVar1 = _objc_retain();
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  uVar4 = _objc_retain(param_5);
  _objc_msgSend(uVar3,"role");
  uVar5 = _objc_retainAutoreleasedReturnValue();
  uVar6 = _objc_allocWithZone(&_OBJC_CLASS___UISceneConfiguration);
  uVar7 = __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000015,0x80000001000061f0);
  uVar6 = _objc_msgSend(uVar6,"initWithName:sessionRole:",uVar7,uVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar7);
  IVar8 = _objc_autoreleaseReturnValue(uVar6);
  return IVar8;
}



// Function Stack Size: 0x20 bytes

void _TtC10HelloWorld11AppDelegate::application_didDiscardSceneSessions_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  return;
}



// Function Stack Size: 0x10 bytes

ID _TtC10HelloWorld11AppDelegate::init(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  long lStack_28;
  
  if (DAT_10000da40 == 0) {
    DAT_10000da40 = _swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld11AppDelegate);
  }
  local_30 = param_1;
  lStack_28 = DAT_10000da40;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  return IVar1;
}



void FUN_100005820(void)

{
  if (DAT_10000da40 == 0) {
    DAT_10000da40 = _swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld11AppDelegate);
  }
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,"dealloc");
  return;
}



undefined8 entry(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_10000da40 == 0) {
    DAT_10000da40 = _swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld11AppDelegate);
  }
  _NSStringFromClass();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _UIApplicationMain(param_1,param_2,0,uVar1);
  _objc_release(uVar1);
  return 0;
}



void FUN_1000058ec(void)

{
  if (DAT_10000da40 != 0) {
    return;
  }
  DAT_10000da40 = _swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld11AppDelegate);
  return;
}



void FUN_100005900(void)

{
  DAT_10000da40 = _swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld11AppDelegate);
  return;
}



// Function Stack Size: 0x10 bytes

ID _TtC10HelloWorld13SceneDelegate::window(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + window);
  _objc_retain(uVar2);
  IVar1 = _objc_autoreleaseReturnValue(uVar2);
  return IVar1;
}



// Function Stack Size: 0x18 bytes

void _TtC10HelloWorld13SceneDelegate::setWindow_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + window);
  *(ID *)(param_1 + window) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  return;
}



// Function Stack Size: 0x28 bytes

void _TtC10HelloWorld13SceneDelegate::scene_willConnectToSession_options_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = _objc_retain();
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  uVar4 = _objc_retain(param_5);
  FUN_100005b28(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  return;
}



// Function Stack Size: 0x18 bytes

void _TtC10HelloWorld13SceneDelegate::sceneDidEnterBackground_(ID param_1,SEL param_2,ID param_3)

{
  return;
}



// Function Stack Size: 0x10 bytes

ID _TtC10HelloWorld13SceneDelegate::init(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + window) = 0;
  if (DAT_10000da78 == 0) {
    DAT_10000da78 = _swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld13SceneDelegate);
  }
  local_30 = param_1;
  lStack_28 = DAT_10000da78;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  return IVar1;
}



void FUN_100005a88(void)

{
  if (DAT_10000da78 == 0) {
    DAT_10000da78 = _swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld13SceneDelegate);
  }
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,"dealloc");
  return;
}



// Function Stack Size: 0x10 bytes

void _TtC10HelloWorld13SceneDelegate::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_release(*(undefined8 *)(param_1 + window));
  return;
}



void FUN_100005ae8(void)

{
  if (DAT_10000da78 != 0) {
    return;
  }
  DAT_10000da78 = _swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld13SceneDelegate);
  return;
}



void FUN_100005afc(void)

{
  DAT_10000da78 = _swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld13SceneDelegate);
  return;
}



void FUN_100005b28(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined auVar5 [16];
  undefined8 local_48;
  
  local_48 = FUN_100005e98();
  uVar1 = _swift_getInitializedObjCClass(&_OBJC_CLASS___UIWindowScene);
  lVar2 = _swift_dynamicCastObjCClass(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = _objc_allocWithZone(&_OBJC_CLASS___UIWindow);
    uVar3 = _objc_retain(param_1);
    uVar1 = _objc_msgSend(uVar1,"initWithWindowScene:",lVar2);
    if (DAT_10000da80 == 0) {
      if (DAT_10000da88 == 0) {
        DAT_10000da88 = _swift_getWitnessTable(&DAT_100007df8,&DAT_100008040);
      }
      auVar5 = __s7SwiftUI19UIHostingControllerCMa(0,&DAT_100008040,DAT_10000da88);
      if (auVar5._8_8_ == 0) {
        DAT_10000da80 = auVar5._0_8_;
      }
    }
    _objc_allocWithZone();
    uVar4 = __s7SwiftUI19UIHostingControllerC8rootViewACyxGx_tcfc(&local_48);
    _objc_msgSend(uVar1,"setRootViewController:",uVar4);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + _TtC10HelloWorld13SceneDelegate::window);
    *(undefined8 *)(unaff_x20 + _TtC10HelloWorld13SceneDelegate::window) = uVar1;
    uVar1 = _objc_retain(uVar1);
    _objc_release(uVar4);
    _objc_msgSend(uVar1,"makeKeyAndVisible");
    _objc_release(uVar3);
    _objc_release(uVar1);
    return;
  }
  return;
}



void FUN_100005ca8(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long lVar2;
  
  if (1 < param_1) {
    lVar1 = FUN_100005ca8(param_1 + -1);
    lVar2 = FUN_100005ca8(param_1 + -2);
    if (SCARRY8(lVar1,lVar2)) {
                    // WARNING: Treating indirect jump as call
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100005ce8);
      (*UNRECOVERED_JUMPTABLE)(lVar1 + lVar2);
      return;
    }
  }
  return;
}



void FUN_100005ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  byte bVar6;
  undefined (*in_x8) [16];
  undefined auVar7 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = param_1;
  if (DAT_10000da90 == 0) {
    DAT_10000da90 = _swift_getWitnessTable(PTR___sSiSzsMc_100008028,PTR___sSiN_100008020);
  }
  lVar2 = DAT_10000da90;
  puVar1 = PTR___sSiN_100008020;
  __sSzsE11descriptionSSvg(PTR___sSiN_100008020,DAT_10000da90);
  local_60 = 0xd000000000000012;
  uStack_58 = 0x8000000100006f80;
  __sSS6appendyySSF();
  uVar4 = uStack_58;
  uVar3 = local_60;
  _swift_bridgeObjectRelease(extraout_x1);
  local_60 = uVar3;
  uStack_58 = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  __sSS6appendyySSF(0x3d29,0xe200000000000000);
  uVar5 = uStack_58;
  uVar3 = local_60;
  _swift_bridgeObjectRelease(uVar4);
  local_60 = FUN_100005ca8(param_1);
  auVar7 = __sSzsE11descriptionSSvg(puVar1,lVar2);
  local_60 = uVar3;
  uStack_58 = uVar5;
  _swift_bridgeObjectRetain(uVar5);
  __sSS6appendyySSF(auVar7._0_8_,auVar7._8_8_);
  uVar4 = uStack_58;
  uVar3 = local_60;
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(auVar7._8_8_);
  local_60 = uVar3;
  uStack_58 = uVar4;
  if (DAT_10000da98 == 0) {
    DAT_10000da98 = _swift_getWitnessTable(PTR___sSSSysMc_100008018,PTR___sSSN_100008010);
  }
  bVar6 = (byte)DAT_10000da98;
  auVar7 = __s7SwiftUI4TextVyACxcSyRzlufC(&local_60,PTR___sSSN_100008010);
  *in_x8 = auVar7;
  in_x8[1][0] = bVar6 & 1;
  *(undefined8 *)(in_x8[1] + 8) = param_4;
  return;
}



void FUN_100005e78(undefined8 param_1,undefined8 param_2)

{
  __s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ
            (param_1,param_2,&DAT_100008040);
  return;
}



void FUN_100005e84(undefined8 param_1,undefined8 param_2)

{
  __s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ
            (param_1,param_2,&DAT_100008040);
  return;
}



void FUN_100005e90(void)

{
  undefined8 *unaff_x20;
  
  FUN_100005ce8(*unaff_x20);
  return;
}



long FUN_100005e98(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  uVar1 = _objc_allocWithZone(&_OBJC_CLASS___NSDate);
  uVar1 = _objc_msgSend(uVar1,"init");
  dVar3 = (double)_objc_msgSend(uVar1,"timeIntervalSince1970");
  _objc_release(uVar1);
  if ((dVar3 < 9.223372036854776e+18) &&
     (-9.223372036854778e+18 < dVar3 && ((ulong)dVar3 & 0x7ff0000000000000) != 0x7ff0000000000000))
  {
    return (long)dVar3 % 4 + 6;
  }
                    // WARNING: Treating indirect jump as call
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100005f3c);
  lVar2 = (*UNRECOVERED_JUMPTABLE)();
  return lVar2;
}



undefined  [16] FUN_100005f3c(void)

{
  return ZEXT816(0x100008040);
}



void FUN_100005f4c(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance(param_1,&DAT_100007dd0,1);
  return;
}



undefined * FUN_100005f5c(void)

{
  return PTR___s7SwiftUI4TextVAA4ViewAAWP_100008008;
}



void __s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF(void)

{
  (*(code *)PTR___s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF_10000c000)();
  return;
}



void __s7SwiftUI19UIHostingControllerC8rootViewACyxGx_tcfc(void)

{
  (*(code *)PTR___s7SwiftUI19UIHostingControllerC8rootViewACyxGx_tcfc_10000c008)();
  return;
}



void __s7SwiftUI19UIHostingControllerCMa(void)

{
  (*(code *)PTR___s7SwiftUI19UIHostingControllerCMa_10000c010)();
  return;
}



void __s7SwiftUI4TextVyACxcSyRzlufC(void)

{
  (*(code *)PTR___s7SwiftUI4TextVyACxcSyRzlufC_10000c018)();
  return;
}



void __s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ
               (void)

{
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10000c020
  )();
  return;
}



void __s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ
               (void)

{
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_10000c028
  )();
  return;
}



void __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(void)

{
  (*(code *)PTR___sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF_10000c030)();
  return;
}



void __sSS6appendyySSF(void)

{
  (*(code *)PTR___sSS6appendyySSF_10000c038)();
  return;
}



void __sSzsE11descriptionSSvg(void)

{
  (*(code *)PTR___sSzsE11descriptionSSvg_10000c040)();
  return;
}



void _NSStringFromClass(void)

{
  (*(code *)PTR__NSStringFromClass_10000c048)();
  return;
}



void _UIApplicationMain(void)

{
  (*(code *)PTR__UIApplicationMain_10000c050)();
  return;
}



void _objc_allocWithZone(void)

{
  (*(code *)PTR__objc_allocWithZone_10000c058)();
  return;
}



void _objc_autoreleaseReturnValue(void)

{
  (*(code *)PTR__objc_autoreleaseReturnValue_10000c060)();
  return;
}



void _objc_msgSend(void)

{
  (*(code *)PTR__objc_msgSend_10000c068)();
  return;
}



void _objc_msgSendSuper2(void)

{
  (*(code *)PTR__objc_msgSendSuper2_10000c070)();
  return;
}



void _objc_release(void)

{
  (*(code *)PTR__objc_release_10000c078)();
  return;
}



void _objc_retain(void)

{
  (*(code *)PTR__objc_retain_10000c080)();
  return;
}



void _objc_retainAutoreleasedReturnValue(void)

{
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_10000c088)();
  return;
}



void _swift_bridgeObjectRelease(void)

{
  (*(code *)PTR__swift_bridgeObjectRelease_10000c090)();
  return;
}



void _swift_bridgeObjectRetain(void)

{
  (*(code *)PTR__swift_bridgeObjectRetain_10000c098)();
  return;
}



void _swift_dynamicCastObjCClass(void)

{
  (*(code *)PTR__swift_dynamicCastObjCClass_10000c0a0)();
  return;
}



void _swift_getInitializedObjCClass(void)

{
  (*(code *)PTR__swift_getInitializedObjCClass_10000c0a8)();
  return;
}



void _swift_getOpaqueTypeConformance(void)

{
  (*(code *)PTR__swift_getOpaqueTypeConformance_10000c0b0)();
  return;
}



void _swift_getWitnessTable(void)

{
  (*(code *)PTR__swift_getWitnessTable_10000c0b8)();
  return;
}


