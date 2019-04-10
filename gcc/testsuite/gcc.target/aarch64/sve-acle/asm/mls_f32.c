/* { dg-do compile } */
/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sve_acle.h"

/*
** mls_f32_m_tied1:
**	fmls	z0\.s, p0/m, z1\.s, z2\.s
**	ret
*/
TEST_UNIFORM_Z (mls_f32_m_tied1, svfloat32_t,
		z0 = svmls_f32_m (p0, z0, z1, z2),
		z0 = svmls_m (p0, z0, z1, z2))

/*
** mls_f32_m_tied2:
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0, z1
**	fmls	z0\.s, p0/m, \1\.s, z2\.s
**	ret
*/
TEST_UNIFORM_Z (mls_f32_m_tied2, svfloat32_t,
		z0 = svmls_f32_m (p0, z1, z0, z2),
		z0 = svmls_m (p0, z1, z0, z2))

/*
** mls_f32_m_tied3:
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0, z1
**	fmls	z0\.s, p0/m, z2\.s, \1\.s
**	ret
*/
TEST_UNIFORM_Z (mls_f32_m_tied3, svfloat32_t,
		z0 = svmls_f32_m (p0, z1, z2, z0),
		z0 = svmls_m (p0, z1, z2, z0))

/*
** mls_f32_m_untied:
**	movprfx	z0, z1
**	fmls	z0\.s, p0/m, z2\.s, z3\.s
**	ret
*/
TEST_UNIFORM_Z (mls_f32_m_untied, svfloat32_t,
		z0 = svmls_f32_m (p0, z1, z2, z3),
		z0 = svmls_m (p0, z1, z2, z3))

/*
** mls_w0_f32_m_tied1:
**	mov	(z[0-9]+\.s), w0
**	fmls	z0\.s, p0/m, z1\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_w0_f32_m_tied1, svfloat32_t, float,
		 z0 = svmls_n_f32_m (p0, z0, z1, x0),
		 z0 = svmls_m (p0, z0, z1, x0))

/*
** mls_w0_f32_m_tied2:
**	mov	(z[0-9]+\.s), w0
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0, z1
**	fmls	z0\.s, p0/m, \2\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_w0_f32_m_tied2, svfloat32_t, float,
		 z0 = svmls_n_f32_m (p0, z1, z0, x0),
		 z0 = svmls_m (p0, z1, z0, x0))

/*
** mls_w0_f32_m_untied:
**	mov	(z[0-9]+\.s), w0
**	movprfx	z0, z1
**	fmls	z0\.s, p0/m, z2\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_w0_f32_m_untied, svfloat32_t, float,
		 z0 = svmls_n_f32_m (p0, z1, z2, x0),
		 z0 = svmls_m (p0, z1, z2, x0))

/*
** mls_s4_f32_m_tied1:
**	mov	(z[0-9]+\.s), s4
**	fmls	z0\.s, p0/m, z1\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_s4_f32_m_tied1, svfloat32_t, float,
		 z0 = svmls_n_f32_m (p0, z0, z1, d4),
		 z0 = svmls_m (p0, z0, z1, d4))

/*
** mls_s4_f32_m_tied2:
**	mov	(z[0-9]+\.s), s4
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0, z1
**	fmls	z0\.s, p0/m, \2\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_s4_f32_m_tied2, svfloat32_t, float,
		 z0 = svmls_n_f32_m (p0, z1, z0, d4),
		 z0 = svmls_m (p0, z1, z0, d4))

/*
** mls_s4_f32_m_untied:
**	mov	(z[0-9]+\.s), s4
**	movprfx	z0, z1
**	fmls	z0\.s, p0/m, z2\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_s4_f32_m_untied, svfloat32_t, float,
		 z0 = svmls_n_f32_m (p0, z1, z2, d4),
		 z0 = svmls_m (p0, z1, z2, d4))

/*
** mls_2_f32_m_tied1:
**	fmov	(z[0-9]+\.s), #2.0(e\+0)?
**	fmls	z0\.s, p0/m, z1\.s, \1
**	ret
*/
TEST_UNIFORM_Z (mls_2_f32_m_tied1, svfloat32_t,
		z0 = svmls_n_f32_m (p0, z0, z1, 2),
		z0 = svmls_m (p0, z0, z1, 2))

/*
** mls_2_f32_m_tied2:
**	fmov	(z[0-9]+\.s), #2.0(e\+0)?
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0, z1
**	fmls	z0\.s, p0/m, \3\.s, \1
**	ret
*/
TEST_UNIFORM_Z (mls_2_f32_m_tied2, svfloat32_t,
		z0 = svmls_n_f32_m (p0, z1, z0, 2),
		z0 = svmls_m (p0, z1, z0, 2))

