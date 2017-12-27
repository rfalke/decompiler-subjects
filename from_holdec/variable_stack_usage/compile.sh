baseopt="-fno-inline"
for opt in O0 O1 O2 O3 Os
do
	for cc in gcc clang
	do
		echo "=== $opt $cc"
		opt2="$opt -m32"
		arch="ia32"
		dir="${arch}_elf_${cc}_${opt}"
		mkdir -p "$dir"
		$cc $baseopt -$opt2 -g source.c -o "$dir/subject.exe"

		arch="x64"
		dir="${arch}_elf_${cc}_${opt}"
		mkdir -p "$dir"
		$cc $baseop -$opt -g source.c -o "$dir/subject.exe"
	done
done
