/*
Упражнение 2.
Продолжите программу, в которой нужно определить макро-функцию с именем GET_MAX,
возвращающую максимальное из двух чисел.
Вызовите в функции main макрос GET_MAX следующим образом:
double res = GET_MAX(val_1 + 1, val_2 - 1) / (val_1 + val_2);
Выведите в консоль значение переменной res с точностью до сотых.
*/

#include <stdio.h>

#define GET_MAX(A, B) ((A) > (B) ? A : B)

int main(void)
{
    double val_1, val_2;
    if(scanf("%lf; %lf", &val_1, &val_2) != 2) {
        printf("Input error\n");
        return 0;
    }

    double res = GET_MAX(val_1 + 1, val_2 - 1) / (val_1 + val_2);
    printf("%.2f\n", res);

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}