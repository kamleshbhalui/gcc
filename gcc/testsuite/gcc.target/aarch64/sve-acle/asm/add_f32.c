/* { dg-do compile } */
/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sve_acle.h"

/*
** add_f32_m_tied1:
**	fadd	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (add_f32_m_tied1, svfloat32_t,
		z0 = svadd_f32_m (p0, z0, z1),
		z0 = svadd_m (p0, z0, z1))

/* Bad RA choice: no preferred output sequence.  */
TEST_UNIFORM_Z (add_f32_m_tied2, svfloat32_t,
		z0 = svadd_f32_m (p0, z1, z0),
		z0 = svadd_m (p0, z1, z0))

/*
** add_f32_m_untied:
**	movprfx	z0, z1
**	fadd	z0\.s, p0/m, z0\.s, z2\.s
**	ret
*/
TEST_UNIFORM_Z (add_f32_m_untied, svfloat32_t,
		z0 = svadd_f32_m (p0, z1, z2),
		z0 = svadd_m (p0, z1, z2))

/*
** add_w0_f32_m_tied1:
**	mov	(z[0-9]+\.s), w0
**	fadd	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (add_w0_f32_m_tied1, svfloat32_t, float,
		 z0 = svadd_n_f32_m (p0, z0, x0),
		 z0 = svadd_m (p0, z0, x0))

/*
** add_w0_f32_m_untied:
**	mov	(z[0-9]+\.s), w0
**	movprfx	z0, z1
**	fadd	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (add_w0_f32_m_untied, svfloat32_t, float,
		 z0 = svadd_n_f32_m (p0, z1, x0),
		 z0 = svadd_m (p0, z1, x0))

/*
** add_s4_f32_m_tied1:
**	mov	(z[0-9]+\.s), s4
**	fadd	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (add_s4_f32_m_tied1, svfloat32_t, float,
		 z0 = svadd_n_f32_m (p0, z0, d4),
		 z0 = svadd_m (p0, z0, d4))

/*
** add_s4_f32_m_untied:
**	mov	(z[0-9]+\.s), s4
**	movprfx	z0, z1
**	fadd	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (add_s4_f32_m_untied, svfloat32_t, float,
		 z0 = svadd_n_f32_m (p0, z1, d4),
		 z0 = svadd_m (p0, z1, d4))

/*
** add_1_f32_m_tied1:
**	fadd	z0\.s, p0/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (add_1_f32_m_tied1, svfloat32_t,
		z0 = svadd_n_f32_m (p0, z0, 1),
		z0 = svadd_m (p0, z0, 1))

/*
** add_1_f32_m_untied:
**	movprfx	z0, z1
**	fadd	z0\.s, p0/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (add_1_f32_m_untied, svfloat32_t,
		z0 = svadd_n_f32_m (p0, z1, 1),
		z0 = svadd_m (p0, z1, 1))

/*
** add_0p5_f32_m_tied1:
**	fadd	z0\.s, p0/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (add_0p5_f32_m_tied1, svfloat32_t,
		z0 = svadd_n_f32_m (p0, z0, 0.5),
		z0 = svadd_m (p0, z0, 0.5))

/*
** add_0p5_f32_m_untied:
**	movprfx	z0, z1
**	fadd	z0\.s, p0/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (add_0p5_f32_m_untied, svfloat32_t,
		z0 = svadd_n_f32_m (p0, z1, 0.5),
		z0 = svadd_m (p0, z1, 0.5))

/*
** add_m1_f32_m_tied1:
**	fsub	z0\.s, p0/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (add_m1_f32_m_tied1, svfloat32_t,
		z0 = svadd_n_f32_m (p0, z0, -1),
		z0 = svadd_m (p0, z0, -1))

/*
** add_m1_f32_m_untied:
**	movprfx	z0, z1
**	fsub	z0\.s, p0/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (add_m1_f32_m_untied, svfloat32_t,
		z0 = svadd_n_f32_m (p0, z1, -1),
		z0 = svadd_m (p0, z1, -1))

/*
** add_m0p5_f32_m_tied1:
**	fsub	z0\.s, p0/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (add_m0p5_f32_m_tied1, svfloat32_t,
		z0 = svadd_n_f32_m (p0, z0, -0.5),
		z0 = svadd_m (p0, z0, -0.5))

/*
** add_m0p5_f32_m_untied:
**	movprfx	z0, z1
**	fsub	z0\.s, p0/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (add_m0p5_f32_m_untied, svfloat32_t,
		z0 = svadd_n_f32_m (p0, z1, -0.5),
		z0 = svadd_m (p0, z1, -0.5))

/*
** add_m2_f32_m:
**	fmov	(z[0-9]+\.s), #-2\.0(e\+0)?
**	fadd	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_Z (add_m2_f32_m, svfloat32_t,
		z0 = svadd_n_f32_m (p0, z0, -2),
		z0 = svadd_m (p0, z0, -2))

/*
** add_f32_z_tied1:
**	movprfx	z0\.s, p0/z, z0\.s
**	fadd	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (add_f32_z_tied1, svfloat32_t,
		z0 = svadd_f32_z (p0, z0, z1),
		z0 = svadd_z (p0, z0, z1))

/*
** add_f32_z_tied2:
**	movprfx	z0\.s, p0/z, z0\.s
**	fadd	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (add_f32_z_tied2, svfloat32_t,
		z0 = svadd_f32_z (p0, z1, z0),
		z0 = svadd_z (p0, z1, z0))

/*
** add_f32_z_untied:
**	movprfx	z0\.s, p0/z, z1\.s
**	fadd	z0\.s, p0/m, z0\.s, z2\.s
**	ret
*/
TEST_UNIFORM_Z (add_f32_z_untied, svfloat32_t,
		z0 = svadd_f32_z (p0, z1, z2),
		z0 = svadd_z (p0, z1, z2))

