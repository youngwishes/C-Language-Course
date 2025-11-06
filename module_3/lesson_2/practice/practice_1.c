/*
Упражнение 1.
Продолжите программу, представленную ниже. Определите минимальное из введенных чисел x и y,
присвойте найденное минимальное значение переменной min и выведите ее значение
в консоль в виде одного целого числа.
*/

#include <stdio.h>


int main(void)
{
    short x, y, min;
    if (scanf("%hd, %hd", &x, &y) != 2) {
        printf("Input Error");
        return 0;
    }

    if (x > y) min = y;
    else min = x;

    printf("%d\n", min);

    return 0;
}