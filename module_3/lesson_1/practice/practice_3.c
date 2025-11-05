/*
Упражнение 3.
Напишите программу, которая считывает из входного потока stdin вещественное число
и выводит в консоль значение 1, если число принадлежит диапазону [-5.45; 10.37], и 0 в противном случае.

P.S. Программу реализовать без применения условных операторов.
*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    double left_range = -5.45;
    double right_range = 10.37;
    double digit;
    scanf("%lf", &digit);

    bool result = digit >= left_range && digit <= right_range;

    printf("%d\n", result);
    
    return 0;
}