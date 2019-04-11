/* { dg-do compile } */
/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sve_acle.h"

/*
** mulh_u64_m_tied1:
**	umulh	z0\.d, p0/m, z0\.d, z1\.d
**	ret
*/
TEST_UNIFORM_Z (mulh_u64_m_tied1, svuint64_t,
		z0 = svmulh_u64_m (p0, z0, z1),
		z0 = svmulh_m (p0, z0, z1))

/* Bad RA choice: no preferred output sequence.  */
TEST_UNIFORM_Z (mulh_u64_m_tied2, svuint64_t,
		z1 = svmulh_u64_m (p0, z0, z1),
		z1 = svmulh_m (p0, z0, z1))

/*
** mulh_u64_m_untied:
**	movprfx	z0, z1
**	umulh	z0\.d, p0/m, z0\.d, z2\.d
**	ret
*/
TEST_UNIFORM_Z (mulh_u64_m_untied, svuint64_t,
		z0 = svmulh_u64_m (p0, z1, z2),
		z0 = svmulh_m (p0, z1, z2))

/*
** mulh_x0_u64_m_tied1:
**	mov	(z[0-9]+\.d), x0
**	umulh	z0\.d, p0/m, z0\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mulh_x0_u64_m_tied1, svuint64_t, uint64_t,
		 z0 = svmulh_n_u64_m (p0, z0, x0),
		 z0 = svmulh_m (p0, z0, x0))

/*
** mulh_x0_u64_m_untied:
**	mov	(z[0-9]+\.d), x0
**	movprfx	z0, z1
**	umulh	z0\.d, p0/m, z0\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mulh_x0_u64_m_untied, svuint64_t, uint64_t,
		 z0 = svmulh_n_u64_m (p0, z1, x0),
		 z0 = svmulh_m (p0, z1, x0))

/*
** mulh_d0_u64_m_tied1:
**	mov	(z[0-9]+\.d), d0
**	umulh	z1\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mulh_d0_u64_m_tied1, svuint64_t, uint64_t,
		 z1 = svmulh_n_u64_m (p0, z1, d0),
		 z1 = svmulh_m (p0, z1, d0))

/*
** mulh_d0_u64_m_untied:
**	mov	(z[0-9]+\.d), d0
**	movprfx	z1, z2
**	umulh	z1\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mulh_d0_u64_m_untied, svuint64_t, uint64_t,
		 z1 = svmulh_n_u64_m (p0, z2, d0),
		 z1 = svmulh_m (p0, z2, d0))

/*
** mulh_2_u64_m_tied1:
**	mov	(z[0-9]+\.d), #2
**	umulh	z0\.d, p0/m, z0\.d, \1
**	ret
*/
TEST_UNIFORM_Z (mulh_2_u64_m_tied1, svuint64_t,
		z0 = svmulh_n_u64_m (p0, z0, 2),
		z0 = svmulh_m (p0, z0, 2))

/*
** mulh_2_u64_m_untied:
**	mov	(z[0-9]+\.d), #2
**	movprfx	z0, z1
**	umulh	z0\.d, p0/m, z0\.d, \1
**	ret
*/
TEST_UNIFORM_Z (mulh_2_u64_m_untied, svuint64_t,
		z0 = svmulh_n_u64_m (p0, z1, 2),
		z0 = svmulh_m (p0, z1, 2))

/*
** mulh_u64_z_tied1:
**	movprfx	z0\.d, p0/z, z0\.d
**	umulh	z0\.d, p0/m, z0\.d, z1\.d
**	ret
*/
TEST_UNIFORM_Z (mulh_u64_z_tied1, svuint64_t,
		z0 = svmulh_u64_z (p0, z0, z1),
		z0 = svmulh_z (p0, z0, z1))

/*
** mulh_u64_z_tied2:
**	movprfx	z1\.d, p0/z, z1\.d
**	umulh	z1\.d, p0/m, z1\.d, z0\.d
**	ret
*/
TEST_UNIFORM_Z (mulh_u64_z_tied2, svuint64_t,
		z1 = svmulh_u64_z (p0, z0, z1),
		z1 = svmulh_z (p0, z0, z1))

/*
** mulh_u64_z_untied:
**	movprfx	z0\.d, p0/z, z1\.d
**	umulh	z0\.d, p0/m, z0\.d, z2\.d
**	ret
*/
TEST_UNIFORM_Z (mulh_u64_z_untied, svuint64_t,
		z0 = svmulh_u64_z (p0, z1, z2),
		z0 = svmulh_z (p0, z1, z2))

