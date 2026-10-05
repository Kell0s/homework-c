#include <stdio.h>
#include <float.h>


int main(void){
  printf("FLOAT: size=%zu, digits=%d, max=%e\n"
         "DOUBLE: size=%zu, digits=%d, max=%e\n"
         "LDOUBLE: size=%zu, digits=%d, max=%Le\n",
         sizeof(float), FLT_DIG, FLT_MAX,
         sizeof(double), DBL_DIG, DBL_MAX,
         sizeof(long double), LDBL_DIG, LDBL_MAX
         );

  return 0;
}

/*Объяснение:
 * Кол-во цифр в показатели степени могут отличаться в зависимости от системы.
 * Например ldouble = double на компиляторе винды (оба 8 байт)
 * */
