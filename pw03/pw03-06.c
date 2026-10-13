#include <stdio.h>

int main(void) {
  char str[10];
  int width;

  printf("Введите строку и число через пробел:");
  scanf("%s %d", str, &width);

  printf("%*s\n%-*s\n", width, str, width + 5, str);

  return 0;
}
