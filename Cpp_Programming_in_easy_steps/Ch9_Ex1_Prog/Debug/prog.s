	.file	"prog.cpp"
	.text
.Ltext0:
	.cfi_sections	.debug_frame
.lcomm _ZStL8__ioinit,1,1
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "This is simple test program\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB981:
	.file 1 "../prog.cpp"
	.loc 1 62 0
	.cfi_startproc
	pushq	%rbp
	.seh_pushreg	%rbp
.LCFI0:
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
.LCFI1:
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_setframe	%rbp, 32
	.seh_endprologue
	.loc 1 62 0
	call	__main
	.loc 1 63 0
	leaq	.LC0(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rdx
	movq	%rax, %rcx
	call	_ZNSolsEPFRSoS_E
	.loc 1 64 0
	movl	$0, %eax
	.loc 1 65 0
	addq	$32, %rsp
	popq	%rbp
.LCFI2:
	.cfi_restore 6
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE981:
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB991:
	.file 2 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/iostream"
	.loc 2 75 0
	.cfi_startproc
	pushq	%rbp
	.seh_pushreg	%rbp
.LCFI3:
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
.LCFI4:
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_setframe	%rbp, 32
	.seh_endprologue
	.loc 2 75 0
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
.LCFI5:
	.cfi_restore 6
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE991:
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB990:
	.loc 1 65 0
	.cfi_startproc
	pushq	%rbp
	.seh_pushreg	%rbp
.LCFI6:
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
.LCFI7:
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_setframe	%rbp, 32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	.loc 1 65 0
	cmpl	$1, 16(%rbp)
	jne	.L4
	.loc 1 65 0 is_stmt 0 discriminator 1
	cmpl	$65535, 24(%rbp)
	jne	.L4
	.loc 2 75 0 is_stmt 1
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
	nop
.L4:
	.loc 1 65 0
	addq	$32, %rsp
	popq	%rbp
.LCFI8:
	.cfi_restore 6
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE990:
	.seh_endproc
	.def	_GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_main
_GLOBAL__sub_I_main:
.LFB992:
	.loc 1 65 0
	.cfi_startproc
	pushq	%rbp
	.seh_pushreg	%rbp
.LCFI9:
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
.LCFI10:
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_setframe	%rbp, 32
	.seh_endprologue
	.loc 1 65 0
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
.LCFI11:
	.cfi_restore 6
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE992:
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.text
.Letext0:
	.file 3 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/_mingw.h"
	.file 4 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/locale.h"
	.file 5 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/wchar.h"
	.file 6 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/cwchar"
	.file 7 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/x86_64-w64-mingw32/bits/c++config.h"
	.file 8 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/clocale"
	.file 9 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/ios_base.h"
	.file 10 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/cwctype"
	.file 11 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/iosfwd"
	.file 12 "<built-in>"
	.file 13 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/ext/new_allocator.h"
	.file 14 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/debug/debug.h"
	.file 15 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/char_traits.h"
	.file 16 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/x86_64-w64-mingw32/bits/atomic_word.h"
	.file 17 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/ext/numeric_traits.h"
	.file 18 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/wctype.h"
	.file 19 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/x86_64-w64-mingw32/bits/gthr-default.h"
	.section	.debug_info,"dr"
.Ldebug_info0:
	.long	0x1a8d
	.word	0x2
	.secrel32	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.ascii "GNU C++ 4.7.1\0"
	.byte	0x4
	.ascii "..\\prog.cpp\0"
	.ascii "D:\\\\UiO_MASTERS_DOCS\\\\CandCpp_workspace\\\\Cpp_Tutorials\\\\Ch9_Ex1_Prog\\\\Debug\0"
	.quad	.Ltext0
	.quad	.Letext0
	.secrel32	.Ldebug_line0
	.secrel32	.Ldebug_macro0
	.uleb128 0x2
	.byte	0x8
	.ascii "__builtin_va_list\0"
	.long	0xa3
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.ascii "char\0"
	.uleb128 0x4
	.ascii "size_t\0"
	.byte	0x3
	.word	0x173
	.long	0xba
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.ascii "long long unsigned int\0"
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.ascii "long long int\0"
	.uleb128 0x4
	.ascii "wint_t\0"
	.byte	0x3
	.word	0x1b5
	.long	0xf4
	.uleb128 0x3
	.byte	0x2
	.byte	0x7
	.ascii "short unsigned int\0"
	.uleb128 0x4
	.ascii "wctype_t\0"
	.byte	0x3
	.word	0x1b6
	.long	0xf4
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.ascii "int\0"
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.ascii "long int\0"
	.uleb128 0x5
	.byte	0x8
	.long	0xa3
	.uleb128 0x5
	.byte	0x8
	.long	0x13a
	.uleb128 0x3
	.byte	0x2
	.byte	0x7
	.ascii "wchar_t\0"
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.ascii "unsigned int\0"
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.ascii "sizetype\0"
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.ascii "long unsigned int\0"
	.uleb128 0x6
	.ascii "lconv\0"
	.byte	0x58
	.byte	0x4
	.byte	0x2d
	.long	0x339
	.uleb128 0x7
	.ascii "decimal_point\0"
	.byte	0x4
	.byte	0x2e
	.long	0x12e
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.uleb128 0x7
	.ascii "thousands_sep\0"
	.byte	0x4
	.byte	0x2f
	.long	0x12e
	.byte	0x2
	.byte	0x23
	.uleb128 0x8
	.uleb128 0x7
	.ascii "grouping\0"
	.byte	0x4
	.byte	0x30
	.long	0x12e
	.byte	0x2
	.byte	0x23
	.uleb128 0x10
	.uleb128 0x7
	.ascii "int_curr_symbol\0"
	.byte	0x4
	.byte	0x31
	.long	0x12e
	.byte	0x2
	.byte	0x23
	.uleb128 0x18
	.uleb128 0x7
	.ascii "currency_symbol\0"
	.byte	0x4
	.byte	0x32
	.long	0x12e
	.byte	0x2
	.byte	0x23
	.uleb128 0x20
	.uleb128 0x7
	.ascii "mon_decimal_point\0"
	.byte	0x4
	.byte	0x33
	.long	0x12e
	.byte	0x2
	.byte	0x23
	.uleb128 0x28
	.uleb128 0x7
	.ascii "mon_thousands_sep\0"
	.byte	0x4
	.byte	0x34
	.long	0x12e
	.byte	0x2
	.byte	0x23
	.uleb128 0x30
	.uleb128 0x7
	.ascii "mon_grouping\0"
	.byte	0x4
	.byte	0x35
	.long	0x12e
	.byte	0x2
	.byte	0x23
	.uleb128 0x38
	.uleb128 0x7
	.ascii "positive_sign\0"
	.byte	0x4
	.byte	0x36
	.long	0x12e
	.byte	0x2
	.byte	0x23
	.uleb128 0x40
	.uleb128 0x7
	.ascii "negative_sign\0"
	.byte	0x4
	.byte	0x37
	.long	0x12e
	.byte	0x2
	.byte	0x23
	.uleb128 0x48
	.uleb128 0x7
	.ascii "int_frac_digits\0"
	.byte	0x4
	.byte	0x38
	.long	0xa3
	.byte	0x2
	.byte	0x23
	.uleb128 0x50
	.uleb128 0x7
	.ascii "frac_digits\0"
	.byte	0x4
	.byte	0x39
	.long	0xa3
	.byte	0x2
	.byte	0x23
	.uleb128 0x51
	.uleb128 0x7
	.ascii "p_cs_precedes\0"
	.byte	0x4
	.byte	0x3a
	.long	0xa3
	.byte	0x2
	.byte	0x23
	.uleb128 0x52
	.uleb128 0x7
	.ascii "p_sep_by_space\0"
	.byte	0x4
	.byte	0x3b
	.long	0xa3
	.byte	0x2
	.byte	0x23
	.uleb128 0x53
	.uleb128 0x7
	.ascii "n_cs_precedes\0"
	.byte	0x4
	.byte	0x3c
	.long	0xa3
	.byte	0x2
	.byte	0x23
	.uleb128 0x54
	.uleb128 0x7
	.ascii "n_sep_by_space\0"
	.byte	0x4
	.byte	0x3d
	.long	0xa3
	.byte	0x2
	.byte	0x23
	.uleb128 0x55
	.uleb128 0x7
	.ascii "p_sign_posn\0"
	.byte	0x4
	.byte	0x3e
	.long	0xa3
	.byte	0x2
	.byte	0x23
	.uleb128 0x56
	.uleb128 0x7
	.ascii "n_sign_posn\0"
	.byte	0x4
	.byte	0x3f
	.long	0xa3
	.byte	0x2
	.byte	0x23
	.uleb128 0x57
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0x176
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.ascii "unsigned char\0"
	.uleb128 0x6
	.ascii "_iobuf\0"
	.byte	0x30
	.byte	0x5
	.byte	0x1c
	.long	0x3e7
	.uleb128 0x7
	.ascii "_ptr\0"
	.byte	0x5
	.byte	0x1d
	.long	0x12e
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.uleb128 0x7
	.ascii "_cnt\0"
	.byte	0x5
	.byte	0x1e
	.long	0x11b
	.byte	0x2
	.byte	0x23
	.uleb128 0x8
	.uleb128 0x7
	.ascii "_base\0"
	.byte	0x5
	.byte	0x1f
	.long	0x12e
	.byte	0x2
	.byte	0x23
	.uleb128 0x10
	.uleb128 0x7
	.ascii "_flag\0"
	.byte	0x5
	.byte	0x20
	.long	0x11b
	.byte	0x2
	.byte	0x23
	.uleb128 0x18
	.uleb128 0x7
	.ascii "_file\0"
	.byte	0x5
	.byte	0x21
	.long	0x11b
	.byte	0x2
	.byte	0x23
	.uleb128 0x1c
	.uleb128 0x7
	.ascii "_charbuf\0"
	.byte	0x5
	.byte	0x22
	.long	0x11b
	.byte	0x2
	.byte	0x23
	.uleb128 0x20
	.uleb128 0x7
	.ascii "_bufsiz\0"
	.byte	0x5
	.byte	0x23
	.long	0x11b
	.byte	0x2
	.byte	0x23
	.uleb128 0x24
	.uleb128 0x7
	.ascii "_tmpfname\0"
	.byte	0x5
	.byte	0x24
	.long	0x12e
	.byte	0x2
	.byte	0x23
	.uleb128 0x28
	.byte	0
	.uleb128 0x8
	.ascii "FILE\0"
	.byte	0x5
	.byte	0x26
	.long	0x350
	.uleb128 0x3
	.byte	0x2
	.byte	0x5
	.ascii "short int\0"
	.uleb128 0x9
	.ascii "tm\0"
	.byte	0x24
	.byte	0x5
	.word	0x383
	.long	0x4b6
	.uleb128 0xa
	.ascii "tm_sec\0"
	.byte	0x5
	.word	0x384
	.long	0x11b
	.byte	0x2
	.byte	0x23
	.uleb128 0
	.uleb128 0xa
	.ascii "tm_min\0"
	.byte	0x5
	.word	0x385
	.long	0x11b
	.byte	0x2
	.byte	0x23
	.uleb128 0x4
	.uleb128 0xa
	.ascii "tm_hour\0"
	.byte	0x5
	.word	0x386
	.long	0x11b
	.byte	0x2
	.byte	0x23
	.uleb128 0x8
	.uleb128 0xa
	.ascii "tm_mday\0"
	.byte	0x5
	.word	0x387
	.long	0x11b
	.byte	0x2
	.byte	0x23
	.uleb128 0xc
	.uleb128 0xa
	.ascii "tm_mon\0"
	.byte	0x5
	.word	0x388
	.long	0x11b
	.byte	0x2
	.byte	0x23
	.uleb128 0x10
	.uleb128 0xa
	.ascii "tm_year\0"
	.byte	0x5
	.word	0x389
	.long	0x11b
	.byte	0x2
	.byte	0x23
	.uleb128 0x14
	.uleb128 0xa
	.ascii "tm_wday\0"
	.byte	0x5
	.word	0x38a
	.long	0x11b
	.byte	0x2
	.byte	0x23
	.uleb128 0x18
	.uleb128 0xa
	.ascii "tm_yday\0"
	.byte	0x5
	.word	0x38b
	.long	0x11b
	.byte	0x2
	.byte	0x23
	.uleb128 0x1c
	.uleb128 0xa
	.ascii "tm_isdst\0"
	.byte	0x5
	.word	0x38c
	.long	0x11b
	.byte	0x2
	.byte	0x23
	.uleb128 0x20
	.byte	0
	.uleb128 0x4
	.ascii "mbstate_t\0"
	.byte	0x5
	.word	0x3a8
	.long	0x11b
	.uleb128 0xb
	.ascii "std\0"
	.byte	0xc
	.byte	0
	.long	0x806
	.uleb128 0xc
	.byte	0x6
	.byte	0x42
	.long	0x4b6
	.uleb128 0xc
	.byte	0x6
	.byte	0x8d
	.long	0xe5
	.uleb128 0xc
	.byte	0x6
	.byte	0x8f
	.long	0x806
	.uleb128 0xc
	.byte	0x6
	.byte	0x90
	.long	0x820
	.uleb128 0xc
	.byte	0x6
	.byte	0x91
	.long	0x841
	.uleb128 0xc
	.byte	0x6
	.byte	0x92
	.long	0x866
	.uleb128 0xc
	.byte	0x6
	.byte	0x93
	.long	0x886
	.uleb128 0xc
	.byte	0x6
	.byte	0x94
	.long	0x8b1
	.uleb128 0xc
	.byte	0x6
	.byte	0x95
	.long	0x8d0
	.uleb128 0xc
	.byte	0x6
	.byte	0x96
	.long	0x8f2
	.uleb128 0xc
	.byte	0x6
	.byte	0x97
	.long	0x913
	.uleb128 0xc
	.byte	0x6
	.byte	0x98
	.long	0x92d
	.uleb128 0xc
	.byte	0x6
	.byte	0x99
	.long	0x940
	.uleb128 0xc
	.byte	0x6
	.byte	0x9a
	.long	0x976
	.uleb128 0xc
	.byte	0x6
	.byte	0x9b
	.long	0x9a1
	.uleb128 0xc
	.byte	0x6
	.byte	0x9c
	.long	0x9c8
	.uleb128 0xc
	.byte	0x6
	.byte	0x9d
	.long	0x9fb
	.uleb128 0xc
	.byte	0x6
	.byte	0x9e
	.long	0xa1a
	.uleb128 0xc
	.byte	0x6
	.byte	0xa2
	.long	0xa37
	.uleb128 0xc
	.byte	0x6
	.byte	0xa3
	.long	0xa58
	.uleb128 0xc
	.byte	0x6
	.byte	0xa4
	.long	0xa79
	.uleb128 0xc
	.byte	0x6
	.byte	0xa6
	.long	0xaa0
	.uleb128 0xc
	.byte	0x6
	.byte	0xac
	.long	0xac6
	.uleb128 0xc
	.byte	0x6
	.byte	0xae
	.long	0xaec
	.uleb128 0xc
	.byte	0x6
	.byte	0xb0
	.long	0xb0d
	.uleb128 0xc
	.byte	0x6
	.byte	0xb2
	.long	0xb2d
	.uleb128 0xc
	.byte	0x6
	.byte	0xb3
	.long	0xb53
	.uleb128 0xc
	.byte	0x6
	.byte	0xb4
	.long	0xb73
	.uleb128 0xc
	.byte	0x6
	.byte	0xb5
	.long	0xb93
	.uleb128 0xc
	.byte	0x6
	.byte	0xb6
	.long	0xbb4
	.uleb128 0xc
	.byte	0x6
	.byte	0xb7
	.long	0xbd4
	.uleb128 0xc
	.byte	0x6
	.byte	0xb8
	.long	0xbf5
	.uleb128 0xc
	.byte	0x6
	.byte	0xb9
	.long	0xc2c
	.uleb128 0xc
	.byte	0x6
	.byte	0xba
	.long	0xc47
	.uleb128 0xc
	.byte	0x6
	.byte	0xbb
	.long	0xc6d
	.uleb128 0xc
	.byte	0x6
	.byte	0xbc
	.long	0xc93
	.uleb128 0xc
	.byte	0x6
	.byte	0xbd
	.long	0xcb9
	.uleb128 0xc
	.byte	0x6
	.byte	0xbe
	.long	0xcec
	.uleb128 0xc
	.byte	0x6
	.byte	0xbf
	.long	0xd0c
	.uleb128 0xc
	.byte	0x6
	.byte	0xc1
	.long	0xd3c
	.uleb128 0xc
	.byte	0x6
	.byte	0xc3
	.long	0xd65
	.uleb128 0xc
	.byte	0x6
	.byte	0xc4
	.long	0xd85
	.uleb128 0xc
	.byte	0x6
	.byte	0xc5
	.long	0xdaa
	.uleb128 0xc
	.byte	0x6
	.byte	0xc6
	.long	0xdd0
	.uleb128 0xc
	.byte	0x6
	.byte	0xc7
	.long	0xdf6
	.uleb128 0xc
	.byte	0x6
	.byte	0xc8
	.long	0xe10
	.uleb128 0xc
	.byte	0x6
	.byte	0xc9
	.long	0xe36
	.uleb128 0xc
	.byte	0x6
	.byte	0xca
	.long	0xe5c
	.uleb128 0xc
	.byte	0x6
	.byte	0xcb
	.long	0xe83
	.uleb128 0xc
	.byte	0x6
	.byte	0xcc
	.long	0xea9
	.uleb128 0xc
	.byte	0x6
	.byte	0xcd
	.long	0xec5
	.uleb128 0xc
	.byte	0x6
	.byte	0xce
	.long	0xee0
	.uleb128 0xc
	.byte	0x6
	.byte	0xcf
	.long	0xf00
	.uleb128 0xc
	.byte	0x6
	.byte	0xd0
	.long	0xf21
	.uleb128 0xc
	.byte	0x6
	.byte	0xd1
	.long	0xf42
	.uleb128 0xc
	.byte	0x6
	.byte	0xd2
	.long	0xf62
	.uleb128 0xd
	.byte	0x6
	.word	0x10a
	.long	0x107e
	.uleb128 0xd
	.byte	0x6
	.word	0x10b
	.long	0x10ae
	.uleb128 0xd
	.byte	0x6
	.word	0x10c
	.long	0x10d4
	.uleb128 0xe
	.ascii "__debug\0"
	.byte	0xe
	.byte	0x31
	.uleb128 0xf
	.ascii "char_traits<char>\0"
	.byte	0x1
	.uleb128 0x8
	.ascii "size_t\0"
	.byte	0x7
	.byte	0xad
	.long	0xba
	.uleb128 0xc
	.byte	0x8
	.byte	0x37
	.long	0x176
	.uleb128 0xc
	.byte	0x8
	.byte	0x38
	.long	0x151a
	.uleb128 0xc
	.byte	0x8
	.byte	0x39
	.long	0x153c
	.uleb128 0x8
	.ascii "ptrdiff_t\0"
	.byte	0x7
	.byte	0xae
	.long	0xd4
	.uleb128 0x10
	.ascii "ios_base\0"
	.byte	0x1
	.long	0x74f
	.uleb128 0x11
	.ascii "Init\0"
	.byte	0x1
	.byte	0x9
	.word	0x217
	.uleb128 0x12
	.ascii "_S_refcount\0"
	.byte	0x9
	.word	0x21f
	.long	0x1550
	.byte	0x1
	.byte	0x3
	.byte	0x1
	.uleb128 0x12
	.ascii "_S_synced_with_stdio\0"
	.byte	0x9
	.word	0x220
	.long	0x14fb
	.byte	0x1
	.byte	0x3
	.byte	0x1
	.uleb128 0x13
	.byte	0x1
	.ascii "Init\0"
	.byte	0x9
	.word	0x21b
	.byte	0x1
	.long	0x729
	.long	0x730
	.uleb128 0x14
	.long	0x1619
	.byte	0x1
	.byte	0
	.uleb128 0x15
	.byte	0x1
	.ascii "~Init\0"
	.byte	0x9
	.word	0x21c
	.byte	0x1
	.long	0x740
	.uleb128 0x14
	.long	0x1619
	.byte	0x1
	.uleb128 0x14
	.long	0x11b
	.byte	0x1
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xc
	.byte	0xa
	.byte	0x54
	.long	0x161f
	.uleb128 0xc
	.byte	0xa
	.byte	0x55
	.long	0x10a
	.uleb128 0xc
	.byte	0xa
	.byte	0x56
	.long	0xe5
	.uleb128 0xc
	.byte	0xa
	.byte	0x5e
	.long	0x1630
	.uleb128 0xc
	.byte	0xa
	.byte	0x67
	.long	0x1651
	.uleb128 0xc
	.byte	0xa
	.byte	0x6a
	.long	0x1673
	.uleb128 0xc
	.byte	0xa
	.byte	0x6b
	.long	0x168e
	.uleb128 0x10
	.ascii "basic_ostream<char, std::char_traits<char> >\0"
	.byte	0x1
	.long	0x7cd
	.uleb128 0x16
	.ascii "_CharT\0"
	.long	0xa3
	.uleb128 0x16
	.ascii "_Traits\0"
	.long	0x1125
	.byte	0
	.uleb128 0x8
	.ascii "ostream\0"
	.byte	0xb
	.byte	0x8a
	.long	0x780
	.uleb128 0x17
	.ascii "cout\0"
	.byte	0x2
	.byte	0x3e
	.ascii "_ZSt4cout\0"
	.long	0x7cd
	.byte	0x1
	.byte	0x1
	.uleb128 0x18
	.ascii "__ioinit\0"
	.byte	0x2
	.byte	0x4b
	.long	0x6d5
	.byte	0x1
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "btowc\0"
	.byte	0x5
	.word	0x3ab
	.long	0xe5
	.byte	0x1
	.long	0x820
	.uleb128 0x1a
	.long	0x11b
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "fgetwc\0"
	.byte	0x5
	.word	0x289
	.long	0xe5
	.byte	0x1
	.long	0x83b
	.uleb128 0x1a
	.long	0x83b
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0x3e7
	.uleb128 0x19
	.byte	0x1
	.ascii "fgetws\0"
	.byte	0x5
	.word	0x292
	.long	0x134
	.byte	0x1
	.long	0x866
	.uleb128 0x1a
	.long	0x134
	.uleb128 0x1a
	.long	0x11b
	.uleb128 0x1a
	.long	0x83b
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "fputwc\0"
	.byte	0x5
	.word	0x28b
	.long	0xe5
	.byte	0x1
	.long	0x886
	.uleb128 0x1a
	.long	0x13a
	.uleb128 0x1a
	.long	0x83b
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "fputws\0"
	.byte	0x5
	.word	0x293
	.long	0x11b
	.byte	0x1
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x83b
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0x8ac
	.uleb128 0x1b
	.long	0x13a
	.uleb128 0x19
	.byte	0x1
	.ascii "fwide\0"
	.byte	0x5
	.word	0x3ba
	.long	0x11b
	.byte	0x1
	.long	0x8d0
	.uleb128 0x1a
	.long	0x83b
	.uleb128 0x1a
	.long	0x11b
	.byte	0
	.uleb128 0x1c
	.ascii "fwprintf\0"
	.byte	0x5
	.word	0x20e
	.long	0x11b
	.byte	0x1
	.long	0x8f2
	.uleb128 0x1a
	.long	0x83b
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1d
	.byte	0
	.uleb128 0x1c
	.ascii "fwscanf\0"
	.byte	0x5
	.word	0x1ea
	.long	0x11b
	.byte	0x1
	.long	0x913
	.uleb128 0x1a
	.long	0x83b
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1d
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "getwc\0"
	.byte	0x5
	.word	0x28d
	.long	0xe5
	.byte	0x1
	.long	0x92d
	.uleb128 0x1a
	.long	0x83b
	.byte	0
	.uleb128 0x1e
	.byte	0x1
	.ascii "getwchar\0"
	.byte	0x5
	.word	0x28e
	.long	0xe5
	.byte	0x1
	.uleb128 0x19
	.byte	0x1
	.ascii "mbrlen\0"
	.byte	0x5
	.word	0x3ac
	.long	0xab
	.byte	0x1
	.long	0x965
	.uleb128 0x1a
	.long	0x965
	.uleb128 0x1a
	.long	0xab
	.uleb128 0x1a
	.long	0x970
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0x96b
	.uleb128 0x1b
	.long	0xa3
	.uleb128 0x5
	.byte	0x8
	.long	0x4b6
	.uleb128 0x19
	.byte	0x1
	.ascii "mbrtowc\0"
	.byte	0x5
	.word	0x3ad
	.long	0xab
	.byte	0x1
	.long	0x9a1
	.uleb128 0x1a
	.long	0x134
	.uleb128 0x1a
	.long	0x965
	.uleb128 0x1a
	.long	0xab
	.uleb128 0x1a
	.long	0x970
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "mbsinit\0"
	.byte	0x5
	.word	0x3bb
	.long	0x11b
	.byte	0x1
	.long	0x9bd
	.uleb128 0x1a
	.long	0x9bd
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0x9c3
	.uleb128 0x1b
	.long	0x4b6
	.uleb128 0x19
	.byte	0x1
	.ascii "mbsrtowcs\0"
	.byte	0x5
	.word	0x3ae
	.long	0xab
	.byte	0x1
	.long	0x9f5
	.uleb128 0x1a
	.long	0x134
	.uleb128 0x1a
	.long	0x9f5
	.uleb128 0x1a
	.long	0xab
	.uleb128 0x1a
	.long	0x970
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0x965
	.uleb128 0x19
	.byte	0x1
	.ascii "putwc\0"
	.byte	0x5
	.word	0x28f
	.long	0xe5
	.byte	0x1
	.long	0xa1a
	.uleb128 0x1a
	.long	0x13a
	.uleb128 0x1a
	.long	0x83b
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "putwchar\0"
	.byte	0x5
	.word	0x290
	.long	0xe5
	.byte	0x1
	.long	0xa37
	.uleb128 0x1a
	.long	0x13a
	.byte	0
	.uleb128 0x1c
	.ascii "swscanf\0"
	.byte	0x5
	.word	0x1d4
	.long	0x11b
	.byte	0x1
	.long	0xa58
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1d
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "ungetwc\0"
	.byte	0x5
	.word	0x291
	.long	0xe5
	.byte	0x1
	.long	0xa79
	.uleb128 0x1a
	.long	0xe5
	.uleb128 0x1a
	.long	0x83b
	.byte	0
	.uleb128 0x1c
	.ascii "vfwprintf\0"
	.byte	0x5
	.word	0x22f
	.long	0x11b
	.byte	0x1
	.long	0xaa0
	.uleb128 0x1a
	.long	0x83b
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8b
	.byte	0
	.uleb128 0x1c
	.ascii "vfwscanf\0"
	.byte	0x5
	.word	0x204
	.long	0x11b
	.byte	0x1
	.long	0xac6
	.uleb128 0x1a
	.long	0x83b
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8b
	.byte	0
	.uleb128 0x1c
	.ascii "vswscanf\0"
	.byte	0x5
	.word	0x1f6
	.long	0x11b
	.byte	0x1
	.long	0xaec
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8b
	.byte	0
	.uleb128 0x1c
	.ascii "vwprintf\0"
	.byte	0x5
	.word	0x236
	.long	0x11b
	.byte	0x1
	.long	0xb0d
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8b
	.byte	0
	.uleb128 0x1c
	.ascii "vwscanf\0"
	.byte	0x5
	.word	0x1fd
	.long	0x11b
	.byte	0x1
	.long	0xb2d
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8b
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcrtomb\0"
	.byte	0x5
	.word	0x3af
	.long	0xab
	.byte	0x1
	.long	0xb53
	.uleb128 0x1a
	.long	0x12e
	.uleb128 0x1a
	.long	0x13a
	.uleb128 0x1a
	.long	0x970
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcscat\0"
	.byte	0x5
	.word	0x34b
	.long	0x134
	.byte	0x1
	.long	0xb73
	.uleb128 0x1a
	.long	0x134
	.uleb128 0x1a
	.long	0x8a6
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcscmp\0"
	.byte	0x5
	.word	0x34d
	.long	0x11b
	.byte	0x1
	.long	0xb93
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8a6
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcscoll\0"
	.byte	0x5
	.word	0x36a
	.long	0x11b
	.byte	0x1
	.long	0xbb4
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8a6
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcscpy\0"
	.byte	0x5
	.word	0x34e
	.long	0x134
	.byte	0x1
	.long	0xbd4
	.uleb128 0x1a
	.long	0x134
	.uleb128 0x1a
	.long	0x8a6
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcscspn\0"
	.byte	0x5
	.word	0x34f
	.long	0xab
	.byte	0x1
	.long	0xbf5
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8a6
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcsftime\0"
	.byte	0x5
	.word	0x395
	.long	0xab
	.byte	0x1
	.long	0xc21
	.uleb128 0x1a
	.long	0x134
	.uleb128 0x1a
	.long	0xab
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xc21
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0xc27
	.uleb128 0x1b
	.long	0x400
	.uleb128 0x19
	.byte	0x1
	.ascii "wcslen\0"
	.byte	0x5
	.word	0x350
	.long	0xab
	.byte	0x1
	.long	0xc47
	.uleb128 0x1a
	.long	0x8a6
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcsncat\0"
	.byte	0x5
	.word	0x352
	.long	0x134
	.byte	0x1
	.long	0xc6d
	.uleb128 0x1a
	.long	0x134
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xab
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcsncmp\0"
	.byte	0x5
	.word	0x353
	.long	0x11b
	.byte	0x1
	.long	0xc93
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xab
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcsncpy\0"
	.byte	0x5
	.word	0x354
	.long	0x134
	.byte	0x1
	.long	0xcb9
	.uleb128 0x1a
	.long	0x134
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xab
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcsrtombs\0"
	.byte	0x5
	.word	0x3b0
	.long	0xab
	.byte	0x1
	.long	0xce6
	.uleb128 0x1a
	.long	0x12e
	.uleb128 0x1a
	.long	0xce6
	.uleb128 0x1a
	.long	0xab
	.uleb128 0x1a
	.long	0x970
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0x8a6
	.uleb128 0x19
	.byte	0x1
	.ascii "wcsspn\0"
	.byte	0x5
	.word	0x358
	.long	0xab
	.byte	0x1
	.long	0xd0c
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8a6
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcstod\0"
	.byte	0x5
	.word	0x313
	.long	0xd2c
	.byte	0x1
	.long	0xd2c
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xd36
	.byte	0
	.uleb128 0x3
	.byte	0x8
	.byte	0x4
	.ascii "double\0"
	.uleb128 0x5
	.byte	0x8
	.long	0x134
	.uleb128 0x19
	.byte	0x1
	.ascii "wcstof\0"
	.byte	0x5
	.word	0x31c
	.long	0xd5c
	.byte	0x1
	.long	0xd5c
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xd36
	.byte	0
	.uleb128 0x3
	.byte	0x4
	.byte	0x4
	.ascii "float\0"
	.uleb128 0x19
	.byte	0x1
	.ascii "wcstok\0"
	.byte	0x5
	.word	0x35a
	.long	0x134
	.byte	0x1
	.long	0xd85
	.uleb128 0x1a
	.long	0x134
	.uleb128 0x1a
	.long	0x8a6
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcstol\0"
	.byte	0x5
	.word	0x31f
	.long	0x122
	.byte	0x1
	.long	0xdaa
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xd36
	.uleb128 0x1a
	.long	0x11b
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcstoul\0"
	.byte	0x5
	.word	0x321
	.long	0x161
	.byte	0x1
	.long	0xdd0
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xd36
	.uleb128 0x1a
	.long	0x11b
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcsxfrm\0"
	.byte	0x5
	.word	0x368
	.long	0xab
	.byte	0x1
	.long	0xdf6
	.uleb128 0x1a
	.long	0x134
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xab
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wctob\0"
	.byte	0x5
	.word	0x3b1
	.long	0x11b
	.byte	0x1
	.long	0xe10
	.uleb128 0x1a
	.long	0xe5
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wmemcmp\0"
	.byte	0x5
	.word	0x3b6
	.long	0x11b
	.byte	0x1
	.long	0xe36
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xab
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wmemcpy\0"
	.byte	0x5
	.word	0x3b7
	.long	0x134
	.byte	0x1
	.long	0xe5c
	.uleb128 0x1a
	.long	0x134
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xab
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wmemmove\0"
	.byte	0x5
	.word	0x3b9
	.long	0x134
	.byte	0x1
	.long	0xe83
	.uleb128 0x1a
	.long	0x134
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xab
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wmemset\0"
	.byte	0x5
	.word	0x3b4
	.long	0x134
	.byte	0x1
	.long	0xea9
	.uleb128 0x1a
	.long	0x134
	.uleb128 0x1a
	.long	0x13a
	.uleb128 0x1a
	.long	0xab
	.byte	0
	.uleb128 0x1c
	.ascii "wprintf\0"
	.byte	0x5
	.word	0x219
	.long	0x11b
	.byte	0x1
	.long	0xec5
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1d
	.byte	0
	.uleb128 0x1c
	.ascii "wscanf\0"
	.byte	0x5
	.word	0x1df
	.long	0x11b
	.byte	0x1
	.long	0xee0
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1d
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcschr\0"
	.byte	0x5
	.word	0x34c
	.long	0x134
	.byte	0x1
	.long	0xf00
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x13a
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcspbrk\0"
	.byte	0x5
	.word	0x356
	.long	0x134
	.byte	0x1
	.long	0xf21
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8a6
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcsrchr\0"
	.byte	0x5
	.word	0x357
	.long	0x134
	.byte	0x1
	.long	0xf42
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x13a
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcsstr\0"
	.byte	0x5
	.word	0x359
	.long	0x134
	.byte	0x1
	.long	0xf62
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x8a6
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wmemchr\0"
	.byte	0x5
	.word	0x3b5
	.long	0x134
	.byte	0x1
	.long	0xf88
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0x13a
	.uleb128 0x1a
	.long	0xab
	.byte	0
	.uleb128 0xb
	.ascii "__gnu_cxx\0"
	.byte	0x6
	.byte	0xf4
	.long	0x107e
	.uleb128 0xc
	.byte	0x6
	.byte	0xfa
	.long	0x107e
	.uleb128 0xd
	.byte	0x6
	.word	0x103
	.long	0x10ae
	.uleb128 0xd
	.byte	0x6
	.word	0x104
	.long	0x10d4
	.uleb128 0xc
	.byte	0xd
	.byte	0x2a
	.long	0x692
	.uleb128 0xc
	.byte	0xd
	.byte	0x2b
	.long	0x6b5
	.uleb128 0xf
	.ascii "__numeric_traits_integer<int>\0"
	.byte	0x1
	.uleb128 0xf
	.ascii "__numeric_traits_integer<long unsigned int>\0"
	.byte	0x1
	.uleb128 0xf
	.ascii "__numeric_traits_integer<char>\0"
	.byte	0x1
	.uleb128 0xf
	.ascii "__numeric_traits_integer<short int>\0"
	.byte	0x1
	.uleb128 0xf
	.ascii "__numeric_traits_integer<long long int>\0"
	.byte	0x1
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcstold\0"
	.byte	0x5
	.word	0x31d
	.long	0x109f
	.byte	0x1
	.long	0x109f
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xd36
	.byte	0
	.uleb128 0x3
	.byte	0x10
	.byte	0x4
	.ascii "long double\0"
	.uleb128 0x19
	.byte	0x1
	.ascii "wcstoll\0"
	.byte	0x5
	.word	0x3bc
	.long	0xd4
	.byte	0x1
	.long	0x10d4
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xd36
	.uleb128 0x1a
	.long	0x11b
	.byte	0
	.uleb128 0x19
	.byte	0x1
	.ascii "wcstoull\0"
	.byte	0x5
	.word	0x3bd
	.long	0xba
	.byte	0x1
	.long	0x10fb
	.uleb128 0x1a
	.long	0x8a6
	.uleb128 0x1a
	.long	0xd36
	.uleb128 0x1a
	.long	0x11b
	.byte	0
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.ascii "signed char\0"
	.uleb128 0xb
	.ascii "__gnu_debug\0"
	.byte	0xe
	.byte	0x38
	.long	0x1125
	.uleb128 0x1f
	.byte	0xe
	.byte	0x39
	.long	0x673
	.byte	0
	.uleb128 0x20
	.long	0x67e
	.byte	0x1
	.byte	0xf
	.byte	0xeb
	.long	0x14ea
	.uleb128 0x8
	.ascii "char_type\0"
	.byte	0xf
	.byte	0xed
	.long	0xa3
	.uleb128 0x8
	.ascii "int_type\0"
	.byte	0xf
	.byte	0xee
	.long	0x11b
	.uleb128 0x21
	.byte	0x1
	.ascii "assign\0"
	.byte	0xf
	.byte	0xf4
	.ascii "_ZNSt11char_traitsIcE6assignERcRKc\0"
	.byte	0x1
	.long	0x1190
	.uleb128 0x1a
	.long	0x14ea
	.uleb128 0x1a
	.long	0x14f0
	.byte	0
	.uleb128 0x22
	.byte	0x1
	.ascii "eq\0"
	.byte	0xf
	.byte	0xf8
	.ascii "_ZNSt11char_traitsIcE2eqERKcS2_\0"
	.long	0x14fb
	.byte	0x1
	.long	0x11cb
	.uleb128 0x1a
	.long	0x14f0
	.uleb128 0x1a
	.long	0x14f0
	.byte	0
	.uleb128 0x22
	.byte	0x1
	.ascii "lt\0"
	.byte	0xf
	.byte	0xfc
	.ascii "_ZNSt11char_traitsIcE2ltERKcS2_\0"
	.long	0x14fb
	.byte	0x1
	.long	0x1206
	.uleb128 0x1a
	.long	0x14f0
	.uleb128 0x1a
	.long	0x14f0
	.byte	0
	.uleb128 0x23
	.byte	0x1
	.ascii "compare\0"
	.byte	0xf
	.word	0x100
	.ascii "_ZNSt11char_traitsIcE7compareEPKcS2_y\0"
	.long	0x11b
	.byte	0x1
	.long	0x1252
	.uleb128 0x1a
	.long	0x1503
	.uleb128 0x1a
	.long	0x1503
	.uleb128 0x1a
	.long	0x692
	.byte	0
	.uleb128 0x23
	.byte	0x1
	.ascii "length\0"
	.byte	0xf
	.word	0x104
	.ascii "_ZNSt11char_traitsIcE6lengthEPKc\0"
	.long	0x692
	.byte	0x1
	.long	0x128e
	.uleb128 0x1a
	.long	0x1503
	.byte	0
	.uleb128 0x23
	.byte	0x1
	.ascii "find\0"
	.byte	0xf
	.word	0x108
	.ascii "_ZNSt11char_traitsIcE4findEPKcyRS1_\0"
	.long	0x1503
	.byte	0x1
	.long	0x12d5
	.uleb128 0x1a
	.long	0x1503
	.uleb128 0x1a
	.long	0x692
	.uleb128 0x1a
	.long	0x14f0
	.byte	0
	.uleb128 0x23
	.byte	0x1
	.ascii "move\0"
	.byte	0xf
	.word	0x10c
	.ascii "_ZNSt11char_traitsIcE4moveEPcPKcy\0"
	.long	0x1509
	.byte	0x1
	.long	0x131a
	.uleb128 0x1a
	.long	0x1509
	.uleb128 0x1a
	.long	0x1503
	.uleb128 0x1a
	.long	0x692
	.byte	0
	.uleb128 0x23
	.byte	0x1
	.ascii "copy\0"
	.byte	0xf
	.word	0x110
	.ascii "_ZNSt11char_traitsIcE4copyEPcPKcy\0"
	.long	0x1509
	.byte	0x1
	.long	0x135f
	.uleb128 0x1a
	.long	0x1509
	.uleb128 0x1a
	.long	0x1503
	.uleb128 0x1a
	.long	0x692
	.byte	0
	.uleb128 0x23
	.byte	0x1
	.ascii "assign\0"
	.byte	0xf
	.word	0x114
	.ascii "_ZNSt11char_traitsIcE6assignEPcyc\0"
	.long	0x1509
	.byte	0x1
	.long	0x13a6
	.uleb128 0x1a
	.long	0x1509
	.uleb128 0x1a
	.long	0x692
	.uleb128 0x1a
	.long	0x1131
	.byte	0
	.uleb128 0x23
	.byte	0x1
	.ascii "to_char_type\0"
	.byte	0xf
	.word	0x118
	.ascii "_ZNSt11char_traitsIcE12to_char_typeERKi\0"
	.long	0x1131
	.byte	0x1
	.long	0x13ef
	.uleb128 0x1a
	.long	0x150f
	.byte	0
	.uleb128 0x23
	.byte	0x1
	.ascii "to_int_type\0"
	.byte	0xf
	.word	0x11e
	.ascii "_ZNSt11char_traitsIcE11to_int_typeERKc\0"
	.long	0x1142
	.byte	0x1
	.long	0x1436
	.uleb128 0x1a
	.long	0x14f0
	.byte	0
	.uleb128 0x23
	.byte	0x1
	.ascii "eq_int_type\0"
	.byte	0xf
	.word	0x122
	.ascii "_ZNSt11char_traitsIcE11eq_int_typeERKiS2_\0"
	.long	0x14fb
	.byte	0x1
	.long	0x1485
	.uleb128 0x1a
	.long	0x150f
	.uleb128 0x1a
	.long	0x150f
	.byte	0
	.uleb128 0x24
	.byte	0x1
	.ascii "eof\0"
	.byte	0xf
	.word	0x126
	.ascii "_ZNSt11char_traitsIcE3eofEv\0"
	.long	0x1142
	.byte	0x1
	.uleb128 0x25
	.byte	0x1
	.ascii "not_eof\0"
	.byte	0xf
	.word	0x12a
	.ascii "_ZNSt11char_traitsIcE7not_eofERKi\0"
	.long	0x1142
	.byte	0x1
	.uleb128 0x1a
	.long	0x150f
	.byte	0
	.byte	0
	.uleb128 0x26
	.byte	0x8
	.long	0x1131
	.uleb128 0x26
	.byte	0x8
	.long	0x14f6
	.uleb128 0x1b
	.long	0x1131
	.uleb128 0x3
	.byte	0x1
	.byte	0x2
	.ascii "bool\0"
	.uleb128 0x5
	.byte	0x8
	.long	0x14f6
	.uleb128 0x5
	.byte	0x8
	.long	0x1131
	.uleb128 0x26
	.byte	0x8
	.long	0x1515
	.uleb128 0x1b
	.long	0x1142
	.uleb128 0x27
	.byte	0x1
	.ascii "setlocale\0"
	.byte	0x4
	.byte	0x50
	.long	0x12e
	.byte	0x1
	.long	0x153c
	.uleb128 0x1a
	.long	0x11b
	.uleb128 0x1a
	.long	0x965
	.byte	0
	.uleb128 0x28
	.byte	0x1
	.ascii "localeconv\0"
	.byte	0x4
	.byte	0x51
	.long	0x339
	.byte	0x1
	.uleb128 0x8
	.ascii "_Atomic_word\0"
	.byte	0x10
	.byte	0x20
	.long	0x11b
	.uleb128 0x20
	.long	0xfbe
	.byte	0x1
	.byte	0x11
	.byte	0x37
	.long	0x15b7
	.uleb128 0x29
	.secrel32	.LASF0
	.byte	0x11
	.byte	0x3a
	.long	0x15b7
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF1
	.byte	0x11
	.byte	0x3b
	.long	0x15b7
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF2
	.byte	0x11
	.byte	0x3f
	.long	0x15bc
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF3
	.byte	0x11
	.byte	0x40
	.long	0x15b7
	.byte	0x1
	.byte	0x1
	.uleb128 0x2a
	.secrel32	.LASF4
	.long	0x11b
	.uleb128 0x2a
	.secrel32	.LASF4
	.long	0x11b
	.byte	0
	.uleb128 0x1b
	.long	0x11b
	.uleb128 0x1b
	.long	0x14fb
	.uleb128 0x20
	.long	0xfde
	.byte	0x1
	.byte	0x11
	.byte	0x37
	.long	0x1614
	.uleb128 0x29
	.secrel32	.LASF0
	.byte	0x11
	.byte	0x3a
	.long	0x1614
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF1
	.byte	0x11
	.byte	0x3b
	.long	0x1614
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF2
	.byte	0x11
	.byte	0x3f
	.long	0x15bc
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF3
	.byte	0x11
	.byte	0x40
	.long	0x15b7
	.byte	0x1
	.byte	0x1
	.uleb128 0x2a
	.secrel32	.LASF4
	.long	0x161
	.uleb128 0x2a
	.secrel32	.LASF4
	.long	0x161
	.byte	0
	.uleb128 0x1b
	.long	0x161
	.uleb128 0x5
	.byte	0x8
	.long	0x6d5
	.uleb128 0x8
	.ascii "wctrans_t\0"
	.byte	0x12
	.byte	0xa6
	.long	0x13a
	.uleb128 0x27
	.byte	0x1
	.ascii "iswctype\0"
	.byte	0x5
	.byte	0xf7
	.long	0x11b
	.byte	0x1
	.long	0x1651
	.uleb128 0x1a
	.long	0xe5
	.uleb128 0x1a
	.long	0x10a
	.byte	0
	.uleb128 0x27
	.byte	0x1
	.ascii "towctrans\0"
	.byte	0x12
	.byte	0xa7
	.long	0xe5
	.byte	0x1
	.long	0x1673
	.uleb128 0x1a
	.long	0xe5
	.uleb128 0x1a
	.long	0x161f
	.byte	0
	.uleb128 0x27
	.byte	0x1
	.ascii "wctrans\0"
	.byte	0x12
	.byte	0xa8
	.long	0x161f
	.byte	0x1
	.long	0x168e
	.uleb128 0x1a
	.long	0x965
	.byte	0
	.uleb128 0x27
	.byte	0x1
	.ascii "wctype\0"
	.byte	0x12
	.byte	0xa9
	.long	0x10a
	.byte	0x1
	.long	0x16a8
	.uleb128 0x1a
	.long	0x965
	.byte	0
	.uleb128 0x20
	.long	0x100c
	.byte	0x1
	.byte	0x11
	.byte	0x37
	.long	0x16fb
	.uleb128 0x29
	.secrel32	.LASF0
	.byte	0x11
	.byte	0x3a
	.long	0x96b
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF1
	.byte	0x11
	.byte	0x3b
	.long	0x96b
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF2
	.byte	0x11
	.byte	0x3f
	.long	0x15bc
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF3
	.byte	0x11
	.byte	0x40
	.long	0x15b7
	.byte	0x1
	.byte	0x1
	.uleb128 0x2a
	.secrel32	.LASF4
	.long	0xa3
	.uleb128 0x2a
	.secrel32	.LASF4
	.long	0xa3
	.byte	0
	.uleb128 0x20
	.long	0x102d
	.byte	0x1
	.byte	0x11
	.byte	0x37
	.long	0x174e
	.uleb128 0x29
	.secrel32	.LASF0
	.byte	0x11
	.byte	0x3a
	.long	0x174e
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF1
	.byte	0x11
	.byte	0x3b
	.long	0x174e
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF2
	.byte	0x11
	.byte	0x3f
	.long	0x15bc
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF3
	.byte	0x11
	.byte	0x40
	.long	0x15b7
	.byte	0x1
	.byte	0x1
	.uleb128 0x2a
	.secrel32	.LASF4
	.long	0x3f3
	.uleb128 0x2a
	.secrel32	.LASF4
	.long	0x3f3
	.byte	0
	.uleb128 0x1b
	.long	0x3f3
	.uleb128 0x20
	.long	0x1053
	.byte	0x1
	.byte	0x11
	.byte	0x37
	.long	0x17a6
	.uleb128 0x29
	.secrel32	.LASF0
	.byte	0x11
	.byte	0x3a
	.long	0x17a6
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF1
	.byte	0x11
	.byte	0x3b
	.long	0x17a6
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF2
	.byte	0x11
	.byte	0x3f
	.long	0x15bc
	.byte	0x1
	.byte	0x1
	.uleb128 0x29
	.secrel32	.LASF3
	.byte	0x11
	.byte	0x40
	.long	0x15b7
	.byte	0x1
	.byte	0x1
	.uleb128 0x2a
	.secrel32	.LASF4
	.long	0xd4
	.uleb128 0x2a
	.secrel32	.LASF4
	.long	0xd4
	.byte	0
	.uleb128 0x1b
	.long	0xd4
	.uleb128 0x1f
	.byte	0x1
	.byte	0x3b
	.long	0x4c8
	.uleb128 0x2b
	.byte	0x1
	.ascii "main\0"
	.byte	0x1
	.byte	0x3e
	.long	0x11b
	.quad	.LFB981
	.quad	.LFE981
	.secrel32	.LLST0
	.byte	0x1
	.uleb128 0x2c
	.ascii "__tcf_0\0"
	.byte	0x1
	.quad	.LFB991
	.quad	.LFE991
	.secrel32	.LLST1
	.byte	0x1
	.uleb128 0x2d
	.ascii "__static_initialization_and_destruction_0\0"
	.byte	0x1
	.quad	.LFB990
	.quad	.LFE990
	.secrel32	.LLST2
	.byte	0x1
	.long	0x1867
	.uleb128 0x2e
	.ascii "__initialize_p\0"
	.byte	0x1
	.byte	0x41
	.long	0x11b
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x2e
	.ascii "__priority\0"
	.byte	0x1
	.byte	0x41
	.long	0x11b
	.byte	0x2
	.byte	0x91
	.sleb128 8
	.byte	0
	.uleb128 0x2c
	.ascii "_GLOBAL__sub_I_main\0"
	.byte	0x1
	.quad	.LFB992
	.quad	.LFE992
	.secrel32	.LLST3
	.byte	0x1
	.uleb128 0x2f
	.ascii "_CRT_MT\0"
	.byte	0x13
	.word	0x176
	.long	0x11b
	.byte	0x1
	.byte	0x1
	.uleb128 0x30
	.long	0x7f4
	.byte	0x9
	.byte	0x3
	.quad	_ZStL8__ioinit
	.uleb128 0x31
	.long	0x1570
	.ascii "_ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE\0"
	.sleb128 -2147483648
	.uleb128 0x32
	.long	0x157d
	.ascii "_ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE\0"
	.long	0x7fffffff
	.uleb128 0x33
	.long	0x15f4
	.ascii "_ZN9__gnu_cxx24__numeric_traits_integerImE8__digitsE\0"
	.byte	0x20
	.uleb128 0x33
	.long	0x16c1
	.ascii "_ZN9__gnu_cxx24__numeric_traits_integerIcE5__maxE\0"
	.byte	0x7f
	.uleb128 0x31
	.long	0x1707
	.ascii "_ZN9__gnu_cxx24__numeric_traits_integerIsE5__minE\0"
	.sleb128 -32768
	.uleb128 0x34
	.long	0x1714
	.ascii "_ZN9__gnu_cxx24__numeric_traits_integerIsE5__maxE\0"
	.word	0x7fff
	.uleb128 0x31
	.long	0x175f
	.ascii "_ZN9__gnu_cxx24__numeric_traits_integerIxE5__minE\0"
	.sleb128 -9223372036854775808
	.uleb128 0x35
	.long	0x176c
	.ascii "_ZN9__gnu_cxx24__numeric_traits_integerIxE5__maxE\0"
	.quad	0x7fffffffffffffff
	.byte	0
	.section	.debug_abbrev,"dr"
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0x8
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x1b
	.uleb128 0x8
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x6
	.uleb128 0x2119
	.uleb128 0x6
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xa
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xa
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x39
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x8
	.byte	0
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x18
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x8
	.byte	0
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x18
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x39
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x13
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x2
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3c
	.uleb128 0xc
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x2
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x32
	.uleb128 0xb
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x3c
	.uleb128 0xc
	.uleb128 0x64
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x34
	.uleb128 0xc
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x3c
	.uleb128 0xc
	.uleb128 0x64
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x16
	.uleb128 0x2f
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x17
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x2007
	.uleb128 0x8
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0
	.byte	0
	.uleb128 0x19
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0xc
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1a
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1b
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1c
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0xc
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1d
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1e
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0
	.byte	0
	.uleb128 0x1f
	.uleb128 0x3a
	.byte	0
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x18
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x20
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x47
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x21
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x2007
	.uleb128 0x8
	.uleb128 0x3c
	.uleb128 0xc
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x22
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x2007
	.uleb128 0x8
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0xc
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x23
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x2007
	.uleb128 0x8
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0xc
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x24
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x2007
	.uleb128 0x8
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0
	.byte	0
	.uleb128 0x25
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x2007
	.uleb128 0x8
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0
	.byte	0
	.uleb128 0x26
	.uleb128 0x10
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x27
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0xc
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x28
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0
	.byte	0
	.uleb128 0x29
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0
	.byte	0
	.uleb128 0x2a
	.uleb128 0x2f
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x2b
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
	.uleb128 0x40
	.uleb128 0x6
	.uleb128 0x2116
	.uleb128 0xc
	.byte	0
	.byte	0
	.uleb128 0x2c
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x34
	.uleb128 0xc
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
	.uleb128 0x40
	.uleb128 0x6
	.uleb128 0x2116
	.uleb128 0xc
	.byte	0
	.byte	0
	.uleb128 0x2d
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x34
	.uleb128 0xc
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
	.uleb128 0x40
	.uleb128 0x6
	.uleb128 0x2116
	.uleb128 0xc
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x2e
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0xa
	.byte	0
	.byte	0
	.uleb128 0x2f
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0
	.byte	0
	.uleb128 0x30
	.uleb128 0x34
	.byte	0
	.uleb128 0x47
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0xa
	.byte	0
	.byte	0
	.uleb128 0x31
	.uleb128 0x34
	.byte	0
	.uleb128 0x47
	.uleb128 0x13
	.uleb128 0x2007
	.uleb128 0x8
	.uleb128 0x1c
	.uleb128 0xd
	.byte	0
	.byte	0
	.uleb128 0x32
	.uleb128 0x34
	.byte	0
	.uleb128 0x47
	.uleb128 0x13
	.uleb128 0x2007
	.uleb128 0x8
	.uleb128 0x1c
	.uleb128 0x6
	.byte	0
	.byte	0
	.uleb128 0x33
	.uleb128 0x34
	.byte	0
	.uleb128 0x47
	.uleb128 0x13
	.uleb128 0x2007
	.uleb128 0x8
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x34
	.uleb128 0x34
	.byte	0
	.uleb128 0x47
	.uleb128 0x13
	.uleb128 0x2007
	.uleb128 0x8
	.uleb128 0x1c
	.uleb128 0x5
	.byte	0
	.byte	0
	.uleb128 0x35
	.uleb128 0x34
	.byte	0
	.uleb128 0x47
	.uleb128 0x13
	.uleb128 0x2007
	.uleb128 0x8
	.uleb128 0x1c
	.uleb128 0x7
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_loc,"dr"
.Ldebug_loc0:
.LLST0:
	.quad	.LFB981-.Ltext0
	.quad	.LCFI0-.Ltext0
	.word	0x2
	.byte	0x77
	.sleb128 8
	.quad	.LCFI0-.Ltext0
	.quad	.LCFI1-.Ltext0
	.word	0x2
	.byte	0x77
	.sleb128 16
	.quad	.LCFI1-.Ltext0
	.quad	.LCFI2-.Ltext0
	.word	0x2
	.byte	0x76
	.sleb128 16
	.quad	.LCFI2-.Ltext0
	.quad	.LFE981-.Ltext0
	.word	0x2
	.byte	0x77
	.sleb128 8
	.quad	0
	.quad	0
.LLST1:
	.quad	.LFB991-.Ltext0
	.quad	.LCFI3-.Ltext0
	.word	0x2
	.byte	0x77
	.sleb128 8
	.quad	.LCFI3-.Ltext0
	.quad	.LCFI4-.Ltext0
	.word	0x2
	.byte	0x77
	.sleb128 16
	.quad	.LCFI4-.Ltext0
	.quad	.LCFI5-.Ltext0
	.word	0x2
	.byte	0x76
	.sleb128 16
	.quad	.LCFI5-.Ltext0
	.quad	.LFE991-.Ltext0
	.word	0x2
	.byte	0x77
	.sleb128 8
	.quad	0
	.quad	0
.LLST2:
	.quad	.LFB990-.Ltext0
	.quad	.LCFI6-.Ltext0
	.word	0x2
	.byte	0x77
	.sleb128 8
	.quad	.LCFI6-.Ltext0
	.quad	.LCFI7-.Ltext0
	.word	0x2
	.byte	0x77
	.sleb128 16
	.quad	.LCFI7-.Ltext0
	.quad	.LCFI8-.Ltext0
	.word	0x2
	.byte	0x76
	.sleb128 16
	.quad	.LCFI8-.Ltext0
	.quad	.LFE990-.Ltext0
	.word	0x2
	.byte	0x77
	.sleb128 8
	.quad	0
	.quad	0
.LLST3:
	.quad	.LFB992-.Ltext0
	.quad	.LCFI9-.Ltext0
	.word	0x2
	.byte	0x77
	.sleb128 8
	.quad	.LCFI9-.Ltext0
	.quad	.LCFI10-.Ltext0
	.word	0x2
	.byte	0x77
	.sleb128 16
	.quad	.LCFI10-.Ltext0
	.quad	.LCFI11-.Ltext0
	.word	0x2
	.byte	0x76
	.sleb128 16
	.quad	.LCFI11-.Ltext0
	.quad	.LFE992-.Ltext0
	.word	0x2
	.byte	0x77
	.sleb128 8
	.quad	0
	.quad	0
	.section	.debug_aranges,"dr"
	.long	0x2c
	.word	0x2
	.secrel32	.Ldebug_info0
	.byte	0x8
	.byte	0
	.word	0
	.word	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_macro,"dr"
.Ldebug_macro0:
	.word	0x4
	.byte	0x2
	.secrel32	.Ldebug_line0
	.byte	0x3
	.uleb128 0
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x2
	.ascii "__STDC__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__cplusplus 199711L\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__STDC_HOSTED__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GNUC__ 4\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GNUC_MINOR__ 7\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GNUC_PATCHLEVEL__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__VERSION__ \"4.7.1\"\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__ATOMIC_RELAXED 0\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__ATOMIC_SEQ_CST 5\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__ATOMIC_ACQUIRE 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__ATOMIC_RELEASE 3\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__ATOMIC_ACQ_REL 4\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__ATOMIC_CONSUME 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__pic__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__PIC__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FINITE_MATH_ONLY__ 0\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZEOF_INT__ 4\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZEOF_LONG__ 4\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZEOF_LONG_LONG__ 8\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZEOF_SHORT__ 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZEOF_FLOAT__ 4\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZEOF_DOUBLE__ 8\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZEOF_LONG_DOUBLE__ 16\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZEOF_SIZE_T__ 8\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__CHAR_BIT__ 8\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__BIGGEST_ALIGNMENT__ 16\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__ORDER_LITTLE_ENDIAN__ 1234\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__ORDER_BIG_ENDIAN__ 4321\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__ORDER_PDP_ENDIAN__ 3412\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZEOF_POINTER__ 8\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GNUG__ 4\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZE_TYPE__ long long unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__PTRDIFF_TYPE__ long long int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__WCHAR_TYPE__ short unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__WINT_TYPE__ short unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INTMAX_TYPE__ long long int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINTMAX_TYPE__ long long unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__CHAR16_TYPE__ short unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__CHAR32_TYPE__ unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIG_ATOMIC_TYPE__ int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT8_TYPE__ signed char\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT16_TYPE__ short int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT32_TYPE__ int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT64_TYPE__ long long int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT8_TYPE__ unsigned char\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT16_TYPE__ short unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT32_TYPE__ unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT64_TYPE__ long long unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_LEAST8_TYPE__ signed char\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_LEAST16_TYPE__ short int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_LEAST32_TYPE__ int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_LEAST64_TYPE__ long long int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_LEAST8_TYPE__ unsigned char\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_LEAST16_TYPE__ short unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_LEAST32_TYPE__ unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_LEAST64_TYPE__ long long unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_FAST8_TYPE__ signed char\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_FAST16_TYPE__ short int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_FAST32_TYPE__ int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_FAST64_TYPE__ long long int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_FAST8_TYPE__ unsigned char\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_FAST16_TYPE__ short unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_FAST32_TYPE__ unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_FAST64_TYPE__ long long unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INTPTR_TYPE__ long long int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINTPTR_TYPE__ long long unsigned int\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GXX_WEAK__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEPRECATED 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GXX_RTTI 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__EXCEPTIONS 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GXX_ABI_VERSION 1002\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__USING_SJLJ_EXCEPTIONS__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SCHAR_MAX__ 127\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SHRT_MAX__ 32767\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_MAX__ 2147483647\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LONG_MAX__ 2147483647L\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LONG_LONG_MAX__ 9223372036854775807LL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__WCHAR_MAX__ 65535\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__WCHAR_MIN__ 0\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__WINT_MAX__ 65535\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__WINT_MIN__ 0\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__PTRDIFF_MAX__ 9223372036854775807LL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZE_MAX__ 18446744073709551615ULL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INTMAX_MAX__ 9223372036854775807LL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INTMAX_C(c) c ## LL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINTMAX_MAX__ 18446744073709551615ULL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINTMAX_C(c) c ## ULL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIG_ATOMIC_MAX__ 2147483647\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT8_MAX__ 127\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT16_MAX__ 32767\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT32_MAX__ 2147483647\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT64_MAX__ 9223372036854775807LL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT8_MAX__ 255\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT16_MAX__ 65535\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT32_MAX__ 4294967295U\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT64_MAX__ 18446744073709551615ULL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_LEAST8_MAX__ 127\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT8_C(c) c\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_LEAST16_MAX__ 32767\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT16_C(c) c\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_LEAST32_MAX__ 2147483647\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT32_C(c) c\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_LEAST64_MAX__ 9223372036854775807LL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT64_C(c) c ## LL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_LEAST8_MAX__ 255\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT8_C(c) c\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_LEAST16_MAX__ 65535\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT16_C(c) c\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_LEAST32_MAX__ 4294967295U\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT32_C(c) c ## U\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_LEAST64_MAX__ 18446744073709551615ULL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT64_C(c) c ## ULL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_FAST8_MAX__ 127\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_FAST16_MAX__ 32767\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_FAST32_MAX__ 2147483647\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INT_FAST64_MAX__ 9223372036854775807LL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_FAST8_MAX__ 255\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_FAST16_MAX__ 65535\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_FAST32_MAX__ 4294967295U\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINT_FAST64_MAX__ 18446744073709551615ULL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__INTPTR_MAX__ 9223372036854775807LL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__UINTPTR_MAX__ 18446744073709551615ULL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_EVAL_METHOD__ 0\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC_EVAL_METHOD__ 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_RADIX__ 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_MANT_DIG__ 24\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_DIG__ 6\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_MIN_EXP__ (-125)\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_MIN_10_EXP__ (-37)\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_MAX_EXP__ 128\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_MAX_10_EXP__ 38\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_DECIMAL_DIG__ 9\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_MAX__ 3.40282346638528859812e+38F\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_MIN__ 1.17549435082228750797e-38F\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_EPSILON__ 1.19209289550781250000e-7F\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_DENORM_MIN__ 1.40129846432481707092e-45F\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_HAS_DENORM__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_HAS_INFINITY__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__FLT_HAS_QUIET_NAN__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DBL_MANT_DIG__ 53\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DBL_DIG__ 15\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DBL_MIN_EXP__ (-1021)\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DBL_MIN_10_EXP__ (-307)\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DBL_MAX_EXP__ 1024\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DBL_MAX_10_EXP__ 308\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DBL_DECIMAL_DIG__ 17\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DBL_MAX__ double(1.79769313486231570815e+308L)\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DBL_MIN__ double(2.22507385850720138309e-308L)\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DBL_EPSILON__ double(2.22044604925031308085e-16L)\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DBL_DENORM_MIN__ double(4.94065645841246544177e-324L)\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DBL_HAS_DENORM__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DBL_HAS_INFINITY__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DBL_HAS_QUIET_NAN__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LDBL_MANT_DIG__ 64\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LDBL_DIG__ 18\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LDBL_MIN_EXP__ (-16381)\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LDBL_MIN_10_EXP__ (-4931)\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LDBL_MAX_EXP__ 16384\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LDBL_MAX_10_EXP__ 4932\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DECIMAL_DIG__ 21\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LDBL_MAX__ 1.18973149535723176502e+4932L\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LDBL_MIN__ 3.36210314311209350626e-4932L\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LDBL_EPSILON__ 1.08420217248550443401e-19L\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LDBL_DENORM_MIN__ 3.64519953188247460253e-4951L\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LDBL_HAS_DENORM__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LDBL_HAS_INFINITY__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__LDBL_HAS_QUIET_NAN__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC32_MANT_DIG__ 7\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC32_MIN_EXP__ (-94)\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC32_MAX_EXP__ 97\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC32_MIN__ 1E-95DF\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC32_MAX__ 9.999999E96DF\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC32_EPSILON__ 1E-6DF\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC32_SUBNORMAL_MIN__ 0.000001E-95DF\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC64_MANT_DIG__ 16\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC64_MIN_EXP__ (-382)\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC64_MAX_EXP__ 385\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC64_MIN__ 1E-383DD\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC64_MAX__ 9.999999999999999E384DD\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC64_EPSILON__ 1E-15DD\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC128_MANT_DIG__ 34\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC128_MIN_EXP__ (-6142)\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC128_MAX_EXP__ 6145\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC128_MIN__ 1E-6143DL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC128_MAX__ 9.999999999999999999999999999999999E6144DL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC128_EPSILON__ 1E-33DL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000000000001E-6143DL\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__REGISTER_PREFIX__ \0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__USER_LABEL_PREFIX__ \0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GNUC_GNU_INLINE__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__NO_INLINE__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__WCHAR_UNSIGNED__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_ATOMIC_BOOL_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_ATOMIC_CHAR_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_ATOMIC_CHAR16_T_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_ATOMIC_CHAR32_T_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_ATOMIC_WCHAR_T_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_ATOMIC_SHORT_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_ATOMIC_INT_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_ATOMIC_LONG_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_ATOMIC_LLONG_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_ATOMIC_POINTER_LOCK_FREE 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GCC_HAVE_DWARF2_CFI_ASM 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__PRAGMA_REDEFINE_EXTNAME 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZEOF_INT128__ 16\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZEOF_WCHAR_T__ 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZEOF_WINT_T__ 2\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SIZEOF_PTRDIFF_T__ 8\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__amd64 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__amd64__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__x86_64 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__x86_64__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__k8 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__k8__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__MMX__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SSE__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SSE2__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SSE_MATH__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SSE2_MATH__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__SEH__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__stdcall __attribute__((__stdcall__))\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__fastcall __attribute__((__fastcall__))\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__thiscall __attribute__((__thiscall__))\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__cdecl __attribute__((__cdecl__))\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "_stdcall __attribute__((__stdcall__))\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "_fastcall __attribute__((__fastcall__))\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "_thiscall __attribute__((__thiscall__))\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "_cdecl __attribute__((__cdecl__))\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GXX_MERGED_TYPEINFO_NAMES 0\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__GXX_TYPEINFO_EQUALITY_INLINE 0\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__MSVCRT__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__MINGW32__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "_WIN32 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__WIN32 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__WIN32__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "WIN32 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__WINNT 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__WINNT__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "WINNT 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "_INTEGRAL_MAX_BITS 64\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__MINGW64__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__WIN64 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__WIN64__ 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "WIN64 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "_WIN64 1\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__declspec(x) __attribute__((x))\0"
	.byte	0x1
	.uleb128 0x1
	.ascii "__DECIMAL_BID_FORMAT__ 1\0"
	.byte	0x2
	.uleb128 0x1
	.ascii "_REENTRANT\0"
	.byte	0x3
	.uleb128 0x39
	.uleb128 0x2
	.byte	0x1
	.uleb128 0x23
	.ascii "_GLIBCXX_IOSTREAM 1\0"
	.byte	0x3
	.uleb128 0x27
	.uleb128 0x7
	.byte	0x1
	.uleb128 0x20
	.ascii "_GLIBCXX_CXX_CONFIG_H 1\0"
	.byte	0x1
	.uleb128 0x23
	.ascii "__GLIBCXX__ 20120614\0"
	.byte	0x1
	.uleb128 0x2c
	.ascii "_GLIBCXX_PURE __attribute__ ((__pure__))\0"
	.byte	0x1
	.uleb128 0x30
	.ascii "_GLIBCXX_CONST __attribute__ ((__const__))\0"
	.byte	0x1
	.uleb128 0x34
	.ascii "_GLIBCXX_NORETURN __attribute__ ((__noreturn__))\0"
	.byte	0x1
	.uleb128 0x41
	.ascii "_GLIBCXX_HAVE_ATTRIBUTE_VISIBILITY 0\0"
	.byte	0x1
	.uleb128 0x48
	.ascii "_GLIBCXX_VISIBILITY(V) _GLIBCXX_PSEUDO_VISIBILITY(V)\0"
	.byte	0x1
	.uleb128 0x4f
	.ascii "_GLIBCXX_USE_DEPRECATED 1\0"
	.byte	0x1
	.uleb128 0x55
	.ascii "_GLIBCXX_DEPRECATED \0"
	.byte	0x1
	.uleb128 0x60
	.ascii "_GLIBCXX_CONSTEXPR \0"
	.byte	0x1
	.uleb128 0x61
	.ascii "_GLIBCXX_USE_CONSTEXPR const\0"
	.byte	0x1
	.uleb128 0x6c
	.ascii "_GLIBCXX_NOEXCEPT \0"
	.byte	0x1
	.uleb128 0x6d
	.ascii "_GLIBCXX_USE_NOEXCEPT throw()\0"
	.byte	0x1
	.uleb128 0x6e
	.ascii "_GLIBCXX_THROW(_EXC) throw(_EXC)\0"
	.byte	0x1
	.uleb128 0x73
	.ascii "_GLIBCXX_NOTHROW _GLIBCXX_USE_NOEXCEPT\0"
	.byte	0x1
	.uleb128 0x80
	.ascii "_GLIBCXX_EXTERN_TEMPLATE 1\0"
	.byte	0x1
	.uleb128 0xb7
	.ascii "_GLIBCXX_INLINE_VERSION 0\0"
	.byte	0x1
	.uleb128 0xe0
	.ascii "_GLIBCXX_BEGIN_NAMESPACE_VERSION \0"
	.byte	0x1
	.uleb128 0xe1
	.ascii "_GLIBCXX_END_NAMESPACE_VERSION \0"
	.byte	0x1
	.uleb128 0x131
	.ascii "_GLIBCXX_STD_A std\0"
	.byte	0x1
	.uleb128 0x135
	.ascii "_GLIBCXX_STD_C std\0"
	.byte	0x1
	.uleb128 0x139
	.ascii "_GLIBCXX_BEGIN_NAMESPACE_ALGO \0"
	.byte	0x1
	.uleb128 0x13d
	.ascii "_GLIBCXX_END_NAMESPACE_ALGO \0"
	.byte	0x1
	.uleb128 0x141
	.ascii "_GLIBCXX_BEGIN_NAMESPACE_CONTAINER \0"
	.byte	0x1
	.uleb128 0x145
	.ascii "_GLIBCXX_END_NAMESPACE_CONTAINER \0"
	.byte	0x2
	.uleb128 0x14a
	.ascii "_GLIBCXX_LONG_DOUBLE_COMPAT\0"
	.byte	0x1
	.uleb128 0x156
	.ascii "_GLIBCXX_NAMESPACE_LDBL \0"
	.byte	0x1
	.uleb128 0x157
	.ascii "_GLIBCXX_BEGIN_NAMESPACE_LDBL \0"
	.byte	0x1
	.uleb128 0x158
	.ascii "_GLIBCXX_END_NAMESPACE_LDBL \0"
	.byte	0x1
	.uleb128 0x15d
	.ascii "__glibcxx_assert(_Condition) \0"
	.byte	0x1
	.uleb128 0x18b
	.ascii "_GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE(A) \0"
	.byte	0x1
	.uleb128 0x18e
	.ascii "_GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER(A) \0"
	.byte	0x1
	.uleb128 0x192
	.ascii "_GLIBCXX_BEGIN_EXTERN_C extern \"C\" {\0"
	.byte	0x1
	.uleb128 0x193
	.ascii "_GLIBCXX_END_EXTERN_C }\0"
	.file 20 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/x86_64-w64-mingw32/bits/os_defines.h"
	.byte	0x3
	.uleb128 0x19e
	.uleb128 0x14
	.byte	0x1
	.uleb128 0x20
	.ascii "_GLIBCXX_OS_DEFINES \0"
	.byte	0x1
	.uleb128 0x28
	.ascii "__GTHREAD_HIDE_WIN32API 1\0"
	.byte	0x2
	.uleb128 0x2d
	.ascii "NOMINMAX\0"
	.byte	0x1
	.uleb128 0x2e
	.ascii "NOMINMAX 1\0"
	.byte	0x2
	.uleb128 0x33
	.ascii "__USE_MINGW_ANSI_STDIO\0"
	.byte	0x1
	.uleb128 0x34
	.ascii "__USE_MINGW_ANSI_STDIO 1\0"
	.byte	0x1
	.uleb128 0x39
	.ascii "_GLIBCXX_PSEUDO_VISIBILITY_default \0"
	.byte	0x1
	.uleb128 0x3b
	.ascii "_GLIBCXX_PSEUDO_VISIBILITY_hidden \0"
	.byte	0x1
	.uleb128 0x3d
	.ascii "_GLIBCXX_PSEUDO_VISIBILITY(V) _GLIBCXX_PSEUDO_VISIBILITY_ ## V\0"
	.byte	0x1
	.uleb128 0x40
	.ascii "_GLIBCXX_HAVE_DOS_BASED_FILESYSTEM 1\0"
	.byte	0x1
	.uleb128 0x43
	.ascii "_GLIBCXX_HAVE_BROKEN_VSWPRINTF 1\0"
	.byte	0x1
	.uleb128 0x48
	.ascii "_GLIBCXX_NO_IOCTL 1\0"
	.byte	0x4
	.file 21 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/x86_64-w64-mingw32/bits/cpu_defines.h"
	.byte	0x3
	.uleb128 0x1a1
	.uleb128 0x15
	.byte	0x1
	.uleb128 0x1f
	.ascii "_GLIBCXX_CPU_DEFINES 1\0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x1ad
	.ascii "_GLIBCXX_WEAK_DEFINITION \0"
	.byte	0x1
	.uleb128 0x1b8
	.ascii "_GLIBCXX_FAST_MATH 0\0"
	.byte	0x1
	.uleb128 0x1bf
	.ascii "__N(msgid) (msgid)\0"
	.byte	0x2
	.uleb128 0x1c2
	.ascii "min\0"
	.byte	0x2
	.uleb128 0x1c3
	.ascii "max\0"
	.byte	0x1
	.uleb128 0x1ca
	.ascii "_GLIBCXX_HAVE_ACOSF 1\0"
	.byte	0x1
	.uleb128 0x1cd
	.ascii "_GLIBCXX_HAVE_ACOSL 1\0"
	.byte	0x1
	.uleb128 0x1d0
	.ascii "_GLIBCXX_HAVE_ASINF 1\0"
	.byte	0x1
	.uleb128 0x1d3
	.ascii "_GLIBCXX_HAVE_ASINL 1\0"
	.byte	0x1
	.uleb128 0x1d9
	.ascii "_GLIBCXX_HAVE_ATAN2F 1\0"
	.byte	0x1
	.uleb128 0x1dc
	.ascii "_GLIBCXX_HAVE_ATAN2L 1\0"
	.byte	0x1
	.uleb128 0x1df
	.ascii "_GLIBCXX_HAVE_ATANF 1\0"
	.byte	0x1
	.uleb128 0x1e2
	.ascii "_GLIBCXX_HAVE_ATANL 1\0"
	.byte	0x1
	.uleb128 0x1e8
	.ascii "_GLIBCXX_HAVE_CEILF 1\0"
	.byte	0x1
	.uleb128 0x1eb
	.ascii "_GLIBCXX_HAVE_CEILL 1\0"
	.byte	0x1
	.uleb128 0x1ee
	.ascii "_GLIBCXX_HAVE_COMPLEX_H 1\0"
	.byte	0x1
	.uleb128 0x1f1
	.ascii "_GLIBCXX_HAVE_COSF 1\0"
	.byte	0x1
	.uleb128 0x1f4
	.ascii "_GLIBCXX_HAVE_COSHF 1\0"
	.byte	0x1
	.uleb128 0x1f7
	.ascii "_GLIBCXX_HAVE_COSHL 1\0"
	.byte	0x1
	.uleb128 0x1fa
	.ascii "_GLIBCXX_HAVE_COSL 1\0"
	.byte	0x1
	.uleb128 0x203
	.ascii "_GLIBCXX_HAVE_ECANCELED 1\0"
	.byte	0x1
	.uleb128 0x206
	.ascii "_GLIBCXX_HAVE_ECHILD 1\0"
	.byte	0x1
	.uleb128 0x215
	.ascii "_GLIBCXX_HAVE_ENOSPC 1\0"
	.byte	0x1
	.uleb128 0x221
	.ascii "_GLIBCXX_HAVE_ENOTSUP 1\0"
	.byte	0x1
	.uleb128 0x224
	.ascii "_GLIBCXX_HAVE_EOVERFLOW 1\0"
	.byte	0x1
	.uleb128 0x227
	.ascii "_GLIBCXX_HAVE_EOWNERDEAD 1\0"
	.byte	0x1
	.uleb128 0x22a
	.ascii "_GLIBCXX_HAVE_EPERM 1\0"
	.byte	0x1
	.uleb128 0x22d
	.ascii "_GLIBCXX_HAVE_EPROTO 1\0"
	.byte	0x1
	.uleb128 0x233
	.ascii "_GLIBCXX_HAVE_ETIMEDOUT 1\0"
	.byte	0x1
	.uleb128 0x239
	.ascii "_GLIBCXX_HAVE_EWOULDBLOCK 1\0"
	.byte	0x1
	.uleb128 0x23f
	.ascii "_GLIBCXX_HAVE_EXPF 1\0"
	.byte	0x1
	.uleb128 0x242
	.ascii "_GLIBCXX_HAVE_EXPL 1\0"
	.byte	0x1
	.uleb128 0x245
	.ascii "_GLIBCXX_HAVE_FABSF 1\0"
	.byte	0x1
	.uleb128 0x248
	.ascii "_GLIBCXX_HAVE_FABSL 1\0"
	.byte	0x1
	.uleb128 0x24b
	.ascii "_GLIBCXX_HAVE_FENV_H 1\0"
	.byte	0x1
	.uleb128 0x24e
	.ascii "_GLIBCXX_HAVE_FINITE 1\0"
	.byte	0x1
	.uleb128 0x257
	.ascii "_GLIBCXX_HAVE_FLOAT_H 1\0"
	.byte	0x1
	.uleb128 0x25a
	.ascii "_GLIBCXX_HAVE_FLOORF 1\0"
	.byte	0x1
	.uleb128 0x25d
	.ascii "_GLIBCXX_HAVE_FLOORL 1\0"
	.byte	0x1
	.uleb128 0x260
	.ascii "_GLIBCXX_HAVE_FMODF 1\0"
	.byte	0x1
	.uleb128 0x263
	.ascii "_GLIBCXX_HAVE_FMODL 1\0"
	.byte	0x1
	.uleb128 0x266
	.ascii "_GLIBCXX_HAVE_FPCLASS 1\0"
	.byte	0x1
	.uleb128 0x26c
	.ascii "_GLIBCXX_HAVE_FREXPF 1\0"
	.byte	0x1
	.uleb128 0x26f
	.ascii "_GLIBCXX_HAVE_FREXPL 1\0"
	.byte	0x1
	.uleb128 0x272
	.ascii "_GLIBCXX_HAVE_GETIPINFO 1\0"
	.byte	0x1
	.uleb128 0x275
	.ascii "_GLIBCXX_HAVE_GETS 1\0"
	.byte	0x1
	.uleb128 0x278
	.ascii "_GLIBCXX_HAVE_HYPOT 1\0"
	.byte	0x1
	.uleb128 0x27b
	.ascii "_GLIBCXX_HAVE_HYPOTF 1\0"
	.byte	0x1
	.uleb128 0x27e
	.ascii "_GLIBCXX_HAVE_HYPOTL 1\0"
	.byte	0x1
	.uleb128 0x281
	.ascii "_GLIBCXX_HAVE_ICONV 1\0"
	.byte	0x1
	.uleb128 0x284
	.ascii "_GLIBCXX_HAVE_IEEEFP_H 1\0"
	.byte	0x1
	.uleb128 0x287
	.ascii "_GLIBCXX_HAVE_INT64_T 1\0"
	.byte	0x1
	.uleb128 0x28d
	.ascii "_GLIBCXX_HAVE_INT64_T_LONG_LONG 1\0"
	.byte	0x1
	.uleb128 0x290
	.ascii "_GLIBCXX_HAVE_INTTYPES_H 1\0"
	.byte	0x1
	.uleb128 0x29c
	.ascii "_GLIBCXX_HAVE_ISNAN 1\0"
	.byte	0x1
	.uleb128 0x2a5
	.ascii "_GLIBCXX_HAVE_ISWBLANK 1\0"
	.byte	0x1
	.uleb128 0x2ab
	.ascii "_GLIBCXX_HAVE_LDEXPF 1\0"
	.byte	0x1
	.uleb128 0x2ae
	.ascii "_GLIBCXX_HAVE_LDEXPL 1\0"
	.byte	0x1
	.uleb128 0x2c6
	.ascii "_GLIBCXX_HAVE_LOCALE_H 1\0"
	.byte	0x1
	.uleb128 0x2c9
	.ascii "_GLIBCXX_HAVE_LOG10F 1\0"
	.byte	0x1
	.uleb128 0x2cc
	.ascii "_GLIBCXX_HAVE_LOG10L 1\0"
	.byte	0x1
	.uleb128 0x2cf
	.ascii "_GLIBCXX_HAVE_LOGF 1\0"
	.byte	0x1
	.uleb128 0x2d2
	.ascii "_GLIBCXX_HAVE_LOGL 1\0"
	.byte	0x1
	.uleb128 0x2db
	.ascii "_GLIBCXX_HAVE_MBSTATE_T 1\0"
	.byte	0x1
	.uleb128 0x2de
	.ascii "_GLIBCXX_HAVE_MEMORY_H 1\0"
	.byte	0x1
	.uleb128 0x2e1
	.ascii "_GLIBCXX_HAVE_MODF 1\0"
	.byte	0x1
	.uleb128 0x2e4
	.ascii "_GLIBCXX_HAVE_MODFF 1\0"
	.byte	0x1
	.uleb128 0x2e7
	.ascii "_GLIBCXX_HAVE_MODFL 1\0"
	.byte	0x1
	.uleb128 0x2f0
	.ascii "_GLIBCXX_HAVE_POWF 1\0"
	.byte	0x1
	.uleb128 0x2f3
	.ascii "_GLIBCXX_HAVE_POWL 1\0"
	.byte	0x1
	.uleb128 0x2fc
	.ascii "_GLIBCXX_HAVE_SINCOS 1\0"
	.byte	0x1
	.uleb128 0x2ff
	.ascii "_GLIBCXX_HAVE_SINCOSF 1\0"
	.byte	0x1
	.uleb128 0x302
	.ascii "_GLIBCXX_HAVE_SINCOSL 1\0"
	.byte	0x1
	.uleb128 0x305
	.ascii "_GLIBCXX_HAVE_SINF 1\0"
	.byte	0x1
	.uleb128 0x308
	.ascii "_GLIBCXX_HAVE_SINHF 1\0"
	.byte	0x1
	.uleb128 0x30b
	.ascii "_GLIBCXX_HAVE_SINHL 1\0"
	.byte	0x1
	.uleb128 0x30e
	.ascii "_GLIBCXX_HAVE_SINL 1\0"
	.byte	0x1
	.uleb128 0x311
	.ascii "_GLIBCXX_HAVE_SQRTF 1\0"
	.byte	0x1
	.uleb128 0x314
	.ascii "_GLIBCXX_HAVE_SQRTL 1\0"
	.byte	0x1
	.uleb128 0x317
	.ascii "_GLIBCXX_HAVE_STDALIGN_H 1\0"
	.byte	0x1
	.uleb128 0x31a
	.ascii "_GLIBCXX_HAVE_STDBOOL_H 1\0"
	.byte	0x1
	.uleb128 0x31d
	.ascii "_GLIBCXX_HAVE_STDINT_H 1\0"
	.byte	0x1
	.uleb128 0x320
	.ascii "_GLIBCXX_HAVE_STDLIB_H 1\0"
	.byte	0x1
	.uleb128 0x329
	.ascii "_GLIBCXX_HAVE_STRINGS_H 1\0"
	.byte	0x1
	.uleb128 0x32c
	.ascii "_GLIBCXX_HAVE_STRING_H 1\0"
	.byte	0x1
	.uleb128 0x32f
	.ascii "_GLIBCXX_HAVE_STRTOF 1\0"
	.byte	0x1
	.uleb128 0x332
	.ascii "_GLIBCXX_HAVE_STRTOLD 1\0"
	.byte	0x1
	.uleb128 0x339
	.ascii "_GLIBCXX_HAVE_SYMVER_SYMBOL_RENAMING_RUNTIME_SUPPORT 1\0"
	.byte	0x1
	.uleb128 0x34b
	.ascii "_GLIBCXX_HAVE_SYS_PARAM_H 1\0"
	.byte	0x1
	.uleb128 0x354
	.ascii "_GLIBCXX_HAVE_SYS_STAT_H 1\0"
	.byte	0x1
	.uleb128 0x35a
	.ascii "_GLIBCXX_HAVE_SYS_TIME_H 1\0"
	.byte	0x1
	.uleb128 0x35d
	.ascii "_GLIBCXX_HAVE_SYS_TYPES_H 1\0"
	.byte	0x1
	.uleb128 0x366
	.ascii "_GLIBCXX_HAVE_S_ISREG 1\0"
	.byte	0x1
	.uleb128 0x369
	.ascii "_GLIBCXX_HAVE_TANF 1\0"
	.byte	0x1
	.uleb128 0x36c
	.ascii "_GLIBCXX_HAVE_TANHF 1\0"
	.byte	0x1
	.uleb128 0x36f
	.ascii "_GLIBCXX_HAVE_TANHL 1\0"
	.byte	0x1
	.uleb128 0x372
	.ascii "_GLIBCXX_HAVE_TANL 1\0"
	.byte	0x1
	.uleb128 0x375
	.ascii "_GLIBCXX_HAVE_TGMATH_H 1\0"
	.byte	0x1
	.uleb128 0x378
	.ascii "_GLIBCXX_HAVE_TLS 1\0"
	.byte	0x1
	.uleb128 0x37b
	.ascii "_GLIBCXX_HAVE_UNISTD_H 1\0"
	.byte	0x1
	.uleb128 0x37e
	.ascii "_GLIBCXX_HAVE_VFWSCANF 1\0"
	.byte	0x1
	.uleb128 0x381
	.ascii "_GLIBCXX_HAVE_VSWSCANF 1\0"
	.byte	0x1
	.uleb128 0x384
	.ascii "_GLIBCXX_HAVE_VWSCANF 1\0"
	.byte	0x1
	.uleb128 0x387
	.ascii "_GLIBCXX_HAVE_WCHAR_H 1\0"
	.byte	0x1
	.uleb128 0x38a
	.ascii "_GLIBCXX_HAVE_WCSTOF 1\0"
	.byte	0x1
	.uleb128 0x38d
	.ascii "_GLIBCXX_HAVE_WCTYPE_H 1\0"
	.byte	0x1
	.uleb128 0x3cc
	.ascii "_GLIBCXX_HAVE__FINITEF 1\0"
	.byte	0x1
	.uleb128 0x3fc
	.ascii "_GLIBCXX_HAVE__ISNANF 1\0"
	.byte	0x1
	.uleb128 0x44d
	.ascii "_GLIBCXX_ICONV_CONST \0"
	.byte	0x1
	.uleb128 0x451
	.ascii "LT_OBJDIR \".libs/\"\0"
	.byte	0x1
	.uleb128 0x457
	.ascii "_GLIBCXX_PACKAGE_BUGREPORT \"\"\0"
	.byte	0x1
	.uleb128 0x45a
	.ascii "_GLIBCXX_PACKAGE_NAME \"package-unused\"\0"
	.byte	0x1
	.uleb128 0x45d
	.ascii "_GLIBCXX_PACKAGE_STRING \"package-unused version-unused\"\0"
	.byte	0x1
	.uleb128 0x460
	.ascii "_GLIBCXX_PACKAGE_TARNAME \"libstdc++\"\0"
	.byte	0x1
	.uleb128 0x463
	.ascii "_GLIBCXX_PACKAGE_URL \"\"\0"
	.byte	0x1
	.uleb128 0x466
	.ascii "_GLIBCXX_PACKAGE__GLIBCXX_VERSION \"version-unused\"\0"
	.byte	0x1
	.uleb128 0x478
	.ascii "STDC_HEADERS 1\0"
	.byte	0x1
	.uleb128 0x47e
	.ascii "_GLIBCXX_ATOMIC_BUILTINS 1\0"
	.byte	0x1
	.uleb128 0x485
	.ascii "_GLIBCXX_FULLY_DYNAMIC_STRING 1\0"
	.byte	0x1
	.uleb128 0x48b
	.ascii "_GLIBCXX_HOSTED 1\0"
	.byte	0x1
	.uleb128 0x499
	.ascii "_GLIBCXX_SJLJ_EXCEPTIONS 1\0"
	.byte	0x1
	.uleb128 0x49c
	.ascii "_GLIBCXX_STDIO_EOF -1\0"
	.byte	0x1
	.uleb128 0x49f
	.ascii "_GLIBCXX_STDIO_SEEK_CUR 1\0"
	.byte	0x1
	.uleb128 0x4a2
	.ascii "_GLIBCXX_STDIO_SEEK_END 2\0"
	.byte	0x1
	.uleb128 0x4a5
	.ascii "_GLIBCXX_SYMVER 1\0"
	.byte	0x1
	.uleb128 0x4ab
	.ascii "_GLIBCXX_SYMVER_GNU 1\0"
	.byte	0x1
	.uleb128 0x4b5
	.ascii "_GLIBCXX_USE_C99 1\0"
	.byte	0x1
	.uleb128 0x4ba
	.ascii "_GLIBCXX_USE_C99_COMPLEX 1\0"
	.byte	0x1
	.uleb128 0x4bf
	.ascii "_GLIBCXX_USE_C99_COMPLEX_TR1 1\0"
	.byte	0x1
	.uleb128 0x4c3
	.ascii "_GLIBCXX_USE_C99_CTYPE_TR1 1\0"
	.byte	0x1
	.uleb128 0x4c7
	.ascii "_GLIBCXX_USE_C99_FENV_TR1 1\0"
	.byte	0x1
	.uleb128 0x4cb
	.ascii "_GLIBCXX_USE_C99_INTTYPES_TR1 1\0"
	.byte	0x1
	.uleb128 0x4cf
	.ascii "_GLIBCXX_USE_C99_INTTYPES_WCHAR_T_TR1 1\0"
	.byte	0x1
	.uleb128 0x4d3
	.ascii "_GLIBCXX_USE_C99_MATH 1\0"
	.byte	0x1
	.uleb128 0x4d7
	.ascii "_GLIBCXX_USE_C99_MATH_TR1 1\0"
	.byte	0x1
	.uleb128 0x4db
	.ascii "_GLIBCXX_USE_C99_STDINT_TR1 1\0"
	.byte	0x1
	.uleb128 0x4e5
	.ascii "_GLIBCXX_USE_DECIMAL_FLOAT 1\0"
	.byte	0x1
	.uleb128 0x4e8
	.ascii "_GLIBCXX_USE_FLOAT128 1\0"
	.byte	0x1
	.uleb128 0x4eb
	.ascii "_GLIBCXX_USE_GETTIMEOFDAY 1\0"
	.byte	0x1
	.uleb128 0x4f1
	.ascii "_GLIBCXX_USE_INT128 1\0"
	.byte	0x1
	.uleb128 0x4f4
	.ascii "_GLIBCXX_USE_LFS 1\0"
	.byte	0x1
	.uleb128 0x4f7
	.ascii "_GLIBCXX_USE_LONG_LONG 1\0"
	.byte	0x1
	.uleb128 0x504
	.ascii "_GLIBCXX_USE_RANDOM_TR1 1\0"
	.byte	0x1
	.uleb128 0x513
	.ascii "_GLIBCXX_USE_WCHAR_T 1\0"
	.byte	0x1
	.uleb128 0x516
	.ascii "_GTHREAD_USE_MUTEX_TIMEDLOCK 1\0"
	.byte	0x1
	.uleb128 0x587
	.ascii "_GLIBCXX_HAVE_FINITEF 1\0"
	.byte	0x1
	.uleb128 0x588
	.ascii "finitef _finitef\0"
	.byte	0x1
	.uleb128 0x5d7
	.ascii "_GLIBCXX_HAVE_ISNANF 1\0"
	.byte	0x1
	.uleb128 0x5d8
	.ascii "isnanf _isnanf\0"
	.byte	0x4
	.file 22 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/ostream"
	.byte	0x3
	.uleb128 0x28
	.uleb128 0x16
	.byte	0x1
	.uleb128 0x24
	.ascii "_GLIBCXX_OSTREAM 1\0"
	.file 23 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/ios"
	.byte	0x3
	.uleb128 0x28
	.uleb128 0x17
	.byte	0x1
	.uleb128 0x23
	.ascii "_GLIBCXX_IOS 1\0"
	.byte	0x3
	.uleb128 0x27
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x24
	.ascii "_GLIBCXX_IOSFWD 1\0"
	.file 24 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/stringfwd.h"
	.byte	0x3
	.uleb128 0x29
	.uleb128 0x18
	.byte	0x1
	.uleb128 0x25
	.ascii "_STRINGFWD_H 1\0"
	.byte	0x4
	.file 25 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/postypes.h"
	.byte	0x3
	.uleb128 0x2a
	.uleb128 0x19
	.byte	0x1
	.uleb128 0x26
	.ascii "_GLIBCXX_POSTYPES_H 1\0"
	.byte	0x3
	.uleb128 0x2a
	.uleb128 0x6
	.byte	0x3
	.uleb128 0x2e
	.uleb128 0x5
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_WCHAR \0"
	.file 26 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/crtdefs.h"
	.byte	0x3
	.uleb128 0x9
	.uleb128 0x1a
	.byte	0x1
	.uleb128 0x8
	.ascii "_INC_CRTDEFS \0"
	.byte	0x3
	.uleb128 0xa
	.uleb128 0x3
	.byte	0x1
	.uleb128 0x8
	.ascii "_INC__MINGW_H \0"
	.file 27 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/_mingw_mac.h"
	.byte	0x3
	.uleb128 0xc
	.uleb128 0x1b
	.byte	0x1
	.uleb128 0x8
	.ascii "_INC_CRTDEFS_MACRO \0"
	.byte	0x1
	.uleb128 0xa
	.ascii "__STRINGIFY(x) #x\0"
	.byte	0x1
	.uleb128 0xb
	.ascii "__MINGW64_STRINGIFY(x) __STRINGIFY(x)\0"
	.byte	0x1
	.uleb128 0xd
	.ascii "__MINGW64_VERSION_MAJOR 3\0"
	.byte	0x1
	.uleb128 0xe
	.ascii "__MINGW64_VERSION_MINOR 0\0"
	.byte	0x1
	.uleb128 0xf
	.ascii "__MINGW64_VERSION_STR __MINGW64_STRINGIFY(__MINGW64_VERSION_MAJOR) \".\" __MINGW64_STRINGIFY(__MINGW64_VERSION_MINOR)\0"
	.byte	0x1
	.uleb128 0x10
	.ascii "__MINGW64_VERSION_STATE \"alpha\"\0"
	.byte	0x1
	.uleb128 0x16
	.ascii "__MINGW32_MAJOR_VERSION 3\0"
	.byte	0x1
	.uleb128 0x17
	.ascii "__MINGW32_MINOR_VERSION 11\0"
	.byte	0x2
	.uleb128 0x21
	.ascii "_\0"
	.byte	0x1
	.uleb128 0x22
	.ascii "_ 1\0"
	.byte	0x1
	.uleb128 0x26
	.ascii "__MINGW_USE_UNDERSCORE_PREFIX 0\0"
	.byte	0x2
	.uleb128 0x28
	.ascii "_\0"
	.byte	0x1
	.uleb128 0x35
	.ascii "__MINGW_IMP_SYMBOL(sym) __imp_ ##sym\0"
	.byte	0x1
	.uleb128 0x36
	.ascii "__MINGW_IMP_LSYMBOL(sym) __imp_ ##sym\0"
	.byte	0x1
	.uleb128 0x37
	.ascii "__MINGW_USYMBOL(sym) sym\0"
	.byte	0x1
	.uleb128 0x38
	.ascii "__MINGW_LSYMBOL(sym) _ ##sym\0"
	.byte	0x1
	.uleb128 0x42
	.ascii "__USE_MINGW_OUTPUT_FORMAT_EMU 1\0"
	.byte	0x1
	.uleb128 0x59
	.ascii "_M_AMD64 100\0"
	.byte	0x1
	.uleb128 0x5a
	.ascii "_M_X64 100\0"
	.byte	0x2
	.uleb128 0x79
	.ascii "__MINGW_EXTENSION\0"
	.byte	0x1
	.uleb128 0x7b
	.ascii "__MINGW_EXTENSION __extension__\0"
	.byte	0x1
	.uleb128 0x82
	.ascii "__C89_NAMELESS __MINGW_EXTENSION\0"
	.byte	0x1
	.uleb128 0x84
	.ascii "__C89_NAMELESSSTRUCTNAME \0"
	.byte	0x1
	.uleb128 0x85
	.ascii "__C89_NAMELESSSTRUCTNAME1 \0"
	.byte	0x1
	.uleb128 0x86
	.ascii "__C89_NAMELESSSTRUCTNAME2 \0"
	.byte	0x1
	.uleb128 0x87
	.ascii "__C89_NAMELESSSTRUCTNAME3 \0"
	.byte	0x1
	.uleb128 0x88
	.ascii "__C89_NAMELESSSTRUCTNAME4 \0"
	.byte	0x1
	.uleb128 0x89
	.ascii "__C89_NAMELESSSTRUCTNAME5 \0"
	.byte	0x1
	.uleb128 0x8a
	.ascii "__C89_NAMELESSUNIONNAME \0"
	.byte	0x1
	.uleb128 0x8b
	.ascii "__C89_NAMELESSUNIONNAME1 \0"
	.byte	0x1
	.uleb128 0x8c
	.ascii "__C89_NAMELESSUNIONNAME2 \0"
	.byte	0x1
	.uleb128 0x8d
	.ascii "__C89_NAMELESSUNIONNAME3 \0"
	.byte	0x1
	.uleb128 0x8e
	.ascii "__C89_NAMELESSUNIONNAME4 \0"
	.byte	0x1
	.uleb128 0x8f
	.ascii "__C89_NAMELESSUNIONNAME5 \0"
	.byte	0x1
	.uleb128 0x90
	.ascii "__C89_NAMELESSUNIONNAME6 \0"
	.byte	0x1
	.uleb128 0x91
	.ascii "__C89_NAMELESSUNIONNAME7 \0"
	.byte	0x1
	.uleb128 0x92
	.ascii "__C89_NAMELESSUNIONNAME8 \0"
	.byte	0x1
	.uleb128 0x96
	.ascii "__GNU_EXTENSION __MINGW_EXTENSION\0"
	.byte	0x1
	.uleb128 0x9b
	.ascii "__MINGW_HAVE_ANSI_C99_PRINTF 1\0"
	.byte	0x1
	.uleb128 0x9c
	.ascii "__MINGW_HAVE_WIDE_C99_PRINTF 1\0"
	.byte	0x1
	.uleb128 0x9d
	.ascii "__MINGW_HAVE_ANSI_C99_SCANF 1\0"
	.byte	0x1
	.uleb128 0x9e
	.ascii "__MINGW_HAVE_WIDE_C99_SCANF 1\0"
	.byte	0x1
	.uleb128 0xa3
	.ascii "__MINGW_POISON_NAME(__IFACE) __IFACE ##_layout_has_not_been_verified_and_its_declaration_is_most_likely_incorrect\0"
	.byte	0x1
	.uleb128 0xa9
	.ascii "__MSABI_LONG(x) x ## l\0"
	.byte	0x1
	.uleb128 0xb0
	.ascii "__MINGW_GCC_VERSION (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)\0"
	.byte	0x1
	.uleb128 0xb8
	.ascii "__MINGW_GNUC_PREREQ(major,minor) (__GNUC__ > (major) || (__GNUC__ == (major) && __GNUC_MINOR__ >= (minor)))\0"
	.byte	0x1
	.uleb128 0xc3
	.ascii "__MINGW_MSC_PREREQ(major,minor) 0\0"
	.byte	0x1
	.uleb128 0xcd
	.ascii "__MINGW_ATTRIB_DEPRECATED_STR(X) \0"
	.byte	0x1
	.uleb128 0xd0
	.ascii "__MINGW_SEC_WARN_STR \"This function or variable may be unsafe, use _CRT_SECURE_NO_WARNINGS to disable deprecation\"\0"
	.byte	0x1
	.uleb128 0xd1
	.ascii "__MINGW_MSVC2005_DEPREC_STR \"This POSIX function is deprecated beginning in Visual C++ 2005, use _CRT_NONSTDC_NO_DEPRECATE to disable deprecation\"\0"
	.byte	0x1
	.uleb128 0xd4
	.ascii "__MINGW_ATTRIB_DEPRECATED_MSVC2005 __MINGW_ATTRIB_DEPRECATED_STR (__MINGW_MSVC2005_DEPREC_STR)\0"
	.byte	0x1
	.uleb128 0xda
	.ascii "__MINGW_ATTRIB_DEPRECATED_SEC_WARN __MINGW_ATTRIB_DEPRECATED_STR (__MINGW_SEC_WARN_STR)\0"
	.byte	0x4
	.file 28 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/_mingw_secapi.h"
	.byte	0x3
	.uleb128 0xd
	.uleb128 0x1c
	.byte	0x1
	.uleb128 0x8
	.ascii "_INC_MINGW_SECAPI \0"
	.byte	0x2
	.uleb128 0x1d
	.ascii "_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES\0"
	.byte	0x2
	.uleb128 0x1e
	.ascii "_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY\0"
	.byte	0x2
	.uleb128 0x1f
	.ascii "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES\0"
	.byte	0x2
	.uleb128 0x20
	.ascii "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT\0"
	.byte	0x2
	.uleb128 0x21
	.ascii "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY\0"
	.byte	0x1
	.uleb128 0x22
	.ascii "_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 0\0"
	.byte	0x1
	.uleb128 0x23
	.ascii "_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY 0\0"
	.byte	0x1
	.uleb128 0x24
	.ascii "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 0\0"
	.byte	0x1
	.uleb128 0x25
	.ascii "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 0\0"
	.byte	0x1
	.uleb128 0x26
	.ascii "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY 0\0"
	.byte	0x1
	.uleb128 0x29
	.ascii "__MINGW_CRT_NAME_CONCAT1(sym) ::sym\0"
	.byte	0x1
	.uleb128 0x2a
	.ascii "__MINGW_CRT_NAME_CONCAT2(sym) ::sym ##_s\0"
	.byte	0x1
	.uleb128 0x2b
	.ascii "__MINGW_CRT_NAME_INSECURE(sym) ::__insecure__ ##sym\0"
	.byte	0x1
	.uleb128 0x2c
	.ascii "__MINGW_CRT_NAME_INSECURE_DEF(sym) __insecure__ ##sym\0"
	.byte	0x1
	.uleb128 0x45
	.ascii "__CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_0_2_(__ret,__func,__type1,__attrib1,__arg1,__type2,__attrib2,__arg2,__type3,__attrib3,__arg3) _CRTIMP __ret __cdecl __func(__type1 * __attrib1 __arg1, __type2 __attrib2 __arg2, __type3 __attrib3 __arg3);\0"
	.byte	0x1
	.uleb128 0x56
	.ascii "__CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY_0_3_(__ret,__func,__type1,__attrib1,__arg1,__type2,__attrib2,__arg2,__type3,__attrib3,__arg3,__type4,__attrib4,__arg4) _CRTIMP __ret __cdecl __func(__type1 * __attrib1 __arg1, __type2 __attrib2 __arg2, __type3 __attrib3 __arg3, __type4 __attrib4 __arg4);\0"
	.byte	0x1
	.uleb128 0x71
	.ascii "__CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_0_2_(__ret,__func,__type1,__attrib1,__arg1,__type2,__attrib2,__arg2) _CRTIMP __ret __cdecl __func(__type1 * __attrib1 __arg1, __type2 __attrib2 __arg2) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;\0"
	.byte	0x1
	.uleb128 0xb0
	.ascii "__CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT_0_3_(__ret,__func,__type1,__attrib1,__arg1,__type2,__attrib2,__arg2,__type3,__attrib3,__arg3) _CRTIMP __ret __cdecl __func(__type1 * __attrib1 __arg1, __type2 __attrib2 __arg2, __type3 __attrib3 __arg3) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;\0"
	.byte	0x1
	.uleb128 0xb2
	.ascii "__CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT_1_4_(__ret,__imp_attrib,__func,__real_func,__type1,__attrib1,__arg1,__type2,__attrib2,__arg2,__type3,__attrib3,__arg3,__type4,__attrib4,__arg4) __imp_attrib __ret __cdecl __func(__type1 * __attrib1 __arg1, __type2 __attrib2 __arg2, __type3 __attrib3 __arg3, __type4 __attrib4 __arg4) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;\0"
	.byte	0x1
	.uleb128 0xc5
	.ascii "__CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY_0_3_(__ret,__func,__type1,__attrib1,__arg1,__type2,__attrib2,__arg2,__type3,__attrib3,__arg3) _CRTIMP __ret __cdecl __func(__type1 * __attrib1 __arg1, __type2 __attrib2 __arg2, __type3 __attrib3 __arg3) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;\0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x1a
	.ascii "__LONG32 long\0"
	.byte	0x2
	.uleb128 0x22
	.ascii "__stdcall\0"
	.byte	0x1
	.uleb128 0x24
	.ascii "__stdcall \0"
	.byte	0x1
	.uleb128 0x35
	.ascii "__MINGW_IMPORT extern __attribute__ ((__dllimport__))\0"
	.byte	0x2
	.uleb128 0x38
	.ascii "__USE_CRTIMP\0"
	.byte	0x1
	.uleb128 0x3a
	.ascii "__USE_CRTIMP 1\0"
	.byte	0x1
	.uleb128 0x3d
	.ascii "_CRTIMP __attribute__ ((__dllimport__))\0"
	.byte	0x1
	.uleb128 0x42
	.ascii "__DECLSPEC_SUPPORTED \0"
	.byte	0x1
	.uleb128 0x4f
	.ascii "USE___UUIDOF 0\0"
	.byte	0x1
	.uleb128 0x53
	.ascii "__CRT_INLINE inline\0"
	.byte	0x1
	.uleb128 0x60
	.ascii "__MINGW_INTRIN_INLINE extern __inline__ __attribute__((__always_inline__,__gnu_inline__))\0"
	.byte	0x2
	.uleb128 0x64
	.ascii "__CRT__NO_INLINE\0"
	.byte	0x1
	.uleb128 0x65
	.ascii "__CRT__NO_INLINE 1\0"
	.byte	0x1
	.uleb128 0x69
	.ascii "__UNUSED_PARAM(x) \0"
	.byte	0x1
	.uleb128 0x80
	.ascii "__restrict_arr \0"
	.byte	0x1
	.uleb128 0x8b
	.ascii "__MINGW_ATTRIB_NORETURN __attribute__ ((__noreturn__))\0"
	.byte	0x1
	.uleb128 0x8c
	.ascii "__MINGW_ATTRIB_CONST __attribute__ ((__const__))\0"
	.byte	0x1
	.uleb128 0x96
	.ascii "__MINGW_ATTRIB_MALLOC __attribute__ ((__malloc__))\0"
	.byte	0x1
	.uleb128 0x97
	.ascii "__MINGW_ATTRIB_PURE __attribute__ ((__pure__))\0"
	.byte	0x1
	.uleb128 0xa4
	.ascii "__MINGW_ATTRIB_NONNULL(arg) __attribute__ ((__nonnull__ (arg)))\0"
	.byte	0x1
	.uleb128 0xaa
	.ascii "__MINGW_ATTRIB_UNUSED __attribute__ ((__unused__))\0"
	.byte	0x1
	.uleb128 0xb0
	.ascii "__MINGW_ATTRIB_USED __attribute__ ((__used__))\0"
	.byte	0x1
	.uleb128 0xb1
	.ascii "__MINGW_ATTRIB_DEPRECATED __attribute__ ((__deprecated__))\0"
	.byte	0x1
	.uleb128 0xbb
	.ascii "__MINGW_NOTHROW __attribute__ ((__nothrow__))\0"
	.byte	0x1
	.uleb128 0xc3
	.ascii "__MINGW_ATTRIB_NO_OPTIMIZE __attribute__((__optimize__ (\"0\")))\0"
	.byte	0x1
	.uleb128 0xc9
	.ascii "__MINGW_PRAGMA_PARAM(x) _Pragma (#x)\0"
	.byte	0x1
	.uleb128 0xd0
	.ascii "__MINGW_BROKEN_INTERFACE(x) __MINGW_PRAGMA_PARAM(message (\"Interface \" _CRT_STRINGIZE(x) \" has unverified layout.\"))\0"
	.byte	0x1
	.uleb128 0xd6
	.ascii "__MSVCRT_VERSION__ 0x0700\0"
	.byte	0x1
	.uleb128 0xdb
	.ascii "WINVER 0x0502\0"
	.byte	0x1
	.uleb128 0xdf
	.ascii "_WIN32_WINNT 0x502\0"
	.byte	0x1
	.uleb128 0xe3
	.ascii "_INT128_DEFINED \0"
	.byte	0x1
	.uleb128 0xe5
	.ascii "__int8 char\0"
	.byte	0x1
	.uleb128 0xe6
	.ascii "__int16 short\0"
	.byte	0x1
	.uleb128 0xe7
	.ascii "__int32 int\0"
	.byte	0x1
	.uleb128 0xe8
	.ascii "__int64 long long\0"
	.byte	0x1
	.uleb128 0xf6
	.ascii "__ptr32 \0"
	.byte	0x1
	.uleb128 0xf7
	.ascii "__ptr64 \0"
	.byte	0x1
	.uleb128 0xf9
	.ascii "__unaligned \0"
	.byte	0x1
	.uleb128 0xfc
	.ascii "__w64 \0"
	.byte	0x1
	.uleb128 0xff
	.ascii "__forceinline inline __attribute__((__always_inline__))\0"
	.byte	0x1
	.uleb128 0x10b
	.ascii "__nothrow __declspec(nothrow)\0"
	.byte	0x2
	.uleb128 0x111
	.ascii "_CRT_PACKING\0"
	.byte	0x1
	.uleb128 0x112
	.ascii "_CRT_PACKING 8\0"
	.file 29 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/vadefs.h"
	.byte	0x3
	.uleb128 0x114
	.uleb128 0x1d
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_VADEFS \0"
	.byte	0x3
	.uleb128 0x9
	.uleb128 0x3
	.byte	0x1
	.uleb128 0x298
	.ascii "MINGW_SDK_INIT \0"
	.file 30 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h"
	.byte	0x3
	.uleb128 0x2a0
	.uleb128 0x1e
	.byte	0x1
	.uleb128 0x3
	.ascii "__MINGW_HAS_DXSDK 1\0"
	.byte	0x1
	.uleb128 0x6
	.ascii "MINGW_HAS_DDRAW_H 1\0"
	.byte	0x1
	.uleb128 0x7
	.ascii "MINGW_DDRAW_VERSION 7\0"
	.byte	0x4
	.file 31 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h"
	.byte	0x3
	.uleb128 0x2a1
	.uleb128 0x1f
	.byte	0x1
	.uleb128 0x2
	.ascii "MINGW_DDK_H \0"
	.byte	0x1
	.uleb128 0x4
	.ascii "MINGW_HAS_DDK_H 1\0"
	.byte	0x4
	.byte	0x4
	.byte	0x1
	.uleb128 0x15
	.ascii "__GNUC_VA_LIST \0"
	.byte	0x1
	.uleb128 0x1b
	.ascii "_VA_LIST_DEFINED \0"
	.byte	0x1
	.uleb128 0x26
	.ascii "_ADDRESSOF(v) (&reinterpret_cast<const char &>(v))\0"
	.byte	0x1
	.uleb128 0x2e
	.ascii "_crt_va_start(v,l) __builtin_va_start(v,l)\0"
	.byte	0x1
	.uleb128 0x2f
	.ascii "_crt_va_arg(v,l) __builtin_va_arg(v,l)\0"
	.byte	0x1
	.uleb128 0x30
	.ascii "_crt_va_end(v) __builtin_va_end(v)\0"
	.byte	0x1
	.uleb128 0x31
	.ascii "_crt_va_copy(d,s) __builtin_va_copy(d,s)\0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x11b
	.ascii "__CRT_STRINGIZE(_Value) #_Value\0"
	.byte	0x1
	.uleb128 0x11c
	.ascii "_CRT_STRINGIZE(_Value) __CRT_STRINGIZE(_Value)\0"
	.byte	0x1
	.uleb128 0x120
	.ascii "__CRT_WIDE(_String) L ## _String\0"
	.byte	0x1
	.uleb128 0x121
	.ascii "_CRT_WIDE(_String) __CRT_WIDE(_String)\0"
	.byte	0x1
	.uleb128 0x125
	.ascii "_W64 \0"
	.byte	0x1
	.uleb128 0x12c
	.ascii "_CRTIMP_NOIA64 _CRTIMP\0"
	.byte	0x1
	.uleb128 0x131
	.ascii "_CRTIMP2 _CRTIMP\0"
	.byte	0x1
	.uleb128 0x135
	.ascii "_CRTIMP_ALTERNATIVE _CRTIMP\0"
	.byte	0x1
	.uleb128 0x136
	.ascii "_CRT_ALTERNATIVE_IMPORTED \0"
	.byte	0x1
	.uleb128 0x13a
	.ascii "_MRTIMP2 _CRTIMP\0"
	.byte	0x1
	.uleb128 0x143
	.ascii "_DLL \0"
	.byte	0x1
	.uleb128 0x147
	.ascii "_MT \0"
	.byte	0x1
	.uleb128 0x14b
	.ascii "_MCRTIMP _CRTIMP\0"
	.byte	0x1
	.uleb128 0x14f
	.ascii "_CRTIMP_PURE _CRTIMP\0"
	.byte	0x1
	.uleb128 0x153
	.ascii "_PGLOBAL \0"
	.byte	0x1
	.uleb128 0x157
	.ascii "_AGLOBAL \0"
	.byte	0x1
	.uleb128 0x15a
	.ascii "_SECURECRT_FILL_BUFFER_PATTERN 0xFD\0"
	.byte	0x1
	.uleb128 0x15b
	.ascii "_CRT_DEPRECATE_TEXT(_Text) __declspec(deprecated)\0"
	.byte	0x1
	.uleb128 0x15e
	.ascii "_CRT_INSECURE_DEPRECATE_MEMORY(_Replacement) \0"
	.byte	0x1
	.uleb128 0x162
	.ascii "_CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement) \0"
	.byte	0x1
	.uleb128 0x166
	.ascii "_CRT_MANAGED_HEAP_DEPRECATE \0"
	.byte	0x1
	.uleb128 0x16a
	.ascii "_CRT_OBSOLETE(_NewItem) \0"
	.byte	0x1
	.uleb128 0x170
	.ascii "_SIZE_T_DEFINED \0"
	.byte	0x2
	.uleb128 0x171
	.ascii "size_t\0"
	.byte	0x1
	.uleb128 0x17a
	.ascii "_SSIZE_T_DEFINED \0"
	.byte	0x2
	.uleb128 0x17b
	.ascii "ssize_t\0"
	.byte	0x1
	.uleb128 0x184
	.ascii "_INTPTR_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x186
	.ascii "__intptr_t_defined \0"
	.byte	0x2
	.uleb128 0x187
	.ascii "intptr_t\0"
	.byte	0x1
	.uleb128 0x191
	.ascii "_UINTPTR_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x193
	.ascii "__uintptr_t_defined \0"
	.byte	0x2
	.uleb128 0x194
	.ascii "uintptr_t\0"
	.byte	0x1
	.uleb128 0x19e
	.ascii "_PTRDIFF_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x1a0
	.ascii "_PTRDIFF_T_ \0"
	.byte	0x2
	.uleb128 0x1a1
	.ascii "ptrdiff_t\0"
	.byte	0x1
	.uleb128 0x1ab
	.ascii "_WCHAR_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x1b2
	.ascii "_WCTYPE_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x1b4
	.ascii "_WINT_T \0"
	.byte	0x1
	.uleb128 0x1c8
	.ascii "_ERRCODE_DEFINED \0"
	.byte	0x1
	.uleb128 0x1cd
	.ascii "_TIME32_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x1d2
	.ascii "_TIME64_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x1d7
	.ascii "_TIME_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x1e0
	.ascii "_CONST_RETURN \0"
	.byte	0x1
	.uleb128 0x1e5
	.ascii "UNALIGNED __unaligned\0"
	.byte	0x1
	.uleb128 0x1ef
	.ascii "_CRT_ALIGN(x) __attribute__ ((__aligned__ (x)))\0"
	.byte	0x1
	.uleb128 0x1f6
	.ascii "__CRTDECL __cdecl\0"
	.byte	0x1
	.uleb128 0x1f9
	.ascii "_ARGMAX 100\0"
	.byte	0x1
	.uleb128 0x1fc
	.ascii "_TRUNCATE ((size_t)-1)\0"
	.byte	0x1
	.uleb128 0x200
	.ascii "_CRT_UNUSED(x) (void)x\0"
	.byte	0x2
	.uleb128 0x21d
	.ascii "_CRT_glob\0"
	.byte	0x1
	.uleb128 0x21e
	.ascii "_CRT_glob _dowildcard\0"
	.byte	0x1
	.uleb128 0x22e
	.ascii "__ANONYMOUS_DEFINED \0"
	.byte	0x1
	.uleb128 0x22f
	.ascii "_ANONYMOUS_UNION __MINGW_EXTENSION\0"
	.byte	0x1
	.uleb128 0x230
	.ascii "_ANONYMOUS_STRUCT __MINGW_EXTENSION\0"
	.byte	0x1
	.uleb128 0x232
	.ascii "_UNION_NAME(x) \0"
	.byte	0x1
	.uleb128 0x233
	.ascii "_STRUCT_NAME(x) \0"
	.byte	0x1
	.uleb128 0x247
	.ascii "DUMMYUNIONNAME \0"
	.byte	0x1
	.uleb128 0x248
	.ascii "DUMMYUNIONNAME1 \0"
	.byte	0x1
	.uleb128 0x249
	.ascii "DUMMYUNIONNAME2 \0"
	.byte	0x1
	.uleb128 0x24a
	.ascii "DUMMYUNIONNAME3 \0"
	.byte	0x1
	.uleb128 0x24b
	.ascii "DUMMYUNIONNAME4 \0"
	.byte	0x1
	.uleb128 0x24c
	.ascii "DUMMYUNIONNAME5 \0"
	.byte	0x1
	.uleb128 0x24d
	.ascii "DUMMYUNIONNAME6 \0"
	.byte	0x1
	.uleb128 0x24e
	.ascii "DUMMYUNIONNAME7 \0"
	.byte	0x1
	.uleb128 0x24f
	.ascii "DUMMYUNIONNAME8 \0"
	.byte	0x1
	.uleb128 0x250
	.ascii "DUMMYUNIONNAME9 \0"
	.byte	0x1
	.uleb128 0x25d
	.ascii "DUMMYSTRUCTNAME \0"
	.byte	0x1
	.uleb128 0x25e
	.ascii "DUMMYSTRUCTNAME1 \0"
	.byte	0x1
	.uleb128 0x25f
	.ascii "DUMMYSTRUCTNAME2 \0"
	.byte	0x1
	.uleb128 0x260
	.ascii "DUMMYSTRUCTNAME3 \0"
	.byte	0x1
	.uleb128 0x261
	.ascii "DUMMYSTRUCTNAME4 \0"
	.byte	0x1
	.uleb128 0x262
	.ascii "DUMMYSTRUCTNAME5 \0"
	.byte	0x1
	.uleb128 0x26a
	.ascii "__CRT_UUID_DECL(type,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) extern \"C++\" { template<> inline const GUID &__mingw_uuidof<type>() { return (const IID){l,w1,w2, {b1,b2,b3,b4,b5,b6,b7,b8}}; } template<> inline const GUID &__mingw_uuidof<type*>() { return __mingw_uuidof<type>(); } }\0"
	.byte	0x1
	.uleb128 0x274
	.ascii "__uuidof(type) __mingw_uuidof<__typeof(type)>()\0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x12
	.ascii "_CRTNOALIAS \0"
	.byte	0x1
	.uleb128 0x16
	.ascii "_CRTRESTRICT \0"
	.byte	0x1
	.uleb128 0x1b
	.ascii "_RSIZE_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x8a
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(__ret,__func,__dsttype,__dst) \0"
	.byte	0x1
	.uleb128 0x8b
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(__ret,__func,__dsttype,__dst,__type1,__arg1) \0"
	.byte	0x1
	.uleb128 0x8c
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(__ret,__func,__dsttype,__dst,__type1,__arg1,__type2,__arg2) \0"
	.byte	0x1
	.uleb128 0x8d
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(__ret,__func,__dsttype,__dst,__type1,__arg1,__type2,__arg2,__type3,__arg3) \0"
	.byte	0x1
	.uleb128 0x8e
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(__ret,__func,__dsttype,__dst,__type1,__arg1,__type2,__arg2,__type3,__arg3,__type4,__arg4) \0"
	.byte	0x1
	.uleb128 0x8f
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(__ret,__func,__type0,__arg0,__dsttype,__dst,__type1,__arg1) \0"
	.byte	0x1
	.uleb128 0x90
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(__ret,__func,__type0,__arg0,__dsttype,__dst,__type1,__arg1,__type2,__arg2) \0"
	.byte	0x1
	.uleb128 0x91
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(__ret,__func,__type0,__arg0,__dsttype,__dst,__type1,__arg1,__type2,__arg2,__type3,__arg3) \0"
	.byte	0x1
	.uleb128 0x92
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(__ret,__func,__type1,__arg1,__type2,__arg2,__dsttype,__dst) \0"
	.byte	0x1
	.uleb128 0x93
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(__ret,__func,__vfunc,__dsttype,__dst,__type1,__arg1) \0"
	.byte	0x1
	.uleb128 0x94
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(__ret,__func,__vfunc,__dsttype,__dst,__type1,__arg1,__type2,__arg2) \0"
	.byte	0x1
	.uleb128 0x95
	.ascii "__DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(__ret,__func,__dsttype,__src) \0"
	.byte	0x1
	.uleb128 0xa5
	.ascii "_TAGLC_ID_DEFINED \0"
	.byte	0x1
	.uleb128 0xae
	.ascii "_THREADLOCALEINFO \0"
	.byte	0x1
	.uleb128 0xcb
	.ascii "__crt_typefix(ctype) \0"
	.byte	0x4
	.file 32 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/_mingw_print_push.h"
	.byte	0x3
	.uleb128 0xa
	.uleb128 0x20
	.byte	0x4
	.byte	0x1
	.uleb128 0x13
	.ascii "WCHAR_MIN 0U\0"
	.byte	0x1
	.uleb128 0x14
	.ascii "WCHAR_MAX 0xffffU\0"
	.byte	0x1
	.uleb128 0x18
	.ascii "WEOF (wint_t)(0xFFFF)\0"
	.byte	0x1
	.uleb128 0x27
	.ascii "_FILE_DEFINED \0"
	.byte	0x1
	.uleb128 0x2d
	.ascii "_iob __iob_func()\0"
	.byte	0x1
	.uleb128 0x38
	.ascii "_iob __iob_func()\0"
	.byte	0x1
	.uleb128 0x3c
	.ascii "stdin (&__iob_func()[0])\0"
	.byte	0x1
	.uleb128 0x3d
	.ascii "stdout (&__iob_func()[1])\0"
	.byte	0x1
	.uleb128 0x3e
	.ascii "stderr (&__iob_func()[2])\0"
	.byte	0x1
	.uleb128 0x3f
	.ascii "_STDSTREAM_DEFINED \0"
	.byte	0x1
	.uleb128 0x44
	.ascii "_FSIZE_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x76
	.ascii "_wfinddata_t _wfinddata64i32_t\0"
	.byte	0x1
	.uleb128 0x77
	.ascii "_wfinddatai64_t _wfinddata64_t\0"
	.byte	0x1
	.uleb128 0x79
	.ascii "_wfindfirst _wfindfirst64i32\0"
	.byte	0x1
	.uleb128 0x7a
	.ascii "_wfindnext _wfindnext64i32\0"
	.byte	0x1
	.uleb128 0x7b
	.ascii "_wfindfirsti64 _wfindfirst64\0"
	.byte	0x1
	.uleb128 0x7c
	.ascii "_wfindnexti64 _wfindnext64\0"
	.byte	0x1
	.uleb128 0x7f
	.ascii "_WFINDDATA_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x87
	.ascii "NULL 0LL\0"
	.byte	0x1
	.uleb128 0x92
	.ascii "_WConst_return _CONST_RETURN\0"
	.byte	0x1
	.uleb128 0x95
	.ascii "_CRT_CTYPEDATA_DEFINED \0"
	.byte	0x1
	.uleb128 0x99
	.ascii "__PCTYPE_FUNC __pctype_func()\0"
	.byte	0x1
	.uleb128 0x9d
	.ascii "__pctype_func() (* __MINGW_IMP_SYMBOL(_pctype))\0"
	.byte	0x1
	.uleb128 0xa6
	.ascii "_pctype (* __MINGW_IMP_SYMBOL(_pctype))\0"
	.byte	0x1
	.uleb128 0xad
	.ascii "_CRT_WCTYPEDATA_DEFINED \0"
	.byte	0x1
	.uleb128 0xb4
	.ascii "_wctype (* __MINGW_IMP_SYMBOL(_wctype))\0"
	.byte	0x1
	.uleb128 0xbb
	.ascii "__pwctype_func() (* __MINGW_IMP_SYMBOL(_pwctype))\0"
	.byte	0x1
	.uleb128 0xc3
	.ascii "_pwctype (* __MINGW_IMP_SYMBOL(_pwctype))\0"
	.byte	0x1
	.uleb128 0xca
	.ascii "_UPPER 0x1\0"
	.byte	0x1
	.uleb128 0xcb
	.ascii "_LOWER 0x2\0"
	.byte	0x1
	.uleb128 0xcc
	.ascii "_DIGIT 0x4\0"
	.byte	0x1
	.uleb128 0xcd
	.ascii "_SPACE 0x8\0"
	.byte	0x1
	.uleb128 0xcf
	.ascii "_PUNCT 0x10\0"
	.byte	0x1
	.uleb128 0xd0
	.ascii "_CONTROL 0x20\0"
	.byte	0x1
	.uleb128 0xd1
	.ascii "_BLANK 0x40\0"
	.byte	0x1
	.uleb128 0xd2
	.ascii "_HEX 0x80\0"
	.byte	0x1
	.uleb128 0xd4
	.ascii "_LEADBYTE 0x8000\0"
	.byte	0x1
	.uleb128 0xd5
	.ascii "_ALPHA (0x0100|_UPPER|_LOWER)\0"
	.byte	0x1
	.uleb128 0xd8
	.ascii "_WCTYPE_DEFINED \0"
	.byte	0x1
	.uleb128 0x106
	.ascii "_WDIRECT_DEFINED \0"
	.byte	0x1
	.uleb128 0x111
	.ascii "_WIO_DEFINED \0"
	.byte	0x1
	.uleb128 0x127
	.ascii "_WLOCALE_DEFINED \0"
	.byte	0x1
	.uleb128 0x12c
	.ascii "_WPROCESS_DEFINED \0"
	.byte	0x1
	.uleb128 0x13f
	.ascii "_CRT_WSYSTEM_DEFINED \0"
	.byte	0x2
	.uleb128 0x145
	.ascii "_CRT_WCTYPE_NOINLINE\0"
	.byte	0x1
	.uleb128 0x163
	.ascii "_WCTYPE_INLINE_DEFINED \0"
	.byte	0x1
	.uleb128 0x168
	.ascii "_INO_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x170
	.ascii "_DEV_T_DEFINED \0"
	.file 33 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/_mingw_off_t.h"
	.byte	0x3
	.uleb128 0x177
	.uleb128 0x21
	.byte	0x1
	.uleb128 0x2
	.ascii "_OFF_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x4
	.ascii "_OFF_T_ \0"
	.byte	0x1
	.uleb128 0xc
	.ascii "_OFF64_T_DEFINED \0"
	.byte	0x1
	.uleb128 0x15
	.ascii "_FILE_OFFSET_BITS_SET_OFFT \0"
	.byte	0x4
	.file 34 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/_mingw_stat64.h"
	.byte	0x3
	.uleb128 0x178
	.uleb128 0x22
	.byte	0x1
	.uleb128 0xb
	.ascii "_fstat _fstat64i32\0"
	.byte	0x1
	.uleb128 0xc
	.ascii "_fstati64 _fstat64\0"
	.byte	0x1
	.uleb128 0xd
	.ascii "_stat _stat64i32\0"
	.byte	0x1
	.uleb128 0xe
	.ascii "_stati64 _stat64\0"
	.byte	0x1
	.uleb128 0xf
	.ascii "_wstat _wstat64i32\0"
	.byte	0x1
	.uleb128 0x10
	.ascii "_wstati64 _wstat64\0"
	.byte	0x1
	.uleb128 0x5b
	.ascii "__stat64 _stat64\0"
	.byte	0x1
	.uleb128 0x5c
	.ascii "stat64 _stat64\0"
	.byte	0x1
	.uleb128 0x5d
	.ascii "fstat64 _fstat64\0"
	.byte	0x1
	.uleb128 0x5f
	.ascii "_STAT_DEFINED \0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x17b
	.ascii "_WSTAT_DEFINED \0"
	.byte	0x1
	.uleb128 0x185
	.ascii "_WCONIO_DEFINED \0"
	.byte	0x1
	.uleb128 0x1a3
	.ascii "_WSTDIO_DEFINED \0"
	.byte	0x2
	.uleb128 0x1c4
	.ascii "__mingw_ovr\0"
	.byte	0x1
	.uleb128 0x1c6
	.ascii "__mingw_ovr static __attribute__ ((__unused__)) __inline__ __cdecl\0"
	.byte	0x1
	.uleb128 0x2f0
	.ascii "_CRT_WPERROR_DEFINED \0"
	.byte	0x1
	.uleb128 0x2f5
	.ascii "wpopen _wpopen\0"
	.byte	0x2
	.uleb128 0x2fd
	.ascii "_CRT_GETPUTWCHAR_NOINLINE\0"
	.byte	0x1
	.uleb128 0x300
	.ascii "getwchar() fgetwc(stdin)\0"
	.byte	0x1
	.uleb128 0x301
	.ascii "putwchar(_c) fputwc((_c),stdout)\0"
	.byte	0x1
	.uleb128 0x307
	.ascii "getwc(_stm) fgetwc(_stm)\0"
	.byte	0x1
	.uleb128 0x308
	.ascii "putwc(_c,_stm) fputwc(_c,_stm)\0"
	.byte	0x1
	.uleb128 0x309
	.ascii "_putwc_nolock(_c,_stm) _fputwc_nolock(_c,_stm)\0"
	.byte	0x1
	.uleb128 0x30a
	.ascii "_getwc_nolock(_c) _fgetwc_nolock(_c)\0"
	.byte	0x1
	.uleb128 0x30e
	.ascii "_WSTDLIB_DEFINED \0"
	.byte	0x1
	.uleb128 0x33b
	.ascii "_WSTDLIBP_DEFINED \0"
	.byte	0x1
	.uleb128 0x349
	.ascii "_WSTRING_DEFINED \0"
	.byte	0x1
	.uleb128 0x375
	.ascii "wcswcs wcsstr\0"
	.byte	0x1
	.uleb128 0x382
	.ascii "_TM_DEFINED \0"
	.byte	0x1
	.uleb128 0x391
	.ascii "_WTIME_DEFINED \0"
	.byte	0x1
	.uleb128 0x39c
	.ascii "_INC_WTIME_INL \0"
	.byte	0x1
	.uleb128 0x3e6
	.ascii "__MINGW_MBWC_CONVERT_DEFINED \0"
	.file 35 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/sec_api/wchar_s.h"
	.byte	0x3
	.uleb128 0x414
	.uleb128 0x23
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_WCHAR_S \0"
	.byte	0x3
	.uleb128 0x9
	.uleb128 0x5
	.byte	0x4
	.byte	0x4
	.file 36 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/_mingw_print_pop.h"
	.byte	0x3
	.uleb128 0x416
	.uleb128 0x24
	.byte	0x4
	.byte	0x4
	.byte	0x1
	.uleb128 0x32
	.ascii "_GLIBCXX_CWCHAR 1\0"
	.byte	0x2
	.uleb128 0x46
	.ascii "btowc\0"
	.byte	0x2
	.uleb128 0x47
	.ascii "fgetwc\0"
	.byte	0x2
	.uleb128 0x48
	.ascii "fgetws\0"
	.byte	0x2
	.uleb128 0x49
	.ascii "fputwc\0"
	.byte	0x2
	.uleb128 0x4a
	.ascii "fputws\0"
	.byte	0x2
	.uleb128 0x4b
	.ascii "fwide\0"
	.byte	0x2
	.uleb128 0x4c
	.ascii "fwprintf\0"
	.byte	0x2
	.uleb128 0x4d
	.ascii "fwscanf\0"
	.byte	0x2
	.uleb128 0x4e
	.ascii "getwc\0"
	.byte	0x2
	.uleb128 0x4f
	.ascii "getwchar\0"
	.byte	0x2
	.uleb128 0x50
	.ascii "mbrlen\0"
	.byte	0x2
	.uleb128 0x51
	.ascii "mbrtowc\0"
	.byte	0x2
	.uleb128 0x52
	.ascii "mbsinit\0"
	.byte	0x2
	.uleb128 0x53
	.ascii "mbsrtowcs\0"
	.byte	0x2
	.uleb128 0x54
	.ascii "putwc\0"
	.byte	0x2
	.uleb128 0x55
	.ascii "putwchar\0"
	.byte	0x2
	.uleb128 0x56
	.ascii "swprintf\0"
	.byte	0x2
	.uleb128 0x57
	.ascii "swscanf\0"
	.byte	0x2
	.uleb128 0x58
	.ascii "ungetwc\0"
	.byte	0x2
	.uleb128 0x59
	.ascii "vfwprintf\0"
	.byte	0x2
	.uleb128 0x5b
	.ascii "vfwscanf\0"
	.byte	0x2
	.uleb128 0x5d
	.ascii "vswprintf\0"
	.byte	0x2
	.uleb128 0x5f
	.ascii "vswscanf\0"
	.byte	0x2
	.uleb128 0x61
	.ascii "vwprintf\0"
	.byte	0x2
	.uleb128 0x63
	.ascii "vwscanf\0"
	.byte	0x2
	.uleb128 0x65
	.ascii "wcrtomb\0"
	.byte	0x2
	.uleb128 0x66
	.ascii "wcscat\0"
	.byte	0x2
	.uleb128 0x67
	.ascii "wcschr\0"
	.byte	0x2
	.uleb128 0x68
	.ascii "wcscmp\0"
	.byte	0x2
	.uleb128 0x69
	.ascii "wcscoll\0"
	.byte	0x2
	.uleb128 0x6a
	.ascii "wcscpy\0"
	.byte	0x2
	.uleb128 0x6b
	.ascii "wcscspn\0"
	.byte	0x2
	.uleb128 0x6c
	.ascii "wcsftime\0"
	.byte	0x2
	.uleb128 0x6d
	.ascii "wcslen\0"
	.byte	0x2
	.uleb128 0x6e
	.ascii "wcsncat\0"
	.byte	0x2
	.uleb128 0x6f
	.ascii "wcsncmp\0"
	.byte	0x2
	.uleb128 0x70
	.ascii "wcsncpy\0"
	.byte	0x2
	.uleb128 0x71
	.ascii "wcspbrk\0"
	.byte	0x2
	.uleb128 0x72
	.ascii "wcsrchr\0"
	.byte	0x2
	.uleb128 0x73
	.ascii "wcsrtombs\0"
	.byte	0x2
	.uleb128 0x74
	.ascii "wcsspn\0"
	.byte	0x2
	.uleb128 0x75
	.ascii "wcsstr\0"
	.byte	0x2
	.uleb128 0x76
	.ascii "wcstod\0"
	.byte	0x2
	.uleb128 0x78
	.ascii "wcstof\0"
	.byte	0x2
	.uleb128 0x7a
	.ascii "wcstok\0"
	.byte	0x2
	.uleb128 0x7b
	.ascii "wcstol\0"
	.byte	0x2
	.uleb128 0x7c
	.ascii "wcstoul\0"
	.byte	0x2
	.uleb128 0x7d
	.ascii "wcsxfrm\0"
	.byte	0x2
	.uleb128 0x7e
	.ascii "wctob\0"
	.byte	0x2
	.uleb128 0x7f
	.ascii "wmemchr\0"
	.byte	0x2
	.uleb128 0x80
	.ascii "wmemcmp\0"
	.byte	0x2
	.uleb128 0x81
	.ascii "wmemcpy\0"
	.byte	0x2
	.uleb128 0x82
	.ascii "wmemmove\0"
	.byte	0x2
	.uleb128 0x83
	.ascii "wmemset\0"
	.byte	0x2
	.uleb128 0x84
	.ascii "wprintf\0"
	.byte	0x2
	.uleb128 0x85
	.ascii "wscanf\0"
	.byte	0x2
	.uleb128 0xef
	.ascii "wcstold\0"
	.byte	0x2
	.uleb128 0xf0
	.ascii "wcstoll\0"
	.byte	0x2
	.uleb128 0xf1
	.ascii "wcstoull\0"
	.byte	0x4
	.byte	0x4
	.byte	0x4
	.file 37 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/exception"
	.byte	0x3
	.uleb128 0x28
	.uleb128 0x25
	.byte	0x1
	.uleb128 0x21
	.ascii "__EXCEPTION__ \0"
	.file 38 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/atomic_lockfree_defines.h"
	.byte	0x3
	.uleb128 0x28
	.uleb128 0x26
	.byte	0x1
	.uleb128 0x1f
	.ascii "_GLIBCXX_ATOMIC_LOCK_FREE_H 1\0"
	.byte	0x4
	.byte	0x4
	.byte	0x3
	.uleb128 0x29
	.uleb128 0xf
	.byte	0x1
	.uleb128 0x25
	.ascii "_CHAR_TRAITS_H 1\0"
	.file 39 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/stl_algobase.h"
	.byte	0x3
	.uleb128 0x29
	.uleb128 0x27
	.byte	0x1
	.uleb128 0x3a
	.ascii "_STL_ALGOBASE_H 1\0"
	.file 40 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/functexcept.h"
	.byte	0x3
	.uleb128 0x3d
	.uleb128 0x28
	.byte	0x1
	.uleb128 0x26
	.ascii "_FUNCTEXCEPT_H 1\0"
	.file 41 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/exception_defines.h"
	.byte	0x3
	.uleb128 0x29
	.uleb128 0x29
	.byte	0x1
	.uleb128 0x21
	.ascii "_EXCEPTION_DEFINES_H 1\0"
	.byte	0x1
	.uleb128 0x2a
	.ascii "__try try\0"
	.byte	0x1
	.uleb128 0x2b
	.ascii "__catch(X) catch(X)\0"
	.byte	0x1
	.uleb128 0x2c
	.ascii "__throw_exception_again throw\0"
	.byte	0x4
	.byte	0x4
	.file 42 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/cpp_type_traits.h"
	.byte	0x3
	.uleb128 0x3e
	.uleb128 0x2a
	.byte	0x1
	.uleb128 0x22
	.ascii "_CPP_TYPE_TRAITS_H 1\0"
	.byte	0x4
	.file 43 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/ext/type_traits.h"
	.byte	0x3
	.uleb128 0x3f
	.uleb128 0x2b
	.byte	0x1
	.uleb128 0x1e
	.ascii "_EXT_TYPE_TRAITS 1\0"
	.byte	0x4
	.byte	0x3
	.uleb128 0x40
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x1e
	.ascii "_EXT_NUMERIC_TRAITS 1\0"
	.byte	0x1
	.uleb128 0x2b
	.ascii "__glibcxx_signed(_Tp) ((_Tp)(-1) < 0)\0"
	.byte	0x1
	.uleb128 0x2c
	.ascii "__glibcxx_digits(_Tp) (sizeof(_Tp) * __CHAR_BIT__ - __glibcxx_signed(_Tp))\0"
	.byte	0x1
	.uleb128 0x2f
	.ascii "__glibcxx_min(_Tp) (__glibcxx_signed(_Tp) ? (_Tp)1 << __glibcxx_digits(_Tp) : (_Tp)0)\0"
	.byte	0x1
	.uleb128 0x32
	.ascii "__glibcxx_max(_Tp) (__glibcxx_signed(_Tp) ? (((((_Tp)1 << (__glibcxx_digits(_Tp) - 1)) - 1) << 1) + 1) : ~(_Tp)0)\0"
	.byte	0x2
	.uleb128 0x4f
	.ascii "__glibcxx_signed\0"
	.byte	0x2
	.uleb128 0x50
	.ascii "__glibcxx_digits\0"
	.byte	0x2
	.uleb128 0x51
	.ascii "__glibcxx_min\0"
	.byte	0x2
	.uleb128 0x52
	.ascii "__glibcxx_max\0"
	.byte	0x1
	.uleb128 0x54
	.ascii "__glibcxx_floating(_Tp,_Fval,_Dval,_LDval) (std::__are_same<_Tp, float>::__value ? _Fval : std::__are_same<_Tp, double>::__value ? _Dval : _LDval)\0"
	.byte	0x1
	.uleb128 0x58
	.ascii "__glibcxx_max_digits10(_Tp) (2 + __glibcxx_floating(_Tp, __FLT_MANT_DIG__, __DBL_MANT_DIG__, __LDBL_MANT_DIG__) * 643L / 2136)\0"
	.byte	0x1
	.uleb128 0x5c
	.ascii "__glibcxx_digits10(_Tp) __glibcxx_floating(_Tp, __FLT_DIG__, __DBL_DIG__, __LDBL_DIG__)\0"
	.byte	0x1
	.uleb128 0x5f
	.ascii "__glibcxx_max_exponent10(_Tp) __glibcxx_floating(_Tp, __FLT_MAX_10_EXP__, __DBL_MAX_10_EXP__, __LDBL_MAX_10_EXP__)\0"
	.byte	0x2
	.uleb128 0x85
	.ascii "__glibcxx_floating\0"
	.byte	0x2
	.uleb128 0x86
	.ascii "__glibcxx_max_digits10\0"
	.byte	0x2
	.uleb128 0x87
	.ascii "__glibcxx_digits10\0"
	.byte	0x2
	.uleb128 0x88
	.ascii "__glibcxx_max_exponent10\0"
	.byte	0x4
	.file 44 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/stl_pair.h"
	.byte	0x3
	.uleb128 0x41
	.uleb128 0x2c
	.byte	0x1
	.uleb128 0x3b
	.ascii "_STL_PAIR_H 1\0"
	.file 45 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/move.h"
	.byte	0x3
	.uleb128 0x3d
	.uleb128 0x2d
	.byte	0x1
	.uleb128 0x1f
	.ascii "_MOVE_H 1\0"
	.file 46 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/concept_check.h"
	.byte	0x3
	.uleb128 0x22
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x1f
	.ascii "_CONCEPT_CHECK_H 1\0"
	.byte	0x1
	.uleb128 0x2f
	.ascii "__glibcxx_function_requires(...) \0"
	.byte	0x1
	.uleb128 0x30
	.ascii "__glibcxx_class_requires(_a,_b) \0"
	.byte	0x1
	.uleb128 0x31
	.ascii "__glibcxx_class_requires2(_a,_b,_c) \0"
	.byte	0x1
	.uleb128 0x32
	.ascii "__glibcxx_class_requires3(_a,_b,_c,_d) \0"
	.byte	0x1
	.uleb128 0x33
	.ascii "__glibcxx_class_requires4(_a,_b,_c,_d,_e) \0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x92
	.ascii "_GLIBCXX_MOVE(__val) (__val)\0"
	.byte	0x1
	.uleb128 0x93
	.ascii "_GLIBCXX_FORWARD(_Tp,__val) (__val)\0"
	.byte	0x4
	.byte	0x4
	.file 47 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/stl_iterator_base_types.h"
	.byte	0x3
	.uleb128 0x42
	.uleb128 0x2f
	.byte	0x1
	.uleb128 0x3d
	.ascii "_STL_ITERATOR_BASE_TYPES_H 1\0"
	.byte	0x4
	.file 48 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/stl_iterator_base_funcs.h"
	.byte	0x3
	.uleb128 0x43
	.uleb128 0x30
	.byte	0x1
	.uleb128 0x3d
	.ascii "_STL_ITERATOR_BASE_FUNCS_H 1\0"
	.byte	0x4
	.file 49 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/stl_iterator.h"
	.byte	0x3
	.uleb128 0x44
	.uleb128 0x31
	.byte	0x1
	.uleb128 0x3f
	.ascii "_STL_ITERATOR_H 1\0"
	.byte	0x1
	.uleb128 0x47a
	.ascii "_GLIBCXX_MAKE_MOVE_ITERATOR(_Iter) (_Iter)\0"
	.byte	0x1
	.uleb128 0x47b
	.ascii "_GLIBCXX_MAKE_MOVE_IF_NOEXCEPT_ITERATOR(_Iter) (_Iter)\0"
	.byte	0x4
	.byte	0x3
	.uleb128 0x46
	.uleb128 0xe
	.byte	0x1
	.uleb128 0x1f
	.ascii "_GLIBCXX_DEBUG_MACRO_SWITCH_H 1\0"
	.byte	0x1
	.uleb128 0x3e
	.ascii "_GLIBCXX_DEBUG_ASSERT(_Condition) \0"
	.byte	0x1
	.uleb128 0x3f
	.ascii "_GLIBCXX_DEBUG_PEDASSERT(_Condition) \0"
	.byte	0x1
	.uleb128 0x40
	.ascii "_GLIBCXX_DEBUG_ONLY(_Statement) ;\0"
	.byte	0x1
	.uleb128 0x41
	.ascii "__glibcxx_requires_cond(_Cond,_Msg) \0"
	.byte	0x1
	.uleb128 0x42
	.ascii "__glibcxx_requires_valid_range(_First,_Last) \0"
	.byte	0x1
	.uleb128 0x43
	.ascii "__glibcxx_requires_non_empty_range(_First,_Last) \0"
	.byte	0x1
	.uleb128 0x44
	.ascii "__glibcxx_requires_sorted(_First,_Last) \0"
	.byte	0x1
	.uleb128 0x45
	.ascii "__glibcxx_requires_sorted_pred(_First,_Last,_Pred) \0"
	.byte	0x1
	.uleb128 0x46
	.ascii "__glibcxx_requires_sorted_set(_First1,_Last1,_First2) \0"
	.byte	0x1
	.uleb128 0x47
	.ascii "__glibcxx_requires_sorted_set_pred(_First1,_Last1,_First2,_Pred) \0"
	.byte	0x1
	.uleb128 0x48
	.ascii "__glibcxx_requires_partitioned_lower(_First,_Last,_Value) \0"
	.byte	0x1
	.uleb128 0x49
	.ascii "__glibcxx_requires_partitioned_upper(_First,_Last,_Value) \0"
	.byte	0x1
	.uleb128 0x4a
	.ascii "__glibcxx_requires_partitioned_lower_pred(_First,_Last,_Value,_Pred) \0"
	.byte	0x1
	.uleb128 0x4b
	.ascii "__glibcxx_requires_partitioned_upper_pred(_First,_Last,_Value,_Pred) \0"
	.byte	0x1
	.uleb128 0x4c
	.ascii "__glibcxx_requires_heap(_First,_Last) \0"
	.byte	0x1
	.uleb128 0x4d
	.ascii "__glibcxx_requires_heap_pred(_First,_Last,_Pred) \0"
	.byte	0x1
	.uleb128 0x4e
	.ascii "__glibcxx_requires_nonempty() \0"
	.byte	0x1
	.uleb128 0x4f
	.ascii "__glibcxx_requires_string(_String) \0"
	.byte	0x1
	.uleb128 0x50
	.ascii "__glibcxx_requires_string_len(_String,_Len) \0"
	.byte	0x1
	.uleb128 0x51
	.ascii "__glibcxx_requires_subscript(_N) \0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x1eb
	.ascii "_GLIBCXX_MOVE3(_Tp,_Up,_Vp) std::copy(_Tp, _Up, _Vp)\0"
	.byte	0x1
	.uleb128 0x29a
	.ascii "_GLIBCXX_MOVE_BACKWARD3(_Tp,_Up,_Vp) std::copy_backward(_Tp, _Up, _Vp)\0"
	.byte	0x4
	.byte	0x3
	.uleb128 0x2b
	.uleb128 0x6
	.byte	0x4
	.byte	0x4
	.file 50 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/localefwd.h"
	.byte	0x3
	.uleb128 0x2a
	.uleb128 0x32
	.byte	0x1
	.uleb128 0x25
	.ascii "_LOCALE_FWD_H 1\0"
	.file 51 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/x86_64-w64-mingw32/bits/c++locale.h"
	.byte	0x3
	.uleb128 0x2a
	.uleb128 0x33
	.byte	0x1
	.uleb128 0x26
	.ascii "_GLIBCXX_CXX_LOCALE_H 1\0"
	.byte	0x3
	.uleb128 0x2a
	.uleb128 0x8
	.byte	0x3
	.uleb128 0x2c
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_LOCALE \0"
	.file 52 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/stdio.h"
	.byte	0x3
	.uleb128 0xc
	.uleb128 0x34
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_STDIO \0"
	.byte	0x3
	.uleb128 0xb
	.uleb128 0x20
	.byte	0x4
	.byte	0x1
	.uleb128 0x13
	.ascii "BUFSIZ 512\0"
	.byte	0x1
	.uleb128 0x14
	.ascii "_NFILE _NSTREAM_\0"
	.byte	0x1
	.uleb128 0x15
	.ascii "_NSTREAM_ 512\0"
	.byte	0x1
	.uleb128 0x16
	.ascii "_IOB_ENTRIES 20\0"
	.byte	0x1
	.uleb128 0x17
	.ascii "EOF (-1)\0"
	.byte	0x1
	.uleb128 0x2c
	.ascii "_P_tmpdir \"\\\\\"\0"
	.byte	0x1
	.uleb128 0x2d
	.ascii "_wP_tmpdir L\"\\\\\"\0"
	.byte	0x1
	.uleb128 0x30
	.ascii "L_tmpnam (sizeof(_P_tmpdir) + 12)\0"
	.byte	0x1
	.uleb128 0x37
	.ascii "SEEK_CUR 1\0"
	.byte	0x1
	.uleb128 0x38
	.ascii "SEEK_END 2\0"
	.byte	0x1
	.uleb128 0x39
	.ascii "SEEK_SET 0\0"
	.byte	0x1
	.uleb128 0x3b
	.ascii "STDIN_FILENO 0\0"
	.byte	0x1
	.uleb128 0x3c
	.ascii "STDOUT_FILENO 1\0"
	.byte	0x1
	.uleb128 0x3d
	.ascii "STDERR_FILENO 2\0"
	.byte	0x1
	.uleb128 0x3f
	.ascii "FILENAME_MAX 260\0"
	.byte	0x1
	.uleb128 0x40
	.ascii "FOPEN_MAX 20\0"
	.byte	0x1
	.uleb128 0x41
	.ascii "_SYS_OPEN 20\0"
	.byte	0x1
	.uleb128 0x42
	.ascii "TMP_MAX 32767\0"
	.byte	0x1
	.uleb128 0x55
	.ascii "_iob __iob_func()\0"
	.byte	0x1
	.uleb128 0x63
	.ascii "_FPOS_T_DEFINED \0"
	.byte	0x2
	.uleb128 0x64
	.ascii "_FPOSOFF\0"
	.byte	0x1
	.uleb128 0x68
	.ascii "_FPOSOFF(fp) ((long)(fp))\0"
	.byte	0x1
	.uleb128 0x78
	.ascii "_IOREAD 0x0001\0"
	.byte	0x1
	.uleb128 0x79
	.ascii "_IOWRT 0x0002\0"
	.byte	0x1
	.uleb128 0x7b
	.ascii "_IOFBF 0x0000\0"
	.byte	0x1
	.uleb128 0x7c
	.ascii "_IOLBF 0x0040\0"
	.byte	0x1
	.uleb128 0x7d
	.ascii "_IONBF 0x0004\0"
	.byte	0x1
	.uleb128 0x7f
	.ascii "_IOMYBUF 0x0008\0"
	.byte	0x1
	.uleb128 0x80
	.ascii "_IOEOF 0x0010\0"
	.byte	0x1
	.uleb128 0x81
	.ascii "_IOERR 0x0020\0"
	.byte	0x1
	.uleb128 0x82
	.ascii "_IOSTRG 0x0040\0"
	.byte	0x1
	.uleb128 0x83
	.ascii "_IORW 0x0080\0"
	.byte	0x1
	.uleb128 0x88
	.ascii "_TWO_DIGIT_EXPONENT 0x1\0"
	.byte	0x2
	.uleb128 0xbe
	.ascii "__mingw_ovr\0"
	.byte	0x1
	.uleb128 0xc0
	.ascii "__mingw_ovr inline __cdecl\0"
	.byte	0x2
	.uleb128 0xcb
	.ascii "__MINGW_PRINTF_FORMAT\0"
	.byte	0x2
	.uleb128 0xcc
	.ascii "__MINGW_SCANF_FORMAT\0"
	.byte	0x1
	.uleb128 0xcd
	.ascii "__MINGW_PRINTF_FORMAT gnu_printf\0"
	.byte	0x1
	.uleb128 0xce
	.ascii "__MINGW_SCANF_FORMAT gnu_scanf\0"
	.byte	0x1
	.uleb128 0x171
	.ascii "__builtin_vsnprintf __mingw_vsnprintf\0"
	.byte	0x1
	.uleb128 0x172
	.ascii "__builtin_vsprintf __mingw_vsprintf\0"
	.byte	0x1
	.uleb128 0x1dc
	.ascii "_FILE_OFFSET_BITS_SET_FSEEKO \0"
	.byte	0x1
	.uleb128 0x1e8
	.ascii "_FILE_OFFSET_BITS_SET_FTELLO \0"
	.byte	0x1
	.uleb128 0x1f7
	.ascii "_CRT_PERROR_DEFINED \0"
	.byte	0x1
	.uleb128 0x1fd
	.ascii "popen _popen\0"
	.byte	0x1
	.uleb128 0x1fe
	.ascii "pclose _pclose\0"
	.byte	0x1
	.uleb128 0x205
	.ascii "_CRT_DIRECTORY_DEFINED \0"
	.byte	0x1
	.uleb128 0x217
	.ascii "_set_output_format __mingw_set_output_format\0"
	.byte	0x1
	.uleb128 0x218
	.ascii "_get_output_format __mingw_get_output_format\0"
	.byte	0x1
	.uleb128 0x3bb
	.ascii "_STDIO_DEFINED \0"
	.byte	0x1
	.uleb128 0x3be
	.ascii "_fgetc_nolock(_stream) (--(_stream)->_cnt >= 0 ? 0xff & *(_stream)->_ptr++ : _filbuf(_stream))\0"
	.byte	0x1
	.uleb128 0x3bf
	.ascii "_fputc_nolock(_c,_stream) (--(_stream)->_cnt >= 0 ? 0xff & (*(_stream)->_ptr++ = (char)(_c)) : _flsbuf((_c),(_stream)))\0"
	.byte	0x1
	.uleb128 0x3c0
	.ascii "_getc_nolock(_stream) _fgetc_nolock(_stream)\0"
	.byte	0x1
	.uleb128 0x3c1
	.ascii "_putc_nolock(_c,_stream) _fputc_nolock(_c,_stream)\0"
	.byte	0x1
	.uleb128 0x3c2
	.ascii "_getchar_nolock() _getc_nolock(stdin)\0"
	.byte	0x1
	.uleb128 0x3c3
	.ascii "_putchar_nolock(_c) _putc_nolock((_c),stdout)\0"
	.byte	0x1
	.uleb128 0x3c4
	.ascii "_getwchar_nolock() _getwc_nolock(stdin)\0"
	.byte	0x1
	.uleb128 0x3c5
	.ascii "_putwchar_nolock(_c) _putwc_nolock((_c),stdout)\0"
	.byte	0x1
	.uleb128 0x3d4
	.ascii "P_tmpdir _P_tmpdir\0"
	.byte	0x1
	.uleb128 0x3d5
	.ascii "SYS_OPEN _SYS_OPEN\0"
	.file 53 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/sec_api/stdio_s.h"
	.byte	0x3
	.uleb128 0x412
	.uleb128 0x35
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_STDIO_S \0"
	.byte	0x3
	.uleb128 0x9
	.uleb128 0x34
	.byte	0x4
	.byte	0x4
	.byte	0x3
	.uleb128 0x414
	.uleb128 0x24
	.byte	0x4
	.byte	0x4
	.byte	0x1
	.uleb128 0x21
	.ascii "LC_ALL 0\0"
	.byte	0x1
	.uleb128 0x22
	.ascii "LC_COLLATE 1\0"
	.byte	0x1
	.uleb128 0x23
	.ascii "LC_CTYPE 2\0"
	.byte	0x1
	.uleb128 0x24
	.ascii "LC_MONETARY 3\0"
	.byte	0x1
	.uleb128 0x25
	.ascii "LC_NUMERIC 4\0"
	.byte	0x1
	.uleb128 0x26
	.ascii "LC_TIME 5\0"
	.byte	0x1
	.uleb128 0x28
	.ascii "LC_MIN LC_ALL\0"
	.byte	0x1
	.uleb128 0x29
	.ascii "LC_MAX LC_TIME\0"
	.byte	0x1
	.uleb128 0x2c
	.ascii "_LCONV_DEFINED \0"
	.byte	0x1
	.uleb128 0x44
	.ascii "_CONFIG_LOCALE_SWT \0"
	.byte	0x1
	.uleb128 0x46
	.ascii "_ENABLE_PER_THREAD_LOCALE 0x1\0"
	.byte	0x1
	.uleb128 0x47
	.ascii "_DISABLE_PER_THREAD_LOCALE 0x2\0"
	.byte	0x1
	.uleb128 0x48
	.ascii "_ENABLE_PER_THREAD_LOCALE_GLOBAL 0x10\0"
	.byte	0x1
	.uleb128 0x49
	.ascii "_DISABLE_PER_THREAD_LOCALE_GLOBAL 0x20\0"
	.byte	0x1
	.uleb128 0x4a
	.ascii "_ENABLE_PER_THREAD_LOCALE_NEW 0x100\0"
	.byte	0x1
	.uleb128 0x4b
	.ascii "_DISABLE_PER_THREAD_LOCALE_NEW 0x200\0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x2f
	.ascii "_GLIBCXX_CLOCALE 1\0"
	.byte	0x2
	.uleb128 0x32
	.ascii "setlocale\0"
	.byte	0x2
	.uleb128 0x33
	.ascii "localeconv\0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x2c
	.ascii "_GLIBCXX_NUM_CATEGORIES 0\0"
	.byte	0x4
	.file 54 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/cctype"
	.byte	0x3
	.uleb128 0x2c
	.uleb128 0x36
	.file 55 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/ctype.h"
	.byte	0x3
	.uleb128 0x2c
	.uleb128 0x37
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_CTYPE \0"
	.byte	0x1
	.uleb128 0x54
	.ascii "_UPPER 0x1\0"
	.byte	0x1
	.uleb128 0x55
	.ascii "_LOWER 0x2\0"
	.byte	0x1
	.uleb128 0x56
	.ascii "_DIGIT 0x4\0"
	.byte	0x1
	.uleb128 0x57
	.ascii "_SPACE 0x8\0"
	.byte	0x1
	.uleb128 0x59
	.ascii "_PUNCT 0x10\0"
	.byte	0x1
	.uleb128 0x5a
	.ascii "_CONTROL 0x20\0"
	.byte	0x1
	.uleb128 0x5b
	.ascii "_BLANK 0x40\0"
	.byte	0x1
	.uleb128 0x5c
	.ascii "_HEX 0x80\0"
	.byte	0x1
	.uleb128 0x5e
	.ascii "_LEADBYTE 0x8000\0"
	.byte	0x1
	.uleb128 0x5f
	.ascii "_ALPHA (0x0100|_UPPER|_LOWER)\0"
	.byte	0x1
	.uleb128 0x62
	.ascii "_CTYPE_DEFINED \0"
	.byte	0x1
	.uleb128 0xbc
	.ascii "MB_CUR_MAX ___mb_cur_max_func()\0"
	.byte	0x1
	.uleb128 0xc3
	.ascii "__mb_cur_max (* __MINGW_IMP_SYMBOL(__mb_cur_max))\0"
	.byte	0x1
	.uleb128 0xc6
	.ascii "___mb_cur_max_func() (__mb_cur_max)\0"
	.byte	0x1
	.uleb128 0xc9
	.ascii "__chvalidchk(a,b) (__PCTYPE_FUNC[(a)] & (b))\0"
	.byte	0x1
	.uleb128 0xca
	.ascii "_chvalidchk_l(_Char,_Flag,_Locale) (!_Locale ? __chvalidchk(_Char,_Flag) : ((_locale_t)_Locale)->locinfo->pctype[_Char] & (_Flag))\0"
	.byte	0x1
	.uleb128 0xcb
	.ascii "_ischartype_l(_Char,_Flag,_Locale) (((_Locale)!=NULL && (((_locale_t)(_Locale))->locinfo->mb_cur_max) > 1) ? _isctype_l(_Char,(_Flag),_Locale) : _chvalidchk_l(_Char,_Flag,_Locale))\0"
	.byte	0x1
	.uleb128 0xcc
	.ascii "_isalpha_l(_Char,_Locale) _ischartype_l(_Char,_ALPHA,_Locale)\0"
	.byte	0x1
	.uleb128 0xcd
	.ascii "_isupper_l(_Char,_Locale) _ischartype_l(_Char,_UPPER,_Locale)\0"
	.byte	0x1
	.uleb128 0xce
	.ascii "_islower_l(_Char,_Locale) _ischartype_l(_Char,_LOWER,_Locale)\0"
	.byte	0x1
	.uleb128 0xcf
	.ascii "_isdigit_l(_Char,_Locale) _ischartype_l(_Char,_DIGIT,_Locale)\0"
	.byte	0x1
	.uleb128 0xd0
	.ascii "_isxdigit_l(_Char,_Locale) _ischartype_l(_Char,_HEX,_Locale)\0"
	.byte	0x1
	.uleb128 0xd1
	.ascii "_isspace_l(_Char,_Locale) _ischartype_l(_Char,_SPACE,_Locale)\0"
	.byte	0x1
	.uleb128 0xd2
	.ascii "_ispunct_l(_Char,_Locale) _ischartype_l(_Char,_PUNCT,_Locale)\0"
	.byte	0x1
	.uleb128 0xd3
	.ascii "_isalnum_l(_Char,_Locale) _ischartype_l(_Char,_ALPHA|_DIGIT,_Locale)\0"
	.byte	0x1
	.uleb128 0xd4
	.ascii "_isprint_l(_Char,_Locale) _ischartype_l(_Char,_BLANK|_PUNCT|_ALPHA|_DIGIT,_Locale)\0"
	.byte	0x1
	.uleb128 0xd5
	.ascii "_isgraph_l(_Char,_Locale) _ischartype_l(_Char,_PUNCT|_ALPHA|_DIGIT,_Locale)\0"
	.byte	0x1
	.uleb128 0xd6
	.ascii "_iscntrl_l(_Char,_Locale) _ischartype_l(_Char,_CONTROL,_Locale)\0"
	.byte	0x1
	.uleb128 0xd7
	.ascii "_tolower(_Char) ((_Char)-'A'+'a')\0"
	.byte	0x1
	.uleb128 0xd8
	.ascii "_toupper(_Char) ((_Char)-'a'+'A')\0"
	.byte	0x1
	.uleb128 0xd9
	.ascii "__isascii(_Char) ((unsigned)(_Char) < 0x80)\0"
	.byte	0x1
	.uleb128 0xda
	.ascii "__toascii(_Char) ((_Char) & 0x7f)\0"
	.byte	0x1
	.uleb128 0xfb
	.ascii "__iscsymf(_c) (isalpha(_c) || ((_c)=='_'))\0"
	.byte	0x1
	.uleb128 0xfc
	.ascii "__iscsym(_c) (isalnum(_c) || ((_c)=='_'))\0"
	.byte	0x1
	.uleb128 0xfd
	.ascii "__iswcsymf(_c) (iswalpha(_c) || ((_c)=='_'))\0"
	.byte	0x1
	.uleb128 0xfe
	.ascii "__iswcsym(_c) (iswalnum(_c) || ((_c)=='_'))\0"
	.byte	0x1
	.uleb128 0xff
	.ascii "_iscsymf_l(_c,_p) (_isalpha_l(_c,_p) || ((_c)=='_'))\0"
	.byte	0x1
	.uleb128 0x100
	.ascii "_iscsym_l(_c,_p) (_isalnum_l(_c,_p) || ((_c)=='_'))\0"
	.byte	0x1
	.uleb128 0x101
	.ascii "_iswcsymf_l(_c,_p) (_iswalpha_l(_c,_p) || ((_c)=='_'))\0"
	.byte	0x1
	.uleb128 0x102
	.ascii "_iswcsym_l(_c,_p) (_iswalnum_l(_c,_p) || ((_c)=='_'))\0"
	.byte	0x1
	.uleb128 0x10c
	.ascii "isascii __isascii\0"
	.byte	0x1
	.uleb128 0x10d
	.ascii "toascii __toascii\0"
	.byte	0x1
	.uleb128 0x10e
	.ascii "iscsymf __iscsymf\0"
	.byte	0x1
	.uleb128 0x10f
	.ascii "iscsym __iscsym\0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x2f
	.ascii "_GLIBCXX_CCTYPE 1\0"
	.byte	0x2
	.uleb128 0x32
	.ascii "isalnum\0"
	.byte	0x2
	.uleb128 0x33
	.ascii "isalpha\0"
	.byte	0x2
	.uleb128 0x34
	.ascii "iscntrl\0"
	.byte	0x2
	.uleb128 0x35
	.ascii "isdigit\0"
	.byte	0x2
	.uleb128 0x36
	.ascii "isgraph\0"
	.byte	0x2
	.uleb128 0x37
	.ascii "islower\0"
	.byte	0x2
	.uleb128 0x38
	.ascii "isprint\0"
	.byte	0x2
	.uleb128 0x39
	.ascii "ispunct\0"
	.byte	0x2
	.uleb128 0x3a
	.ascii "isspace\0"
	.byte	0x2
	.uleb128 0x3b
	.ascii "isupper\0"
	.byte	0x2
	.uleb128 0x3c
	.ascii "isxdigit\0"
	.byte	0x2
	.uleb128 0x3d
	.ascii "tolower\0"
	.byte	0x2
	.uleb128 0x3e
	.ascii "toupper\0"
	.byte	0x4
	.byte	0x4
	.byte	0x3
	.uleb128 0x2b
	.uleb128 0x9
	.byte	0x1
	.uleb128 0x25
	.ascii "_IOS_BASE_H 1\0"
	.file 56 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/ext/atomicity.h"
	.byte	0x3
	.uleb128 0x29
	.uleb128 0x38
	.byte	0x1
	.uleb128 0x1f
	.ascii "_GLIBCXX_ATOMICITY_H 1\0"
	.file 57 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/x86_64-w64-mingw32/bits/gthr.h"
	.byte	0x3
	.uleb128 0x22
	.uleb128 0x39
	.byte	0x1
	.uleb128 0x1c
	.ascii "_GLIBCXX_GCC_GTHR_H \0"
	.byte	0x1
	.uleb128 0x93
	.ascii "_GLIBCXX_GTHREAD_USE_WEAK 1\0"
	.byte	0x3
	.uleb128 0x96
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x1e
	.ascii "GCC_GTHR_WIN32_H \0"
	.byte	0x1
	.uleb128 0x22
	.ascii "CONST_CAST2(TOTYPE,FROMTYPE,X) ((__extension__(union {FROMTYPE _q; TOTYPE _nq;})(X))._nq)\0"
	.byte	0x1
	.uleb128 0x44
	.ascii "__GTHREADS 1\0"
	.file 58 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/../../../../x86_64-w64-mingw32/include/errno.h"
	.byte	0x3
	.uleb128 0x46
	.uleb128 0x3a
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_ERRNO \0"
	.byte	0x1
	.uleb128 0x10
	.ascii "_CRT_ERRNO_DEFINED \0"
	.byte	0x1
	.uleb128 0x12
	.ascii "errno (*_errno())\0"
	.byte	0x1
	.uleb128 0x18
	.ascii "EPERM 1\0"
	.byte	0x1
	.uleb128 0x19
	.ascii "ENOENT 2\0"
	.byte	0x1
	.uleb128 0x1a
	.ascii "ENOFILE ENOENT\0"
	.byte	0x1
	.uleb128 0x1b
	.ascii "ESRCH 3\0"
	.byte	0x1
	.uleb128 0x1c
	.ascii "EINTR 4\0"
	.byte	0x1
	.uleb128 0x1d
	.ascii "EIO 5\0"
	.byte	0x1
	.uleb128 0x1e
	.ascii "ENXIO 6\0"
	.byte	0x1
	.uleb128 0x1f
	.ascii "E2BIG 7\0"
	.byte	0x1
	.uleb128 0x20
	.ascii "ENOEXEC 8\0"
	.byte	0x1
	.uleb128 0x21
	.ascii "EBADF 9\0"
	.byte	0x1
	.uleb128 0x22
	.ascii "ECHILD 10\0"
	.byte	0x1
	.uleb128 0x23
	.ascii "EAGAIN 11\0"
	.byte	0x1
	.uleb128 0x24
	.ascii "ENOMEM 12\0"
	.byte	0x1
	.uleb128 0x25
	.ascii "EACCES 13\0"
	.byte	0x1
	.uleb128 0x26
	.ascii "EFAULT 14\0"
	.byte	0x1
	.uleb128 0x27
	.ascii "EBUSY 16\0"
	.byte	0x1
	.uleb128 0x28
	.ascii "EEXIST 17\0"
	.byte	0x1
	.uleb128 0x29
	.ascii "EXDEV 18\0"
	.byte	0x1
	.uleb128 0x2a
	.ascii "ENODEV 19\0"
	.byte	0x1
	.uleb128 0x2b
	.ascii "ENOTDIR 20\0"
	.byte	0x1
	.uleb128 0x2c
	.ascii "EISDIR 21\0"
	.byte	0x1
	.uleb128 0x2d
	.ascii "ENFILE 23\0"
	.byte	0x1
	.uleb128 0x2e
	.ascii "EMFILE 24\0"
	.byte	0x1
	.uleb128 0x2f
	.ascii "ENOTTY 25\0"
	.byte	0x1
	.uleb128 0x30
	.ascii "EFBIG 27\0"
	.byte	0x1
	.uleb128 0x31
	.ascii "ENOSPC 28\0"
	.byte	0x1
	.uleb128 0x32
	.ascii "ESPIPE 29\0"
	.byte	0x1
	.uleb128 0x33
	.ascii "EROFS 30\0"
	.byte	0x1
	.uleb128 0x34
	.ascii "EMLINK 31\0"
	.byte	0x1
	.uleb128 0x35
	.ascii "EPIPE 32\0"
	.byte	0x1
	.uleb128 0x36
	.ascii "EDOM 33\0"
	.byte	0x1
	.uleb128 0x37
	.ascii "EDEADLK 36\0"
	.byte	0x1
	.uleb128 0x38
	.ascii "ENAMETOOLONG 38\0"
	.byte	0x1
	.uleb128 0x39
	.ascii "ENOLCK 39\0"
	.byte	0x1
	.uleb128 0x3a
	.ascii "ENOSYS 40\0"
	.byte	0x1
	.uleb128 0x3b
	.ascii "ENOTEMPTY 41\0"
	.byte	0x1
	.uleb128 0x3f
	.ascii "_SECURECRT_ERRCODE_VALUES_DEFINED \0"
	.byte	0x1
	.uleb128 0x40
	.ascii "EINVAL 22\0"
	.byte	0x1
	.uleb128 0x41
	.ascii "ERANGE 34\0"
	.byte	0x1
	.uleb128 0x42
	.ascii "EILSEQ 42\0"
	.byte	0x1
	.uleb128 0x43
	.ascii "STRUNCATE 80\0"
	.byte	0x1
	.uleb128 0x47
	.ascii "EDEADLOCK EDEADLK\0"
	.byte	0x1
	.uleb128 0x4c
	.ascii "ENOTSUP 129\0"
	.byte	0x1
	.uleb128 0x52
	.ascii "EAFNOSUPPORT 102\0"
	.byte	0x1
	.uleb128 0x56
	.ascii "EADDRINUSE 100\0"
	.byte	0x1
	.uleb128 0x5a
	.ascii "EADDRNOTAVAIL 101\0"
	.byte	0x1
	.uleb128 0x5e
	.ascii "EISCONN 113\0"
	.byte	0x1
	.uleb128 0x62
	.ascii "ENOBUFS 119\0"
	.byte	0x1
	.uleb128 0x66
	.ascii "ECONNABORTED 106\0"
	.byte	0x1
	.uleb128 0x6a
	.ascii "EALREADY 103\0"
	.byte	0x1
	.uleb128 0x6e
	.ascii "ECONNREFUSED 107\0"
	.byte	0x1
	.uleb128 0x72
	.ascii "ECONNRESET 108\0"
	.byte	0x1
	.uleb128 0x76
	.ascii "EDESTADDRREQ 109\0"
	.byte	0x1
	.uleb128 0x7a
	.ascii "EHOSTUNREACH 110\0"
	.byte	0x1
	.uleb128 0x7e
	.ascii "EMSGSIZE 115\0"
	.byte	0x1
	.uleb128 0x82
	.ascii "ENETDOWN 116\0"
	.byte	0x1
	.uleb128 0x86
	.ascii "ENETRESET 117\0"
	.byte	0x1
	.uleb128 0x8a
	.ascii "ENETUNREACH 118\0"
	.byte	0x1
	.uleb128 0x8e
	.ascii "ENOPROTOOPT 123\0"
	.byte	0x1
	.uleb128 0x92
	.ascii "ENOTSOCK 128\0"
	.byte	0x1
	.uleb128 0x96
	.ascii "ENOTCONN 126\0"
	.byte	0x1
	.uleb128 0x9a
	.ascii "ECANCELED 105\0"
	.byte	0x1
	.uleb128 0x9e
	.ascii "EINPROGRESS 112\0"
	.byte	0x1
	.uleb128 0xa2
	.ascii "EOPNOTSUPP 130\0"
	.byte	0x1
	.uleb128 0xa6
	.ascii "EWOULDBLOCK 140\0"
	.byte	0x1
	.uleb128 0xaa
	.ascii "EOWNERDEAD 133\0"
	.byte	0x1
	.uleb128 0xae
	.ascii "EPROTO 134\0"
	.byte	0x1
	.uleb128 0xb2
	.ascii "EPROTONOSUPPORT 135\0"
	.byte	0x1
	.uleb128 0xb7
	.ascii "ETIMEDOUT 138\0"
	.byte	0x1
	.uleb128 0xbb
	.ascii "ELOOP 114\0"
	.byte	0x1
	.uleb128 0xbf
	.ascii "EPROTOTYPE 136\0"
	.byte	0x1
	.uleb128 0xc3
	.ascii "EOVERFLOW 132\0"
	.byte	0x4
	.byte	0x3
	.uleb128 0x48
	.uleb128 0x3
	.byte	0x4
	.byte	0x1
	.uleb128 0x4c
	.ascii "___GLIBCXX_UNUSED_PARAM(x) x\0"
	.byte	0x1
	.uleb128 0x16a
	.ascii "__GTHREAD_ONCE_INIT {0, -1}\0"
	.byte	0x1
	.uleb128 0x16b
	.ascii "__GTHREAD_MUTEX_INIT_FUNCTION __gthread_mutex_init_function\0"
	.byte	0x1
	.uleb128 0x16c
	.ascii "__GTHREAD_MUTEX_INIT_DEFAULT {-1, 0}\0"
	.byte	0x1
	.uleb128 0x16d
	.ascii "__GTHREAD_RECURSIVE_MUTEX_INIT_FUNCTION __gthread_recursive_mutex_init_function\0"
	.byte	0x1
	.uleb128 0x16f
	.ascii "__GTHREAD_RECURSIVE_MUTEX_INIT_DEFAULT {-1, 0, 0, 0}\0"
	.byte	0x1
	.uleb128 0x172
	.ascii "MINGW32_SUPPORTS_MT_EH 1\0"
	.byte	0x1
	.uleb128 0x18e
	.ascii "__GTHR_W32_InterlockedCompareExchange InterlockedCompareExchange\0"
	.byte	0x4
	.byte	0x4
	.byte	0x3
	.uleb128 0x23
	.uleb128 0x10
	.byte	0x1
	.uleb128 0x1e
	.ascii "_GLIBCXX_ATOMIC_WORD_H 1\0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x6e
	.ascii "_GLIBCXX_READ_MEM_BARRIER __asm __volatile (\"\":::\"memory\")\0"
	.byte	0x1
	.uleb128 0x71
	.ascii "_GLIBCXX_WRITE_MEM_BARRIER __asm __volatile (\"\":::\"memory\")\0"
	.byte	0x4
	.file 59 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/locale_classes.h"
	.byte	0x3
	.uleb128 0x2b
	.uleb128 0x3b
	.byte	0x1
	.uleb128 0x25
	.ascii "_LOCALE_CLASSES_H 1\0"
	.file 60 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/string"
	.byte	0x3
	.uleb128 0x2a
	.uleb128 0x3c
	.byte	0x1
	.uleb128 0x24
	.ascii "_GLIBCXX_STRING 1\0"
	.file 61 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/allocator.h"
	.byte	0x3
	.uleb128 0x2b
	.uleb128 0x3d
	.byte	0x1
	.uleb128 0x2d
	.ascii "_ALLOCATOR_H 1\0"
	.file 62 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/x86_64-w64-mingw32/bits/c++allocator.h"
	.byte	0x3
	.uleb128 0x30
	.uleb128 0x3e
	.byte	0x1
	.uleb128 0x1f
	.ascii "_GLIBCXX_CXX_ALLOCATOR_H 1\0"
	.byte	0x3
	.uleb128 0x22
	.uleb128 0xd
	.byte	0x1
	.uleb128 0x1f
	.ascii "_NEW_ALLOCATOR_H 1\0"
	.file 63 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/new"
	.byte	0x3
	.uleb128 0x22
	.uleb128 0x3f
	.byte	0x1
	.uleb128 0x25
	.ascii "_NEW \0"
	.byte	0x4
	.byte	0x4
	.byte	0x1
	.uleb128 0x23
	.ascii "__glibcxx_base_allocator __gnu_cxx::new_allocator\0"
	.byte	0x4
	.byte	0x2
	.uleb128 0x95
	.ascii "__glibcxx_base_allocator\0"
	.byte	0x4
	.file 64 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/ostream_insert.h"
	.byte	0x3
	.uleb128 0x2e
	.uleb128 0x40
	.byte	0x1
	.uleb128 0x1f
	.ascii "_OSTREAM_INSERT_H 1\0"
	.file 65 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/cxxabi_forced.h"
	.byte	0x3
	.uleb128 0x24
	.uleb128 0x41
	.byte	0x1
	.uleb128 0x20
	.ascii "_CXXABI_FORCED_H 1\0"
	.byte	0x4
	.byte	0x4
	.file 66 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/stl_function.h"
	.byte	0x3
	.uleb128 0x32
	.uleb128 0x42
	.byte	0x1
	.uleb128 0x3b
	.ascii "_STL_FUNCTION_H 1\0"
	.file 67 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/backward/binders.h"
	.byte	0x3
	.uleb128 0x2e5
	.uleb128 0x43
	.byte	0x1
	.uleb128 0x3a
	.ascii "_BACKWARD_BINDERS_H 1\0"
	.byte	0x4
	.byte	0x4
	.file 68 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/range_access.h"
	.byte	0x3
	.uleb128 0x35
	.uleb128 0x44
	.byte	0x1
	.uleb128 0x1f
	.ascii "_GLIBCXX_RANGE_ACCESS_H 1\0"
	.byte	0x4
	.file 69 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/basic_string.h"
	.byte	0x3
	.uleb128 0x36
	.uleb128 0x45
	.byte	0x1
	.uleb128 0x25
	.ascii "_BASIC_STRING_H 1\0"
	.byte	0x4
	.file 70 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/basic_string.tcc"
	.byte	0x3
	.uleb128 0x37
	.uleb128 0x46
	.byte	0x1
	.uleb128 0x28
	.ascii "_BASIC_STRING_TCC 1\0"
	.byte	0x4
	.byte	0x4
	.file 71 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/locale_classes.tcc"
	.byte	0x3
	.uleb128 0x315
	.uleb128 0x47
	.byte	0x1
	.uleb128 0x23
	.ascii "_LOCALE_CLASSES_TCC 1\0"
	.byte	0x4
	.byte	0x4
	.byte	0x4
	.file 72 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/streambuf"
	.byte	0x3
	.uleb128 0x2c
	.uleb128 0x48
	.byte	0x1
	.uleb128 0x23
	.ascii "_GLIBXX_STREAMBUF 1\0"
	.file 73 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/streambuf.tcc"
	.byte	0x3
	.uleb128 0x33a
	.uleb128 0x49
	.byte	0x1
	.uleb128 0x24
	.ascii "_STREAMBUF_TCC 1\0"
	.byte	0x4
	.byte	0x4
	.file 74 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/basic_ios.h"
	.byte	0x3
	.uleb128 0x2d
	.uleb128 0x4a
	.byte	0x1
	.uleb128 0x21
	.ascii "_BASIC_IOS_H 1\0"
	.file 75 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/locale_facets.h"
	.byte	0x3
	.uleb128 0x27
	.uleb128 0x4b
	.byte	0x1
	.uleb128 0x25
	.ascii "_LOCALE_FACETS_H 1\0"
	.byte	0x3
	.uleb128 0x29
	.uleb128 0xa
	.byte	0x3
	.uleb128 0x34
	.uleb128 0x12
	.byte	0x1
	.uleb128 0x7
	.ascii "_INC_WCTYPE \0"
	.byte	0x1
	.uleb128 0x5b
	.ascii "_UPPER 0x1\0"
	.byte	0x1
	.uleb128 0x5c
	.ascii "_LOWER 0x2\0"
	.byte	0x1
	.uleb128 0x5d
	.ascii "_DIGIT 0x4\0"
	.byte	0x1
	.uleb128 0x5e
	.ascii "_SPACE 0x8\0"
	.byte	0x1
	.uleb128 0x60
	.ascii "_PUNCT 0x10\0"
	.byte	0x1
	.uleb128 0x61
	.ascii "_CONTROL 0x20\0"
	.byte	0x1
	.uleb128 0x62
	.ascii "_BLANK 0x40\0"
	.byte	0x1
	.uleb128 0x63
	.ascii "_HEX 0x80\0"
	.byte	0x1
	.uleb128 0x65
	.ascii "_LEADBYTE 0x8000\0"
	.byte	0x1
	.uleb128 0x66
	.ascii "_ALPHA (0x0100|_UPPER|_LOWER)\0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x38
	.ascii "_GLIBCXX_CWCTYPE 1\0"
	.byte	0x2
	.uleb128 0x3b
	.ascii "iswalnum\0"
	.byte	0x2
	.uleb128 0x3c
	.ascii "iswalpha\0"
	.byte	0x2
	.uleb128 0x3e
	.ascii "iswblank\0"
	.byte	0x2
	.uleb128 0x40
	.ascii "iswcntrl\0"
	.byte	0x2
	.uleb128 0x41
	.ascii "iswctype\0"
	.byte	0x2
	.uleb128 0x42
	.ascii "iswdigit\0"
	.byte	0x2
	.uleb128 0x43
	.ascii "iswgraph\0"
	.byte	0x2
	.uleb128 0x44
	.ascii "iswlower\0"
	.byte	0x2
	.uleb128 0x45
	.ascii "iswprint\0"
	.byte	0x2
	.uleb128 0x46
	.ascii "iswpunct\0"
	.byte	0x2
	.uleb128 0x47
	.ascii "iswspace\0"
	.byte	0x2
	.uleb128 0x48
	.ascii "iswupper\0"
	.byte	0x2
	.uleb128 0x49
	.ascii "iswxdigit\0"
	.byte	0x2
	.uleb128 0x4a
	.ascii "towctrans\0"
	.byte	0x2
	.uleb128 0x4b
	.ascii "towlower\0"
	.byte	0x2
	.uleb128 0x4c
	.ascii "towupper\0"
	.byte	0x2
	.uleb128 0x4d
	.ascii "wctrans\0"
	.byte	0x2
	.uleb128 0x4e
	.ascii "wctype\0"
	.byte	0x4
	.byte	0x3
	.uleb128 0x2a
	.uleb128 0x36
	.byte	0x4
	.file 76 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/x86_64-w64-mingw32/bits/ctype_base.h"
	.byte	0x3
	.uleb128 0x2b
	.uleb128 0x4c
	.byte	0x4
	.file 77 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/streambuf_iterator.h"
	.byte	0x3
	.uleb128 0x32
	.uleb128 0x4d
	.byte	0x1
	.uleb128 0x21
	.ascii "_STREAMBUF_ITERATOR_H 1\0"
	.byte	0x4
	.byte	0x1
	.uleb128 0x3a
	.ascii "_GLIBCXX_NUM_FACETS 28\0"
	.file 78 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/x86_64-w64-mingw32/bits/ctype_inline.h"
	.byte	0x3
	.uleb128 0x5e9
	.uleb128 0x4e
	.byte	0x4
	.file 79 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/locale_facets.tcc"
	.byte	0x3
	.uleb128 0xa2f
	.uleb128 0x4f
	.byte	0x1
	.uleb128 0x21
	.ascii "_LOCALE_FACETS_TCC 1\0"
	.byte	0x4
	.byte	0x4
	.file 80 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/basic_ios.tcc"
	.byte	0x3
	.uleb128 0x1d9
	.uleb128 0x50
	.byte	0x1
	.uleb128 0x20
	.ascii "_BASIC_IOS_TCC 1\0"
	.byte	0x4
	.byte	0x4
	.byte	0x4
	.file 81 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/ostream.tcc"
	.byte	0x3
	.uleb128 0x25f
	.uleb128 0x51
	.byte	0x1
	.uleb128 0x25
	.ascii "_OSTREAM_TCC 1\0"
	.byte	0x4
	.byte	0x4
	.file 82 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/istream"
	.byte	0x3
	.uleb128 0x29
	.uleb128 0x52
	.byte	0x1
	.uleb128 0x24
	.ascii "_GLIBCXX_ISTREAM 1\0"
	.file 83 "d:/program files (x86)/dev-cpp/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/4.7.1/include/c++/bits/istream.tcc"
	.byte	0x3
	.uleb128 0x369
	.uleb128 0x53
	.byte	0x1
	.uleb128 0x25
	.ascii "_ISTREAM_TCC 1\0"
	.byte	0x4
	.byte	0x4
	.byte	0x4
	.byte	0x4
	.byte	0
	.section	.debug_line,"dr"
.Ldebug_line0:
	.section	.debug_str,"dr"
.LASF0:
	.ascii "__min\0"
.LASF1:
	.ascii "__max\0"
.LASF3:
	.ascii "__digits\0"
.LASF4:
	.ascii "_Value\0"
.LASF2:
	.ascii "__is_signed\0"
	.def	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	2;	.type	32;	.endef
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
