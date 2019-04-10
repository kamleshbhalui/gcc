/* { dg-do compile } */
/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */
/* { dg-additional-options "-fno-trapping-math" } */

#include "test_sve_acle.h"

/*
** min_f32_m_tied1:
**	fmin	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (min_f32_m_tied1, svfloat32_t,
		z0 = svmin_f32_m (p0, z0, z1),
		z0 = svmin_m (p0, z0, z1))

/* Bad RA choice: no preferred output sequence.  */
TEST_UNIFORM_Z (min_f32_m_tied2, svfloat32_t,
		z0 = svmin_f32_m (p0, z1, z0),
		z0 = svmin_m (p0, z1, z0))

/*
** min_f32_m_untied:
**	movprfx	z0, z1
**	fmin	z0\.s, p0/m, z0\.s, z2\.s
**	ret
*/
TEST_UNIFORM_Z (min_f32_m_untied, svfloat32_t,
		z0 = svmin_f32_m (p0, z1, z2),
		z0 = svmin_m (p0, z1, z2))

/*
** min_w0_f32_m_tied1:
**	mov	(z[0-9]+\.s), w0
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (min_w0_f32_m_tied1, svfloat32_t, float,
		 z0 = svmin_n_f32_m (p0, z0, x0),
		 z0 = svmin_m (p0, z0, x0))

/*
** min_w0_f32_m_untied:
**	mov	(z[0-9]+\.s), w0
**	movprfx	z0, z1
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (min_w0_f32_m_untied, svfloat32_t, float,
		 z0 = svmin_n_f32_m (p0, z1, x0),
		 z0 = svmin_m (p0, z1, x0))

/*
** min_s4_f32_m_tied1:
**	mov	(z[0-9]+\.s), s4
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (min_s4_f32_m_tied1, svfloat32_t, float,
		 z0 = svmin_n_f32_m (p0, z0, d4),
		 z0 = svmin_m (p0, z0, d4))

/*
** min_s4_f32_m_untied:
**	mov	(z[0-9]+\.s), s4
**	movprfx	z0, z1
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (min_s4_f32_m_untied, svfloat32_t, float,
		 z0 = svmin_n_f32_m (p0, z1, d4),
		 z0 = svmin_m (p0, z1, d4))

/*
** min_1_f32_m_tied1:
**	fmov	(z[0-9]+\.s), #1.0(e\+0)?
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_Z (min_1_f32_m_tied1, svfloat32_t,
		z0 = svmin_n_f32_m (p0, z0, 1),
		z0 = svmin_m (p0, z0, 1))

/*
** min_1_f32_m_untied:
**	fmov	(z[0-9]+\.s), #1.0(e\+0)?
**	movprfx	z0, z1
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_Z (min_1_f32_m_untied, svfloat32_t,
		z0 = svmin_n_f32_m (p0, z1, 1),
		z0 = svmin_m (p0, z1, 1))

/*
** min_f32_z_tied1:
**	movprfx	z0\.s, p0/z, z0\.s
**	fmin	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (min_f32_z_tied1, svfloat32_t,
		z0 = svmin_f32_z (p0, z0, z1),
		z0 = svmin_z (p0, z0, z1))

/* Bad RA choice: no preferred output sequence.  */
TEST_UNIFORM_Z (min_f32_z_tied2, svfloat32_t,
		z0 = svmin_f32_z (p0, z1, z0),
		z0 = svmin_z (p0, z1, z0))

/*
** min_f32_z_untied:
**	movprfx	z0\.s, p0/z, z1\.s
**	fmin	z0\.s, p0/m, z0\.s, z2\.s
**	ret
*/
TEST_UNIFORM_Z (min_f32_z_untied, svfloat32_t,
		z0 = svmin_f32_z (p0, z1, z2),
		z0 = svmin_z (p0, z1, z2))

