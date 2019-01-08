// { dg-options "-g -O0" }
// { dg-do run }
// { dg-skip-if "" { *-*-* } { "-D_GLIBCXX_PROFILE" } }

// Copyright (C) 2014-2019 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// Test that current printers still support old definitions of types.

namespace std
{
  // Old representation of std::optional, before GCC 9
  template<typename T>
    struct _Optional_payload
    {
      _Optional_payload() : _M_empty(), _M_engaged(false) { }
      struct _Empty_byte { };
      union {
	_Empty_byte _M_empty;
	T _M_payload;
      };
      bool _M_engaged;
    };

  template<typename T>
    struct _Optional_base
    {
      _Optional_payload<T> _M_payload;
    };

  template<typename T>
    struct optional : _Optional_base<T>
    {
      optional() { }

      optional(T t)
      {
	this->_M_payload._M_payload = t;
	this->_M_payload._M_engaged = true;
      }
    };
} // namespace std

int
main()
{
  using std::optional;

  optional<int> o;
// { dg-final { note-test o {std::optional<int> [no contained value]} } }
  optional<bool> ob{false};
// { dg-final { note-test ob {std::optional<bool> = {[contained value] = false}} } }
  optional<int> oi{5};
// { dg-final { note-test oi {std::optional<int> = {[contained value] = 5}} } }
  optional<void*> op{nullptr};
// { dg-final { note-test op {std::optional<void *> = {[contained value] = 0x0}} } }

  __builtin_puts("");
  return 0;			// Mark SPOT
}

// { dg-final { gdb-test SPOT } }
