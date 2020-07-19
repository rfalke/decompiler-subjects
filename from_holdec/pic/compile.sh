
set -e

baseopt="-fno-inline"
for opt in O0 O1 O2 O3 Os
do
	for cc in gcc clang
	do
		for pic in plain pic PIC pie PIE
		do
			echo "=== $opt $cc $pic"
			if test "$pic" = "plain"; then
				pic2=""
				dname="plain"
			else
				pic2="-f$pic"
				lower=$(echo $pic | tr '[:upper:]' '[:lower:]')
				if test "$pic" = "$lower"; then
					dname="limited-$lower"
				else
					dname="unlimited-$lower"
				fi
			fi
			opt2="$opt -m32"
			arch="ia32"
			dir="${arch}_elf_${cc}_${opt}_${dname}"
			mkdir -p "$dir"
			$cc $baseopt -$opt2 $pic2 -g source.c -o "$dir/subject.exe"

			arch="x64"
			dir="${arch}_elf_${cc}_${opt}_${dname}"
			mkdir -p "$dir"
			$cc $baseop -$opt $pic2 -g source.c -o "$dir/subject.exe"
		done
	done
done
chmod a-x */subject.exe
