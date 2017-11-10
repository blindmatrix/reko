﻿#region License
/* 
 * Copyright (C) 1999-2017 John Källén.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using System;
using System.Collections.Generic;
using Reko.Arch.M68k;
using Reko.Core;
using Reko.Core.Types;

namespace Reko.Environments.MacOS
{
    /// <summary>
    /// Implements the "pascal" calling convention for MacOS according to 
    /// "MacOS RT Architectures", ch 11. section "Pascal Calling Conventions".
    /// </summary>
    /// <remarks>
    /// When following Pascal calling conventions, the caller passes space for
    /// the return value before pushing any parameters. The caller then passes
    /// parameters from left to right.
    /// </remarks>
    public class StackBasedConvention : CallingConvention
    {
        private M68kArchitecture arch;

        public StackBasedConvention(M68kArchitecture arch)
        {
            this.arch = arch;
        }

        public void Generate(ICallingConventionEmitter ccr, DataType dtRet, DataType dtThis, List<DataType> dtParams)
        {
            ccr.LowLevelDetails(2, 4);
            for (int i = dtParams.Count - 1; i >= 0; --i)
            {
                ccr.StackParam(dtParams[i]);
            }
            ccr.ReverseParameters();
            ccr.CalleeCleanup();
            if (dtRet != null && !(dtRet is VoidType))
            {
                ccr.StackReturn(dtRet);
            }
        }
    }
}