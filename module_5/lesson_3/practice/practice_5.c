/*
Упражнение 5.
Продолжите программу. Прочитайте из входного потока целые числа в переменные
var_1, var_2 и var_3, записанные в одну строчку через запятую.
Побайтно занесите их значения в массив типа char (в порядке var_1, var_2, var_3).
Выведите в одну строчку через пробел по порядку значения массива в виде беззнаковых
десятичных чисел.
*/
#include <stdio.h>

int main(void)
{
    short var_1;
    int var_2;
    long long var_3;
    scanf("%hd, %d, %lld", &var_1, &var_2, &var_3);
    
    unsigned char arr[14];

    char *ptr = (char *)&var_1;
    int i = 0;

    for (; i < 2; ++i) {
        arr[i] = *ptr;
        ptr++;
    }

    ptr = (char *)&var_2;

    for (; i < 6; ++i) {
        arr[i] = *ptr;
        ptr++;
    }

    ptr = (char *)&var_3;

    for (; i < 14; ++i) {
        arr[i] = *ptr;
        ptr++;
    }

    for (int j = 0; j < 14; ++j) {
        printf("%d ", arr[j]);
    }

    return 0;
}