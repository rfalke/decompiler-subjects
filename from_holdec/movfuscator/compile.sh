
set -e

for d in $(find . -name "source.c" | xargs -n1 dirname | grep -v sin)
do
	mkdir -p "$d/ia32_elf_movcc"
	movcc -g "$d/source.c" -o "$d/ia32_elf_movcc/subject.exe"
done

d="sin"
movcc -g $MOVDIR/movfuscator/lib/softfloatfull.o "$d/source.c" -o "$d/ia32_elf_movcc/subject.exe"
