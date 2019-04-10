/* { dg-do compile } */
/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sve_acle.h"

/*
** mul_s8_m_tied1:
**	mul	z0\.b, p0/m, z0\.b, z1\.b
**	ret
*/
TEST_UNIFORM_Z (mul_s8_m_tied1, svint8_t,
		z0 = svmul_s8_m (p0, z0, z1),
		z0 = svmul_m (p0, z0, z1))

/*
** mul_s8_m_tied2:
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0, z1
**	mul	z0\.b, p0/m, z0\.b, \1\.b
**	ret
*/
TEST_UNIFORM_Z (mul_s8_m_tied2, svint8_t,
		z0 = svmul_s8_m (p0, z1, z0),
		z0 = svmul_m (p0, z1, z0))

/*
** mul_s8_m_untied:
**	movprfx	z0, z1
**	mul	z0\.b, p0/m, z0\.b, z2\.b
**	ret
*/
TEST_UNIFORM_Z (mul_s8_m_untied, svint8_t,
		z0 = svmul_s8_m (p0, z1, z2),
		z0 = svmul_m (p0, z1, z2))

/*
** mul_w0_s8_m_tied1:
**	mov	(z[0-9]+\.b), w0
**	mul	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (mul_w0_s8_m_tied1, svint8_t, int8_t,
		 z0 = svmul_n_s8_m (p0, z0, x0),
		 z0 = svmul_m (p0, z0, x0))

/*
** mul_w0_s8_m_untied:
**	mov	(z[0-9]+\.b), w0
**	movprfx	z0, z1
**	mul	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (mul_w0_s8_m_untied, svint8_t, int8_t,
		 z0 = svmul_n_s8_m (p0, z1, x0),
		 z0 = svmul_m (p0, z1, x0))

/*
** mul_b4_s8_m_tied1:
**	mov	(z[0-9]+\.b), b4
**	mul	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (mul_b4_s8_m_tied1, svint8_t, int8_t,
		 z0 = svmul_n_s8_m (p0, z0, d4),
		 z0 = svmul_m (p0, z0, d4))

/*
** mul_b4_s8_m_untied:
**	mov	(z[0-9]+\.b), b4
**	movprfx	z0, z1
**	mul	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (mul_b4_s8_m_untied, svint8_t, int8_t,
		 z0 = svmul_n_s8_m (p0, z1, d4),
		 z0 = svmul_m (p0, z1, d4))

/*
** mul_2_s8_m_tied1:
**	mov	(z[0-9]+\.b), #2
**	mul	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_Z (mul_2_s8_m_tied1, svint8_t,
		z0 = svmul_n_s8_m (p0, z0, 2),
		z0 = svmul_m (p0, z0, 2))

/*
** mul_2_s8_m_untied:
**	mov	(z[0-9]+\.b), #2
**	movprfx	z0, z1
**	mul	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_Z (mul_2_s8_m_untied, svint8_t,
		z0 = svmul_n_s8_m (p0, z1, 2),
		z0 = svmul_m (p0, z1, 2))

/*
** mul_m1_s8_m:
**	mov	(z[0-9]+\.b), #-1
**	mul	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_Z (mul_m1_s8_m, svint8_t,
		z0 = svmul_n_s8_m (p0, z0, -1),
		z0 = svmul_m (p0, z0, -1))

/*
** mul_s8_z_tied1:
**	movprfx	z0\.b, p0/z, z0\.b
**	mul	z0\.b, p0/m, z0\.b, z1\.b
**	ret
*/
TEST_UNIFORM_Z (mul_s8_z_tied1, svint8_t,
		z0 = svmul_s8_z (p0, z0, z1),
		z0 = svmul_z (p0, z0, z1))

/*
** mul_s8_z_tied2:
**	movprfx	z0\.b, p0/z, z0\.b
**	mul	z0\.b, p0/m, z0\.b, z1\.b
**	ret
*/
TEST_UNIFORM_Z (mul_s8_z_tied2, svint8_t,
		z0 = svmul_s8_z (p0, z1, z0),
		z0 = svmul_z (p0, z1, z0))

/*
** mul_s8_z_untied:
**	movprfx	z0\.b, p0/z, z1\.b
**	mul	z0\.b, p0/m, z0\.b, z2\.b
**	ret
*/
TEST_UNIFORM_Z (mul_s8_z_untied, svint8_t,
		z0 = svmul_s8_z (p0, z1, z2),
		z0 = svmul_z (p0, z1, z2))

/*
** mul_w0_s8_z_tied1:
**	mov	(z[0-9]+\.b), w0
**	movprfx	z0\.b, p0/z, z0\.b
**	mul	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (mul_w0_s8_z_tied1, svint8_t, int8_t,
		 z0 = svmul_n_s8_z (p0, z0, x0),
		 z0 = svmul_z (p0, z0, x0))

/*
** mul_w0_s8_z_untied: { xfail *-*-* }
**	mov	(z[0-9]+\.b), w0
**	movprfx	z0\.b, p0/z, z1\.b
**	mul	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (mul_w0_s8_z_untied, svint8_t, int8_t,
		 z0 = svmul_n_s8_z (p0, z1, x0),
		 z0 = svmul_z (p0, z1, x0))

/*
** mul_b4_s8_z_tied1:
**	mov	(z[0-9]+\.b), b4
**	movprfx	z0\.b, p0/z, z0\.b
**	mul	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (mul_b4_s8_z_tied1, svint8_t, int8_t,
		 z0 = svmul_n_s8_z (p0, z0, d4),
		 z0 = svmul_z (p0, z0, d4))

/*
** mul_b4_s8_z_untied: { xfail *-*-* }
**	mov	(z[0-9]+\.b), b4
**	movprfx	z0\.b, p0/z, z1\.b
**	mul	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (mul_b4_s8_z_untied, svint8_t, int8_t,
		 z0 = svmul_n_s8_z (p0, z1, d4),
		 z0 = svmul_z (p0, z1, d4))

/*
** mul_s8_x_tied1:
**	mul	z0\.b, p0/m, z0\.b, z1\.b
**	ret
*/
TEST_UNIFORM_Z (mul_s8_x_tied1, svint8_t,
		z0 = svmul_s8_x (p0, z0, z1),
		z0 = svmul_x (p0, z0, z1))

