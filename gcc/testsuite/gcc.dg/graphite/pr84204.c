/* { dg-do compile } */
/* { dg-options "-O -floop-parallelize-all -fno-tree-loop-im --param scev-max-expr-size=3" } */

int oc;

void
mo (int xd)
{
  while (xd < 1)
    {
      for (oc = 0; oc < 2; ++oc)
	{
	}

      ++xd;
    }
}
