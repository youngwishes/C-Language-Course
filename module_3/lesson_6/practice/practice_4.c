/*
Упражнение 4.
Продолжите программу, которая генерирует псевдослучайные
вещественные числа в диапазоне от a до b (включительно).
Целые числа a и b (a < b) считываются из входного потока.
Значения формируются путем уменьшения исходного диапазона значений
[0; RAND_MAX] до диапазона [a; b], как показано на рисунке ниже.
Используйте для этого формулу: y = (rnd / RAND_MAX) * (b - a) + a
где rnd - случайное значение, возвращенное функцией rand().
Сгенерируйте десять псевдослучайных чисел и выведите их в консоль в одну строчку через
пробел с точностью до сотых.
*/
#include <stdio.h>
#include <stdlib.h>
#define RAND_MAX 32767

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    double y1 = (rand() / (double)RAND_MAX) * (b - a) + a;
    double y2 = (rand() / (double)RAND_MAX) * (b - a) + a;
    double y3 = (rand() / (double)RAND_MAX) * (b - a) + a;
    double y4 = (rand() / (double)RAND_MAX) * (b - a) + a;
    double y5 = (rand() / (double)RAND_MAX) * (b - a) + a;
    double y6 = (rand() / (double)RAND_MAX) * (b - a) + a;
    double y7 = (rand() / (double)RAND_MAX) * (b - a) + a;
    double y8 = (rand() / (double)RAND_MAX) * (b - a) + a;
    double y9 = (rand() / (double)RAND_MAX) * (b - a) + a;
    double y10 = (rand() / (double)RAND_MAX) * (b - a) + a;

    printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f\n", y1, y2, y3, y4, y5, y6, y7, y8, y9, y10);


    return 0;
}