/*
Упражнение 5.

Напишите программу для чтения из входного потока stdin чисел,
записанных в одну строчку через запятую, в следующие переменные (в порядке их объявления):

long long var_ll = 0;
long double var_ld = 0.;
short sh = 0;

Выведите в выходной поток с помощью функции printf() переменные var_ll и sh в одну строчку через пробел.
*/
# include <stdio.h>

int main(void)
{
    long long var_ll = 0;
    long double var_ld = 0.;
    short sh = 0;
    scanf("%lld, %Lf, %hd", &var_ll, &var_ld, &sh);
    printf("%lld %hd\n", var_ll, sh);
    return 0;
}
