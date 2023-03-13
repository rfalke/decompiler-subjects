all:
	nasm -fobj rf.asm 
	nasm -fobj helper.asm 
	./djlink-20010801/djlink.exe -o subject.exe rf.obj helper.obj 
	echo "Now edit the second call with a hex editor"
