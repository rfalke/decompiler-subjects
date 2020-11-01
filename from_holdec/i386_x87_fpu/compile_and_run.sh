gcc -Wall -m32 source.c \
	source_f2xm1.s \
	source_fabs.s source_fadd.s \
	source_fbstp.s source_fbld.s \
	source_fchs.s source_fcmov.s source_fcom.s source_fcomi.s source_fcos.s \
	source_fdiv.s source_fdivr.s \
	source_fild.s source_fist.s \
	source_fld.s source_fldc.s \
	source_fmul.s \
	source_fpatan.s source_fprem.s source_fptan.s \
	source_frndint.s \
	source_fscale.s source_fsin.s source_fsincos.s source_fsqrt.s source_fst.s source_fsub.s \
	source_ftst.s \
	source_fxam.s source_fxch.s source_fxtract.s \
	source_fyl2x.s source_fyl2xp1.s \
	source_not_executed.s \
	source_top.s && ./a.out
