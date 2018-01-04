
import itertools

def calc_cond(name, numBlocks, order, index):
    print "=== ",name,numBlocks,order,index
    conds=[]
    res=range(numBlocks)
    for i in range(numBlocks):
        conds.append([])
    for i in range(numBlocks):
        if i<numBlocks-1:
            conds[i].append("c%d"%i)
    def moveDown(k):
        conds[k+1].append("!c%d"%res[k])
        conds[k],conds[k+1]=conds[k+1],conds[k]
        res[k],res[k+1]=res[k+1],res[k]
    while True:
        mismatch=None
        for search in sorted(range(numBlocks), reverse=True):
            toMoveDown=order.index(res[search])-search
            if order[search]!=res[search] and toMoveDown>0:
                mismatch=search
                break
        if mismatch==None:
            break
        toMoveDown=order.index(res[mismatch])-mismatch
        assert toMoveDown>0
        print "   move %d@%d %d steps down"%(res[mismatch], mismatch, toMoveDown)
        for step in range(toMoveDown):
            moveDown(mismatch+step)
    for i in range(numBlocks):
        print "  return %d if %s"%(res[i], conds[i])
            
    collect=conds[index]
    
    res=" && ".join(collect)
    #print "  ",res
    return res

def generate(numBlocks):
    baseCase=range(numBlocks)
    def create(suffix, order):
        paras=", ".join(["int c%d"%x for x in range(numBlocks-1)])
        name=" test_%d_blocks_%s"%(numBlocks,suffix)
        outf.write('''
int %s(%s) {
'''%(name,paras))
        for i in range(numBlocks-1):
            cond=calc_cond(name,numBlocks, order, i)
            outf.write('    if(%s) return %d;\n'%(cond, 200+order[i]))
        outf.write('''
    return %d;
}
'''%(200+order[numBlocks-1]))

    create("base", baseCase)
    counter=0
    for i in itertools.permutations(baseCase):
        if list(i) != baseCase:
            create("variant_"+str(counter), i)
            counter+=1
    outf.write('''
void test_%d_blocks() {
'''%numBlocks)
    for i in range(numBlocks-1):
        outf.write('''
    for(int c%d=0;c%d<2;c%d++) {
'''%(i,i,i))
    paras=", ".join(["c%d"%x for x in range(numBlocks-1)])
    outf.write('        int base=test_%d_blocks_base(%s);\n'%(numBlocks, paras))
    for i in range(counter):
        name="test_%d_blocks_variant_%d"%(numBlocks,i)
        outf.write('''
        if(base != %s(%s)) {
            printf("%s: expected %%d but got %%d\\n", base, %s(%s));
            assert(0);
        }'''%(name, paras, name, name, paras))
    for i in range(1,numBlocks):
        outf.write('''    }\n''')
    outf.write('''}\n''')

outf=open("source.c", "w")
outf.write("#include <assert.h>\n")
outf.write("#include <stdio.h>\n")
TO_TEST=[2,3,4,5,6]
for i in TO_TEST:
    generate(i)

outf.write('''
int main() {
%s
    return 0;
}
'''%"\n".join(["    test_%d_blocks();"%x for x in TO_TEST]))
outf.close()