/*
** mul_s8_x_tied2:
**	mul	z0\.b, p0/m, z0\.b, z1\.b
**	ret
*/
TEST_UNIFORM_Z (mul_s8_x_tied2, svint8_t,
		z0 = svmul_s8_x (p0, z1, z0),
		z0 = svmul_x (p0, z1, z0))

/*
** mul_s8_x_untied:
**	movprfx	z0, z1
**	mul	z0\.b, p0/m, z0\.b, z2\.b
**	ret
*/
TEST_UNIFORM_Z (mul_s8_x_untied, svint8_t,
		z0 = svmul_s8_x (p0, z1, z2),
		z0 = svmul_x (p0, z1, z2))

/*
** mul_w0_s8_x_tied1:
**	mov	(z[0-9]+\.b), w0
**	mul	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (mul_w0_s8_x_tied1, svint8_t, int8_t,
		 z0 = svmul_n_s8_x (p0, z0, x0),
		 z0 = svmul_x (p0, z0, x0))

/*
** mul_w0_s8_x_untied:
**	mov	z0\.b, w0
**	mul	z0\.b, p0/m, z0\.b, z1\.b
**	ret
*/
TEST_UNIFORM_ZS (mul_w0_s8_x_untied, svint8_t, int8_t,
		 z0 = svmul_n_s8_x (p0, z1, x0),
		 z0 = svmul_x (p0, z1, x0))

/*
** mul_b4_s8_x_tied1:
**	mov	(z[0-9]+\.b), b4
**	mul	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (mul_b4_s8_x_tied1, svint8_t, int8_t,
		 z0 = svmul_n_s8_x (p0, z0, d4),
		 z0 = svmul_x (p0, z0, d4))

/*
** mul_b4_s8_x_untied:
**	mov	z0\.b, b4
**	mul	z0\.b, p0/m, z0\.b, z1\.b
**	ret
*/
TEST_UNIFORM_ZS (mul_b4_s8_x_untied, svint8_t, int8_t,
		 z0 = svmul_n_s8_x (p0, z1, d4),
		 z0 = svmul_x (p0, z1, d4))

/*
** mul_2_s8_x_tied1:
**	mul	z0\.b, z0\.b, #2
**	ret
*/
TEST_UNIFORM_Z (mul_2_s8_x_tied1, svint8_t,
		z0 = svmul_n_s8_x (p0, z0, 2),
		z0 = svmul_x (p0, z0, 2))

/*
** mul_2_s8_x_untied:
**	mov	z0\.d, z1\.d
**	mul	z0\.b, z0\.b, #2
**	ret
*/
TEST_UNIFORM_Z (mul_2_s8_x_untied, svint8_t,
		z0 = svmul_n_s8_x (p0, z1, 2),
		z0 = svmul_x (p0, z1, 2))

/*
** mul_127_s8_x:
**	mul	z0\.b, z0\.b, #127
**	ret
*/
TEST_UNIFORM_Z (mul_127_s8_x, svint8_t,
		z0 = svmul_n_s8_x (p0, z0, 127),
		z0 = svmul_x (p0, z0, 127))

/*
** mul_128_s8_x:
**	mul	z0\.b, z0\.b, #-128
**	ret
*/
TEST_UNIFORM_Z (mul_128_s8_x, svint8_t,
		z0 = svmul_n_s8_x (p0, z0, 128),
		z0 = svmul_x (p0, z0, 128))

/*
** mul_255_s8_x:
**	mul	z0\.b, z0\.b, #-1
**	ret
*/
TEST_UNIFORM_Z (mul_255_s8_x, svint8_t,
		z0 = svmul_n_s8_x (p0, z0, 255),
		z0 = svmul_x (p0, z0, 255))

/*
** mul_m1_s8_x:
**	mul	z0\.b, z0\.b, #-1
**	ret
*/
TEST_UNIFORM_Z (mul_m1_s8_x, svint8_t,
		z0 = svmul_n_s8_x (p0, z0, -1),
		z0 = svmul_x (p0, z0, -1))

/*
** mul_m127_s8_x:
**	mul	z0\.b, z0\.b, #-127
**	ret
*/
TEST_UNIFORM_Z (mul_m127_s8_x, svint8_t,
		z0 = svmul_n_s8_x (p0, z0, -127),
		z0 = svmul_x (p0, z0, -127))

/*
** mul_m128_s8_x:
**	mul	z0\.b, z0\.b, #-128
**	ret
*/
TEST_UNIFORM_Z (mul_m128_s8_x, svint8_t,
		z0 = svmul_n_s8_x (p0, z0, -128),
		z0 = svmul_x (p0, z0, -128))
