#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>

int main(void) {
  setlocale(LC_ALL, "");

  const char STR1[] = "Сбой матрицы";
  const wchar_t STR2[] = L"Сбой матрицы";

  printf("char -> sizeof: %zu bytes, strlen: %zu chars\n"
         "wchar -> sizeof: %zu bytes, wcslen: %zu chars\n",
         sizeof(STR1), strlen(STR1), sizeof(STR2), wcslen(STR2));

  return 0;
}
