#include <stdio.h>

int main(void) {
  char c;

  printf("Введите букву:");
  scanf("%c", &c);

  printf("CODE_DEC: %d\n"
         "CODE_HEX: %x\n"
         "CODE_OCT: %o\n"
         "UPPER: %c\n"
         "NEXT: %c\n"
         "PREV: %c\n",
         c, c, c, c - 32, c + 1, c - 1);

  return 0;
}
