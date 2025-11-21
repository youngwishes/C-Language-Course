/*
Упражнение 1.
Допишите следующую программу. Необходимо все 8 байт (тип double) переменной value вывести
в консоль в виде десятичных чисел, записанных в одну строчку через пробел, начиная
с первого байта.
*/

#include <stdio.h>

int main(void)
{
    double value;

    scanf("%lf", &value);
    char *ptr_value = (char *)&value;

    for (int i = 0; i < sizeof(double); i++) {
        printf("%d ", *ptr_value++);
    }

    return 0;
}