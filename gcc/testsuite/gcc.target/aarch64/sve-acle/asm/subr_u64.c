/* { dg-do compile } */
/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sve_acle.h"

/*
** subr_u64_m:
**	subr	z0\.d, p0/m, z0\.d, z1\.d
**	ret
*/
TEST_UNIFORM_Z (subr_u64_m, svuint64_t,
		z0 = svsubr_u64_m (p0, z0, z1),
		z0 = svsubr_m (p0, z0, z1))

/*
** subr_u64_m_prfx:
**	movprfx	z0, z1
**	subr	z0\.d, p0/m, z0\.d, z2\.d
**	ret
*/
TEST_UNIFORM_Z (subr_u64_m_prfx, svuint64_t,
		z0 = svsubr_u64_m (p0, z1, z2),
		z0 = svsubr_m (p0, z1, z2))

/* Bad RA choice: no preferred output sequence.  */
TEST_UNIFORM_Z (subr_u64_m_bad_ra, svuint64_t,
		z1 = svsubr_u64_m (p0, z0, z1),
		z1 = svsubr_m (p0, z0, z1))

/*
** subr_x0_u64_m:
**	mov	(z[0-9]+\.d), x0
**	subr	z0\.d, p0/m, z0\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (subr_x0_u64_m, svuint64_t, uint64_t,
		 z0 = svsubr_n_u64_m (p0, z0, x0),
		 z0 = svsubr_m (p0, z0, x0))

/*
** subr_x0_u64_m_prfx:
**	mov	(z[0-9]+\.d), x0
**	movprfx	z0, z1
**	subr	z0\.d, p0/m, z0\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (subr_x0_u64_m_prfx, svuint64_t, uint64_t,
		 z0 = svsubr_n_u64_m (p0, z1, x0),
		 z0 = svsubr_m (p0, z1, x0))

/*
** subr_d0_u64_m:
**	mov	(z[0-9]+\.d), d0
**	subr	z1\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (subr_d0_u64_m, svuint64_t, uint64_t,
		 z1 = svsubr_n_u64_m (p0, z1, d0),
		 z1 = svsubr_m (p0, z1, d0))

/*
** subr_d0_u64_m_prfx:
**	mov	(z[0-9]+\.d), d0
**	movprfx	z1, z2
**	subr	z1\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (subr_d0_u64_m_prfx, svuint64_t, uint64_t,
		 z1 = svsubr_n_u64_m (p0, z2, d0),
		 z1 = svsubr_m (p0, z2, d0))

/*
** subr_1_u64_m:
**	mov	(z[0-9]+\.d), #1
**	subr	z0\.d, p0/m, z0\.d, \1
**	ret
*/
TEST_UNIFORM_Z (subr_1_u64_m, svuint64_t,
		z0 = svsubr_n_u64_m (p0, z0, 1),
		z0 = svsubr_m (p0, z0, 1))

/*
** subr_1_u64_m_prfx:
**	mov	(z[0-9]+\.d), #1
**	movprfx	z0, z1
**	subr	z0\.d, p0/m, z0\.d, \1
**	ret
*/
TEST_UNIFORM_Z (subr_1_u64_m_prfx, svuint64_t,
		z0 = svsubr_n_u64_m (p0, z1, 1),
		z0 = svsubr_m (p0, z1, 1))

/*
** subr_m2_u64_m:
**	mov	(z[0-9]+\.d), #-2
**	subr	z0\.d, p0/m, z0\.d, \1
**	ret
*/
TEST_UNIFORM_Z (subr_m2_u64_m, svuint64_t,
		z0 = svsubr_n_u64_m (p0, z0, -2),
		z0 = svsubr_m (p0, z0, -2))

/*
** subr_u64_z_tied:
**	movprfx	z0\.d, p0/z, z0\.d
**	subr	z0\.d, p0/m, z0\.d, z1\.d
**	ret
*/
TEST_UNIFORM_Z (subr_u64_z_tied, svuint64_t,
		z0 = svsubr_u64_z (p0, z0, z1),
		z0 = svsubr_z (p0, z0, z1))

/*
** subr_u64_z_rev:
**	movprfx	z1\.d, p0/z, z1\.d
**	sub	z1\.d, p0/m, z1\.d, z0\.d
**	ret
*/
TEST_UNIFORM_Z (subr_u64_z_rev, svuint64_t,
		z1 = svsubr_u64_z (p0, z0, z1),
		z1 = svsubr_z (p0, z0, z1))

