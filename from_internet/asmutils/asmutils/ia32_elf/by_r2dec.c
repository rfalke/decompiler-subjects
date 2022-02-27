/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/asmutils/ia32_elf/subject.exe @ 0x80480b4 */
#include <stdint.h>
 
void entry0 (int32_t arg_28h) {
    int32_t var_20h;
    __asm ("pushal");
    esi = *((esp + 0x28));
    ebx = *((esp + 0x28));
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    do {
        esi--;
        if (ebx == esi) {
            goto label_0;
        }
    } while (*(esi) != 0x2f);
    esi++;
label_0:
    ebx = 0;
    do {
        eax = *((ebx + 0x804804c));
        eax |= eax;
        if (eax == 0) {
            goto label_1;
        }
        if (eax == *(esi)) {
            goto label_2;
        }
        ebx += 8;
    } while (1);
label_2:
    eax = *((ebx + 0x8048050));
    *((esp + 0x20)) = eax;
    __asm ("popal");
    return eax;
label_1:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048106, 0x251);
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    dh |= *((eax + ebp*2 + 0x69));
    if (dh < 0) {
        esi = *((ebx + 0x20)) * 0x20746f6e;
        __asm ("popal");
        *((esi + 0x61)) &= ch;
        if (*((esi + 0x61)) >= 0) {
            goto label_3;
        }
        if (*((esi + 0x61)) >= 0) {
            goto label_4;
        }
        __asm ("bound esi, qword [ebp + 0x67]");
        dh |= *((eax + ebp*2 + 0x69));
        if (dh >= 0) {
            goto label_5;
        }
        esi = *((ebx + 0x20)) * 0x7473756a;
        *((ecx + 0x20)) &= ah;
    }
    __asm ("popal");
    *((ebx + 0x6f)) &= ah;
    __asm ("outsd dx, dword [esi]");
    __asm ("insb byte es:[edi], dx");
    *((edi + ebp*2 + 0x6f)) &= ch;
    if (*((edi + ebp*2 + 0x6f)) !overflow 0) {
        __asm ("popal");
        __asm ("arpl word [ebx + 0xa], bp");
label_4:
        cl |= *(edx);
        *(0x206e6120) |= ebp;
        __asm ("popal");
label_5:
        __asm ("outsb dx, byte [esi]");
        __asm ("arpl word [ecx + 0x65], bp");
        __asm ("outsb dx, byte [esi]");
        if (*(0x206e6120) != 0) {
            __asm ("popal");
            if (*(0x206e6120) >= 0) {
                goto label_6;
            }
            __asm ("insd dword es:[edi], dx");
            __asm ("bound ebp, qword [ecx + edi*2 + 0x20]");
            if (*(0x206e6120) overflow 0) {
                goto label_7;
            }
            __asm ("insd dword es:[edi], dx");
            *(0x6228090a) &= ch;
            if (*(0x6228090a) >= 0) {
                goto label_8;
            }
            __asm ("popal");
            __asm ("outsb dx, byte [esi]");
            *((ecx + 0x6e)) &= ah;
            __asm ("arpl word [ecx + 0x65], bp");
            __asm ("outsb dx, byte [esi]");
            if (*((ecx + 0x6e)) == 0) {
                goto label_9;
            }
        }
        __asm ("popal");
        if (*((ecx + 0x6e)) >= 0) {
            goto label_10;
        }
        __asm ("insd dword es:[edi], dx");
        __asm ("bound ebp, qword [ecx + edi*2 + 0x20]");
        if (*((ecx + 0x6e)) overflow 0) {
            goto label_11;
        }
        if (*((ecx + 0x6e)) == 0) {
            goto label_12;
        }
        cl |= *(edx);
        if (cl <= 0) {
label_8:
            goto label_13;
        }
        __asm ("outsb dx, byte [esi]");
        if (cl == 0) {
            goto label_14;
        }
        __asm ("popal");
        __asm ("insb byte es:[edi], dx");
        __asm ("insb byte es:[edi], dx");
        if (cl >= 0) {
            goto label_15;
        }
        if (cl > 0) {
label_9:
            goto label_16;
        }
label_3:
        __asm ("insb byte es:[edi], dx");
        __asm ("insb byte es:[edi], dx");
        *((edx + 0x65)) &= ah;
        *((eax + ebp*2 + 0x65)) &= dh;
        *((ecx + 0x73)) &= ah;
        __asm ("insd dword es:[edi], dx");
    }
    if (*((ecx + 0x73)) == 0) {
        ebp = *((ebx + esi*2 + 0x20)) * 0x746c756d;
label_12:
        __asm ("insb byte es:[edi], dx");
        if (*((ecx + 0x73)) != 0) {
            __asm ("arpl word [ecx + 0x6c], sp");
            __asm ("insb byte es:[edi], dx");
            *((edx + 0x69)) &= ah;
            __asm ("outsb dx, byte [esi]");
            __asm ("popal");
label_15:
            ebp = *((esi + 0x61)) * 0xa2e7972;
            if (*((edx + 0x69)) < 0) {
                dl |= *(cs:);
                *((edi + 0x68)) &= dh;
                __asm ("outsd dx, dword [esi]");
                __asm ("insb byte es:[edi], dx");
                *((gs:ecx + 0x64)) &= ch;
                __asm ("popal");
                *((edx + 0x65)) &= ah;
label_6:
                __asm ("bound esp, qword [ebp + 0x68]");
                ebp = *((esi + 0x64)) * 0x20746920;
label_7:
                __asm ("outsb dx, byte [esi]");
                *((fs:ecx + 0x74)) &= ch;
                *((ecx + 0x73)) &= ch;
                *((eax + ebp*2 + 0x61)) &= dh;
            }
        }
        goto label_17;
        if (*((eax + ebp*2 + 0x61)) != 0) {
            esi = *((eax + 0x73)) * 0x6c756f68;
            *((fs:edx + 0x65)) &= ah;
            *((ecx + 0x75)) &= ah;
            if (*((ecx + 0x75)) != 0) {
label_10:
                goto label_18;
            }
            __asm ("outsd dx, dword [esi]");
            eax -= 0x656e6567;
label_11:
            __asm ("outsb dx, byte gs:[si]");
            if (eax < 0) {
label_13:
                goto label_19;
            }
            if (eax == 0) {
                goto label_20;
            }
            ah |= *((fs:esi + 0x72));
            __asm ("outsd dx, dword [esi]");
            __asm ("insd dword es:[edi], dx");
        }
        *((edi + 0x74)) &= ch;
label_16:
label_14:
        __asm ("popal");
        if (*((edi + 0x74)) >= 0) {
            goto label_21;
        }
        *((esi + 0x69)) &= ah;
        __asm ("insb byte es:[edi], dx");
        if (*((esi + 0x69)) >= 0) {
            goto label_22;
        }
        *((ecx + 0x6e)) -= ah;
        *((fs:edi + 0x66)) &= ch;
        *((ebx + 0x6f)) &= ah;
        __asm ("outsd dx, dword [esi]");
        if (*((ebx + 0x6f)) != 0) {
            goto label_23;
        }
    }
    if (*((ebx + 0x6f)) < 0) {
        goto label_24;
    }
    if (*((ebx + 0x6f)) >= 0) {
        void (*0x8048278)() ();
    }
    *((gs:ebx + 0x74)) &= dh;
    *((ebx + 0x74)) &= dh;
    __asm ("popal");
    if (*((ebx + 0x74)) >= 0) {
        if (*((ebx + 0x74)) == 0) {
            *((ebx + 0x6f)) &= ah;
            *(gs:eax) -= esp;
            if (*(gs:eax) > 0) {
                goto label_25;
            }
            if (*(gs:eax) == 0) {
                goto label_26;
            }
label_22:
            *((ebx + 0x6f)) &= dh;
label_17:
            __asm ("insd dword es:[edi], dx");
            dh |= *((gs:ebx + 0x63));
            if (dh < 0) {
                goto label_27;
            }
            if (dh overflow 0) {
                goto label_28;
            }
            *((edi + 0x69)) &= dh;
            if (*((edi + 0x69)) == 0) {
                goto label_29;
            }
            *((esi + 0x6f)) &= ch;
            *((ebp + 0x61)) &= ch;
            __asm ("outsb dx, byte [esi]");
            if (*((ebp + 0x61)) != 0) {
                goto label_30;
            }
            __asm ("insb byte es:[edi], dx");
            *((ecx + 0x64)) &= ah;
            if (*((ecx + 0x64)) >= 0) {
                goto label_31;
            }
            if (*((ecx + 0x64)) == 0) {
                goto label_32;
            }
            __asm ("insd dword es:[edi], dx");
            __asm ("outsb dx, byte gs:[esi]");
            if (*((ecx + 0x64)) == 0) {
                goto label_33;
            }
            if (*((ecx + 0x64)) < 0) {
label_19:
                al -= 0x20;
                *(eax) &= ah;
                if (*(eax) > 0) {
                    goto label_34;
                }
label_20:
                __asm ("outsb dx, byte gs:[esi]");
                __asm ("outsb dx, byte [esi]");
                *((edi + 0x74)) &= ch;
label_18:
                if (*((edi + 0x74)) < 0) {
                    goto label_35;
                }
                if (*((edi + 0x74)) < 0) {
                    goto label_36;
                }
                __asm ("insd dword es:[edi], dx");
                if (*((edi + 0x74)) >= 0) {
                    goto label_37;
                }
                if (*((edi + 0x74)) > 0) {
                    goto label_38;
                }
                __asm ("insb byte es:[edi], dx");
                __asm ("insb byte es:[edi], dx");
                ah |= *((edx + 0x65));
label_21:
                *((ecx + 0x6e)) &= ch;
                *((ecx + 0x20)) &= ah;
                __asm ("insd dword es:[edi], dx");
                __asm ("outsd dx, dword [esi]");
                if (*((ecx + 0x20)) < 0) {
                    goto label_39;
                }
                eax -= 0x6c2d726f;
                __asm ("insb byte es:[edi], dx");
                eax -= 0x7373656c;
            }
            if (eax >= 0) {
                goto label_40;
            }
            *((ebp + 0x73)) &= dh;
            __asm ("popal");
            __asm ("bound ebp, qword [ebp + 0x20]");
label_23:
            *((gs:ecx + 0x6e)) &= ah;
label_37:
            *((ecx + 0x6e)) &= ah;
label_24:
            __asm ("popal");
            __asm ("outsb dx, byte [esi]");
            *((fs:edx + 0x65)) &= dh;
        }
        __asm ("insb byte es:[edi], dx");
        esp = *((ecx + 0x62)) * 0x7320656c;
    }
