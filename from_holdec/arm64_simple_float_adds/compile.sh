for opt in O0 O1 O2 O3 Os
do
        for cc in gcc clang
        do
                echo "=== $opt $cc"
                dir="arm64_elf_${cc}_${opt}"
                mkdir -p "$dir"
                $cc -$opt source.c -o "$dir/subject.exe"
        done
done

