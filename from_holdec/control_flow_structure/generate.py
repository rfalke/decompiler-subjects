import networkx as nx
import copy

def createJumps(targets):
    res=[]
    curr=[-1]*len(targets)
    def step(i):
        if i==len(targets):
            l=[x for x in curr if x!=None]
            if len(l)>=1:
                res.append(tuple(l))
        else:
            curr[i]=None
            step(i+1)
            curr[i]=targets[i]
            step(i+1)
    step(0)
    res=sorted(res)
    return sorted(res, lambda x,y:cmp(len(x),len(y)))

all_names_to_call=[]
def generate(numBlocks):
    knownGraphs=[]
    entry=0
    exit=1
    targets=range(2, 2+numBlocks)
    allowedJumpTargets=sorted(targets+[exit])
    shouldBeReached=allowedJumpTargets
    allJumps=createJumps(allowedJumpTargets)

    prog=[]
    for i in range(2+numBlocks):
        prog.append(None)
    prog[entry]=[2]
    prog[exit]=[]
    for i in targets:
        prog[i]=[exit]

    counterarr=[]
    def output(solution, numEdges):
        counter=len(counterarr)
        name="test_%d_blocks_variant_%d_edges_%d"%(numBlocks, counter,numEdges)
        all_names_to_call.append(name)
        counterarr.append(1)
        prefix=str(len(all_names_to_call))+"_"+str(counter)
        outf.write("\n")
        outf.write('''
        .type   %s, @function
%s:
'''%(name,name))
        for i in range(2+numBlocks):
            outf.write("# B%d:\n"%i)
            if i==1:
                assert len(solution[i])==0
                outf.write("#   return;\n")
            else:
                for j in solution[i][:-1]:
                    outf.write("#   if(...) goto B%d;\n"%j)
                outf.write("#   goto B%d;\n"%solution[i][-1])
            outf.write("#\n")
        outf.write('''
.L_%s_0:
        jmp .L_%s_2
.L_%s_1:
        pushl   $.LC_ret
        calll   puts
        addl    $4, %%esp
        movl    $0, %%eax
        ret        
        '''%(prefix, prefix, prefix))
        condCounter=0
        for i in targets:
            outf.write('''
.L_%s_%d:
        pushl   $.LC_%d
        calll   puts
        addl    $4, %%esp
'''%(prefix, i, i))
            for j in solution[i][:-1]:
                outf.write('''
        cmpl    $0, conditions+%d
        je     .L_%s_%d
'''%(100+4*condCounter, prefix, j))
                condCounter+=1
            outf.write('''
        jmp    .L_%s_%d
'''%(prefix, solution[i][-1]))
        outf.write('''
.L_%s_FE1:
        .size   %s, .-%s
'''%(prefix, name, name))

    def is_valid(jumps):
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
        if len(base)!=numBlocks+2:
            #print " not all blocks reached",jumps,base
            return False
        #print jumps
        #return True
        graph=nx.DiGraph()
        for i in range(2+numBlocks):
            for j in jumps[i]:
                graph.add_edge(i,j)
        for g in knownGraphs:
            if not nx.faster_could_be_isomorphic(graph, g):
                continue
            if nx.is_isomorphic(graph, g):
                return False
        knownGraphs.append(graph)
        
        return (True,graph)
    
    toOutput=[]
    def finished(buffer):
        tmp=is_valid(buffer)
        if tmp:
            true,graph=tmp
            buffer=copy.deepcopy(buffer)
            #print buffer,nx.to_edgelist(graph)
            toOutput.append((len(nx.to_edgelist(graph)), buffer, graph))

    def step(id):
        if id==numBlocks:
            finished(prog)
        else:
            for jump in allJumps:
                prog[2+id]=jump
                step(id+1)
    step(0)
    print "There are %d variants for %d blocks"%(len(toOutput), numBlocks)
    toOutput.sort(lambda x,y: cmp(x[0], y[0]))
    for numEdges,buffer,graph in toOutput:
        output(buffer, numEdges)
    

outf=open("source.s", "w")
outf.write('''
        .section        .rodata.str1.1,"aMS",@progbits,1
.LC_ret:
        .string "exit block"
''')
for i in range(20):
    outf.write('''
.LC_%d:
        .string "block %d"
'''%(i, i))
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

generate(1)
generate(2)
generate(3)
#generate(4)

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
