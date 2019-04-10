/* { dg-do compile } */
/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sve_acle.h"

/*
** mls_u64_m_tied1:
**	mls	z0\.d, p0/m, z1\.d, z2\.d
**	ret
*/
TEST_UNIFORM_Z (mls_u64_m_tied1, svuint64_t,
		z0 = svmls_u64_m (p0, z0, z1, z2),
		z0 = svmls_m (p0, z0, z1, z2))

/*
** mls_u64_m_tied2:
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0, z1
**	mls	z0\.d, p0/m, \1\.d, z2\.d
**	ret
*/
TEST_UNIFORM_Z (mls_u64_m_tied2, svuint64_t,
		z0 = svmls_u64_m (p0, z1, z0, z2),
		z0 = svmls_m (p0, z1, z0, z2))

/*
** mls_u64_m_tied3:
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0, z1
**	mls	z0\.d, p0/m, z2\.d, \1\.d
**	ret
*/
TEST_UNIFORM_Z (mls_u64_m_tied3, svuint64_t,
		z0 = svmls_u64_m (p0, z1, z2, z0),
		z0 = svmls_m (p0, z1, z2, z0))

/*
** mls_u64_m_untied:
**	movprfx	z0, z1
**	mls	z0\.d, p0/m, z2\.d, z3\.d
**	ret
*/
TEST_UNIFORM_Z (mls_u64_m_untied, svuint64_t,
		z0 = svmls_u64_m (p0, z1, z2, z3),
		z0 = svmls_m (p0, z1, z2, z3))

/*
** mls_x0_u64_m_tied1:
**	mov	(z[0-9]+\.d), x0
**	mls	z0\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_x0_u64_m_tied1, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_m (p0, z0, z1, x0),
		 z0 = svmls_m (p0, z0, z1, x0))

/*
** mls_x0_u64_m_tied2:
**	mov	(z[0-9]+\.d), x0
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0, z1
**	mls	z0\.d, p0/m, \2\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_x0_u64_m_tied2, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_m (p0, z1, z0, x0),
		 z0 = svmls_m (p0, z1, z0, x0))

/*
** mls_x0_u64_m_untied:
**	mov	(z[0-9]+\.d), x0
**	movprfx	z0, z1
**	mls	z0\.d, p0/m, z2\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_x0_u64_m_untied, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_m (p0, z1, z2, x0),
		 z0 = svmls_m (p0, z1, z2, x0))

/*
** mls_d4_u64_m_tied1:
**	mov	(z[0-9]+\.d), d4
**	mls	z0\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_d4_u64_m_tied1, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_m (p0, z0, z1, d4),
		 z0 = svmls_m (p0, z0, z1, d4))

/*
** mls_d4_u64_m_tied2:
**	mov	(z[0-9]+\.d), d4
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0, z1
**	mls	z0\.d, p0/m, \2\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_d4_u64_m_tied2, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_m (p0, z1, z0, d4),
		 z0 = svmls_m (p0, z1, z0, d4))

/*
** mls_d4_u64_m_untied:
**	mov	(z[0-9]+\.d), d4
**	movprfx	z0, z1
**	mls	z0\.d, p0/m, z2\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_d4_u64_m_untied, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_m (p0, z1, z2, d4),
		 z0 = svmls_m (p0, z1, z2, d4))

/*
** mls_2_u64_m_tied1:
**	mov	(z[0-9]+\.d), #2
**	mls	z0\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_Z (mls_2_u64_m_tied1, svuint64_t,
		z0 = svmls_n_u64_m (p0, z0, z1, 2),
		z0 = svmls_m (p0, z0, z1, 2))

/*
** mls_2_u64_m_tied2:
**	mov	(z[0-9]+\.d), #2
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0, z1
**	mls	z0\.d, p0/m, \2\.d, \1
**	ret
*/
TEST_UNIFORM_Z (mls_2_u64_m_tied2, svuint64_t,
		z0 = svmls_n_u64_m (p0, z1, z0, 2),
		z0 = svmls_m (p0, z1, z0, 2))

/*
** mls_2_u64_m_untied:
**	mov	(z[0-9]+\.d), #2
**	movprfx	z0, z1
**	mls	z0\.d, p0/m, z2\.d, \1
**	ret
*/
TEST_UNIFORM_Z (mls_2_u64_m_untied, svuint64_t,
		z0 = svmls_n_u64_m (p0, z1, z2, 2),
		z0 = svmls_m (p0, z1, z2, 2))

