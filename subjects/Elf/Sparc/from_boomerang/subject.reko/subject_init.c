// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version 0.9.0.0.

#include "subject_init.h"

// 00010C80: void _init(Register word32 o0, Register word32 o1, Register word32 o2, Register word32 o3, Register word32 o4, Register word32 o5, Register (ptr32 Eq_n) o7)
void _init(word32 o0, word32 o1, word32 o2, word32 o3, word32 o4, word32 o5, struct Eq_n * o7)
{
	fn00010C90(o7, o0, o1, o2, o3, o4, o5, fp, o7);
}

// 00010C90: void fn00010C90(Register (ptr32 Eq_n) o7, Register word32 i0, Register word32 i1, Register word32 i2, Register word32 i3, Register word32 i4, Register word32 i5, Register ptr32 i6, Register (ptr32 Eq_n) i7)
void fn00010C90(struct Eq_n * o7, word32 i0, word32 i1, word32 i2, word32 i3, word32 i4, word32 i5, ptr32 i6, struct Eq_n * i7)
{
	if (*((char *) (o7 + o7->dw0008 / 0x0C) - 0x08) == 0x00)
		return;
	fn81C7E008();
}
