#region License
/* 
 * Copyright (C) 1999-2016 John K�ll�n.
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
using System.Configuration;
using System.Text;

namespace Reko.Core.Configuration
{
    public interface Architecture
    {
        string Name { get ; }

        string Description { get; }

        string TypeName { get; }
    }

    public class ArchitectureElement : Architecture
    {
        /// <summary>
        /// Short abbreviation for the architecture.
        /// </summary>
        public string Name { get; set; }

        /// <summary>
        /// Human-readable description of the processor architecture
        /// </summary>
        public string Description { get; set; }

        /// <summary>
        /// .NET type name for the architecture.
        /// </summary>
        public string TypeName { get; set; }
    }
}
