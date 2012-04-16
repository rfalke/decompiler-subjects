#  sesamstr.s - a 4kb intro for the bizarre '99 demoparty 
#               (placed 2nd, just after a very ugly java 4k)
#	
#  Copyright (C) 1999 Jorik Blaas and Tijs van Bakel
#  Jorik Blaas <jrk@vengeance.et.tudelft.nl> (avoozl)
#  Tijs van Bakel <smoke@casema.net> (smoke)
#
#  This file is part of sesamstr, a 4k linux intro
#
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2, or (at your option)
#  any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program; see the file COPYING.  If not, write to
#  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

	# last minute comments:	
		
	# commented out some lines, possibly dangerous
	# how to check what is allowed?
	
	# perhaps it's better to use dlopen() and dlsym() only
	# and put the rest in the compressed code

	.global _start
	.globl	font_blocks
	.globl	rendered_font
	.globl	sine
	
	.equ	DT_STRTAB, 5
	.equ	DT_SYMTAB, 6
	.equ    PT_DYNAMIC, 2

  .equ	START, .
  .equ	TEXT_START, .

	# elf header
		
	.byte	0x7f, 'E', 'L', 'F'	# ident
  _start:
	jmp	code_start
	
	# we have some bytes left here, yet we don't use them.
#	call	vga_init
#	pushl	$5			# G320x200x256
	.int	0
	.byte	0
	.word	0
#	jmp	code_start

	.word	2			# type
	.word	3			# machine

	.int	1			# version
	.int	_start			# entry

	.int	PHDR-START		# program header table offset
	.int	0			# no section header table
	.int	0			# flags
	
	.word	EHDRSIZE
	.word	PHDENTSIZE
	.word	3			# number of entries in program table
	
	.word	0
	.word	0
	.word	0

  .equ	EHDRSIZE, .-START

	# program header table
	
  .equ	PHDR, .

	.int	3
	.int	DYNAMIC_LINKER_START-START
	.int	DYNAMIC_LINKER_START
	.int	DYNAMIC_LINKER_START
	.int	DYNAMIC_LINKER_SIZE
	.int	DYNAMIC_LINKER_SIZE
	.int	4
	.int	1
	
  .equ	PHDENTSIZE, .-PHDR

	.int	1			# type (LOAD)
	.int	0			# offset
	.int	TEXT_START		# vaddr
	.int	TEXT_START		# paddr
	.int	TEXT_SIZE		# filesize
	.int	TEXT_SIZE		# membersize
	.int	7			# flags
	.int	0x1000			# align
	
	.int	2			# type (DYNAMIC)
	.int	DYNAMIC_START-START
	.int	DYNAMIC_START
#	.int	DYNAMIC_START
#	.int	DYNAMIC_SIZE
#	.int	8
#	.int	7
#	.int	0x1000

  .equ	DYNAMIC_LINKER_START, .
	.ascii	"/lib/ld-linux.so.2\0"
  .equ	DYNAMIC_LINKER_SIZE, .-DYNAMIC_LINKER_START

## program lookup table ##

	.equ	REL_PLT_START, .
  rel_vga_setmode:	.int	got_vga_setmode
			.word	0x0007
			.word	0
  rel_vga_init:		.int	got_vga_init
			.word	0x0107 
			.word	0
  rel_vga_getgraphmem:	.int	got_vga_getgraphmem
			.word	0x0207
			.word	0
	.equ	REL_PLT_SIZE, .-REL_PLT_START

  rel_plt:	pushl	got_plus_4
		jmp	*got_plus_8

  vga_init:	jmp	*got_vga_init
		pushl	$rel_vga_init-REL_PLT_START
		jmp	rel_plt
  vga_setmode:	jmp	*got_vga_setmode
		pushl	$rel_vga_setmode-REL_PLT_START
		jmp	rel_plt
  vga_getgraphmem:	
		jmp	*got_vga_getgraphmem
		pushl	$rel_vga_getgraphmem-REL_PLT_START
		jmp	rel_plt

## symbol table (.dynsym) ##

	.byte	0
	.word	0

  .equ	SYMTAB_START, .
  .equ	DYNSYM_START, .

	.int	STR_VGA_SETMODE
	.int	vga_setmode
	.int	0
	.byte	0
	.byte	0
	.word	0

	.int	STR_VGA_INIT			# st_name
	.int	vga_init			# st_value
	.int	0				# st_size
	.byte	0				# st_info
	.byte	0				# st_other
	.word	0				# st_shndx
	
	.int	STR_VGA_GETGRAPHMEM
	.int	vga_getgraphmem
	.int	0
	.byte	0
	.byte	0
	.byte	0
	
