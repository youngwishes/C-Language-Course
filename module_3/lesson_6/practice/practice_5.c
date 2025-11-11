/*
Упражнение 5.
Продолжите программу, которая при каждом новом запуске
генерирует разные последовательности из пяти псевдослучайных
чисел и сохраняет их в целочисленные переменные r1, r2, r3, r4, r5.

P.S. В консоль ничего выводить не нужно. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int r1 = rand();
    int r2 = rand();
    int r3 = rand();
    int r4 = rand();
    int r5 = rand();

    return 0;
}