out=open("source.c","w")

numbers=range(1, 1025)
#+[10**x for x in range(4,10)]+[2**x for x in range(11,65)]
numbers=sorted(list(set(numbers)))

def write_array(out, ctype, num, name):
    out.write("%s %s[%d];\n"%(ctype, name,num))

def write_op(out, fname, arr_prefix, op):
    out.write("void %s() {\n"%fname)
    for index, number in enumerate(numbers):
        x="%s_src[%d]"%(arr_prefix, index)
        n=str(number)
        out.write("  %s_dest[%d] = %s;\n"%(arr_prefix, index, op(x,n)))
    out.write("}\n")

for t in ["char", "short", "int", "long int", "long long"]:
    for s in ["signed", "unsigned"]:
        prefix=s+" "+t
        prefix=prefix.replace(" ", "_")
        write_array(out, s+" "+t, len(numbers), prefix + "_src")
        write_array(out, s+" "+t, len(numbers), prefix + "_dest")
        for opname, opf in [("add", lambda x,n:x+" + "+n), 
                            ("mult", lambda x,n:x+" * "+n),
                            ("div", lambda x,n:x+" / "+n),
                            ("modulo", lambda x,n:x+" % "+n)]:
            write_op(out, prefix+"_"+opname, prefix, opf)    

out.write("int main() {return 0;}\n")
