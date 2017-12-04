for opt in O0 O1 O2 O3 Os
do
	for cc in gcc clang
	do
		echo "=== $opt $cc 32"
		opt2="$opt -m32"
		arch="ia32"
		dir="${arch}_elf_${cc}_${opt}"
		mkdir -p "$dir"
		$cc -$opt2 -g source.c -o "$dir/subject.exe"

		echo "=== $opt $cc 64"
		arch="x64"
		dir="${arch}_elf_${cc}_${opt}"
		mkdir -p "$dir"
		$cc -$opt -g source.c -o "$dir/subject.exe"
	done
done
