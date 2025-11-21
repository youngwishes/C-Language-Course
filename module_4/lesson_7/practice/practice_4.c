/*
Упражнение 4.
Напишите программу, которая читает из входного потока целое число в переменную count типа int.
В каждом байте переменной count нужно выключить 7-й, 6-й и 1-й биты
(нумерация бит в байте: 7, 6, 5, 4, 3, 2, 1, 0). Вывести в консоль полученное значение count
в виде одного целого числа.
*/
#include <stdio.h>

int main(void)
{
    char mask = 0b00111101;
    int count;
    scanf("%d", &count);

    char *ptr_count = (char *)&count;

    for (int i = 0; i < sizeof(int); i++) {
        char bit = (*ptr_count) & mask;
        *ptr_count = bit;
        ptr_count++;
    }

    printf("%d\n", count);

    return 0;
}