/*
** mls_2_f32_m_untied:
**	fmov	(z[0-9]+\.s), #2.0(e\+0)?
**	movprfx	z0, z1
**	fmls	z0\.s, p0/m, z2\.s, \1
**	ret
*/
TEST_UNIFORM_Z (mls_2_f32_m_untied, svfloat32_t,
		z0 = svmls_n_f32_m (p0, z1, z2, 2),
		z0 = svmls_m (p0, z1, z2, 2))

/*
** mls_f32_z_tied1:
**	movprfx	z0\.s, p0/z, z0\.s
**	fmls	z0\.s, p0/m, z1\.s, z2\.s
**	ret
*/
TEST_UNIFORM_Z (mls_f32_z_tied1, svfloat32_t,
		z0 = svmls_f32_z (p0, z0, z1, z2),
		z0 = svmls_z (p0, z0, z1, z2))

/*
** mls_f32_z_tied2:
**	movprfx	z0\.s, p0/z, z0\.s
**	fmsb	z0\.s, p0/m, z2\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (mls_f32_z_tied2, svfloat32_t,
		z0 = svmls_f32_z (p0, z1, z0, z2),
		z0 = svmls_z (p0, z1, z0, z2))

/*
** mls_f32_z_tied3:
**	movprfx	z0\.s, p0/z, z0\.s
**	fmsb	z0\.s, p0/m, z2\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (mls_f32_z_tied3, svfloat32_t,
		z0 = svmls_f32_z (p0, z1, z2, z0),
		z0 = svmls_z (p0, z1, z2, z0))

/*
** mls_f32_z_untied:
**	movprfx	z0\.s, p0/z, z1\.s
**	fmls	z0\.s, p0/m, z2\.s, z3\.s
**	ret
*/
TEST_UNIFORM_Z (mls_f32_z_untied, svfloat32_t,
		z0 = svmls_f32_z (p0, z1, z2, z3),
		z0 = svmls_z (p0, z1, z2, z3))

/*
** mls_w0_f32_z_tied1:
**	mov	(z[0-9]+\.s), w0
**	movprfx	z0\.s, p0/z, z0\.s
**	fmls	z0\.s, p0/m, z1\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_w0_f32_z_tied1, svfloat32_t, float,
		 z0 = svmls_n_f32_z (p0, z0, z1, x0),
		 z0 = svmls_z (p0, z0, z1, x0))

/*
** mls_w0_f32_z_tied2:
**	mov	(z[0-9]+\.s), w0
**	movprfx	z0\.s, p0/z, z0\.s
**	fmsb	z0\.s, p0/m, \1, z1\.s
**	ret
*/
TEST_UNIFORM_ZS (mls_w0_f32_z_tied2, svfloat32_t, float,
		 z0 = svmls_n_f32_z (p0, z1, z0, x0),
		 z0 = svmls_z (p0, z1, z0, x0))

/*
** mls_w0_f32_z_untied: { xfail *-*-* }
**	mov	(z[0-9]+\.s), w0
**	movprfx	z0\.s, p0/z, z1\.s
**	fmls	z0\.s, p0/m, z2\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_w0_f32_z_untied, svfloat32_t, float,
		 z0 = svmls_n_f32_z (p0, z1, z2, x0),
		 z0 = svmls_z (p0, z1, z2, x0))

/*
** mls_s4_f32_z_tied1:
**	mov	(z[0-9]+\.s), s4
**	movprfx	z0\.s, p0/z, z0\.s
**	fmls	z0\.s, p0/m, z1\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_s4_f32_z_tied1, svfloat32_t, float,
		 z0 = svmls_n_f32_z (p0, z0, z1, d4),
		 z0 = svmls_z (p0, z0, z1, d4))

/*
** mls_s4_f32_z_tied2:
**	mov	(z[0-9]+\.s), s4
**	movprfx	z0\.s, p0/z, z0\.s
**	fmsb	z0\.s, p0/m, \1, z1\.s
**	ret
*/
TEST_UNIFORM_ZS (mls_s4_f32_z_tied2, svfloat32_t, float,
		 z0 = svmls_n_f32_z (p0, z1, z0, d4),
		 z0 = svmls_z (p0, z1, z0, d4))

/*
** mls_s4_f32_z_untied: { xfail *-*-* }
**	mov	(z[0-9]+\.s), s4
**	movprfx	z0\.s, p0/z, z1\.s
**	fmls	z0\.s, p0/m, z2\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_s4_f32_z_untied, svfloat32_t, float,
		 z0 = svmls_n_f32_z (p0, z1, z2, d4),
		 z0 = svmls_z (p0, z1, z2, d4))

/*
** mls_f32_x_tied1:
**	fmls	z0\.s, p0/m, z1\.s, z2\.s
**	ret
*/
TEST_UNIFORM_Z (mls_f32_x_tied1, svfloat32_t,
		z0 = svmls_f32_x (p0, z0, z1, z2),
		z0 = svmls_x (p0, z0, z1, z2))

