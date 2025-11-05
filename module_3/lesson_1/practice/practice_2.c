/*
Упражнение 2.
Напишите программу, которая считывает из входного потока stdin вещественное число.
Если его целая часть кратна 5, то в консоль следует вывести число 1, иначе - число 0.

P.S. Программу реализовать без применения условных операторов.
*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    double digit;
    scanf("%lf", &digit);

    bool result = (int)digit % 5 == 0;
    printf("%d\n", result);
    return 0;
}