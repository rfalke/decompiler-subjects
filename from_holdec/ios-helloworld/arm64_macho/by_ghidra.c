typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    undefined4;
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
  
  uVar1 = __stubs::__s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF(1);
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
  
  uVar1 = __stubs::_objc_retain();
  uVar2 = __stubs::_objc_retain(param_3);
  uVar3 = __stubs::_objc_retain(param_4);
  uVar4 = __stubs::_objc_retain(param_5);
  __stubs::_objc_msgSend(uVar3,"role");
  uVar5 = __stubs::_objc_retainAutoreleasedReturnValue();
  uVar6 = __stubs::_objc_allocWithZone(&_OBJC_CLASS___UISceneConfiguration);
  uVar7 = __stubs::__sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000015,0x80000001000061f0);
  uVar6 = __stubs::_objc_msgSend(uVar6,"initWithName:sessionRole:",uVar7,uVar5);
  __stubs::_objc_release(uVar2);
  __stubs::_objc_release(uVar3);
  __stubs::_objc_release(uVar4);
  __stubs::_objc_release(uVar1);
  __stubs::_objc_release(uVar5);
  __stubs::_objc_release(uVar7);
                    // WARNING: Could not recover jumptable at 0x000100006000. Too many branches
                    // WARNING: Treating indirect jump as call
  IVar8 = (*(code *)__la_symbol_ptr::_objc_autoreleaseReturnValue)(uVar6);
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
  long lStack40;
  
  if (DAT_10000da40 == 0) {
    DAT_10000da40 =
         __stubs::_swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld11AppDelegate);
  }
  local_30 = param_1;
  lStack40 = DAT_10000da40;
  IVar1 = __stubs::_objc_msgSendSuper2(&local_30,"init");
  return IVar1;
}



void FUN_100005820(void)

{
  if (DAT_10000da40 == 0) {
    DAT_10000da40 =
         __stubs::_swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld11AppDelegate);
  }
  __stubs::_objc_msgSendSuper2(&stack0xffffffffffffffe0,"dealloc");
  return;
}



undefined8 entry(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_10000da40 == 0) {
    DAT_10000da40 =
         __stubs::_swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld11AppDelegate);
  }
  __stubs::_NSStringFromClass();
  uVar1 = __stubs::_objc_retainAutoreleasedReturnValue();
  __stubs::_UIApplicationMain(param_1,param_2,0,uVar1);
  __stubs::_objc_release(uVar1);
  return 0;
}



void FUN_100005900(void)

{
  DAT_10000da40 =
       __stubs::_swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld11AppDelegate);
  return;
}



// Function Stack Size: 0x10 bytes

ID _TtC10HelloWorld13SceneDelegate::window(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + window);
  __stubs::_objc_retain(uVar2);
                    // WARNING: Could not recover jumptable at 0x000100006000. Too many branches
                    // WARNING: Treating indirect jump as call
  IVar1 = (*(code *)__la_symbol_ptr::_objc_autoreleaseReturnValue)(uVar2);
  return IVar1;
}



// Function Stack Size: 0x18 bytes

void _TtC10HelloWorld13SceneDelegate::setWindow_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + window);
  *(ID *)(param_1 + window) = param_3;
  __stubs::_objc_retain(param_3);
  __stubs::_objc_release(uVar1);
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
  
  uVar1 = __stubs::_objc_retain();
  uVar2 = __stubs::_objc_retain(param_3);
  uVar3 = __stubs::_objc_retain(param_4);
  uVar4 = __stubs::_objc_retain(param_5);
  FUN_100005b28(uVar2);
  __stubs::_objc_release(uVar2);
  __stubs::_objc_release(uVar3);
  __stubs::_objc_release(uVar4);
  __stubs::_objc_release(uVar1);
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
  long lStack40;
  
  *(undefined8 *)(param_1 + window) = 0;
  if (DAT_10000da78 == 0) {
    DAT_10000da78 =
         __stubs::_swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld13SceneDelegate);
  }
  local_30 = param_1;
  lStack40 = DAT_10000da78;
  IVar1 = __stubs::_objc_msgSendSuper2(&local_30,"init");
  return IVar1;
}



void FUN_100005a88(void)

{
  if (DAT_10000da78 == 0) {
    DAT_10000da78 =
         __stubs::_swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld13SceneDelegate);
  }
  __stubs::_objc_msgSendSuper2(&stack0xffffffffffffffe0,"dealloc");
  return;
}



// Function Stack Size: 0x10 bytes

void _TtC10HelloWorld13SceneDelegate::_cxx_destruct(ID param_1,SEL param_2)

{
  __stubs::_objc_release(*(undefined8 *)(param_1 + window));
  return;
}



void FUN_100005afc(void)