label_25:
    __asm ("popal");
label_26:
    __asm ("bound ebp, qword [ebp + 0x20]");
    if (*((fs:edx + 0x65)) < 0) {
        __asm ("popal");
        if (*((fs:edx + 0x65)) != 0) {
            *(cs:eax) &= ah;
label_27:
            *((eax + ebp*2 + 0x65)) &= dl;
            __asm ("popal");
label_29:
            __asm ("popal");
            *((ecx + 0x79)) &= ah;
            if (*((ecx + 0x79)) < 0) {
label_30:
                *((eax + 0x61)) &= ch;
                __asm ("popal");
                if (*((eax + 0x61)) < 0) {
label_28:
                    __asm ("outsb dx, byte [esi]");
                    __asm ("outsd dx, dword [esi]");
                    if (*((eax + 0x61)) == 0) {
                        goto label_41;
                    }
                    __asm ("arpl word [edi + 0x6d], bp");
                    *((gs:ecx + 0x65)) &= bh;
                }
                if (*((gs:ecx + 0x65)) == 0) {
                    goto label_42;
                }
                *((edx + 0x75)) &= ah;
                if (*((edx + 0x75)) == 0) {
label_32:
                    goto label_43;
                }
                esi = *((eax + 0x69)) * 0x6c632073;
label_34:
                *((ecx + 0x73)) &= ch;
                if (*((ecx + 0x73)) >= 0) {
label_31:
                    goto label_44;
                }
                __asm ("insb byte es:[edi], dx");
                __asm ("arpl word [edi + ebp*2 + 0x73], bp");
label_33:
                __asm ("outsd dx, dword [esi]");
                if (*((ecx + 0x73)) >= 0) {
                    goto label_45;
                }
            }
            if (*((ecx + 0x73)) >= 0) {
label_36:
                if (*((ecx + 0x73)) < 0) {
                    goto label_46;
                }
                if (*((ecx + 0x73)) > 0) {
                    goto label_47;
                }
                if (*((ecx + 0x73)) == 0) {
                    goto label_48;
                }
                *((ebp + 0x61)) &= ah;
label_41:
                __asm ("popal");
                __asm ("arpl word [eax + 0x20], bp");
label_35:
                if (*((ebp + 0x61)) < 0) {
label_38:
                    goto label_49;
                }
                __asm ("insb byte es:[edi], dx");
                __asm ("popal");
                if (*((ebp + 0x61)) >= 0) {
                    goto label_50;
                }
                *((cs:ebp + 0x65)) &= cl;
label_43:
                ebp--;
                __asm ("popal");
label_39:
                __asm ("popal");
                __asm ("outsb dx, byte [esi]");
                if (ebp > 0) {
                    goto label_51;
                }
label_44:
                ebp = *((ebp + 0x2c)) * 0x206f640a;
label_42:
                __asm ("insb byte es:[edi], dx");
                al -= 0xa;
                __asm ("outsd dx, dword fs:[esi]");
            }
label_46:
            *((esi + 0x6f)) &= ch;
            if (*((esi + 0x6f)) == 0) {
                goto label_52;
            }
            if (*((esi + 0x6f)) > 0) {
                goto label_53;
            }
            if (*((esi + 0x6f)) >= 0) {
                goto label_54;
            }
            *((gs:ecx + 0x6f)) &= bh;
            if (*((gs:ecx + 0x6f)) >= 0) {
label_40:
                goto label_55;
            }
            if (*((gs:ecx + 0x6f)) != 0) {
                goto label_56;
            }
            *((ecx + ebp*2 + 0x6d)) &= dh;
            __asm ("insd dword es:[edi], dx");
            *((gs:edi + 0x6e)) &= ch;
            ebp = *((ebp + 0x65)) * 0x206e6f20;
        }
        *((ecx + 0x6d)) &= ch;
        if (*((ecx + 0x6d)) overflow 0) {
            goto label_57;
        }
        __asm ("outsd dx, dword [esi]");
        if (*((ecx + 0x6d)) <= 0) {
            goto label_58;
        }
        __asm ("outsb dx, byte [esi]");
        *((si + 0x68)) &= dh;
    }
    if (*((si + 0x68)) >= 0) {
label_52:
        goto label_59;
    }
    if (*((si + 0x68)) >= 0) {
        void (*0x804837d)() ();
    }
    if (*((si + 0x68)) != 0) {
        void (*0x8048382)() ();
    }
    __asm ("arpl word [ebp + 0x20], sp");
    __asm ("arpl word [edi + 0x64], bp");
    al -= 0x20;
    __asm ("bound esp, qword [ebp + 0x74]");
    if (al == 0) {
        void (*0x8048383)() ();
    }
    if (al < 0) {
        goto label_60;
    }
    __asm ("bound esp, qword [ebp + 0x20]");
    if (al == 0) {
        void (*0x804838d)() ();
    }
    *((gs:edi + 0x6e)) &= ch;
