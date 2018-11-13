#!/usr/bin/python2

names=[]

def ll_generate(unsigned, start, iterations, update, order, cmp_type, cmp_detail, exp, secondary, expected):
    if iterations==0 and order in ["buj", "bju", "ubj"]:
        # jump has to be in front of body
        return

    if unsigned:
        if start<1 and order=="jub" and cmp_type!="!=":
            # bad unsigned cmp with -1
            return
        if start<1 and order in ["bju", "ubj"] and cmp_type=="<=":
            # bad unsigned cmp with -1
            return
        if (start==0 and iterations==0 and (
            order in ["jbu", "ujb"] and cmp_type=="<="
            or order in ["jub"] and cmp_type=="!=")
            ):
            # bad unsigned cmp with -1
            return

    assert not (exp and secondary)

    counter=len(names)
    name="var%04d_%s"%(counter, expected if expected!="" else "empty" )
    names.append(name)

    end_=start+update*iterations
    if unsigned:
        sign_descr="unsign"
    else:
        sign_descr="signed"

    descr="%04d %s start:%d, iter:%d, inc:%+d, order:%s cmp:%-2s%d"%(
        counter, sign_descr, start, iterations, update, order, cmp_type, cmp_detail)
    if exp:
        descr+=" exp:%s"%(exp)
    if secondary:
        descr+=" second:%s"%(secondary)
    descr="%-70s"%descr
    descr="%s expected='%s'"%(descr, expected)
    descr="%-85s"%descr
    descr+=" >"

    if update==1:
        update_str="incl %ebx"
    elif update==-1:
        update_str="decl %ebx"
    elif update>1:
        update_str="add $%d, %%ebx"%(update)
    elif update<-1:
        update_str="sub $%d, %%ebx"%(-update)
    else:
        assert 0, update
    if update>0:
        update_sign=1
    else:
        update_sign=-1

    if order in ["ubj", "ujb", "jub"]:
        start-=update

    if secondary:
        secondary_init,secondary_update=secondary.split(" ")
        assert secondary_init.startswith("=")
        secondary_init=int(secondary_init[1:])
        assert secondary_update.startswith("+")
        secondary_update=int(secondary_update[1:])

    print '''
   	.section	.rodata.str1.1,"aMS",@progbits,1
.L%d_descr:
    .string	"%s"
.L%d_end:
    .string	"<"
'''%(counter, descr, counter)

    print '''
	.text
	.globl	NAME
	.type	NAME, @function
NAME:
    pushl	%ebx
    pushl	%esi

    pushl	stdout
    pushl	$.LCOUNTER_descr
    call	fputs
    addl	$8, %esp
    '''.replace("NAME", name).replace("COUNTER", str(counter))

    print '\tmovl	$%d, %%ebx'%start

    if secondary:
        print '\tmovl	$%d, %%esi'%secondary_init

    print '.LCOUNTER_loop:'.replace("COUNTER", str(counter))

    def print_body():
        if exp:
            tmp=exp.split(" ")
            print "\tmov %ebx, %eax"
            for i in tmp:
                if i[0]=="+":
                    print "\tadd $%s, %%eax"%i[1:]
                elif i[0]=="-":
                    print "\tsub $%s, %%eax"%i[1:]
                elif i=="/2":
                    print "\tshr $1, %eax"
                else:
                    assert 0,i
	    print '''
	pushl	%eax
	call	putchar
	addl	$4, %esp
	'''
        elif secondary:
	    print '''
	pushl	%esi
	call	putchar
	addl	$4, %esp
	'''
            print '\taddl	$%d, %%esi'%secondary_update
        else:
	    print '''
	pushl	%ebx
	call	putchar
	addl	$4, %esp
	'''

    if cmp_type=="!=":
        cc_cont="jne"
        cc_break="jz"
    elif cmp_type=="<":
        if unsigned:
            if update>0:
                cc_cont="jb"
                cc_break="jnb"
            else:
                cc_cont="ja"
                cc_break="jna"
        else:
            if update>0:
                cc_cont="jl"
                cc_break="jnl"
            else:
                cc_cont="jg"
                cc_break="jng"
            
    elif cmp_type=="<=":
        if unsigned:
            if update>0:
                cc_cont="jbe"
                cc_break="jnbe"
            else:
                cc_cont="jae"
                cc_break="jnae"
        else:
            if update>0:
                cc_cont="jle"
                cc_break="jnle"
            else:
                cc_cont="jge"
                cc_break="jnge"
                
    else:
        assert 0,cmp_type

    def print_update():
    	print "\t"+update_str
    
    def print_uncond_continue():
        print '''
    jmp .LCOUNTER_loop
    '''.replace("COUNTER", str(counter))

    def print_jump_continue(offset):
        extra=0
        if cmp_type=="<=":
            extra=-update_sign
        fcmp=end_ + update*offset + extra - cmp_detail
        if unsigned:
            assert fcmp>=0,[fcmp, descr]
        print ('''
    cmpl    $END, %ebx
    JCONT .LCOUNTER_loop
    '''
               .replace("COUNTER", str(counter))
               .replace("END", str(fcmp))
               .replace("JCONT", cc_cont))

    def print_jump_break(offset):
        extra=0
        if cmp_type=="<=":
            extra=-update_sign
        fcmp=end_ + update*offset + extra - cmp_detail
        if unsigned:
            assert fcmp>=0,[fcmp, descr]
        print ('''
    cmpl    $END, %ebx
    JBREAK .LCOUNTER_exit
    '''
               .replace("COUNTER", str(counter))
               .replace("END", str(fcmp))
               .replace("JBREAK", cc_break))

    if order=="buj":
    	print_body()
    	print_update()
    	print_jump_continue(0)
    elif order=="bju":
    	print_body()
    	print_jump_break(-1)
        print_update()
        print_uncond_continue()
    elif order=="ubj":
        print_update()
    	print_body()
    	print_jump_continue(-1)
    elif order=="ujb":
        print_update()
        print_jump_break(0)
    	print_body()
        print_uncond_continue()
    elif order=="jbu":
        print_jump_break(0)
        print_body()
        print_update()
        print_uncond_continue()
    elif order=="jub":
        print_jump_break(-1)
        print_update()
        print_body()
        print_uncond_continue()
    else:
        assert 0, order

    print '''
.LCOUNTER_exit:
	pushl	$.LCOUNTER_end
	call	puts
	addl	$4, %esp

        xor     %eax, %eax
	pop     %esi
        pop     %ebx
	ret
	.size	NAME, .-NAME'''.replace("NAME", name).replace("COUNTER", str(counter))

