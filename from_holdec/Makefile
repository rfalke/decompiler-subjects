all: all_i386_opcodes/ia32_elf/subject.exe.objdump \
	all_i386_opcodes/ia32_elf/constant_eval.result \
	post_i386_opcodes/ia32_elf/subject.exe.objdump \
	post_i386_opcodes/ia32_elf/constant_eval.result

### all_i386_opcodes

all_i386_opcodes/ia32_elf/subject.o: all_i386_opcodes/source.s
	gcc -m32 -c $< -o $@

all_i386_opcodes/ia32_elf/subject.exe: all_i386_opcodes/ia32_elf/subject.o
	echo "int main(){return 0;}" >main.c
	gcc -m32 -c main.c
	gcc -m32 $< main.o -o $@
	rm main.c main.o $<
	chmod a-x $@

all_i386_opcodes/ia32_elf/subject.exe.objdump: all_i386_opcodes/ia32_elf/subject.exe
	objdump -d $< >$@

all_i386_opcodes/source.s: all_i386_opcodes/input generator.py
	python generator.py all_i386_opcodes/input all_i386_opcodes/source.s

all_i386_opcodes/ia32_elf/constant_eval.result: all_i386_opcodes/input generator.py driver.c
	python generator.py -evaluator all_i386_opcodes/input _tmp_source.s driver_inc.c
	gcc -m32 -g -Wall -Werror -c _tmp_source.s
	gcc -m32 -g -Wall -Werror -c driver.c
	gcc -m32 -g -o driver driver.o _tmp_source.o
	./driver >_tmp_result
	mv _tmp_result $@
	rm _tmp_source.* driver.o driver driver_inc.c

### post_i386_opcodes

post_i386_opcodes/ia32_elf/subject.o: post_i386_opcodes/source.s
	gcc -m32 -c $< -o $@

post_i386_opcodes/ia32_elf/subject.exe: post_i386_opcodes/ia32_elf/subject.o
	echo "int main(){return 0;}" >main.c
	gcc -m32 -c main.c
	gcc -m32 $< main.o -o $@
	rm main.c main.o $<
	chmod a-x $@

post_i386_opcodes/ia32_elf/subject.exe.objdump: post_i386_opcodes/ia32_elf/subject.exe
	objdump -d $< >$@

post_i386_opcodes/source.s: post_i386_opcodes/input generator.py
	python generator.py post_i386_opcodes/input post_i386_opcodes/source.s

post_i386_opcodes/ia32_elf/constant_eval.result: post_i386_opcodes/input generator.py driver.c
	python generator.py -evaluator post_i386_opcodes/input _tmp_source.s driver_inc.c
	gcc -m32 -g -Wall -Werror -c _tmp_source.s
	gcc -m32 -g -Wall -Werror -c driver.c
	gcc -m32 -g -o driver driver.o _tmp_source.o
	./driver >_tmp_result
	mv _tmp_result $@
	rm _tmp_source.* driver.o driver driver_inc.c

### remaining
clean:
	rm -f *.o driver
	cd all_i386_opcodes; rm -f source.s
	cd all_i386_opcodes/ia32_elf; rm -f subject.o subject.exe.objdump subject.exe constant_eval.result
	cd post_i386_opcodes; rm -f source.s
	cd post_i386_opcodes/ia32_elf; rm -f subject.o subject.exe.objdump subject.exe constant_eval.result