/*
** mls_f32_x_tied2:
**	fmsb	z0\.s, p0/m, z2\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (mls_f32_x_tied2, svfloat32_t,
		z0 = svmls_f32_x (p0, z1, z0, z2),
		z0 = svmls_x (p0, z1, z0, z2))

/*
** mls_f32_x_tied3:
**	fmsb	z0\.s, p0/m, z2\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (mls_f32_x_tied3, svfloat32_t,
		z0 = svmls_f32_x (p0, z1, z2, z0),
		z0 = svmls_x (p0, z1, z2, z0))

/*
** mls_f32_x_untied:
**	movprfx	z0, z1
**	fmls	z0\.s, p0/m, z2\.s, z3\.s
**	ret
*/
TEST_UNIFORM_Z (mls_f32_x_untied, svfloat32_t,
		z0 = svmls_f32_x (p0, z1, z2, z3),
		z0 = svmls_x (p0, z1, z2, z3))

/*
** mls_w0_f32_x_tied1:
**	mov	(z[0-9]+\.s), w0
**	fmls	z0\.s, p0/m, z1\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_w0_f32_x_tied1, svfloat32_t, float,
		 z0 = svmls_n_f32_x (p0, z0, z1, x0),
		 z0 = svmls_x (p0, z0, z1, x0))

/*
** mls_w0_f32_x_tied2:
**	mov	(z[0-9]+\.s), w0
**	fmsb	z0\.s, p0/m, \1, z1\.s
**	ret
*/
TEST_UNIFORM_ZS (mls_w0_f32_x_tied2, svfloat32_t, float,
		 z0 = svmls_n_f32_x (p0, z1, z0, x0),
		 z0 = svmls_x (p0, z1, z0, x0))

/*
** mls_w0_f32_x_untied:
**	mov	z0\.s, w0
**	fmsb	z0\.s, p0/m, z2\.s, z1\.s
**	ret
*/
TEST_UNIFORM_ZS (mls_w0_f32_x_untied, svfloat32_t, float,
		 z0 = svmls_n_f32_x (p0, z1, z2, x0),
		 z0 = svmls_x (p0, z1, z2, x0))

/*
** mls_s4_f32_x_tied1:
**	mov	(z[0-9]+\.s), s4
**	fmls	z0\.s, p0/m, z1\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_s4_f32_x_tied1, svfloat32_t, float,
		 z0 = svmls_n_f32_x (p0, z0, z1, d4),
		 z0 = svmls_x (p0, z0, z1, d4))

/*
** mls_s4_f32_x_tied2:
**	mov	(z[0-9]+\.s), s4
**	fmsb	z0\.s, p0/m, \1, z1\.s
**	ret
*/
TEST_UNIFORM_ZS (mls_s4_f32_x_tied2, svfloat32_t, float,
		 z0 = svmls_n_f32_x (p0, z1, z0, d4),
		 z0 = svmls_x (p0, z1, z0, d4))

/*
** mls_s4_f32_x_untied:
**	mov	z0\.s, s4
**	fmsb	z0\.s, p0/m, z2\.s, z1\.s
**	ret
*/
TEST_UNIFORM_ZS (mls_s4_f32_x_untied, svfloat32_t, float,
		 z0 = svmls_n_f32_x (p0, z1, z2, d4),
		 z0 = svmls_x (p0, z1, z2, d4))

/*
** mls_2_f32_x_tied1:
**	fmov	(z[0-9]+\.s), #2.0(e\+0)?
**	fmls	z0\.s, p0/m, z1\.s, \1
**	ret
*/
TEST_UNIFORM_Z (mls_2_f32_x_tied1, svfloat32_t,
		z0 = svmls_n_f32_x (p0, z0, z1, 2),
		z0 = svmls_x (p0, z0, z1, 2))

/*
** mls_2_f32_x_tied2:
**	fmov	(z[0-9]+\.s), #2.0(e\+0)?
**	fmsb	z0\.s, p0/m, \1, z1\.s
**	ret
*/
TEST_UNIFORM_Z (mls_2_f32_x_tied2, svfloat32_t,
		z0 = svmls_n_f32_x (p0, z1, z0, 2),
		z0 = svmls_x (p0, z1, z0, 2))

/*
** mls_2_f32_x_untied:
**	fmov	z0\.s, #2.0(e\+0)?
**	fmsb	z0\.s, p0/m, z2\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (mls_2_f32_x_untied, svfloat32_t,
		z0 = svmls_n_f32_x (p0, z1, z2, 2),
		z0 = svmls_x (p0, z1, z2, 2))
