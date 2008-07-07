/* { dg-do compile } */
/* { dg-options "-O2 -fdump-tree-vrp2 -fno-early-inlining" } */

typedef struct {
  int code;
} *rtx;

static inline void *zero ()
{
  return 0;
}
static inline int three ()
{
  return 3;
}

int
can_combine_p (rtx insn, rtx elt)
{
  rtx set;

  set = zero ();
  if (insn->code == three ())
    set = insn;
  else
    {
      set = elt;
      if (set == zero ())
	return 0;
    }

  if (set == zero ())
    return 1;

  return 0;
}

/* Target with fno-delete-null-pointer-checks should not fold checks */
/* { dg-final { scan-tree-dump-times "Folding predicate.*to 0" 1 "vrp2" { target { ! keeps_null_pointer_checks } } } } */
/* { dg-final { scan-tree-dump-times "Folding predicate.*to 0" 0 "vrp2" { target {   keeps_null_pointer_checks } } } } */
/* { dg-final { cleanup-tree-dump "vrp2" } } */
