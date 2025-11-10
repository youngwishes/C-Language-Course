/*
Упражнение 1.
Продолжите программу. С помощью функции rand() сгенерируйте четыре псевдослучайных числа,
присвойте их переменным и по порядку выведите их в консоль в одну строчку через пробел.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = rand();
    int b = rand();
    int c = rand();
    int d = rand();

    printf("%d %d %d %d", a, b, c, d);

    return 0;
}