{
  DAT_10000da78 =
       __stubs::_swift_getInitializedObjCClass(&objc::class_t::_TtC10HelloWorld13SceneDelegate);
  return;
}



void FUN_100005b28(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 local_48;
  
  local_48 = FUN_100005e98();
  uVar1 = __stubs::_swift_getInitializedObjCClass(&_OBJC_CLASS___UIWindowScene);
  lVar2 = __stubs::_swift_dynamicCastObjCClass(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = __stubs::_objc_allocWithZone(&_OBJC_CLASS___UIWindow);
    uVar3 = __stubs::_objc_retain(param_1);
    uVar1 = __stubs::_objc_msgSend(uVar1,"initWithWindowScene:",lVar2);
    if (DAT_10000da80 == 0) {
      if (DAT_10000da88 == 0) {
        DAT_10000da88 = __stubs::_swift_getWitnessTable(&DAT_100007df8,&DAT_100008040);
      }
      puVar5 = &DAT_100008040;
      lVar2 = __stubs::__s7SwiftUI19UIHostingControllerCMa(0,&DAT_100008040,DAT_10000da88);
      if (puVar5 == (undefined *)0x0) {
        DAT_10000da80 = lVar2;
      }
    }
    __stubs::_objc_allocWithZone();
    uVar4 = __stubs::__s7SwiftUI19UIHostingControllerC8rootViewACyxGx_tcfc(&local_48);
    __stubs::_objc_msgSend(uVar1,"setRootViewController:",uVar4);
    __stubs::_objc_release(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + _TtC10HelloWorld13SceneDelegate::window);
    *(undefined8 *)(unaff_x20 + _TtC10HelloWorld13SceneDelegate::window) = uVar1;
    uVar1 = __stubs::_objc_retain(uVar1);
    __stubs::_objc_release(uVar4);
    __stubs::_objc_msgSend(uVar1,"makeKeyAndVisible");
    __stubs::_objc_release(uVar3);
    __stubs::_objc_release(uVar1);
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
                    // WARNING: Could not recover jumptable at 0x000100005ce4. Too many branches
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
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  byte bVar7;
  undefined8 *in_x8;
  undefined8 local_60;
  undefined8 uStack88;
  
  local_60 = param_1;
  if (DAT_10000da90 == 0) {
    DAT_10000da90 = __stubs::_swift_getWitnessTable(__got::__sSiSzsMc,__got::__sSiN);
  }
  lVar5 = DAT_10000da90;
  puVar6 = __got::__sSiN;
  lVar4 = DAT_10000da90;
  __stubs::__sSzsE11descriptionSSvg(__got::__sSiN,DAT_10000da90);
  local_60 = 0xd000000000000012;
  uStack88 = 0x8000000100006f80;
  __stubs::__sSS6appendyySSF();
  uVar2 = uStack88;
  uVar3 = local_60;
  __stubs::_swift_bridgeObjectRelease(lVar4);
  local_60 = uVar3;
  uStack88 = uVar2;
  __stubs::_swift_bridgeObjectRetain(uVar2);
  __stubs::__sSS6appendyySSF(0x3d29,0xe200000000000000);
  uVar1 = uStack88;
  uVar3 = local_60;
  __stubs::_swift_bridgeObjectRelease(uVar2);
  local_60 = FUN_100005ca8(param_1);
  uVar2 = __stubs::__sSzsE11descriptionSSvg(puVar6,lVar5);
  local_60 = uVar3;
  uStack88 = uVar1;
  __stubs::_swift_bridgeObjectRetain(uVar1);
  __stubs::__sSS6appendyySSF(uVar2,lVar5);
  uVar2 = uStack88;
  uVar3 = local_60;
  __stubs::_swift_bridgeObjectRelease(uVar1);
  __stubs::_swift_bridgeObjectRelease(lVar5);
  local_60 = uVar3;
  uStack88 = uVar2;
  if (DAT_10000da98 == 0) {
    DAT_10000da98 = __stubs::_swift_getWitnessTable(__got::__sSSSysMc,__got::__sSSN);
  }
  bVar7 = (byte)DAT_10000da98;
  puVar6 = __got::__sSSN;
  uVar3 = __stubs::__s7SwiftUI4TextVyACxcSyRzlufC(&local_60);
  *in_x8 = uVar3;
  in_x8[1] = puVar6;
  *(byte *)(in_x8 + 2) = bVar7 & 1;
  in_x8[3] = param_4;
  return;
}



long FUN_100005e98(void)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  
  uVar2 = __stubs::_objc_allocWithZone(&_OBJC_CLASS___NSDate);
  uVar2 = __stubs::_objc_msgSend(uVar2,"init");
  dVar5 = (double)__stubs::_objc_msgSend(uVar2,"timeIntervalSince1970");
  __stubs::_objc_release(uVar2);
  if ((dVar5 < 9.223372036854776e+18) &&
     (-9.223372036854778e+18 < dVar5 && ((ulong)dVar5 & 0x7ff0000000000000) != 0x7ff0000000000000))
  {
    uVar4 = (ulong)dVar5;
    uVar1 = uVar4 + 3;
    if (-1 < (long)uVar4) {
      uVar1 = uVar4;
    }
    return (uVar4 - (uVar1 & 0xfffffffffffffffc)) + 6;
  }
                    // WARNING: Could not recover jumptable at 0x000100005f38. Too many branches
                    // WARNING: Treating indirect jump as call
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100005f3c);
  lVar3 = (*UNRECOVERED_JUMPTABLE)();
  return lVar3;
}



