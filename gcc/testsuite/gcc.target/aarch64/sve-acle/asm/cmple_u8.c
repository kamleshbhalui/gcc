/* { dg-do compile } */
/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sve_acle.h"

/*
** cmple_u8_tied:
** (
**	cmphs	p0\.b, p0/z, z1\.b, z0\.b
** |
**	cmpls	p0\.b, p0/z, z0\.b, z1\.b
** )
**	ret
*/
TEST_COMPARE_Z (cmple_u8_tied, svuint8_t,
		p0 = svcmple_u8 (p0, z0, z1),
		p0 = svcmple (p0, z0, z1))

/*
** cmple_u8_untied:
** (
**	cmphs	p0\.b, p1/z, z1\.b, z0\.b
** |
**	cmpls	p0\.b, p1/z, z0\.b, z1\.b
** )
**	ret
*/
TEST_COMPARE_Z (cmple_u8_untied, svuint8_t,
		p0 = svcmple_u8 (p1, z0, z1),
		p0 = svcmple (p1, z0, z1))

/*
** cmple_x0_u8:
**	mov	(z[0-9]+\.d), x0
**	cmpls	p0\.b, p1/z, z0\.b, \1
**	ret
*/
TEST_COMPARE_ZS (cmple_x0_u8, svuint8_t, uint64_t,
		 p0 = svcmple_n_u8 (p1, z0, x0),
		 p0 = svcmple (p1, z0, x0))

/*
** cmple_d4_u8:
**	mov	(z[0-9]+\.d), d4
**	cmpls	p0\.b, p1/z, z0\.b, \1
**	ret
*/
TEST_COMPARE_ZS (cmple_d4_u8, svuint8_t, uint64_t,
		 p0 = svcmple_n_u8 (p1, z0, d4),
		 p0 = svcmple (p1, z0, d4))

/*
** cmple_0_u8:
**	cmpls	p0\.b, p1/z, z0\.b, #0
**	ret
*/
TEST_COMPARE_ZS (cmple_0_u8, svuint8_t, uint64_t,
		 p0 = svcmple_n_u8 (p1, z0, 0),
		 p0 = svcmple (p1, z0, 0))

/*
** cmple_1_u8:
**	cmpls	p0\.b, p1/z, z0\.b, #1
**	ret
*/
TEST_COMPARE_ZS (cmple_1_u8, svuint8_t, uint64_t,
		 p0 = svcmple_n_u8 (p1, z0, 1),
		 p0 = svcmple (p1, z0, 1))

/*
** cmple_15_u8:
**	cmpls	p0\.b, p1/z, z0\.b, #15
**	ret
*/
TEST_COMPARE_ZS (cmple_15_u8, svuint8_t, uint64_t,
		 p0 = svcmple_n_u8 (p1, z0, 15),
		 p0 = svcmple (p1, z0, 15))

/*
** cmple_16_u8:
**	cmpls	p0\.b, p1/z, z0\.b, #16
**	ret
*/
TEST_COMPARE_ZS (cmple_16_u8, svuint8_t, uint64_t,
		 p0 = svcmple_n_u8 (p1, z0, 16),
		 p0 = svcmple (p1, z0, 16))

/*
** cmple_127_u8:
**	cmpls	p0\.b, p1/z, z0\.b, #127
**	ret
*/
TEST_COMPARE_ZS (cmple_127_u8, svuint8_t, uint64_t,
		 p0 = svcmple_n_u8 (p1, z0, 127),
		 p0 = svcmple (p1, z0, 127))

/*
** cmple_128_u8:
**	mov	(z[0-9]+\.d), #128
**	cmpls	p0\.b, p1/z, z0\.b, \1
**	ret
*/
TEST_COMPARE_ZS (cmple_128_u8, svuint8_t, uint64_t,
		 p0 = svcmple_n_u8 (p1, z0, 128),
		 p0 = svcmple (p1, z0, 128))

/*
** cmple_m1_u8:
**	mov	(z[0-9]+)\.b, #-1
**	cmpls	p0\.b, p1/z, z0\.b, \1\.d
**	ret
*/
TEST_COMPARE_ZS (cmple_m1_u8, svuint8_t, uint64_t,
		 p0 = svcmple_n_u8 (p1, z0, -1),
		 p0 = svcmple (p1, z0, -1))
