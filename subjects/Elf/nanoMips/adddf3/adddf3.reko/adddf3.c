// adddf3.c
// Generated by decompiling adddf3.o
// using Reko decompiler version 0.9.0.0.

#include "adddf3.h"

// 08048000: void __adddf3(Register Eq_n r4, Register Eq_n r5, Register uint32 r6, Register Eq_n r7)
void __adddf3(Eq_n r4, Eq_n r5, uint32 r6, Eq_n r7)
{
	Eq_n r10_n = __ext(r5, 0x00, 0x14);
	Eq_n r9_n = __ext(r7, 0x00, 0x14);
	Eq_n r13_n = __ext(r5, 0x04, 11);
	Eq_n r10_n = __ext(r7, 0x04, 11);
	Eq_n r8_n = r4 >> 0x1D | r10_n << 0x03;
	Eq_n r3_n = r7 >> 0x1F;
	Eq_n r5_n = r5 >> 0x1F;
	Eq_n r12_n = r4 << 0x03;
	Eq_n r9_n = r6 >> 0x1D | r9_n << 0x03;
	Eq_n r11_n = r13_n - r10_n;
	if (r5 >> 0x1F == r7 >> 0x1F)
	{
		r3_n = r11_n;
		if (r11_n > 0x00)
		{
			Eq_n r7_n;
			if (r10_n == 0x00)
			{
				if ((r9_n | r6 << 0x03) == 0x00)
					goto l08048052;
				r7_n = (word32) r11_n.u0 - 0x01;
				if (r11_n == ~0x00)
				{
					Eq_n r6_n = (r4 << 0x03) + (r6 << 0x03);
					r10_n.u0 = 0x01;
					r8_n = r8_n + r9_n + (word32) (r6_n <u r4 << 0x03);
					r12_n = r6_n;
					goto l080480CC;
				}
				if (r11_n == 0x07FF)
				{
l080480FE:
					if ((r8_n | r4 << 0x03) == 0x00)
					{
						r8_n.u0 = 0x00;
						r12_n.u0 = 0x00;
						r10_n = r11_n;
						goto l08048064;
					}
					goto l080482D2;
				}
l0804812C:
				uint32 r7_n;
				ui32 r6_n;
				if (r7_n < 0x39)
				{
					if (r7_n < 0x20)
					{
						word32 r10_n = 0x20 - r7_n;
						r7_n = r9_n >> r7_n;
						r6_n = (word32) (r6 << 0x03 << r10_n > 0x00) | (r9_n << r10_n | (r6 << 0x03) >> r7_n);
						goto l08048156;
					}
					uint32 r4_n = r9_n >> r7_n;
					ui32 r10_n = 0x00;
					if (r7_n != 0x20)
						r10_n = r9_n << -r7_n;
					r6_n = (word32) ((r10_n | r6 << 0x03) > 0x00) | r4_n;
				}
				else
					r6_n = (word32) ((r9_n | r6 << 0x03) > 0x00);
				r7_n = 0x00;
l08048156:
				Eq_n r6_n = r6_n + (r4 << 0x03);
				r10_n = r13_n;
				r8_n = (word32) (r6_n < r4 << 0x03) + ((word32) r8_n + r7_n);
				r12_n = r6_n;
				goto l080480CC;
			}
			if (r13_n != 0x07FF)
			{
				r9_n |= 0x08000000;
				r7_n = r11_n;
				goto l0804812C;
			}
l08048112:
			if ((r8_n | r4 << 0x03) != 0x00)
				goto l080482D2;
			r8_n.u0 = 0x00;
			r12_n.u0 = 0x00;
			r10_n = r13_n;
l08048064:
			if (!__bit(r8_n, 0x17))
			{
				r10_n = (word32) r10_n.u0 + 0x01;
				r8_n = __ins(r8_n, 0x00, 0x07, 0x01);
				if (r10_n == 0x07FF)
				{
					r8_n.u0 = 0x00;
					r12_n.u0 = 0x00;
				}
			}
			ui32 r7_n = r12_n >> 0x03 | r8_n << 0x1D;
			Eq_n r8_n = r8_n >> 0x03;
			if (r10_n == 0x07FF)
			{
				if ((r7_n | r8_n) != 0x00)
					r8_n |= 0x00800000;
				else
					r8_n.u0 = 0x00;
			}
			__ins(__ins(__ins(0x00, r8_n, 0x00, 0x01), r10_n, 0x04, 0x01), r5_n, 0x0F, 0x01);
			return;
		}
		if (r11_n != 0x00)
		{
			uint32 r8_n;
			int32 r11_n;
			if (r13_n == 0x00)
			{
				if ((r8_n | r4 << 0x03) == 0x00)
				{
					if (r10_n != 0x07FF)
						goto l080481AE;
					goto l080481A4;
				}
				r11_n = ~r11_n;
				if (r11_n == 0x00)
				{
					r12_n = (r4 << 0x03) + (r6 << 0x03);
					r8_n = r8_n + r9_n;
l080481C2:
					r8_n = r8_n + (word32) (r12_n < r6 << 0x03);
l080480CC:
					if (!__bit(r8_n, 0x17))
					{
						r10_n = (word32) r10_n.u0 + 0x01;
						if (r10_n != 0x07FF)
						{
							Eq_n r6_n = __ins(r8_n, 0x00, 0x07, 0x01);
							r12_n = r6_n << 0x1F | (r12_n >> 0x01 | (word32) r12_n.u0 + 0x01);
							r8_n = r6_n >> 0x01;
							goto l0804827A;
						}
						goto l08048060;
					}
					goto l0804827A;
				}
				if (r10_n == 0x07FF)
				{
l080481A4:
					r12_n = r9_n | r6 << 0x03;
					r8_n.u0 = 0x00;
					if (r12_n == 0x00)
						goto l08048064;
l080481AE:
					r8_n = r9_n;
					r12_n = r6 << 0x03;
					goto l0804827A;
				}
			}
			else
			{
				if (r10_n == 0x07FF)
					goto l080481A4;
				r11_n = -r11_n;
				r8_n |= 0x08000000;
			}
			uint32 r11_n;
			ui32 r12_n;
			if (r11_n < 0x39)
			{
				if (r11_n < 0x20)
				{
					word32 r7_n = 0x20 - r11_n;
					r11_n = r8_n >> r11_n;
					r12_n = r8_n << r7_n | (r4 << 0x03) >> r11_n | (word32) ((r4 << 0x03) << r7_n > 0x00);
					goto l080481F8;
				}
				uint32 r4_n = r8_n >> r11_n;
				ui32 r7_n = 0x00;
				if (r11_n != 0x20)
					r7_n = r8_n << -r11_n;
				r12_n = r4_n | (word32) ((r7_n | r4 << 0x03) > 0x00);
			}
			else
				r12_n = (word32) ((r8_n | r4 << 0x03) > 0x00);
			r11_n = 0x00;
l080481F8:
			r12_n = r12_n + (r6 << 0x03);
			r8_n = (word32) r9_n.u1 + r11_n;
			goto l080481C2;
		}
		r10_n = (word32) r13_n.u0 + 0x01;
		if (r13_n >= 0x07FE)
		{
			if (r13_n == ~0x07FD)
			{
l08048060:
				r8_n.u0 = 0x00;
				r12_n.u0 = 0x00;
				goto l08048064;
			}
			uint32 r6_n = (r4 << 0x03) + (r6 << 0x03);
			word32 r2_n = r8_n + r9_n + (word32) (r6_n <u r4 << 0x03);
			r12_n = r2_n << 0x1F | r6_n >> 0x01;
			r8_n = r2_n >> 0x01;
l0804827A:
			if (r12_n != 0x07 && r12_n != 11)
			{
				Eq_n r6_n = (word32) r12_n.u0 + 0x04;
				r12_n = r6_n;
				r8_n = (word32) r8_n.u0 + (word32) (r6_n < r12_n);
			}
			goto l08048064;
		}
		ui32 r7_n = r8_n | r4 << 0x03;
		if (r13_n == 0x00)
		{
			if (r7_n != 0x00)
			{
				r10_n.u0 = 0x00;
				if ((r9_n | r6 << 0x03) != 0x00)
				{
					Eq_n r6_n = (r4 << 0x03) + (r6 << 0x03);
					r12_n = r6_n;
					r8_n = r8_n + r9_n + (word32) (r6_n <u r4 << 0x03);
					if (!__bit(r8_n, 0x17))
					{
						r8_n = __ins(r8_n, 0x00, 0x07, 0x01);
						r10_n.u0 = 0x01;
					}
				}
				goto l0804827A;
			}
			r8_n = r9_n;
			r12_n = r6 << 0x03;
l080484D2:
			r10_n.u0 = 0x00;
			goto l0804827A;
		}
		if (r7_n != 0x00)
		{
			r10_n.u0 = 0x07FF;
			if ((r9_n | r6 << 0x03) != 0x00)
			{
				uint32 r7_n;
				uint32 r10_n = r8_n >> 0x03;
				if (__bit(r9_n >> 0x03 | r8_n >> 0x03, 0x13))
				{
					r7_n = r8_n << 0x1D | __ext(r4, 0x00, 0x1D);
					r3_n = r5 >> 0x1F;
				}
				else
				{
					r10_n = 0x000FFFFF;
					r7_n = ~0x00;
				}
				r8_n = r7_n >> 0x1D | r10_n << 0x03;
				r12_n = r7_n << 0x03;
				goto l080482D0;
			}
			goto l0804827A;
		}
		r8_n = r9_n;
		r12_n = r6 << 0x03;
l080482D2:
		r10_n.u0 = 0x07FF;
		goto l0804827A;
	}
	Eq_n r11_n;
	Eq_n r4_n;
	Eq_n r14_n = r11_n;
	if (r11_n > 0x00)
	{
		Eq_n r7_n;
		if (r10_n == 0x00)
		{
			if ((r9_n | r6 << 0x03) == 0x00)
			{
l08048052:
				r10_n = r11_n;
				if (r11_n == 0x07FF && (r8_n | r4 << 0x03) == 0x00)
					goto l08048060;
				goto l0804827A;
			}
			r7_n = (word32) r11_n.u0 - 0x01;
			if (r11_n == ~0x00)
			{
				Eq_n r6_n = (r4 << 0x03) - (r6 << 0x03);
				r10_n.u0 = 0x01;
				r8_n = r8_n - r9_n - (word32) (r4 << 0x03 < r6_n);
				r12_n = r6_n;
				goto l08048332;
			}
			if (r11_n == 0x07FF)
				goto l080480FE;
		}
		else
		{
			if (r13_n == 0x07FF)
				goto l08048112;
			r9_n |= 0x08000000;
			r7_n = r11_n;
		}
		uint32 r7_n;
		ui32 r6_n;
		if (r7_n < 0x39)
		{
			if (r7_n < 0x20)
			{
				word32 r10_n = 0x20 - r7_n;
				r7_n = r9_n >> r7_n;
				r6_n = (word32) (r6 << 0x03 << r10_n > 0x00) | (r9_n << r10_n | (r6 << 0x03) >> r7_n);
				goto l0804836E;
			}
			uint32 r4_n = r9_n >> r7_n;
			ui32 r10_n = 0x00;
			if (r7_n != 0x20)
				r10_n = r9_n << -r7_n;
			r6_n = (word32) ((r10_n | r6 << 0x03) > 0x00) | r4_n;
		}
		else
			r6_n = (word32) ((r9_n | r6 << 0x03) > 0x00);
		r7_n = 0x00;
l0804836E:
		Eq_n r6_n = (r4 << 0x03) - r6_n;
		r10_n = r13_n;
		r8_n = r8_n - r7_n - (word32) (r4 << 0x03 < r6_n);
		r12_n = r6_n;
		goto l08048332;
	}
	if (r11_n != 0x00)
	{
		uint32 r8_n;
		int32 r11_n;
		if (r13_n == 0x00)
		{
			if ((r8_n | r4 << 0x03) == 0x00)
			{
				if (r10_n != 0x07FF)
					goto l080483D8;
				goto l080483D0;
			}
			r11_n = ~r11_n;
			if (r11_n == 0x00)
			{
				r12_n = (r6 << 0x03) - (r4 << 0x03);
				r8_n = r9_n - r8_n;
				goto l080483EE;
			}
			if (r10_n == 0x07FF)
			{
l080483D0:
				r12_n = r9_n | r6 << 0x03;
				if (r12_n == 0x00)
				{
					r8_n.u0 = 0x00;
					r5_n = r7 >> 0x1F;
					goto l08048064;
				}
				goto l080483D8;
			}
		}
		else
		{
			if (r10_n == 0x07FF)
				goto l080483D0;
			r11_n = -r11_n;
			r8_n |= 0x08000000;
		}
		uint32 r11_n;
		ui32 r12_n;
		if (r11_n < 0x39)
		{
			if (r11_n < 0x20)
			{
				word32 r7_n = 0x20 - r11_n;
				r11_n = r8_n >> r11_n;
				r12_n = r8_n << r7_n | (r4 << 0x03) >> r11_n | (word32) ((r4 << 0x03) << r7_n > 0x00);
				goto l08048426;
			}
			uint32 r5_n = r8_n >> r11_n;
			ui32 r7_n = 0x00;
			if (r11_n != 0x20)
				r7_n = r8_n << -r11_n;
			r12_n = r5_n | (word32) ((r7_n | r4 << 0x03) > 0x00);
		}
		else
			r12_n = (word32) ((r8_n | r4 << 0x03) > 0x00);
		r11_n = 0x00;
l08048426:
		r12_n = (r6 << 0x03) - r12_n;
		r8_n = r9_n - r11_n;
l080483EE:
		r5_n = r7 >> 0x1F;
		r8_n = r8_n - (word32) (r6 << 0x03 < r12_n);
l08048332:
		if (__bit(r8_n, 0x17))
			goto l0804827A;
		r4_n = __ext(r8_n, 0x00, 0x17);
		r11_n = r12_n;
		r13_n = r10_n;
l08048548:
		int32 r7_n = __clz(r4_n);
		if (r4_n == 0x00)
			r7_n = __clz(r11_n) + 0x20;
		Eq_n r8_n;
		Eq_n r10_n = r7_n + ~0x07;
		if (r10_n < 0x20)
		{
			r12_n = r11_n << r10_n;
			r8_n = r11_n >> -r10_n | r4_n << r10_n;
		}
		else
		{
			r12_n.u0 = 0x00;
			r8_n = r11_n << r7_n + ~0x27;
		}
		if (r10_n < r13_n)
		{
			r10_n = r13_n - r10_n;
			r8_n = __ins(r8_n, 0x00, 0x07, 0x01);
			goto l0804827A;
		}
		int32 r10_n = r10_n - r13_n;
		if (r10_n < ~0x1E)
		{
			word32 r7_n = 0x20 - (r10_n + 0x01);
			r12_n = r8_n << r7_n | r12_n >> r10_n + 0x01 | (word32) (r12_n << r7_n > 0x00);
			r8_n = r8_n >> r10_n + 0x01;
		}
		else
		{
			ui32 r7_n = 0x00;
			uint32 r10_n = r8_n >> r10_n + ~0x1E;
			if (r10_n != ~0x1E)
				r7_n = r8_n << -(r10_n + 0x01);
			r12_n = r10_n | (word32) ((r12_n | r7_n) > 0x00);
			r8_n.u0 = 0x00;
		}
		goto l080484D2;
	}
	if (r13_n < 0x07FE)
	{
		r10_n = r8_n | r4 << 0x03;
		ui32 r7_n = r9_n | r6 << 0x03;
		if (r13_n != 0x00)
		{
			if (r10_n == 0x00)
			{
				if (r7_n == 0x00)
				{
					r5_n.u0 = 0x00;
					r8_n.u0 = 0x007FFFFF;
					r12_n.u0 = ~0x07;
					r10_n.u0 = 0x07FF;
					goto l08048064;
				}
				r8_n = r9_n;
				r12_n = r6 << 0x03;
l080482D0:
				r5_n = r3_n;
				goto l080482D2;
			}
			r10_n.u0 = 0x07FF;
			if (r7_n == 0x00)
				goto l0804827A;
			uint32 r4_n;
			uint32 r7_n = r8_n >> 0x03;
			if (__bit(r9_n >> 0x03 | r8_n >> 0x03, 0x13))
			{
				r4_n = r8_n << 0x1D | __ext(r4, 0x00, 0x1D);
				r14_n = r5 >> 0x1F;
			}
			else
			{
				r7_n = 0x000FFFFF;
				r4_n = ~0x00;
			}
			r8_n = r4_n >> 0x1D | r7_n << 0x03;
			r12_n = r4_n << 0x03;
			r5_n = r14_n;
			goto l080482D2;
		}
		if (r10_n == 0x00)
		{
			if (r7_n != 0x00)
			{
l080483D8:
				r8_n = r9_n;
				r12_n = r6 << 0x03;
				goto l080484C2;
			}
			r12_n.u0 = 0x00;
l08048492:
			r8_n.u0 = 0x00;
			r10_n.u0 = 0x00;
			r5_n.u0 = 0x00;
			goto l08048064;
		}
		if (r7_n == 0x00)
			goto l080484D2;
		Eq_n r4_n = (r4 << 0x03) - (r6 << 0x03);
		Eq_n r7_n = r8_n - r9_n - (word32) (r4 << 0x03 < r4_n);
		if (!__bit(r7_n, 0x17))
		{
			r12_n = (r6 << 0x03) - (r4 << 0x03);
			r10_n.u0 = 0x00;
			r8_n = r9_n - r8_n - (word32) (r6 << 0x03 < r12_n);
l080484C2:
			r5_n = r7 >> 0x1F;
			goto l0804827A;
		}
		r12_n = r4_n | r7_n;
		if (r12_n != 0x00)
		{
			r8_n = r7_n;
			r12_n = r4_n;
			goto l080484D2;
		}
	}
	else
	{
		r11_n = (r4 << 0x03) - (r6 << 0x03);
		r4_n = r8_n - r9_n - (word32) (r4 << 0x03 < r11_n);
		if (!__bit(r4_n, 0x17))
		{
			r11_n = (r6 << 0x03) - (r4 << 0x03);
			r5_n = r7 >> 0x1F;
			r4_n = r9_n - r8_n - (word32) (r6 << 0x03 < r11_n);
			goto l08048548;
		}
		r12_n = r11_n | r4_n;
		if (r12_n != 0x00)
			goto l08048548;
	}
	goto l08048492;
}