/*
** add_w0_f32_z_tied1:
**	mov	(z[0-9]+\.s), w0
**	movprfx	z0\.s, p0/z, z0\.s
**	fadd	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (add_w0_f32_z_tied1, svfloat32_t, float,
		 z0 = svadd_n_f32_z (p0, z0, x0),
		 z0 = svadd_z (p0, z0, x0))

/*
** add_w0_f32_z_untied: { xfail *-*-* }
**	mov	(z[0-9]+\.s), w0
**	movprfx	z0\.s, p0/z, z1\.s
**	fadd	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (add_w0_f32_z_untied, svfloat32_t, float,
		 z0 = svadd_n_f32_z (p0, z1, x0),
		 z0 = svadd_z (p0, z1, x0))

/*
** add_s4_f32_z_tied1:
**	mov	(z[0-9]+\.s), s4
**	movprfx	z0\.s, p0/z, z0\.s
**	fadd	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (add_s4_f32_z_tied1, svfloat32_t, float,
		 z0 = svadd_n_f32_z (p0, z0, d4),
		 z0 = svadd_z (p0, z0, d4))

/*
** add_s4_f32_z_untied: { xfail *-*-* }
**	mov	(z[0-9]+\.s), s4
**	movprfx	z0\.s, p0/z, z1\.s
**	fadd	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (add_s4_f32_z_untied, svfloat32_t, float,
		 z0 = svadd_n_f32_z (p0, z1, d4),
		 z0 = svadd_z (p0, z1, d4))

/*
** add_1_f32_z_tied1:
**	movprfx	z0\.s, p0/z, z0\.s
**	fadd	z0\.s, p0/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (add_1_f32_z_tied1, svfloat32_t,
		z0 = svadd_n_f32_z (p0, z0, 1),
		z0 = svadd_z (p0, z0, 1))

/*
** add_1_f32_z_untied:
**	movprfx	z0\.s, p0/z, z1\.s
**	fadd	z0\.s, p0/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (add_1_f32_z_untied, svfloat32_t,
		z0 = svadd_n_f32_z (p0, z1, 1),
		z0 = svadd_z (p0, z1, 1))

/*
** add_0p5_f32_z_tied1:
**	movprfx	z0\.s, p0/z, z0\.s
**	fadd	z0\.s, p0/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (add_0p5_f32_z_tied1, svfloat32_t,
		z0 = svadd_n_f32_z (p0, z0, 0.5),
		z0 = svadd_z (p0, z0, 0.5))

/*
** add_0p5_f32_z_untied:
**	movprfx	z0\.s, p0/z, z1\.s
**	fadd	z0\.s, p0/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (add_0p5_f32_z_untied, svfloat32_t,
		z0 = svadd_n_f32_z (p0, z1, 0.5),
		z0 = svadd_z (p0, z1, 0.5))

/*
** add_m1_f32_z_tied1:
**	movprfx	z0\.s, p0/z, z0\.s
**	fsub	z0\.s, p0/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (add_m1_f32_z_tied1, svfloat32_t,
		z0 = svadd_n_f32_z (p0, z0, -1),
		z0 = svadd_z (p0, z0, -1))

/*
** add_m1_f32_z_untied:
**	movprfx	z0\.s, p0/z, z1\.s
**	fsub	z0\.s, p0/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (add_m1_f32_z_untied, svfloat32_t,
		z0 = svadd_n_f32_z (p0, z1, -1),
		z0 = svadd_z (p0, z1, -1))

/*
** add_m0p5_f32_z_tied1:
**	movprfx	z0\.s, p0/z, z0\.s
**	fsub	z0\.s, p0/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (add_m0p5_f32_z_tied1, svfloat32_t,
		z0 = svadd_n_f32_z (p0, z0, -0.5),
		z0 = svadd_z (p0, z0, -0.5))

/*
** add_m0p5_f32_z_untied:
**	movprfx	z0\.s, p0/z, z1\.s
**	fsub	z0\.s, p0/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (add_m0p5_f32_z_untied, svfloat32_t,
		z0 = svadd_n_f32_z (p0, z1, -0.5),
		z0 = svadd_z (p0, z1, -0.5))

/*
** add_m2_f32_z:
**	fmov	(z[0-9]+\.s), #-2\.0(e\+0)?
**	movprfx	z0\.s, p0/z, z0\.s
**	fadd	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_Z (add_m2_f32_z, svfloat32_t,
		z0 = svadd_n_f32_z (p0, z0, -2),
		z0 = svadd_z (p0, z0, -2))

/*
** add_f32_x_tied1:
**	fadd	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (add_f32_x_tied1, svfloat32_t,
		z0 = svadd_f32_x (p0, z0, z1),
		z0 = svadd_x (p0, z0, z1))

/*
** add_f32_x_tied2:
**	fadd	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (add_f32_x_tied2, svfloat32_t,
		z0 = svadd_f32_x (p0, z1, z0),
		z0 = svadd_x (p0, z1, z0))

/*
** add_f32_x_untied:
**	movprfx	z0, z1
**	fadd	z0\.s, p0/m, z0\.s, z2\.s
**	ret
*/
TEST_UNIFORM_Z (add_f32_x_untied, svfloat32_t,
		z0 = svadd_f32_x (p0, z1, z2),
		z0 = svadd_x (p0, z1, z2))

