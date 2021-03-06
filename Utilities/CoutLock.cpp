/************************************************************************************
    Copyright (C) 2005-2008 Assefaw H. Gebremedhin, Arijit Tarafdar, Duc Nguyen,
    Alex Pothen

    This file is part of ColPack.

    ColPack is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    ColPack is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with ColPack.  If not, see <http://www.gnu.org/licenses/>.
************************************************************************************/

#include "Definitions.h"

#include "CoutLock.h"

namespace ColPack
{
#ifdef _OPENMP
	omp_lock_t CoutLock::coutLock;
#endif

	int CoutLock::unset()
	{
#ifdef _OPENMP
		omp_unset_lock(&CoutLock::coutLock);
#endif
		return 0;
	}
	int CoutLock::set()
	{
#ifdef _OPENMP
		omp_set_lock(&CoutLock::coutLock);
#endif
		return 0;
	}
}