/*
** mls_u64_z_tied1:
**	movprfx	z0\.d, p0/z, z0\.d
**	mls	z0\.d, p0/m, z1\.d, z2\.d
**	ret
*/
TEST_UNIFORM_Z (mls_u64_z_tied1, svuint64_t,
		z0 = svmls_u64_z (p0, z0, z1, z2),
		z0 = svmls_z (p0, z0, z1, z2))

/*
** mls_u64_z_tied2:
**	movprfx	z0\.d, p0/z, z0\.d
**	msb	z0\.d, p0/m, z2\.d, z1\.d
**	ret
*/
TEST_UNIFORM_Z (mls_u64_z_tied2, svuint64_t,
		z0 = svmls_u64_z (p0, z1, z0, z2),
		z0 = svmls_z (p0, z1, z0, z2))

/*
** mls_u64_z_tied3:
**	movprfx	z0\.d, p0/z, z0\.d
**	msb	z0\.d, p0/m, z2\.d, z1\.d
**	ret
*/
TEST_UNIFORM_Z (mls_u64_z_tied3, svuint64_t,
		z0 = svmls_u64_z (p0, z1, z2, z0),
		z0 = svmls_z (p0, z1, z2, z0))

/*
** mls_u64_z_untied:
**	movprfx	z0\.d, p0/z, z1\.d
**	mls	z0\.d, p0/m, z2\.d, z3\.d
**	ret
*/
TEST_UNIFORM_Z (mls_u64_z_untied, svuint64_t,
		z0 = svmls_u64_z (p0, z1, z2, z3),
		z0 = svmls_z (p0, z1, z2, z3))

/*
** mls_x0_u64_z_tied1:
**	mov	(z[0-9]+\.d), x0
**	movprfx	z0\.d, p0/z, z0\.d
**	mls	z0\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_x0_u64_z_tied1, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_z (p0, z0, z1, x0),
		 z0 = svmls_z (p0, z0, z1, x0))

/*
** mls_x0_u64_z_tied2:
**	mov	(z[0-9]+\.d), x0
**	movprfx	z0\.d, p0/z, z0\.d
**	msb	z0\.d, p0/m, \1, z1\.d
**	ret
*/
TEST_UNIFORM_ZS (mls_x0_u64_z_tied2, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_z (p0, z1, z0, x0),
		 z0 = svmls_z (p0, z1, z0, x0))

/*
** mls_x0_u64_z_untied: { xfail *-*-* }
**	mov	(z[0-9]+\.d), x0
**	movprfx	z0\.d, p0/z, z1\.d
**	mls	z0\.d, p0/m, z2\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_x0_u64_z_untied, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_z (p0, z1, z2, x0),
		 z0 = svmls_z (p0, z1, z2, x0))

/*
** mls_d4_u64_z_tied1:
**	mov	(z[0-9]+\.d), d4
**	movprfx	z0\.d, p0/z, z0\.d
**	mls	z0\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_d4_u64_z_tied1, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_z (p0, z0, z1, d4),
		 z0 = svmls_z (p0, z0, z1, d4))

/*
** mls_d4_u64_z_tied2:
**	mov	(z[0-9]+\.d), d4
**	movprfx	z0\.d, p0/z, z0\.d
**	msb	z0\.d, p0/m, \1, z1\.d
**	ret
*/
TEST_UNIFORM_ZS (mls_d4_u64_z_tied2, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_z (p0, z1, z0, d4),
		 z0 = svmls_z (p0, z1, z0, d4))

/*
** mls_d4_u64_z_untied: { xfail *-*-* }
**	mov	(z[0-9]+\.d), d4
**	movprfx	z0\.d, p0/z, z1\.d
**	mls	z0\.d, p0/m, z2\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_d4_u64_z_untied, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_z (p0, z1, z2, d4),
		 z0 = svmls_z (p0, z1, z2, d4))

/*
** mls_u64_x_tied1:
**	mls	z0\.d, p0/m, z1\.d, z2\.d
**	ret
*/
TEST_UNIFORM_Z (mls_u64_x_tied1, svuint64_t,
		z0 = svmls_u64_x (p0, z0, z1, z2),
		z0 = svmls_x (p0, z0, z1, z2))

