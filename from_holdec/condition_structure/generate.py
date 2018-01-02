
all_names_to_call=[]
def generate(numConds, numTargets, directExitAllowed):
    entry=0
    exit=1
    conds=range(2,numConds+2)
    targets=range(2+numConds,numTargets+2+numConds)
    allowedJumpTargets=conds+targets
    if directExitAllowed:
        allowedJumpTargets.append(exit)

    shouldBeReached=range(2+numConds+numTargets)
    work=[]
    for i in range(2+numConds+numTargets):
        work.append(None)
    work[entry]=[conds[0]]
    work[exit]=[]
    for i in targets:
        work[i]=[exit]

    counterarr=[]
    def output(solution):
        name="test_%d_blocks_%d_targets"%(numConds, numTargets)
        if directExitAllowed:
            name+="_direct"
        counter=len(counterarr)
        name+="_variant_%d"%counter
        all_names_to_call.append(name)
        counterarr.append(1)
        prefix=str(len(all_names_to_call))+"_"+str(counter)
        outf.write('''
        .type   %s, @function
%s:
.L_%s_0:
        jmp .L_%s_2
.L_%s_1:
        pushl   $.LC_ret
        calll   puts
        addl    $4, %%esp
        movl    $0, %%eax
        ret        
        '''%(name,name, prefix, prefix, prefix))
        for i in conds:
            outf.write('''
.L_%s_%d:
        cmpl    $0, conditions+%d
        je     .L_%s_%d
        jmp    .L_%s_%d
'''%(prefix, i, 100+4*(i-2), prefix, solution[i][0], prefix, solution[i][1]))
        for i in targets:
            outf.write('''
.L_%s_%d:
        pushl   $.LC_%d
        calll   puts
        addl    $4, %%esp
        jmp     .L_%s_1
'''%(prefix, i, i, prefix))
        outf.write('''
.L_%s_FE1:
        .size   %s, .-%s
'''%(prefix, name,name))

    def is_valid(jumps, shouldBeReached):
        def try_one(start):
            todo=set([start])
            done=set()
            while todo:
                id=todo.pop()
                done.add(id)
                for i in jumps[id]:
                    if i==start:
                        # loop
                        return None
                    if i not in done and i not in todo:
                         todo.add(i)
            return done
        base=try_one(0)
        if base==None:
            return False    
        if set(shouldBeReached) != base:
            #print " ",shouldBeReached,reachable
            return False
        for i in range(2, 2+numConds):
            tmp=try_one(i)
            if tmp==None:
                return False
        return True

    
    def finished(buffer):
        if is_valid(buffer, shouldBeReached):
            output(buffer)

    def step(id):
        if id==numConds:
            finished(work)
        else:
            for jump1 in allowedJumpTargets:
                for jump2 in allowedJumpTargets:
                    if jump1>=jump2: continue
                    work[2+id]=[jump1,jump2]
                    step(id+1)
    step(0)
    print "There are %d variants for %d conditions blocks and %d target blocks; directExitAllowed=%s"%(len(counterarr), numConds, numTargets, directExitAllowed)

outf=open("source.s", "w")
outf.write('''
        .section        .rodata.str1.1,"aMS",@progbits,1
.LC_ret:
        .string "return block"
''')
for i in range(20):
    outf.write('''
.LC_%d:
        .string "then/else block %d"
'''%(i,i))
outf.write('''
        .text
        .local  conditions
        .comm   conditions,4000,32
        .p2align 4,,15
        .type   initConditions, @function
initConditions:
.LFB0:
        .cfi_startproc
        pushl   %esi
        .cfi_def_cfa_offset 8
        .cfi_offset 6, -8
        pushl   %ebx
        .cfi_def_cfa_offset 12
        .cfi_offset 3, -12
        leal    1000(%eax), %ebx
        movl    %eax, %esi
        .p2align 4,,10
        .p2align 3
.L2:
        leal    1(%eax), %edx
        movl    %edx, %ecx
        subl    %esi, %ecx
        cmpl    %ebx, %edx
        movl    %eax, conditions-4(,%ecx,4)
        movl    %edx, %eax
        jne     .L2
        popl    %ebx
        .cfi_restore 3
        .cfi_def_cfa_offset 8
        popl    %esi
        .cfi_restore 6
        .cfi_def_cfa_offset 4
        ret
        .cfi_endproc
.LFE0:
        .size   initConditions, .-initConditions

''')

for x in range(1, 5):
    # then
    generate(x, 1, True)

    # then, else
    generate(x, 2, False)

    # then, if-else
    generate(x, 2, True)

    # then, if-else, else
    generate(x, 3, False)

outf.write('''
        .globl  main
        .type   main, @function
main:
.LFB2:
        leal    4(%esp), %ecx
        andl    $-16, %esp
        pushl   -4(%ecx)
        pushl   %ebp
        movl    %esp, %ebp
        pushl   %ecx
        subl    $4, %esp
        movl    (%ecx), %eax
        call    initConditions
''')
for name in all_names_to_call:
    outf.write('        call    '+name+"\n")
outf.write('''
        addl    $4, %esp
        xorl    %eax, %eax
        popl    %ecx
        popl    %ebp
        leal    -4(%ecx), %esp
        ret
.LFE2:
        .size   main, .-main
''')

outf.close()