/*
** subr_u64_z_untied:
**	movprfx	z0\.d, p0/z, z2\.d
**	sub	z0\.d, p0/m, z0\.d, z1\.d
**	ret
*/
TEST_UNIFORM_Z (subr_u64_z_untied, svuint64_t,
		z0 = svsubr_u64_z (p0, z1, z2),
		z0 = svsubr_z (p0, z1, z2))

/*
** subr_x0_u64_z_tied:
**	mov	(z[0-9]+\.d), x0
**	movprfx	z0\.d, p0/z, z0\.d
**	subr	z0\.d, p0/m, z0\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (subr_x0_u64_z_tied, svuint64_t, uint64_t,
		 z0 = svsubr_n_u64_z (p0, z0, x0),
		 z0 = svsubr_z (p0, z0, x0))

/*
** subr_x0_u64_z_untied:
**	mov	(z[0-9]+\.d), x0
**	movprfx	z0\.d, p0/z, \1
**	sub	z0\.d, p0/m, z0\.d, z1\.d
**	ret
*/
TEST_UNIFORM_ZS (subr_x0_u64_z_untied, svuint64_t, uint64_t,
		 z0 = svsubr_n_u64_z (p0, z1, x0),
		 z0 = svsubr_z (p0, z1, x0))

/*
** subr_d0_u64_z_tied:
**	mov	(z[0-9]+\.d), d0
**	movprfx	z1\.d, p0/z, z1\.d
**	subr	z1\.d, p0/m, z1\.d, \1
**	ret
*/
TEST_UNIFORM_ZS (subr_d0_u64_z_tied, svuint64_t, uint64_t,
		 z1 = svsubr_n_u64_z (p0, z1, d0),
		 z1 = svsubr_z (p0, z1, d0))

/*
** subr_d0_u64_z_untied:
**	mov	(z[0-9]+\.d), d0
**	movprfx	z1\.d, p0/z, \1
**	sub	z1\.d, p0/m, z1\.d, z2\.d
**	ret
*/
TEST_UNIFORM_ZS (subr_d0_u64_z_untied, svuint64_t, uint64_t,
		 z1 = svsubr_n_u64_z (p0, z2, d0),
		 z1 = svsubr_z (p0, z2, d0))

/*
** subr_u64_x_z0:
**	sub	z0\.d, z1\.d, z0\.d
**	ret
*/
TEST_UNIFORM_Z (subr_u64_x_z0, svuint64_t,
		z0 = svsubr_u64_x (p0, z0, z1),
		z0 = svsubr_x (p0, z0, z1))

/*
** subr_u64_x_z1:
**	sub	z1\.d, z1\.d, z0\.d
**	ret
*/
TEST_UNIFORM_Z (subr_u64_x_z1, svuint64_t,
		z1 = svsubr_u64_x (p0, z0, z1),
		z1 = svsubr_x (p0, z0, z1))

/*
** subr_u64_x_z2:
**	sub	z2\.d, z1\.d, z0\.d
**	ret
*/
TEST_UNIFORM_Z (subr_u64_x_z2, svuint64_t,
		z2 = svsubr_u64_x (p0, z0, z1),
		z2 = svsubr_x (p0, z0, z1))

/*
** subr_x0_u64_x_z0:
**	mov	(z[0-9]+\.d), x0
**	sub	z0\.d, \1, z0\.d
**	ret
*/
TEST_UNIFORM_ZS (subr_x0_u64_x_z0, svuint64_t, uint64_t,
		 z0 = svsubr_n_u64_x (p0, z0, x0),
		 z0 = svsubr_x (p0, z0, x0))

/*
** subr_x0_u64_x_z1:
**	mov	(z[0-9]+\.d), x0
**	sub	z1\.d, \1, z0\.d
**	ret
*/
TEST_UNIFORM_ZS (subr_x0_u64_x_z1, svuint64_t, uint64_t,
		 z1 = svsubr_n_u64_x (p0, z0, x0),
		 z1 = svsubr_x (p0, z0, x0))

/*
** subr_d0_u64_x_z1:
**	mov	(z[0-9]+\.d), d0
**	sub	z1\.d, \1, z1\.d
**	ret
*/
TEST_UNIFORM_ZS (subr_d0_u64_x_z1, svuint64_t, uint64_t,
		 z1 = svsubr_n_u64_x (p0, z1, d0),
		 z1 = svsubr_x (p0, z1, d0))

/*
** subr_d0_u64_x_z2:
**	mov	(z[0-9]+\.d), d0
**	sub	z2\.d, \1, z1\.d
**	ret
*/
TEST_UNIFORM_ZS (subr_d0_u64_x_z2, svuint64_t, uint64_t,
		 z2 = svsubr_n_u64_x (p0, z1, d0),
		 z2 = svsubr_x (p0, z1, d0))

