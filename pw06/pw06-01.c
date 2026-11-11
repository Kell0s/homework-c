#include <ctype.h>
#include <stdio.h>

int main(void) {
    int i;
    int cnt = 0;

    while ((i = getchar()) != EOF && i != '#') {
        if (isxdigit(i)) {
            cnt++;
        }
    }

    printf("16-ичных цифр: %d\n", cnt);
    return 0;
}

// 19 ВАРИАНТ
