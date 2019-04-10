/* { dg-do compile } */
/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sve_acle.h"

/*
** add_u8_m_tied1:
**	add	z0\.b, p0/m, z0\.b, z1\.b
**	ret
*/
TEST_UNIFORM_Z (add_u8_m_tied1, svuint8_t,
		z0 = svadd_u8_m (p0, z0, z1),
		z0 = svadd_m (p0, z0, z1))

/* Bad RA choice: no preferred output sequence.  */
TEST_UNIFORM_Z (add_u8_m_tied2, svuint8_t,
		z0 = svadd_u8_m (p0, z1, z0),
		z0 = svadd_m (p0, z1, z0))

/*
** add_u8_m_untied:
**	movprfx	z0, z1
**	add	z0\.b, p0/m, z0\.b, z2\.b
**	ret
*/
TEST_UNIFORM_Z (add_u8_m_untied, svuint8_t,
		z0 = svadd_u8_m (p0, z1, z2),
		z0 = svadd_m (p0, z1, z2))

/*
** add_w0_u8_m_tied1:
**	mov	(z[0-9]+\.b), w0
**	add	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (add_w0_u8_m_tied1, svuint8_t, uint8_t,
		 z0 = svadd_n_u8_m (p0, z0, x0),
		 z0 = svadd_m (p0, z0, x0))

/*
** add_w0_u8_m_untied:
**	mov	(z[0-9]+\.b), w0
**	movprfx	z0, z1
**	add	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (add_w0_u8_m_untied, svuint8_t, uint8_t,
		 z0 = svadd_n_u8_m (p0, z1, x0),
		 z0 = svadd_m (p0, z1, x0))

/*
** add_b4_u8_m_tied1:
**	mov	(z[0-9]+\.b), b4
**	add	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (add_b4_u8_m_tied1, svuint8_t, uint8_t,
		 z0 = svadd_n_u8_m (p0, z0, d4),
		 z0 = svadd_m (p0, z0, d4))

/*
** add_b4_u8_m_untied:
**	mov	(z[0-9]+\.b), b4
**	movprfx	z0, z1
**	add	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (add_b4_u8_m_untied, svuint8_t, uint8_t,
		 z0 = svadd_n_u8_m (p0, z1, d4),
		 z0 = svadd_m (p0, z1, d4))

/*
** add_1_u8_m_tied1:
**	mov	(z[0-9]+\.b), #1
**	add	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_Z (add_1_u8_m_tied1, svuint8_t,
		z0 = svadd_n_u8_m (p0, z0, 1),
		z0 = svadd_m (p0, z0, 1))

/*
** add_1_u8_m_untied:
**	mov	(z[0-9]+\.b), #1
**	movprfx	z0, z1
**	add	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_Z (add_1_u8_m_untied, svuint8_t,
		z0 = svadd_n_u8_m (p0, z1, 1),
		z0 = svadd_m (p0, z1, 1))

/*
** add_m1_u8_m:
**	mov	(z[0-9]+\.b), #(-1|255)
**	add	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_Z (add_m1_u8_m, svuint8_t,
		z0 = svadd_n_u8_m (p0, z0, -1),
		z0 = svadd_m (p0, z0, -1))

/*
** add_u8_z_tied1:
**	movprfx	z0\.b, p0/z, z0\.b
**	add	z0\.b, p0/m, z0\.b, z1\.b
**	ret
*/
TEST_UNIFORM_Z (add_u8_z_tied1, svuint8_t,
		z0 = svadd_u8_z (p0, z0, z1),
		z0 = svadd_z (p0, z0, z1))

/*
** add_u8_z_tied2:
**	movprfx	z0\.b, p0/z, z0\.b
**	add	z0\.b, p0/m, z0\.b, z1\.b
**	ret
*/
TEST_UNIFORM_Z (add_u8_z_tied2, svuint8_t,
		z0 = svadd_u8_z (p0, z1, z0),
		z0 = svadd_z (p0, z1, z0))

/*
** add_u8_z_untied:
**	movprfx	z0\.b, p0/z, z1\.b
**	add	z0\.b, p0/m, z0\.b, z2\.b
**	ret
*/
TEST_UNIFORM_Z (add_u8_z_untied, svuint8_t,
		z0 = svadd_u8_z (p0, z1, z2),
		z0 = svadd_z (p0, z1, z2))

/*
** add_w0_u8_z_tied1:
**	mov	(z[0-9]+\.b), w0
**	movprfx	z0\.b, p0/z, z0\.b
**	add	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (add_w0_u8_z_tied1, svuint8_t, uint8_t,
		 z0 = svadd_n_u8_z (p0, z0, x0),
		 z0 = svadd_z (p0, z0, x0))

/*
** add_w0_u8_z_untied: { xfail *-*-* }
**	mov	(z[0-9]+\.b), w0
**	movprfx	z0\.b, p0/z, z1\.b
**	add	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (add_w0_u8_z_untied, svuint8_t, uint8_t,
		 z0 = svadd_n_u8_z (p0, z1, x0),
		 z0 = svadd_z (p0, z1, x0))

/*
** add_b4_u8_z_tied1:
**	mov	(z[0-9]+\.b), b4
**	movprfx	z0\.b, p0/z, z0\.b
**	add	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (add_b4_u8_z_tied1, svuint8_t, uint8_t,
		 z0 = svadd_n_u8_z (p0, z0, d4),
		 z0 = svadd_z (p0, z0, d4))

/*
** add_b4_u8_z_untied: { xfail *-*-* }
**	mov	(z[0-9]+\.b), b4
**	movprfx	z0\.b, p0/z, z1\.b
**	add	z0\.b, p0/m, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (add_b4_u8_z_untied, svuint8_t, uint8_t,
		 z0 = svadd_n_u8_z (p0, z1, d4),
		 z0 = svadd_z (p0, z1, d4))

/*
** add_u8_x_tied1:
**	add	z0\.b, z0\.b, z1\.b
**	ret
*/
TEST_UNIFORM_Z (add_u8_x_tied1, svuint8_t,
		z0 = svadd_u8_x (p0, z0, z1),
		z0 = svadd_x (p0, z0, z1))

