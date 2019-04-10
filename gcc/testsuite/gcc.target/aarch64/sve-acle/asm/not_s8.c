/* { dg-do compile } */
/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sve_acle.h"

/*
** not_s8_m_tied12:
**	not	z0\.b, p0/m, z0\.b
**	ret
*/
TEST_UNIFORM_Z (not_s8_m_tied12, svint8_t,
		z0 = svnot_s8_m (z0, p0, z0),
		z0 = svnot_m (z0, p0, z0))

/*
** not_s8_m_tied1:
**	not	z0\.b, p0/m, z1\.b
**	ret
*/
TEST_UNIFORM_Z (not_s8_m_tied1, svint8_t,
		z0 = svnot_s8_m (z0, p0, z1),
		z0 = svnot_m (z0, p0, z1))

/*
** not_s8_m_tied2:
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0, z1
**	not	z0\.b, p0/m, \1\.b
**	ret
*/
TEST_UNIFORM_Z (not_s8_m_tied2, svint8_t,
		z0 = svnot_s8_m (z1, p0, z0),
		z0 = svnot_m (z1, p0, z0))

/*
** not_s8_m_untied:
**	movprfx	z0, z2
**	not	z0\.b, p0/m, z1\.b
**	ret
*/
TEST_UNIFORM_Z (not_s8_m_untied, svint8_t,
		z0 = svnot_s8_m (z2, p0, z1),
		z0 = svnot_m (z2, p0, z1))

/*
** not_s8_z_tied1:
**	mov	(z[0-9]+)\.d, z0\.d
**	movprfx	z0\.b, p0/z, z0\.b
**	not	z0\.b, p0/m, \1\.b
**	ret
*/
TEST_UNIFORM_Z (not_s8_z_tied1, svint8_t,
		z0 = svnot_s8_z (p0, z0),
		z0 = svnot_z (p0, z0))

/*
** not_s8_z_untied:
**	movprfx	z0\.b, p0/z, z0\.b
**	not	z0\.b, p0/m, z1\.b
**	ret
*/
TEST_UNIFORM_Z (not_s8_z_untied, svint8_t,
		z0 = svnot_s8_z (p0, z1),
		z0 = svnot_z (p0, z1))

/*
** not_s8_x_tied1:
**	not	z0\.b, p0/m, z0\.b
**	ret
*/
TEST_UNIFORM_Z (not_s8_x_tied1, svint8_t,
		z0 = svnot_s8_x (p0, z0),
		z0 = svnot_x (p0, z0))

/*
** not_s8_x_untied:
**	not	z0\.b, p0/m, z1\.b
**	ret
*/
TEST_UNIFORM_Z (not_s8_x_untied, svint8_t,
		z0 = svnot_s8_x (p0, z1),
		z0 = svnot_x (p0, z1))
