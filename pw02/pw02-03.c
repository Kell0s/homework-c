#include <stdio.h>


int main(void){
  int dec_10 = 10;
  int oct_10 = 010;
  int hex_10 = 0x10;

  printf("DEC_10: %d\nOCT_10: %d\nHEX_10: %d\n",
         dec_10,
         oct_10,
         hex_10);
  
  printf("INT_SUFFIX: %zu %zu %zu %zu\nFLOAT_SUFFIX: %zu %zu %zu\nFLOAT_EQ: %d\n",
        sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL),
        sizeof(0.1f), sizeof(0.1), sizeof(0.1L),
        0.1f == 0.1);
  
  char A = 'A';

  printf("CHAR_FORMS: %d %d %d\nCHAR_LIT_VAR_STR: %zu %zu %zu\n",
         'A', '\x41', '\101',
         sizeof('A'), sizeof(A), sizeof("A"));

  return 0;
}

/*Объяснение:
 * 1) Префикс присваивает систему счисления.
 *    без - десятичная
 *    0 в начале - восьмеричная
 *    0х - шестнадцатеричная
 * 2) Суффик помогает определить тип литерала
 * 3)0.1f != 0.1 т.к. В двоичной системе 0.1 является бесконечной дробью
 *   .0.1f присваивает тип float и выделяет в 2 раза меньше памяти, чем 0.1 с типом double.
 * 4) Исторически С автоматически превращает любые char в int и выделяет 4 байта,
 *    заданная же переменная char говорит выделить 1 байт.
 * */
