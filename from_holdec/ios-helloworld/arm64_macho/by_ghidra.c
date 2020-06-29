typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    qword;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef qword Implementation;

typedef qword Cache;

typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef struct Unsupported Load Command Type = 0x2c Unsupported Load Command Type = 0x2c, *PUnsupported Load Command Type = 0x2c;

struct Unsupported Load Command Type = 0x2c {
    dword cmd;
    dword cmdsize;
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
    dword entsize;
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
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    string * types;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    void * imp;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
};

typedef struct class_t class_t, *Pclass_t;

typedef struct class_rw_t class_rw_t, *Pclass_rw_t;

typedef struct protocol_list_t protocol_list_t, *Pprotocol_list_t;

typedef struct objc_property_list objc_property_list, *Pobjc_property_list;

struct class_rw_t {
    qword flags;
    qword instanceStart;
    qword instanceSize;
    char * name;
    undefined field_0x1c;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
    struct method_list_t * baseMethods;
    undefined field_0x24;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
    struct protocol_list_t * baseProtocols;
    undefined field_0x2c;
    undefined field_0x2d;
    undefined field_0x2e;
    undefined field_0x2f;
    struct ivar_list_t * ivars;
    undefined field_0x34;
    undefined field_0x35;
    undefined field_0x36;
    undefined field_0x37;
    qword weakIvarLayout;
    struct objc_property_list * baseProperties;
    undefined field_0x44;
    undefined field_0x45;
    undefined field_0x46;
    undefined field_0x47;
};

struct objc_property_list {
    dword entsize;
    dword count;
};

struct class_t {
    struct class_t * isa;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    struct class_t * superclass;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    Cache cache;
    Implementation vtable;
    struct class_rw_t * data;
    undefined field_0x24;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
};

struct protocol_list_t {
    qword count;
};

typedef struct protocol_t protocol_t, *Pprotocol_t;

struct protocol_t {
    qword isa;
    string * name;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    struct protocol_list_t * protocols;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
    struct method_list_t * instanceMethods;
    undefined field_0x1c;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
    struct method_list_t * classMethods;
    undefined field_0x24;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
    struct method_list_t * optionalInstanceMethods;
    undefined field_0x2c;
    undefined field_0x2d;
    undefined field_0x2e;
    undefined field_0x2f;
    struct method_list_t * optionalClassMethods;
    undefined field_0x34;
    undefined field_0x35;
    undefined field_0x36;
    undefined field_0x37;
    struct objc_property_list * instanceProperties;
    undefined field_0x3c;
    undefined field_0x3d;
    undefined field_0x3e;
    undefined field_0x3f;
    qword unknown0;
    qword unknown1;
};

typedef struct method_list_t_1_ method_list_t_1_, *Pmethod_list_t_1_;

struct method_list_t_1_ {
    dword entsize;
    dword count;
    struct method_t method0;
};

typedef struct protocol_list_t_1_ protocol_list_t_1_, *Pprotocol_list_t_1_;

struct protocol_list_t_1_ {
    qword count;
    struct protocol_t * protocol0;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

typedef struct objc_property_list_4_ objc_property_list_4_, *Pobjc_property_list_4_;

typedef struct objc_property objc_property, *Pobjc_property;

struct objc_property {
    char * name;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    char * name;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

struct objc_property_list_4_ {
    dword entsize;
    dword count;
    struct objc_property property0;
    struct objc_property property1;
    struct objc_property property2;
    struct objc_property property3;
};

typedef struct method_list_t_65_ method_list_t_65_, *Pmethod_list_t_65_;

struct method_list_t_65_ {
    dword entsize;
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

typedef struct method_list_t_26_ method_list_t_26_, *Pmethod_list_t_26_;

struct method_list_t_26_ {
    dword entsize;
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
    dword entsize;
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

typedef struct objc_property_list_1_ objc_property_list_1_, *Pobjc_property_list_1_;

struct objc_property_list_1_ {
    dword entsize;
    dword count;
    struct objc_property property0;
};

typedef struct method_list_t_6_ method_list_t_6_, *Pmethod_list_t_6_;

struct method_list_t_6_ {
    dword entsize;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
};

typedef struct objc_image_info objc_image_info, *Pobjc_image_info;

struct objc_image_info {
    dword version;
    dword flags;
};




ulonglong FUN_10000569c(void)

{
  uint uVar1;
  
  uVar1 = __s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF(1);
  return (ulonglong)(uVar1 & 1);
}



void FUN_1000056b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
                    // WARNING: Could not recover jumptable at 0x000100006000. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)_objc_autoreleaseReturnValue)(uVar6);
  return;
}



void FUN_1000057c4(undefined8 param_1)

{
  undefined8 local_30;
  longlong lStack40;
  
  if (DAT_10000da40 == 0) {
    DAT_10000da40 = _swift_getInitializedObjCClass(&PTR__TtC10HelloWorld11AppDelegate_10000d8f8);
  }
  local_30 = param_1;
  lStack40 = DAT_10000da40;
  _objc_msgSendSuper2(&local_30,"init");
  return;
}



void FUN_100005820(void)

{
  longlong lStack24;
  
  if (DAT_10000da40 == 0) {
    DAT_10000da40 = _swift_getInitializedObjCClass(&PTR__TtC10HelloWorld11AppDelegate_10000d8f8);
  }
  lStack24 = DAT_10000da40;
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,"dealloc");
  return;
}



undefined8 entry(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_10000da40 == 0) {
    DAT_10000da40 = _swift_getInitializedObjCClass(&PTR__TtC10HelloWorld11AppDelegate_10000d8f8);
  }
  _NSStringFromClass();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _UIApplicationMain(param_1,param_2,0,uVar1);
  _objc_release(uVar1);
  return 0;
}



void FUN_100005900(void)

{
  DAT_10000da40 = _swift_getInitializedObjCClass(&PTR__TtC10HelloWorld11AppDelegate_10000d8f8);
  return;
}



void FUN_10000592c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + DAT_10000da48);
  _objc_retain(uVar1);
                    // WARNING: Could not recover jumptable at 0x000100006000. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)_objc_autoreleaseReturnValue)(uVar1);
  return;
}