/*
** mulh_x0_u64_z_tied1:
**	mov	(z[0-9]+\.d), x0
**	movprfx	z0\.d, p0/z, z0\.d
**	umulh	z0\.d, p0/m, z0\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mulh_x0_u64_z_tied1, svuint64_t, uint64_t,
		 z0 = svmulh_n_u64_z (p0, z0, x0),
		 z0 = svmulh_z (p0, z0, x0))

/*
** mulh_x0_u64_z_untied:
**	mov	(z[0-9]+\.d), x0
**	movprfx	z0\.d, p0/z, \1
**	umulh	z0\.d, p0/m, z0\.d, z1\.d
**	ret
*/
TEST_UNIFORM_ZS (mulh_x0_u64_z_untied, svuint64_t, uint64_t,
		 z0 = svmulh_n_u64_z (p0, z1, x0),
		 z0 = svmulh_z (p0, z1, x0))

/*
** mulh_d0_u64_z_tied1:
**	mov	(z[0-9]+\.d), d0
**	movprfx	z1\.d, p0/z, z1\.d
**	umulh	z1\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mulh_d0_u64_z_tied1, svuint64_t, uint64_t,
		 z1 = svmulh_n_u64_z (p0, z1, d0),
		 z1 = svmulh_z (p0, z1, d0))

/*
** mulh_d0_u64_z_untied:
**	mov	(z[0-9]+\.d), d0
**	movprfx	z1\.d, p0/z, \1
**	umulh	z1\.d, p0/m, z1\.d, z2\.d
**	ret
*/
TEST_UNIFORM_ZS (mulh_d0_u64_z_untied, svuint64_t, uint64_t,
		 z1 = svmulh_n_u64_z (p0, z2, d0),
		 z1 = svmulh_z (p0, z2, d0))

/*
** mulh_u64_x_tied1:
**	umulh	z0\.d, p0/m, z0\.d, z1\.d
**	ret
*/
TEST_UNIFORM_Z (mulh_u64_x_tied1, svuint64_t,
		z0 = svmulh_u64_x (p0, z0, z1),
		z0 = svmulh_x (p0, z0, z1))

/*
** mulh_u64_x_tied2:
**	umulh	z1\.d, p0/m, z1\.d, z0\.d
**	ret
*/
TEST_UNIFORM_Z (mulh_u64_x_tied2, svuint64_t,
		z1 = svmulh_u64_x (p0, z0, z1),
		z1 = svmulh_x (p0, z0, z1))

/*
** mulh_u64_x_untied:
**	movprfx	z2, z0
**	umulh	z2\.d, p0/m, z2\.d, z1\.d
**	ret
*/
TEST_UNIFORM_Z (mulh_u64_x_untied, svuint64_t,
		z2 = svmulh_u64_x (p0, z0, z1),
		z2 = svmulh_x (p0, z0, z1))

/*
** mulh_x0_u64_x_tied1:
**	mov	(z[0-9]+\.d), x0
**	umulh	z0\.d, p0/m, z0\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mulh_x0_u64_x_tied1, svuint64_t, uint64_t,
		 z0 = svmulh_n_u64_x (p0, z0, x0),
		 z0 = svmulh_x (p0, z0, x0))

/*
** mulh_x0_u64_x_untied:
**	mov	z1\.d, x0
**	umulh	z1\.d, p0/m, z1\.d, z0\.d
**	ret
*/
TEST_UNIFORM_ZS (mulh_x0_u64_x_untied, svuint64_t, uint64_t,
		 z1 = svmulh_n_u64_x (p0, z0, x0),
		 z1 = svmulh_x (p0, z0, x0))

/*
** mulh_d0_u64_x_tied1:
**	mov	(z[0-9]+\.d), d0
**	umulh	z1\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (mulh_d0_u64_x_tied1, svuint64_t, uint64_t,
		 z1 = svmulh_n_u64_x (p0, z1, d0),
		 z1 = svmulh_x (p0, z1, d0))

/*
** mulh_d0_u64_x_untied:
**	mov	z2\.d, d0
**	umulh	z2\.d, p0/m, z2\.d, z1\.d
**	ret
*/
TEST_UNIFORM_ZS (mulh_d0_u64_x_untied, svuint64_t, uint64_t,
		 z2 = svmulh_n_u64_x (p0, z1, d0),
		 z2 = svmulh_x (p0, z1, d0))

/*
** mulh_2_u64_x_tied1:
**	mov	(z[0-9]+\.d), #2
**	umulh	z0\.d, p0/m, z0\.d, \1
**	ret
*/
TEST_UNIFORM_Z (mulh_2_u64_x_tied1, svuint64_t,
		z0 = svmulh_n_u64_x (p0, z0, 2),
		z0 = svmulh_x (p0, z0, 2))

/*
** mulh_2_u64_x_untied:
**	mov	z0\.d, #2
**	umulh	z0\.d, p0/m, z0\.d, z1\.d
**	ret
*/
TEST_UNIFORM_Z (mulh_2_u64_x_untied, svuint64_t,
		z0 = svmulh_n_u64_x (p0, z1, 2),
		z0 = svmulh_x (p0, z1, 2))
