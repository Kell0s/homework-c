#include <stdio.h>


int main(void){
  /*Выводит "START", после переводим курсор на 3 символа влево
   *Переписываем "ART" на "OP ", выводим звук и переводим на нов строку*/
  printf("START\b\b\bOP \a\n");
  
  return 0;
}

