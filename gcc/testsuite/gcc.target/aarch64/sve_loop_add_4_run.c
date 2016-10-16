/* { dg-do run { target aarch64_sve_hw } } */
/* { dg-options "-O2 -ftree-vectorize -march=armv8-a+sve" } */

#include "sve_loop_add_4.c"

#define N 131
#define BASE 41

#define TEST_LOOP(TYPE, NAME, STEP)				\
  {								\
    TYPE a[N];							\
    for (int i = 0; i < N; ++i)					\
      a[i] = i * i + i % 5;					\
    test_##TYPE##_##NAME (a, BASE, N);				\
    for (int i = 0; i < N; ++i)					\
      {								\
	TYPE expected = i * i + i % 5 + BASE + i * STEP;	\
	if (a[i] != expected)					\
	  __builtin_abort ();					\
      }								\
  }

int
main (void)
{
  TEST_ALL (TEST_LOOP)
}
