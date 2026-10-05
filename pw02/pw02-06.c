#include <stdio.h>
#include <stdint.h>


int main(void){
  uint8_t num;
  int temp_num;
  
  scanf("%d", &temp_num);
  num = temp_num;
  
  uint8_t num_add = num + 10;
  uint8_t num_mul2 = num * 2;
  uint8_t num_sqr = num * num;

  printf("ADD: %u\nMUL2: %u\nSQR: %u\n",
         (unsigned int)num_add, (unsigned int)num_mul2, (unsigned int)num_sqr);

  return 0;
}

/*Объяснение:
 * uint8_t - выделяет 8 бит -> 256 чисел. Сначала переменные вычисляются в int,
 * после переходит в тип uint8_t, тем самым перезаписывая лишнее.
 * 1) 250 + 10 = 260
 * 2) 260 - 256 = 4
 * */

