/*
  IdLib Bit Scan
  Copyright (C) 2024 Michael Heilmann. All rights reserved.

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#if !defined(IDLIB_BIT_SCAN_COUNT_LEADING_ZEROES_H_INCLUDED)
#define IDLIB_BIT_SCAN_COUNT_LEADING_ZEROES_H_INCLUDED

#include "idlib/bit_scan/configure.h"
#include <inttypes.h>

/// @brief Get the number of leading zeroes of an uint8_t value.
/// @param x The value.
/// @return The number of leading zeroes of the uint8_t value.
size_t
idlib_count_leading_zeroes_u8
	(
		uint8_t x
	);

/// @brief Get the number of leading zeroes of an uint16_t value.
/// @param x The value.
/// @return The number of leading zeroes of the uint16_t value.
size_t
idlib_count_leading_zeroes_u16
	(
		uint16_t x
	);

/// @brief Get the number of leading zeroes of an uint32_t value.
/// @param x The value.
/// @return The number of leading zeroes of the uint32_t value.
size_t
idlib_count_leading_zeroes_u32
	(
		uint32_t x
	);

/// @brief Get the number of leading zeroes of an uint64_t value.
/// @param x The value.
/// @return The number of leading zeroes of the uint64_t value.
size_t
idlib_count_leading_zeroes_u64
	(
		uint64_t x
	);

/// @brief Get the number of leading zeroes of an size_t value.
/// @param x The value.
/// @return The number of leading zeroes of the size_t value.
size_t
idlib_count_leading_zeroes_sz
	(
		size_t x
	);

#endif // IDLIB_BIT_SCAN_COUNT_LEADING_ZEROES_H_INCLUDED
