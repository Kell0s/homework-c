#include <locale.h>
#include <wchar.h>

int main(void) {
    setlocale(LC_ALL, "");

    wchar_t i = 0;
    int cnt = 0;

    while (i != L'#') {

        wchar_t temp = i;
        i = getwchar();

        if (temp == L'е' && i == L'й') {
            cnt++;
        }
    }
    wprintf(L"Количество \"ей\": %d\n", cnt);
    return 0;
}

// ВАРИАНТ 9
