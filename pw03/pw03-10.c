#include <locale.h>
#include <wchar.h>

int main(void) {
  setlocale(LC_ALL, "");

  wchar_t core[50], reactor[50], init[50];

  wprintf(L"Введите три слова:\n");
  wscanf(L"%ls\n%ls\n%ls", core, reactor, init);

  wprintf(L"%-15ls|%20ls|%.5ls\n", core, reactor, init);

  return 0;
}
