#include <ctype.h>
#include <stdio.h>

int main(void) {
    int c;
    int hex_count = 0;
    int total = 0;

    while ((c = getchar()) != EOF) {
        total++;

        if (isxdigit(c)) {
            hex_count++;
        }
    }

    printf("Шестнадцатеричных цифр: %d\n", hex_count);
    printf("Всего символов: %d\n", total);

    return 0;
}
// ВАРИАНТ 9
