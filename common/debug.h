/*
Copyright 2011 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DEBUG_H
#define DEBUG_H 1

#include <stdbool.h>
#include "print.h"


#ifndef NO_DEBUG

#define debug(s)                  do { if (debug_enable) print(s); } while (0)
#define debugln(s)                do { if (debug_enable) println(s); } while (0)
#define debug_S(s)                do { if (debug_enable) print_S(s); } while (0)
#define debug_P(s)                do { if (debug_enable) print_P(s); } while (0)
#define debug_msg(s)              do { \
    if (debug_enable) { \
        print(__FILE__); print(" at "); print_dec(__LINE__); print(" in "); print(": "); print(s); \
    } \
} while (0)
#define debug_dec(data)           do { if (debug_enable) print_dec(data); } while (0)
#define debug_decs(data)          do { if (debug_enable) print_decs(data); } while (0)
#define debug_hex4(data)          do { if (debug_enable) print_hex4(data); } while (0)
#define debug_hex8(data)          do { if (debug_enable) print_hex8(data); } while (0)
#define debug_hex16(data)         do { if (debug_enable) print_hex16(data); } while (0)
#define debug_hex32(data)         do { if (debug_enable) print_hex32(data); } while (0)
#define debug_bin8(data)          do { if (debug_enable) print_bin8(data); } while (0)
#define debug_bin16(data)         do { if (debug_enable) print_bin16(data); } while (0)
#define debug_bin32(data)         do { if (debug_enable) print_bin32(data); } while (0)
#define debug_bin_reverse8(data)  do { if (debug_enable) print_bin_reverse8(data); } while (0)
#define debug_bin_reverse16(data) do { if (debug_enable) print_bin_reverse16(data); } while (0)
#define debug_bin_reverse32(data) do { if (debug_enable) print_bin_reverse32(data); } while (0)
#define debug_hex(data)           debug_hex8(data)
#define debug_bin(data)           debug_bin8(data)
#define debug_bin_reverse(data)   debug_bin8(data)

#else

#define debug(s)
#define debugln(s)
#define debug_S(s)
#define debug_P(s)
#define debug_msg(s)
#define debug_dec(data)
#define debug_decs(data)
#define debug_hex4(data)
#define debug_hex8(data)
#define debug_hex16(data)
#define debug_hex32(data)
#define debug_bin8(data)
#define debug_bin16(data)
#define debug_bin32(data)
#define debug_bin_reverse8(data)
#define debug_bin_reverse16(data)
#define debug_bin_reverse32(data)
#define debug_hex(data)
#define debug_bin(data)
#define debug_bin_reverse(data)

#endif


#ifdef __cplusplus
extern "C" {
#endif

extern bool debug_enable;
extern bool debug_matrix;
extern bool debug_keyboard;
extern bool debug_mouse;

#ifdef __cplusplus
}
#endif

#endif
