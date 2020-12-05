gcc -Wall -m32 \
	source_test1.s source_test2.s source_test3.s source_test4.s source_test5.s source_test6.s \
	source.s && ./a.out
cp a.out ia32_elf/subject.exe
rm -f ia32_elf/by_*