/*
** add_w0_f32_x_tied1:
**	mov	(z[0-9]+\.s), w0
**	fadd	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (add_w0_f32_x_tied1, svfloat32_t, float,
		 z0 = svadd_n_f32_x (p0, z0, x0),
		 z0 = svadd_x (p0, z0, x0))

/*
** add_w0_f32_x_untied:
**	mov	z0\.s, w0
**	fadd	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_ZS (add_w0_f32_x_untied, svfloat32_t, float,
		 z0 = svadd_n_f32_x (p0, z1, x0),
		 z0 = svadd_x (p0, z1, x0))

/*
** add_s4_f32_x_tied1:
**	mov	(z[0-9]+\.s), s4
**	fadd	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_ZS (add_s4_f32_x_tied1, svfloat32_t, float,
		 z0 = svadd_n_f32_x (p0, z0, d4),
		 z0 = svadd_x (p0, z0, d4))

/*
** add_s4_f32_x_untied:
**	mov	z0\.s, s4
**	fadd	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_ZS (add_s4_f32_x_untied, svfloat32_t, float,
		 z0 = svadd_n_f32_x (p0, z1, d4),
		 z0 = svadd_x (p0, z1, d4))

/*
** add_1_f32_x_tied1:
**	fadd	z0\.s, p0/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (add_1_f32_x_tied1, svfloat32_t,
		z0 = svadd_n_f32_x (p0, z0, 1),
		z0 = svadd_x (p0, z0, 1))

/*
** add_1_f32_x_untied:
**	movprfx	z0, z1
**	fadd	z0\.s, p0/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (add_1_f32_x_untied, svfloat32_t,
		z0 = svadd_n_f32_x (p0, z1, 1),
		z0 = svadd_x (p0, z1, 1))

/*
** add_0p5_f32_x_tied1:
**	fadd	z0\.s, p0/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (add_0p5_f32_x_tied1, svfloat32_t,
		z0 = svadd_n_f32_x (p0, z0, 0.5),
		z0 = svadd_x (p0, z0, 0.5))

/*
** add_0p5_f32_x_untied:
**	movprfx	z0, z1
**	fadd	z0\.s, p0/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (add_0p5_f32_x_untied, svfloat32_t,
		z0 = svadd_n_f32_x (p0, z1, 0.5),
		z0 = svadd_x (p0, z1, 0.5))

/*
** add_m1_f32_x_tied1:
**	fsub	z0\.s, p0/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (add_m1_f32_x_tied1, svfloat32_t,
		z0 = svadd_n_f32_x (p0, z0, -1),
		z0 = svadd_x (p0, z0, -1))

/*
** add_m1_f32_x_untied:
**	movprfx	z0, z1
**	fsub	z0\.s, p0/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (add_m1_f32_x_untied, svfloat32_t,
		z0 = svadd_n_f32_x (p0, z1, -1),
		z0 = svadd_x (p0, z1, -1))

/*
** add_m0p5_f32_x_tied1:
**	fsub	z0\.s, p0/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (add_m0p5_f32_x_tied1, svfloat32_t,
		z0 = svadd_n_f32_x (p0, z0, -0.5),
		z0 = svadd_x (p0, z0, -0.5))

/*
** add_m0p5_f32_x_untied:
**	movprfx	z0, z1
**	fsub	z0\.s, p0/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (add_m0p5_f32_x_untied, svfloat32_t,
		z0 = svadd_n_f32_x (p0, z1, -0.5),
		z0 = svadd_x (p0, z1, -0.5))

/*
** add_2_f32_x_tied1:
**	fmov	(z[0-9]+\.s), #2\.0(e\+0)?
**	fadd	z0\.s, p0/m, z0\.s, \1
**	ret
*/
TEST_UNIFORM_Z (add_2_f32_x_tied1, svfloat32_t,
		z0 = svadd_n_f32_x (p0, z0, 2),
		z0 = svadd_x (p0, z0, 2))

