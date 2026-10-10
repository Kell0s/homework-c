#include <stdio.h>
#include <string.h>


int main(void){
  char arr[20] = "SibSUTIS";

  printf("SIZEOF: %zu\nSTRLEN: %zu\nFREE_BYTES: %zu\n",
         sizeof(arr), strlen(arr), sizeof(arr) - strlen(arr) - 1);
  
  char arr_ru[20] = "СибГУТИ";

  printf("SIZEOF: %zu\nSTRLEN: %zu\nFREE_BYTES: %zu\n",
         sizeof(arr_ru), strlen(arr_ru), sizeof(arr_ru) - strlen(arr_ru) - 1);

  return 0;
}

/*Объяснеие:
 * sizeof возвращает размер массива,
 * а strlen сколько символы занимают в массиве.
 * Кириллица весит в 2 раза больше (2 байта)
 */