label_45:
    __asm ("outsb dx, byte [esi]");
    *((gs:edi + 0x68)) &= dh;
label_60:
    *((edi + 0x68)) &= dh;
label_59:
    __asm ("outsd dx, dword [esi]");
    *((ecx + 0x6d)) &= ch;
label_47:
    __asm ("insd dword es:[edi], dx");
    if (*((ecx + 0x6d)) overflow 0) {
label_48:
        void (*0x804839f)() ();
    }
    __asm ("insd dword es:[edi], dx");
    __asm ("outsb dx, byte gs:[esi]");
label_49:
    __asm ("outsb dx, byte [esi]");
    if (*((ecx + 0x6d)) == 0) {
        void (*0x80483ac)() ();
    }
    *((eax + ebp*2 + 0x65)) &= dh;
label_50:
    __asm ("outsd dx, dword [esi]");
    if (*((eax + ebp*2 + 0x65)) <= 0) {
        void (*0x80483a8)() ();
    }
    *((ebp + 0x73)) &= ah;
    if (*((ebp + 0x73)) >= 0) {
label_51:
        void (*0x80483ab)() ();
    }
    if (*((ebp + 0x73)) < 0) {
        void (*0x80483b3)() ();
    }
    __asm ("bound esp, qword [ebp + 0x64]");
label_53:
    *((ebx + 0x63)) &= dh;
    if (*((ebx + 0x63)) < 0) {
        void (*0x80483bb)() ();
    }
    if (*((ebx + 0x63)) overflow 0) {
        void (*0x80483c8)() ();
    }
    cl |= *(cs:);
    ecx = esi;
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    *((esi - 1)) = 0xa;
label_55:
    esi++;
label_54:
    *(edx)--;
    esi -= ecx;
label_56:
    ebx = 1;
label_58:
    eax = 4;
    eax = sys_write (0x1, ecx, 0xe);
    ebx = 1;
label_57:
    eax = 1;
    eax = sys_exit (0x1);
}
