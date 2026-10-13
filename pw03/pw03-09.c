#include <locale.h>
#include <wchar.h>

int main(void) {
  setlocale(LC_ALL, "");

  wchar_t name[50];

  wprintf(L"Введите имя:");
  wscanf(L"%ls", name);

  wprintf(L"Агент %ls авторизован в системе\n", name);

  return 0;
}