/*
** add_u8_x_tied2:
**	add	z0\.b, z1\.b, z0\.b
**	ret
*/
TEST_UNIFORM_Z (add_u8_x_tied2, svuint8_t,
		z0 = svadd_u8_x (p0, z1, z0),
		z0 = svadd_x (p0, z1, z0))

/*
** add_u8_x_untied:
**	add	z0\.b, z1\.b, z2\.b
**	ret
*/
TEST_UNIFORM_Z (add_u8_x_untied, svuint8_t,
		z0 = svadd_u8_x (p0, z1, z2),
		z0 = svadd_x (p0, z1, z2))

/*
** add_w0_u8_x_tied1:
**	mov	(z[0-9]+\.b), w0
**	add	z0\.b, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (add_w0_u8_x_tied1, svuint8_t, uint8_t,
		 z0 = svadd_n_u8_x (p0, z0, x0),
		 z0 = svadd_x (p0, z0, x0))

/*
** add_w0_u8_x_untied:
**	mov	(z[0-9]+\.b), w0
**	add	z0\.b, z1\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (add_w0_u8_x_untied, svuint8_t, uint8_t,
		 z0 = svadd_n_u8_x (p0, z1, x0),
		 z0 = svadd_x (p0, z1, x0))

/*
** add_b4_u8_x_tied1:
**	mov	(z[0-9]+\.b), b4
**	add	z0\.b, z0\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (add_b4_u8_x_tied1, svuint8_t, uint8_t,
		 z0 = svadd_n_u8_x (p0, z0, d4),
		 z0 = svadd_x (p0, z0, d4))

/*
** add_b4_u8_x_untied:
**	mov	(z[0-9]+\.b), b4
**	add	z0\.b, z1\.b, \1
**	ret
*/
TEST_UNIFORM_ZS (add_b4_u8_x_untied, svuint8_t, uint8_t,
		 z0 = svadd_n_u8_x (p0, z1, d4),
		 z0 = svadd_x (p0, z1, d4))

/*
** add_1_u8_x_tied1:
**	add	z0\.b, z0\.b, #1
**	ret
*/
TEST_UNIFORM_Z (add_1_u8_x_tied1, svuint8_t,
		z0 = svadd_n_u8_x (p0, z0, 1),
		z0 = svadd_x (p0, z0, 1))

/*
** add_1_u8_x_untied:
**	movprfx	z0, z1
**	add	z0\.b, z0\.b, #1
**	ret
*/
TEST_UNIFORM_Z (add_1_u8_x_untied, svuint8_t,
		z0 = svadd_n_u8_x (p0, z1, 1),
		z0 = svadd_x (p0, z1, 1))

/*
** add_127_u8_x:
**	add	z0\.b, z0\.b, #127
**	ret
*/
TEST_UNIFORM_Z (add_127_u8_x, svuint8_t,
		z0 = svadd_n_u8_x (p0, z0, 127),
		z0 = svadd_x (p0, z0, 127))

/*
** add_128_u8_x:
**	add	z0\.b, z0\.b, #128
**	ret
*/
TEST_UNIFORM_Z (add_128_u8_x, svuint8_t,
		z0 = svadd_n_u8_x (p0, z0, 128),
		z0 = svadd_x (p0, z0, 128))

/*
** add_255_u8_x:
**	add	z0\.b, z0\.b, #255
**	ret
*/
TEST_UNIFORM_Z (add_255_u8_x, svuint8_t,
		z0 = svadd_n_u8_x (p0, z0, 255),
		z0 = svadd_x (p0, z0, 255))

/*
** add_m1_u8_x:
**	add	z0\.b, z0\.b, #255
**	ret
*/
TEST_UNIFORM_Z (add_m1_u8_x, svuint8_t,
		z0 = svadd_n_u8_x (p0, z0, -1),
		z0 = svadd_x (p0, z0, -1))

/*
** add_m127_u8_x:
**	add	z0\.b, z0\.b, #129
**	ret
*/
TEST_UNIFORM_Z (add_m127_u8_x, svuint8_t,
		z0 = svadd_n_u8_x (p0, z0, -127),
		z0 = svadd_x (p0, z0, -127))

/*
** add_m128_u8_x:
**	add	z0\.b, z0\.b, #128
**	ret
*/
TEST_UNIFORM_Z (add_m128_u8_x, svuint8_t,
		z0 = svadd_n_u8_x (p0, z0, -128),
		z0 = svadd_x (p0, z0, -128))