/*
** min_w0_f32_z_tied1:
**	mov	(z[0-9]+\.s), w0
**	movprfx	z0\.s, p0/z, z0\.s
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (min_w0_f32_z_tied1, svfloat32_t, float,
		 z0 = svmin_n_f32_z (p0, z0, x0),
		 z0 = svmin_z (p0, z0, x0))

/*
** min_w0_f32_z_untied: { xfail *-*-* }
**	mov	(z[0-9]+\.s), w0
**	movprfx	z0\.s, p0/z, z1\.s
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (min_w0_f32_z_untied, svfloat32_t, float,
		 z0 = svmin_n_f32_z (p0, z1, x0),
		 z0 = svmin_z (p0, z1, x0))

/*
** min_s4_f32_z_tied1:
**	mov	(z[0-9]+\.s), s4
**	movprfx	z0\.s, p0/z, z0\.s
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (min_s4_f32_z_tied1, svfloat32_t, float,
		 z0 = svmin_n_f32_z (p0, z0, d4),
		 z0 = svmin_z (p0, z0, d4))

/*
** min_s4_f32_z_untied: { xfail *-*-* }
**	mov	(z[0-9]+\.s), s4
**	movprfx	z0\.s, p0/z, z1\.s
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (min_s4_f32_z_untied, svfloat32_t, float,
		 z0 = svmin_n_f32_z (p0, z1, d4),
		 z0 = svmin_z (p0, z1, d4))

/*
** min_1_f32_z_untied: { xfail *-*-* }
**	fmov	(z[0-9]+\.s), #1.0(e\+0)?
**	movprfx	z0\.s, p0/z, z1\.s
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_Z (min_1_f32_z_untied, svfloat32_t,
		z0 = svmin_n_f32_z (p0, z1, 1),
		z0 = svmin_z (p0, z1, 1))

/*
** min_1_f32_z_tied1:
**	fmov	(z[0-9]+\.s), #1.0(e\+0)?
**	movprfx	z0\.s, p0/z, z0\.s
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_Z (min_1_f32_z_tied1, svfloat32_t,
		z0 = svmin_n_f32_z (p0, z0, 1),
		z0 = svmin_z (p0, z0, 1))

/*
** min_1_f32_x_tied1:
**	fmov	(z[0-9]+\.s), #1.0(e\+0)?
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_Z (min_1_f32_x_tied1, svfloat32_t,
		z0 = svmin_n_f32_x (p0, z0, 1),
		z0 = svmin_x (p0, z0, 1))

/*
** min_1_f32_x_untied:
**	fmov	z0\.s, #1.0(e\+0)?
**	fmin	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (min_1_f32_x_untied, svfloat32_t,
		z0 = svmin_n_f32_x (p0, z1, 1),
		z0 = svmin_x (p0, z1, 1))

/*
** min_f32_x_tied1:
**	fmin	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (min_f32_x_tied1, svfloat32_t,
		z0 = svmin_f32_x (p0, z0, z1),
		z0 = svmin_x (p0, z0, z1))

/*
** min_f32_x_tied2:
**	fmin	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (min_f32_x_tied2, svfloat32_t,
		z0 = svmin_f32_x (p0, z1, z0),
		z0 = svmin_x (p0, z1, z0))

/*
** min_f32_x_untied:
**	movprfx	z0, z1
**	fmin	z0\.s, p0/m, z0\.s, z2\.s
**	ret
*/
TEST_UNIFORM_Z (min_f32_x_untied, svfloat32_t,
		z0 = svmin_f32_x (p0, z1, z2),
		z0 = svmin_x (p0, z1, z2))

/*
** min_w0_f32_x_tied1:
**	mov	(z[0-9]+\.s), w0
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (min_w0_f32_x_tied1, svfloat32_t, float,
		 z0 = svmin_n_f32_x (p0, z0, x0),
		 z0 = svmin_x (p0, z0, x0))

/*
** min_w0_f32_x_untied:
**	mov	z0\.s, w0
**	fmin	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_ZS (min_w0_f32_x_untied, svfloat32_t, float,
		 z0 = svmin_n_f32_x (p0, z1, x0),
		 z0 = svmin_x (p0, z1, x0))

/*
** min_s4_f32_x_tied1:
**	mov	(z[0-9]+\.s), s4
**	fmin	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (min_s4_f32_x_tied1, svfloat32_t, float,
		 z0 = svmin_n_f32_x (p0, z0, d4),
		 z0 = svmin_x (p0, z0, d4))

/*
** min_s4_f32_x_untied:
**	mov	z0\.s, s4
**	fmin	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_ZS (min_s4_f32_x_untied, svfloat32_t, float,
		 z0 = svmin_n_f32_x (p0, z1, d4),
		 z0 = svmin_x (p0, z1, d4))

/*
** ptrue_min_f32_x_tied1:
**	ptrue	(p[0-7])\.s[^\n]*
**	fmin	z0\.s, \1/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (ptrue_min_f32_x_tied1, svfloat32_t,
		z0 = svmin_f32_x (svptrue_b32 (), z0, z1),
		z0 = svmin_x (svptrue_b32 (), z0, z1))

/*
** ptrue_min_f32_x_tied2:
**	ptrue	(p[0-7])\.s[^\n]*
**	fmin	z0\.s, \1/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (ptrue_min_f32_x_tied2, svfloat32_t,
		z0 = svmin_f32_x (svptrue_b32 (), z1, z0),
		z0 = svmin_x (svptrue_b32 (), z1, z0))

/*
** ptrue_min_f32_x_untied:
**	ptrue	(p[0-7])\.s[^\n]*
**	movprfx	z0, z1
**	fmin	z0\.s, \1/m, z0\.s, z2\.s
**	ret
*/
TEST_UNIFORM_Z (ptrue_min_f32_x_untied, svfloat32_t,
		z0 = svmin_f32_x (svptrue_b32 (), z1, z2),
		z0 = svmin_x (svptrue_b32 (), z1, z2))