def generate_call_all():
	name="call_all"
	print '''
	.text
	.globl	NAME
	.type	NAME, @function
NAME:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%ebx
	movl	$0, %ebx
'''.replace("NAME", name)
	for i in names:
		print "\tcall %s"%i
                print "\tadd %eax, %ebx"
	print '''
	mov		%ebx, %eax
	movl	-4(%ebp), %ebx
	leave
	ret
	.size	NAME, .-NAME'''.replace("NAME", name)

def ml_generate(unsigned, start, iterations, update, exp, secondary, expected):
    for order in ["buj", "bju", "ubj", "ujb", "jbu", "jub"]:
        for cmp in ["!=", "<", "<="]:
            if update>0:
                r=range(update)
            else:
                r=range(update+1,1)
            if cmp=="!=":
                r=[0]
            for cmp_detail in r:
                ll_generate(unsigned, start, iterations, update, order, cmp, cmp_detail, exp, secondary, expected)

for unsign in [False, True]:
    for iter_len in [10,1,0]:
        ml_generate(unsign,  48, iter_len,  1, None,     None,     "0123456789"[0:iter_len])
        ml_generate(unsign,   0, iter_len,  1, "+48",    None,     "0123456789"[0:iter_len])
        ml_generate(unsign,  16, iter_len,  2, "/2 +40", None,     "0123456789"[0:iter_len])
        ml_generate(unsign,  57, iter_len, -1, None,     None,     "9876543210"[0:iter_len])
        ml_generate(unsign, 100, iter_len, -2, "/2 +7",  None,     "9876543210"[0:iter_len])
        ml_generate(unsign,   0, iter_len,  1, None,     "=48 +1", "0123456789"[0:iter_len])
        ml_generate(unsign,  10, iter_len, -1, None,     "=48 +1", "0123456789"[0:iter_len])
        if not unsign:
            ml_generate(unsign, -20, iter_len,  1, "+68",     None,     "0123456789"[0:iter_len])

generate_call_all()