/*
** subr_1_u64_x:
**	subr	z0\.d, z0\.d, #1
**	ret
*/
TEST_UNIFORM_Z (subr_1_u64_x, svuint64_t,
		z0 = svsubr_n_u64_x (p0, z0, 1),
		z0 = svsubr_x (p0, z0, 1))

/*
** subr_1_u64_x_prfx:
**	movprfx	z0, z1
**	subr	z0\.d, z0\.d, #1
**	ret
*/
TEST_UNIFORM_Z (subr_1_u64_x_prfx, svuint64_t,
		z0 = svsubr_n_u64_x (p0, z1, 1),
		z0 = svsubr_x (p0, z1, 1))

/*
** subr_127_u64_x:
**	subr	z0\.d, z0\.d, #127
**	ret
*/
TEST_UNIFORM_Z (subr_127_u64_x, svuint64_t,
		z0 = svsubr_n_u64_x (p0, z0, 127),
		z0 = svsubr_x (p0, z0, 127))

/*
** subr_128_u64_x:
**	subr	z0\.d, z0\.d, #128
**	ret
*/
TEST_UNIFORM_Z (subr_128_u64_x, svuint64_t,
		z0 = svsubr_n_u64_x (p0, z0, 128),
		z0 = svsubr_x (p0, z0, 128))

/*
** subr_255_u64_x:
**	subr	z0\.d, z0\.d, #255
**	ret
*/
TEST_UNIFORM_Z (subr_255_u64_x, svuint64_t,
		z0 = svsubr_n_u64_x (p0, z0, 255),
		z0 = svsubr_x (p0, z0, 255))

/*
** subr_256_u64_x:
**	subr	z0\.d, z0\.d, #256
**	ret
*/
TEST_UNIFORM_Z (subr_256_u64_x, svuint64_t,
		z0 = svsubr_n_u64_x (p0, z0, 256),
		z0 = svsubr_x (p0, z0, 256))

/*
** subr_511_u64_x:
**	mov	(z[0-9]+\.d), #511
**	sub	z0\.d, \1, z0\.d
**	ret
*/
TEST_UNIFORM_Z (subr_511_u64_x, svuint64_t,
		z0 = svsubr_n_u64_x (p0, z0, 511),
		z0 = svsubr_x (p0, z0, 511))

/*
** subr_512_u64_x:
**	subr	z0\.d, z0\.d, #512
**	ret
*/
TEST_UNIFORM_Z (subr_512_u64_x, svuint64_t,
		z0 = svsubr_n_u64_x (p0, z0, 512),
		z0 = svsubr_x (p0, z0, 512))

/*
** subr_65280_u64_x:
**	subr	z0\.d, z0\.d, #65280
**	ret
*/
TEST_UNIFORM_Z (subr_65280_u64_x, svuint64_t,
		z0 = svsubr_n_u64_x (p0, z0, 0xff00),
		z0 = svsubr_x (p0, z0, 0xff00))

/*
** subr_65535_u64_x:
**	mov	(z[0-9]+\.d), #65535
**	sub	z0\.d, \1, z0\.d
**	ret
*/
TEST_UNIFORM_Z (subr_65535_u64_x, svuint64_t,
		z0 = svsubr_n_u64_x (p0, z0, 65535),
		z0 = svsubr_x (p0, z0, 65535))

/*
** subr_65536_u64_x:
**	mov	(z[0-9]+\.d), #65536
**	sub	z0\.d, \1, z0\.d
**	ret
*/
TEST_UNIFORM_Z (subr_65536_u64_x, svuint64_t,
		z0 = svsubr_n_u64_x (p0, z0, 65536),
		z0 = svsubr_x (p0, z0, 65536))

/*
** subr_m1_u64_x:
**	mov	(z[0-9]+)\.b, #-1
**	sub	z0\.d, \1\.d, z0\.d
**	ret
*/
TEST_UNIFORM_Z (subr_m1_u64_x, svuint64_t,
		z0 = svsubr_n_u64_x (p0, z0, -1),
		z0 = svsubr_x (p0, z0, -1))

/*
** subr_m1_u64_x_untied:
**	mov	(z[0-9]+)\.b, #-1
**	sub	z0\.d, \1\.d, z1\.d
**	ret
*/
TEST_UNIFORM_Z (subr_m1_u64_x_untied, svuint64_t,
		z0 = svsubr_n_u64_x (p0, z1, -1),
		z0 = svsubr_x (p0, z1, -1))
