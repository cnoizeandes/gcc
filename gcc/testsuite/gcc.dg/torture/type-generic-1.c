/* Do the type-generic tests.  Unlike pr28796-2.c, we test these
   without any fast-math flags.  */

/* { dg-do run } */
/* { dg-skip-if "No Inf/NaN support" { spu-*-* } } */
/* { dg-skip-if "No Denormmalized support" { nds32_ext_fpu } } */
/* { dg-options "-DUNSAFE" { target tic6x*-*-* } } */
/* { dg-add-options ieee } */

#include "../tg-tests.h"

int main(void)
{
  return main_tests ();
}
