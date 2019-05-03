/* { dg-do compile } */
/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sve_acle.h"

/*
** cmpeq_f64_tied:
**	fcmeq	p0\.d, p0/z, (z0\.d, z1\.d|z1\.d, z0\.d)
**	ret
*/
TEST_COMPARE_Z (cmpeq_f64_tied, svfloat64_t,
		p0 = svcmpeq_f64 (p0, z0, z1),
		p0 = svcmpeq (p0, z0, z1))

/*
** cmpeq_f64_untied:
**	fcmeq	p0\.d, p1/z, (z0\.d, z1\.d|z1\.d, z0\.d)
**	ret
*/
TEST_COMPARE_Z (cmpeq_f64_untied, svfloat64_t,
		p0 = svcmpeq_f64 (p1, z0, z1),
		p0 = svcmpeq (p1, z0, z1))

/*
** cmpeq_x0_f64:
**	mov	(z[0-9]+\.d), x0
**	fcmeq	p0\.d, p1/z, (z0\.d, \1|\1, z0\.d)
**	ret
*/
TEST_COMPARE_ZS (cmpeq_x0_f64, svfloat64_t, float64_t,
		 p0 = svcmpeq_n_f64 (p1, z0, x0),
		 p0 = svcmpeq (p1, z0, x0))

/*
** cmpeq_d4_f64:
**	mov	(z[0-9]+\.d), d4
**	fcmeq	p0\.d, p1/z, (z0\.d, \1|\1, z0\.d)
**	ret
*/
TEST_COMPARE_ZS (cmpeq_d4_f64, svfloat64_t, float64_t,
		 p0 = svcmpeq_n_f64 (p1, z0, d4),
		 p0 = svcmpeq (p1, z0, d4))

/*
** cmpeq_0_f64:
**	fcmeq	p0\.d, p1/z, z0\.d, #0\.0
**	ret
*/
TEST_COMPARE_ZS (cmpeq_0_f64, svfloat64_t, float64_t,
		 p0 = svcmpeq_n_f64 (p1, z0, 0),
		 p0 = svcmpeq (p1, z0, 0))

/*
** cmpeq_1_f64:
**	fmov	(z[0-9]+\.d), #1\.0(?:e\+0)?
**	fcmeq	p0\.d, p1/z, (z0\.d, \1|\1, z0\.d)
**	ret
*/
TEST_COMPARE_ZS (cmpeq_1_f64, svfloat64_t, float64_t,
		 p0 = svcmpeq_n_f64 (p1, z0, 1),
		 p0 = svcmpeq (p1, z0, 1))