## string table ##

  .equ	STRTAB_START, .
	.byte	0
  .equ	DYNSYM_SIZE, .-DYNSYM_START
  .equ	STR_NEEDED, .-STRTAB_START
 	.ascii	"libvga.so\0"
  .equ	STR_VGA_SETMODE, .-STRTAB_START
	.ascii	"vga_setmode\0"
  .equ	STR_VGA_INIT, .-STRTAB_START
	.ascii	"vga_init\0"
  .equ  STR_VGA_GETGRAPHMEM, .-STRTAB_START
	.ascii	"vga_getgraphmem\0"
  .equ	STRTAB_SIZE, .-STRTAB_START

## global offset table ##
	
  got:		.int	DYNAMIC_START
  got_plus_4:	.int	0
  got_plus_8:	.int	0
	
  got_vga_init:		.int	vga_init+4
  got_vga_setmode:	.int	vga_setmode+4
  got_vga_getgraphmem:	.int	vga_getgraphmem+4

## .dynamic	

  .equ	DYNAMIC_START, .

	.int	4			# DT_HASH
	.int	HASH_START

	.int	5			# DT_STRTAB
	.int	STRTAB_START

	.int	6			# DT_SYMTAB
	.int	SYMTAB_START

	# this one does not seem to be needed
#	.int	10			# DT_STRSIZE
#	.int	STRTAB_SIZE

	# this one does not seem to be needed
#	.int	11			# DT_SYMENT
#	.int	16

	.int	3
	.int	got

	.int	2			# DT_PLTRELSZ
	.int	REL_PLT_SIZE

	# this entry is needed when LD_BIND_NOW is set
	.int	20			# DT_PLTREL
	.int	17			# type = DT_REL

	.int	23			# DT_JMPREL
	.int	REL_PLT_START

	# don't need this if there's no global data
#	.int	17			# DT_REL
#	.int	REL_DATA_START
#	.int	18			# DT_RELSZ
#	.int	REL_DATA_SIZE
#	.int	19			# DT_RELENT
#	.int	8

	.int	1			# DT_NEEDED
  # luckily the hash table can go here :) 
  # the hash table entries are not needed because there is no global data
  .equ	HASH_START, .
	.int	1			# STR_NEEDED

	.int	0			# DT_NULL
	.int	0

  .equ	DYNAMIC_SIZE, .-DYNAMIC_START

## .text ##

code_start:

	cld
	
 	pushl  %ebp		
	movl   %esp,%ebp

	movl	$45, %eax
	xorl	%ebx, %ebx
	int	$0x80		
	addl	$5000000,%eax
	movl	%eax, %ebx
	movl	$45, %eax
	int	$0x80			# get some memory

	movl	$1000000, %ecx
	movl	$zeroes, %edi
	xorl	%eax,%eax
	rep	
	stosl

	call	vga_init
	movb	$5, %al
	pushl	%eax
	call	vga_setmode
	popl	%eax

	call	vga_getgraphmem
	movl	%eax, vga_graph_mem

	finit
	call	sin_precalc

	# main code starts here

	movl	$grover_gfx, %esi
	movl	$grover_texture, %edi
	call	uncompress_graphics

	movl	$graaf_gfx, %esi
	movl	$graaf_texture, %edi
	call	uncompress_graphics

	call	make_letter_blocks

	# open dsp device /dev/dsp
	# we presumably use 8khz U8 stereo
	movl	$5, %eax
	movl	$filename_dev_dsp, %ebx
	movl	$1, %ecx			# open read/write 
	int	$0x80
	movl	%eax, file_dev_dsp

	movl	$event_table, %esi
	movl	graph_mem, %edi
	movl	$1, %ecx
	
	main_loop:

		decl	%ecx
		jnz	stick_with_this_event
	
			lodsw
			movzwl	%ax, %ecx
			lodsl
			movl	%eax, event_function
			lodsl
			movl	%eax, event_palette_function

		stick_with_this_event:

		movl	%ecx, frame_count

		pusha
	
		call	*event_function
		call	dsp_sound

		call	vga_waitretrace
		call	*event_palette_function

		movl	$(16000), %ecx	
		movl	vga_graph_mem, %edi
		movl	graph_mem, %esi
		rep
		movsl

		popa
	
	jmp	main_loop

## to quit, go here
	
quit:
	pushl	$0
	call	vga_setmode

	movl	$1, %eax
	int	$0x80

	## MAIN LOOP ENDS HERE ##

	.include	"code.inc"
	.include	"data.inc"

	.equ	zeroes, .
	.include	"zero_data.inc"
	
	.equ	TEXT_SIZE, .-TEXT_START

	