void FUN_10000595c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + DAT_10000da48);
  *(undefined8 *)(param_1 + DAT_10000da48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  return;
}



void FUN_100005990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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



void FUN_100005a20(longlong param_1)

{
  longlong local_30;
  longlong lStack40;
  
  *(undefined8 *)(param_1 + DAT_10000da48) = 0;
  if (DAT_10000da78 == 0) {
    DAT_10000da78 = _swift_getInitializedObjCClass(&PTR__TtC10HelloWorld13SceneDelegate_10000d970);
  }
  local_30 = param_1;
  lStack40 = DAT_10000da78;
  _objc_msgSendSuper2(&local_30,"init");
  return;
}



void FUN_100005a88(void)

{
  longlong lStack24;
  
  if (DAT_10000da78 == 0) {
    DAT_10000da78 = _swift_getInitializedObjCClass(&PTR__TtC10HelloWorld13SceneDelegate_10000d970);
  }
  lStack24 = DAT_10000da78;
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,"dealloc");
  return;
}



void FUN_100005afc(void)

{
  DAT_10000da78 = _swift_getInitializedObjCClass(&PTR__TtC10HelloWorld13SceneDelegate_10000d970);
  return;
}



void FUN_100005b28(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong unaff_x20;
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
      puVar5 = &DAT_100008040;
      lVar2 = __s7SwiftUI19UIHostingControllerCMa(0,&DAT_100008040,DAT_10000da88);
      if (puVar5 == (undefined *)0x0) {
        DAT_10000da80 = lVar2;
      }
    }
    _objc_allocWithZone();
    uVar4 = __s7SwiftUI19UIHostingControllerC8rootViewACyxGx_tcfc(&local_48);
    _objc_msgSend(uVar1,"setRootViewController:",uVar4);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + DAT_10000da48);
    *(undefined8 *)(unaff_x20 + DAT_10000da48) = uVar1;
    uVar1 = _objc_retain(uVar1);
    _objc_release(uVar4);
    _objc_msgSend(uVar1,"makeKeyAndVisible");
    _objc_release(uVar3);
    _objc_release(uVar1);
    return;
  }
  return;
}



longlong FUN_100005ca8(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (1 < param_1) {
    lVar1 = FUN_100005ca8(param_1 + -1);
    lVar2 = FUN_100005ca8(param_1 + -2);
    param_1 = lVar1 + lVar2;
    if (SCARRY8(lVar1,lVar2)) {
                    // WARNING: Could not recover jumptable at 0x000100005ce4. Too many branches
                    // WARNING: Treating indirect jump as call
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100005ce8);
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
  }
  return param_1;
}



void FUN_100005ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined8 *in_x8;
  undefined8 local_60;
  undefined8 uStack88;
  
  local_60 = param_1;
  if (DAT_10000da90 == 0) {
    DAT_10000da90 = _swift_getWitnessTable(__sSiSzsMc,__sSiN);
  }
  lVar5 = DAT_10000da90;
  puVar6 = __sSiN;
  lVar4 = DAT_10000da90;
  __sSzsE11descriptionSSvg(__sSiN,DAT_10000da90);
  local_60 = 0xd000000000000012;
  uStack88 = 0x8000000100006f80;
  __sSS6appendyySSF();
  uVar2 = uStack88;
  uVar3 = local_60;
  _swift_bridgeObjectRelease(lVar4);
  local_60 = uVar3;
  uStack88 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSS6appendyySSF(0x3d29,0xe200000000000000);
  uVar1 = uStack88;
  uVar3 = local_60;
  _swift_bridgeObjectRelease(uVar2);
  local_60 = FUN_100005ca8(param_1);
  uVar2 = __sSzsE11descriptionSSvg(puVar6,lVar5);
  local_60 = uVar3;
  uStack88 = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  __sSS6appendyySSF(uVar2,lVar5);
  uVar2 = uStack88;
  uVar3 = local_60;
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(lVar5);
  local_60 = uVar3;
  uStack88 = uVar2;
  if (DAT_10000da98 == 0) {
    DAT_10000da98 = _swift_getWitnessTable(__sSSSysMc,__sSSN);
  }
  puVar6 = __sSSN;
  uVar3 = __s7SwiftUI4TextVyACxcSyRzlufC(&local_60);
  *in_x8 = uVar3;
  *(undefined **)(in_x8 + 1) = puVar6;
  *(byte *)(in_x8 + 2) = (byte)DAT_10000da98 & 1;
  in_x8[3] = param_4;
  return;
}



