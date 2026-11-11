#include <locale.h>
#include <wchar.h>

int main(void) {
    setlocale(LC_ALL, "");

    wint_t i;
    wint_t temp = 0;
    int cnt = 0;

    while ((i = getwchar()) != WEOF && i != L'#') {
        if (temp == L'е' && i == L'й') {
            cnt++;
        }
        temp = i;
    }
    wprintf(L"Количество \"ей\": %d\n", cnt);
    return 0;
}

// ВАРИАНТ 9