/*
** add_2_f32_x_untied:
**	fmov	z0\.s, #2\.0(e\+0)?
**	fadd	z0\.s, p0/m, z0\.s, z1\.s
**	ret
*/
TEST_UNIFORM_Z (add_2_f32_x_untied, svfloat32_t,
		z0 = svadd_n_f32_x (p0, z1, 2),
		z0 = svadd_x (p0, z1, 2))

/*
** ptrue_add_f32_x_tied1:
**	fadd	z0\.s, (z0\.s, z1\.s||z1\.s, z0\.s)
**	ret
*/
TEST_UNIFORM_Z (ptrue_add_f32_x_tied1, svfloat32_t,
		z0 = svadd_f32_x (svptrue_b32 (), z0, z1),
		z0 = svadd_x (svptrue_b32 (), z0, z1))

/*
** ptrue_add_f32_x_tied2:
**	fadd	z0\.s, (z0\.s, z1\.s|z1\.s, z0\.s)
**	ret
*/
TEST_UNIFORM_Z (ptrue_add_f32_x_tied2, svfloat32_t,
		z0 = svadd_f32_x (svptrue_b32 (), z1, z0),
		z0 = svadd_x (svptrue_b32 (), z1, z0))

/*
** ptrue_add_f32_x_untied:
**	fadd	z0\.s, (z1\.s, z2\.s|z2\.s, z1\.s)
**	ret
*/
TEST_UNIFORM_Z (ptrue_add_f32_x_untied, svfloat32_t,
		z0 = svadd_f32_x (svptrue_b32 (), z1, z2),
		z0 = svadd_x (svptrue_b32 (), z1, z2))

/*
** ptrue_add_w0_f32_x_tied1:
**	mov	(z[0-9]+\.s), w0
**	fadd	z0\.s, (z0\.s, \1|\1, z0\.s)
**	ret
*/
TEST_UNIFORM_ZS (ptrue_add_w0_f32_x_tied1, svfloat32_t, float,
		 z0 = svadd_n_f32_x (svptrue_b32 (), z0, x0),
		 z0 = svadd_x (svptrue_b32 (), z0, x0))

/*
** ptrue_add_w0_f32_x_untied:
**	mov	(z[0-9]+\.s), w0
**	fadd	z0\.s, (z1\.s, \1|\1, z1\.s)
**	ret
*/
TEST_UNIFORM_ZS (ptrue_add_w0_f32_x_untied, svfloat32_t, float,
		 z0 = svadd_n_f32_x (svptrue_b32 (), z1, x0),
		 z0 = svadd_x (svptrue_b32 (), z1, x0))

/*
** ptrue_add_s4_f32_x_tied1:
**	mov	(z[0-9]+\.s), s4
**	fadd	z0\.s, (z0\.s, \1|\1, z0\.s)
**	ret
*/
TEST_UNIFORM_ZS (ptrue_add_s4_f32_x_tied1, svfloat32_t, float,
		 z0 = svadd_n_f32_x (svptrue_b32 (), z0, d4),
		 z0 = svadd_x (svptrue_b32 (), z0, d4))

/*
** ptrue_add_s4_f32_x_untied:
**	mov	(z[0-9]+\.s), s4
**	fadd	z0\.s, (z1\.s, \1|\1, z1\.s)
**	ret
*/
TEST_UNIFORM_ZS (ptrue_add_s4_f32_x_untied, svfloat32_t, float,
		 z0 = svadd_n_f32_x (svptrue_b32 (), z1, d4),
		 z0 = svadd_x (svptrue_b32 (), z1, d4))

