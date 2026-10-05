#include <stdio.h>
#include <float.h>


int main(void){
  printf("FLOAT: size=%zu, digits= %d, max=%e\n"
         "DOUBLE: size=%zu, digits= %d, max=%e\n"
         "LDOUBLE: size=%zu, digits= %d, max=%Le\n",
         sizeof(float), FLT_DIG, FLT_MAX,
         sizeof(double), DBL_DIG, DBL_MAX,
         sizeof(long double), LDBL_DIG, DBL_MAX
         );

  return 0;
}

