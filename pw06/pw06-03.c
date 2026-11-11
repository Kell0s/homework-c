#include <stdio.h>

int main(void) {
    int i;
    int n;
    int r;
    int c;
    int f_cnt = 0;
    int f_sum = 0;
    int s_cnt = 0;
    int s_sum = 0;

    while ((r = scanf("%d", &i)) != EOF) {
        if (r != 1) {
            printf("Вы указали не число\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            continue;
        }

        if (i == 0) {
            break;
        }

        n = i < 0 ? -i : i;

        if (n >= 10) {

            if (n / 10 % 10 > n % 10) {
                f_cnt++;
                f_sum += i;
            } else if (n / 10 % 10 < n % 10) {
                s_cnt++;
                s_sum += i;
            }
        }
    }

    printf("1 ГРУППА:\nвстречалось %d раз\nСр. арифм.: %.3lf\n",
           f_cnt, f_cnt > 0 ? (double)f_sum / f_cnt : 0.0);
    printf("2 ГРУППА:\nвстречалось %d раз\nСр. арифм.: %.3lf\n",
           s_cnt, s_cnt > 0 ? (double)s_sum / s_cnt : 0.0);
    return 0;
}

// ВАРИАНТ 15