/*
** ptrue_add_1_f32_x_tied1:
**	ptrue	(p[0-7])\.s[^\n]*
**	fadd	z0\.s, \1/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (ptrue_add_1_f32_x_tied1, svfloat32_t,
		z0 = svadd_n_f32_x (svptrue_b32 (), z0, 1),
		z0 = svadd_x (svptrue_b32 (), z0, 1))

/*
** ptrue_add_1_f32_x_untied:
**	ptrue	(p[0-7])\.s[^\n]*
**	movprfx	z0, z1
**	fadd	z0\.s, \1/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (ptrue_add_1_f32_x_untied, svfloat32_t,
		z0 = svadd_n_f32_x (svptrue_b32 (), z1, 1),
		z0 = svadd_x (svptrue_b32 (), z1, 1))

/*
** ptrue_add_0p5_f32_x_tied1:
**	ptrue	(p[0-7])\.s[^\n]*
**	fadd	z0\.s, \1/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (ptrue_add_0p5_f32_x_tied1, svfloat32_t,
		z0 = svadd_n_f32_x (svptrue_b32 (), z0, 0.5),
		z0 = svadd_x (svptrue_b32 (), z0, 0.5))

/*
** ptrue_add_0p5_f32_x_untied:
**	ptrue	(p[0-7])\.s[^\n]*
**	movprfx	z0, z1
**	fadd	z0\.s, \1/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (ptrue_add_0p5_f32_x_untied, svfloat32_t,
		z0 = svadd_n_f32_x (svptrue_b32 (), z1, 0.5),
		z0 = svadd_x (svptrue_b32 (), z1, 0.5))

/*
** ptrue_add_m1_f32_x_tied1:
**	ptrue	(p[0-7])\.s[^\n]*
**	fsub	z0\.s, \1/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (ptrue_add_m1_f32_x_tied1, svfloat32_t,
		z0 = svadd_n_f32_x (svptrue_b32 (), z0, -1),
		z0 = svadd_x (svptrue_b32 (), z0, -1))

/*
** ptrue_add_m1_f32_x_untied:
**	ptrue	(p[0-7])\.s[^\n]*
**	movprfx	z0, z1
**	fsub	z0\.s, \1/m, z0\.s, #1\.0
**	ret
*/
TEST_UNIFORM_Z (ptrue_add_m1_f32_x_untied, svfloat32_t,
		z0 = svadd_n_f32_x (svptrue_b32 (), z1, -1),
		z0 = svadd_x (svptrue_b32 (), z1, -1))

/*
** ptrue_add_m0p5_f32_x_tied1:
**	ptrue	(p[0-7])\.s[^\n]*
**	fsub	z0\.s, \1/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (ptrue_add_m0p5_f32_x_tied1, svfloat32_t,
		z0 = svadd_n_f32_x (svptrue_b32 (), z0, -0.5),
		z0 = svadd_x (svptrue_b32 (), z0, -0.5))

/*
** ptrue_add_m0p5_f32_x_untied:
**	ptrue	(p[0-7])\.s[^\n]*
**	movprfx	z0, z1
**	fsub	z0\.s, \1/m, z0\.s, #0\.5
**	ret
*/
TEST_UNIFORM_Z (ptrue_add_m0p5_f32_x_untied, svfloat32_t,
		z0 = svadd_n_f32_x (svptrue_b32 (), z1, -0.5),
		z0 = svadd_x (svptrue_b32 (), z1, -0.5))

/*
** ptrue_add_2_f32_x_tied1:
**	fmov	(z[0-9]+\.s), #2\.0(e\+0)?
**	fadd	z0\.s, (z0\.s, \1|\1, z0\.s)
**	ret
*/
TEST_UNIFORM_Z (ptrue_add_2_f32_x_tied1, svfloat32_t,
		z0 = svadd_n_f32_x (svptrue_b32 (), z0, 2),
		z0 = svadd_x (svptrue_b32 (), z0, 2))

/*
** ptrue_add_2_f32_x_untied:
**	fmov	(z[0-9]+\.s), #2\.0(e\+0)?
**	fadd	z0\.s, (z1\.s, \1|\1, z1\.s)
**	ret
*/
TEST_UNIFORM_Z (ptrue_add_2_f32_x_untied, svfloat32_t,
		z0 = svadd_n_f32_x (svptrue_b32 (), z1, 2),
		z0 = svadd_x (svptrue_b32 (), z1, 2))
