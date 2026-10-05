#include <stdio.h>


int main(void){
  long double num_ld;
  double num_d;
  float num_f;
  
  scanf("%Lf", &num_ld);
  num_d = num_ld;
  num_f = num_ld;

  printf("FLOAT: %.6f\nDOUBLE: %.6f\nLDOUBLE: %.6Lf\n"
         "FLOAT+1: %.6f\nDOUBLE+1: %.6f\nLDOUBLE+1: %.6Lf\n", 
         num_f, num_d, num_ld,
         num_f+1, num_d+1, num_ld+1);

  return 0;
}

/*Объяснение:
 * float выделяет всего 4 байта(32 бита), 8 бит идут в порядок и 24 бита в Мантисс.
 * Соответсвенно флоат может хранить 7 целых чисел, а в примере мы вводим 9.
 * в dobule в 2 раза больше и тем более в Ldouble, где места хватает для +1.
 * Float округляет число*/
