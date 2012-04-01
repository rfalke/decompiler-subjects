all: all_i386_opcodes/ia32_elf/subject.exe.objdump post_i386_opcodes/ia32_elf/subject.exe.objdump

### all_i386_opcodes

all_i386_opcodes/ia32_elf/subject.exe: all_i386_opcodes/source.s
	gcc -m32 $< -o $@

all_i386_opcodes/ia32_elf/subject.exe.objdump: all_i386_opcodes/ia32_elf/subject.exe
	objdump -d $< >$@

all_i386_opcodes/source.s: all_i386_opcodes/input generator.py
	python generator.py all_i386_opcodes/input all_i386_opcodes/source.s

### post_i386_opcodes

post_i386_opcodes/ia32_elf/subject.exe: post_i386_opcodes/source.s
	gcc -m32 $< -o $@

post_i386_opcodes/ia32_elf/subject.exe.objdump: post_i386_opcodes/ia32_elf/subject.exe
	objdump -d $< >$@

post_i386_opcodes/source.s: post_i386_opcodes/input generator.py
	python generator.py post_i386_opcodes/input post_i386_opcodes/source.s

clean:
	rm -f all_i386_opcodes/source.s all_i386_opcodes/ia32_elf/subject.exe.objdump all_i386_opcodes/ia32_elf/subject.exe
	rm -f post_i386_opcodes/source.s post_i386_opcodes/ia32_elf/subject.exe.objdump post_i386_opcodes/ia32_elf/subject.exe