longlong FUN_100005e98(void)

{
  ulonglong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulonglong uVar3;
  double dVar4;
  
  uVar2 = _objc_allocWithZone(&_OBJC_CLASS___NSDate);
  uVar2 = _objc_msgSend(uVar2,"init");
  dVar4 = (double)_objc_msgSend(uVar2,"timeIntervalSince1970");
  _objc_release(uVar2);
  if ((dVar4 < 9223372036854775808.00000000) &&
     (-9223372036854777856.00000000 < dVar4 &&
      ((ulonglong)dVar4 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
    uVar3 = (ulonglong)dVar4;
    uVar1 = uVar3 + 3;
    if (-1 < (longlong)uVar3) {
      uVar1 = uVar3;
    }
    return (uVar3 - (uVar1 & 0xfffffffffffffffc)) + 6;
  }
                    // WARNING: Could not recover jumptable at 0x000100005f38. Too many branches
                    // WARNING: Treating indirect jump as call
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100005f3c);
  uVar2 = (*UNRECOVERED_JUMPTABLE)();
  return uVar2;
}



void __s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF(void)

{
  (*(code *)__s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF)();
  return;
}



void __s7SwiftUI19UIHostingControllerC8rootViewACyxGx_tcfc(void)

{
  (*(code *)__s7SwiftUI19UIHostingControllerC8rootViewACyxGx_tcfc)();
  return;
}



void __s7SwiftUI19UIHostingControllerCMa(void)

{
  (*(code *)__s7SwiftUI19UIHostingControllerCMa)();
  return;
}



void __s7SwiftUI4TextVyACxcSyRzlufC(void)

{
  (*(code *)__s7SwiftUI4TextVyACxcSyRzlufC)();
  return;
}



void __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(void)

{
  (*(code *)__sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF)();
  return;
}



void __sSS6appendyySSF(void)

{
  (*(code *)__sSS6appendyySSF)();
  return;
}



void __sSzsE11descriptionSSvg(void)

{
  (*(code *)__sSzsE11descriptionSSvg)();
  return;
}



void _NSStringFromClass(void)

{
  (*(code *)_NSStringFromClass)();
  return;
}



void _UIApplicationMain(void)

{
  (*(code *)_UIApplicationMain)();
  return;
}



void _objc_allocWithZone(void)

{
  (*(code *)_objc_allocWithZone)();
  return;
}



void _objc_msgSend(void)

{
  (*(code *)_objc_msgSend)();
  return;
}



void _objc_msgSendSuper2(void)

{
  (*(code *)_objc_msgSendSuper2)();
  return;
}



void _objc_release(void)

{
  (*(code *)_objc_release)();
  return;
}



void _objc_retain(void)

{
  (*(code *)_objc_retain)();
  return;
}



void _objc_retainAutoreleasedReturnValue(void)

{
  (*(code *)_objc_retainAutoreleasedReturnValue)();
  return;
}



void _swift_bridgeObjectRelease(void)

{
  (*(code *)_swift_bridgeObjectRelease)();
  return;
}



void _swift_bridgeObjectRetain(void)

{
  (*(code *)_swift_bridgeObjectRetain)();
  return;
}



void _swift_dynamicCastObjCClass(void)

{
  (*(code *)_swift_dynamicCastObjCClass)();
  return;
}



void _swift_getInitializedObjCClass(void)

{
  (*(code *)_swift_getInitializedObjCClass)();
  return;
}



void _swift_getWitnessTable(void)

{
  (*(code *)_swift_getWitnessTable)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void _NSStringFromClass(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void _objc_allocWithZone(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void _objc_msgSend(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void _objc_msgSendSuper2(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void _objc_release(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void _objc_retain(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void _objc_retainAutoreleasedReturnValue(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void _UIApplicationMain(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void __s7SwiftUI19UIHostingControllerC8rootViewACyxGx_tcfc(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void __s7SwiftUI19UIHostingControllerCMa(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void __s7SwiftUI4TextVyACxcSyRzlufC(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void __sSS6appendyySSF(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void __sSzsE11descriptionSSvg(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void _swift_bridgeObjectRelease(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void _swift_bridgeObjectRetain(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void _swift_dynamicCastObjCClass(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void _swift_getInitializedObjCClass(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void _swift_getWitnessTable(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void __s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


