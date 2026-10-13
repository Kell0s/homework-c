#include <locale.h>
#include <wchar.h>

int main(void) {
  setlocale(LC_ALL, "");

  wchar_t core[50], reactor[50], init[50];

  wprintf(L"Введите три слова:\n");
  wscanf(L"%s\n%s\n%s", core, reactor, init);

  wprintf(L"%-15s|%20s|%.5s", core, reactor, init);

  return 0;
}
