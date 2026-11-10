#include <ctype.h>
#include <stdio.h>

int main(void) {
    int c;
    while ((c = getchar()) != EOF) {
        if (isalpha(c)) {
            putchar(c);
            putchar('\n');
        }
    }

    return 0;
}
// ВАРИАНТ 19
