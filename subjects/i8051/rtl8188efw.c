// rtl8188efw.c
// Generated by decompiling rtl8188efw.bin
// using Reko decompiler version 0.9.0.0.

#include "rtl8188efw.h"

// 0000: void fn0000(Register byte R1)
void fn0000(byte R1)
{
	globals->b001D = 0x00;
	byte A_n = *(byte *) 0x80F0;
	byte R1_n;
	fn4EF3();
	globals->b0157 = 0x05;
	if ((*(bcu8 *) 33002 >> 0x02 & 0x01) == 0x00)
		fn4AC0();
}

