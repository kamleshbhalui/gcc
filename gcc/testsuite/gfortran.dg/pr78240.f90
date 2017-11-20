! { dg-do compile }
! { dg-options "-w" }
!
! PR fortran/78240
!
! Test a regression where an ICE occurred by passing an invalid reference
! to the error handling routine for non-constant array-specs in DATA list
! initializers.
!

program p
  integer x(n)    /1/   ! { dg-error "cannot appear in the expression" }
end
! { dg-prune-output "module or main program" }
! { dg-prune-output "Nonconstant array" }
