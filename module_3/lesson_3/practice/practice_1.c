/*
Упражнение 1.
Продолжите программу. С помощью тернарной операции определите минимальное значение переменных
k и m и выведите в консоль квадрат этого значения.
*/
#include <stdio.h>

int main(void)
{
    int k, m;
    if (scanf("%d, %d", &k, &m) != 2) {
        printf("Input error\n");
        return 0;
    }

    int min = (k < m)? k * k: m * m;
    printf("%d\n", min);
    return 0;
}