/*
** mls_u64_x_tied2:
**	msb	z0\.d, p0/m, z2\.d, z1\.d
**	ret
*/
TEST_UNIFORM_Z (mls_u64_x_tied2, svuint64_t,
		z0 = svmls_u64_x (p0, z1, z0, z2),
		z0 = svmls_x (p0, z1, z0, z2))

/*
** mls_u64_x_tied3:
**	msb	z0\.d, p0/m, z2\.d, z1\.d
**	ret
*/
TEST_UNIFORM_Z (mls_u64_x_tied3, svuint64_t,
		z0 = svmls_u64_x (p0, z1, z2, z0),
		z0 = svmls_x (p0, z1, z2, z0))

/*
** mls_u64_x_untied:
**	movprfx	z0, z1
**	mls	z0\.d, p0/m, z2\.d, z3\.d
**	ret
*/
TEST_UNIFORM_Z (mls_u64_x_untied, svuint64_t,
		z0 = svmls_u64_x (p0, z1, z2, z3),
		z0 = svmls_x (p0, z1, z2, z3))

/*
** mls_x0_u64_x_tied1:
**	mov	(z[0-9]+\.d), x0
**	mls	z0\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_x0_u64_x_tied1, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_x (p0, z0, z1, x0),
		 z0 = svmls_x (p0, z0, z1, x0))

/*
** mls_x0_u64_x_tied2:
**	mov	(z[0-9]+\.d), x0
**	msb	z0\.d, p0/m, \1, z1\.d
**	ret
*/
TEST_UNIFORM_ZS (mls_x0_u64_x_tied2, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_x (p0, z1, z0, x0),
		 z0 = svmls_x (p0, z1, z0, x0))

/*
** mls_x0_u64_x_untied:
**	mov	z0\.d, x0
**	msb	z0\.d, p0/m, z2\.d, z1\.d
**	ret
*/
TEST_UNIFORM_ZS (mls_x0_u64_x_untied, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_x (p0, z1, z2, x0),
		 z0 = svmls_x (p0, z1, z2, x0))

/*
** mls_d4_u64_x_tied1:
**	mov	(z[0-9]+\.d), d4
**	mls	z0\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mls_d4_u64_x_tied1, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_x (p0, z0, z1, d4),
		 z0 = svmls_x (p0, z0, z1, d4))

/*
** mls_d4_u64_x_tied2:
**	mov	(z[0-9]+\.d), d4
**	msb	z0\.d, p0/m, \1, z1\.d
**	ret
*/
TEST_UNIFORM_ZS (mls_d4_u64_x_tied2, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_x (p0, z1, z0, d4),
		 z0 = svmls_x (p0, z1, z0, d4))

/*
** mls_d4_u64_x_untied:
**	mov	z0\.d, d4
**	msb	z0\.d, p0/m, z2\.d, z1\.d
**	ret
*/
TEST_UNIFORM_ZS (mls_d4_u64_x_untied, svuint64_t, uint64_t,
		 z0 = svmls_n_u64_x (p0, z1, z2, d4),
		 z0 = svmls_x (p0, z1, z2, d4))

/*
** mls_2_u64_x_tied1:
**	mov	(z[0-9]+\.d), #2
**	mls	z0\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_Z (mls_2_u64_x_tied1, svuint64_t,
		z0 = svmls_n_u64_x (p0, z0, z1, 2),
		z0 = svmls_x (p0, z0, z1, 2))

/*
** mls_2_u64_x_tied2:
**	mov	(z[0-9]+\.d), #2
**	msb	z0\.d, p0/m, \1, z1\.d
**	ret
*/
TEST_UNIFORM_Z (mls_2_u64_x_tied2, svuint64_t,
		z0 = svmls_n_u64_x (p0, z1, z0, 2),
		z0 = svmls_x (p0, z1, z0, 2))

/*
** mls_2_u64_x_untied:
**	mov	z0\.d, #2
**	msb	z0\.d, p0/m, z2\.d, z1\.d
**	ret
*/
TEST_UNIFORM_Z (mls_2_u64_x_untied, svuint64_t,
		z0 = svmls_n_u64_x (p0, z1, z2, 2),
		z0 = svmls_x (p0, z1, z2, 2))