void __stubs::__s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF(void)

{
  (*(code *)__la_symbol_ptr::__s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF)();
  return;
}



void __stubs::__s7SwiftUI19UIHostingControllerC8rootViewACyxGx_tcfc(void)

{
  (*(code *)__la_symbol_ptr::__s7SwiftUI19UIHostingControllerC8rootViewACyxGx_tcfc)();
  return;
}



void __stubs::__s7SwiftUI19UIHostingControllerCMa(void)

{
  (*(code *)__la_symbol_ptr::__s7SwiftUI19UIHostingControllerCMa)();
  return;
}



void __stubs::__s7SwiftUI4TextVyACxcSyRzlufC(void)

{
  (*(code *)__la_symbol_ptr::__s7SwiftUI4TextVyACxcSyRzlufC)();
  return;
}



void __stubs::__sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(void)

{
  (*(code *)__la_symbol_ptr::__sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF)();
  return;
}



void __stubs::__sSS6appendyySSF(void)

{
  (*(code *)__la_symbol_ptr::__sSS6appendyySSF)();
  return;
}



void __stubs::__sSzsE11descriptionSSvg(void)

{
  (*(code *)__la_symbol_ptr::__sSzsE11descriptionSSvg)();
  return;
}



void __stubs::_NSStringFromClass(void)

{
  (*(code *)__la_symbol_ptr::_NSStringFromClass)();
  return;
}



void __stubs::_UIApplicationMain(void)

{
  (*(code *)__la_symbol_ptr::_UIApplicationMain)();
  return;
}



void __stubs::_objc_allocWithZone(void)

{
  (*(code *)__la_symbol_ptr::_objc_allocWithZone)();
  return;
}



void __stubs::_objc_msgSend(void)

{
  (*(code *)__la_symbol_ptr::_objc_msgSend)();
  return;
}



void __stubs::_objc_msgSendSuper2(void)

{
  (*(code *)__la_symbol_ptr::_objc_msgSendSuper2)();
  return;
}



void __stubs::_objc_release(void)

{
  (*(code *)__la_symbol_ptr::_objc_release)();
  return;
}



void __stubs::_objc_retain(void)

{
  (*(code *)__la_symbol_ptr::_objc_retain)();
  return;
}



void __stubs::_objc_retainAutoreleasedReturnValue(void)

{
  (*(code *)__la_symbol_ptr::_objc_retainAutoreleasedReturnValue)();
  return;
}



void __stubs::_swift_bridgeObjectRelease(void)

{
  (*(code *)__la_symbol_ptr::_swift_bridgeObjectRelease)();
  return;
}



void __stubs::_swift_bridgeObjectRetain(void)

{
  (*(code *)__la_symbol_ptr::_swift_bridgeObjectRetain)();
  return;
}



void __stubs::_swift_dynamicCastObjCClass(void)

{
  (*(code *)__la_symbol_ptr::_swift_dynamicCastObjCClass)();
  return;
}



void __stubs::_swift_getInitializedObjCClass(void)

{
  (*(code *)__la_symbol_ptr::_swift_getInitializedObjCClass)();
  return;
}



void __stubs::_swift_getWitnessTable(void)

{
  (*(code *)__la_symbol_ptr::_swift_getWitnessTable)();
  return;
}



void __stub_helper::_NSStringFromClass(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::_objc_allocWithZone(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::_objc_msgSend(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::_objc_msgSendSuper2(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::_objc_release(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::_objc_retain(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::_objc_retainAutoreleasedReturnValue(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::_UIApplicationMain(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::__s7SwiftUI19UIHostingControllerC8rootViewACyxGx_tcfc(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::__s7SwiftUI19UIHostingControllerCMa(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::__s7SwiftUI4TextVyACxcSyRzlufC(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::__sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::__sSS6appendyySSF(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::__sSzsE11descriptionSSvg(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::_swift_bridgeObjectRelease(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::_swift_bridgeObjectRetain(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::_swift_dynamicCastObjCClass(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::_swift_getInitializedObjCClass(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::_swift_getWitnessTable(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}



void __stub_helper::__s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF(void)

{
                    // WARNING: Could not recover jumptable at 0x00010000609c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__got::dyld_stub_binder)();
  return;
}


