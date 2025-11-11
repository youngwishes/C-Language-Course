/*
Упражнение 6.
Продолжите программу решения следующей задачи.
Каждый день во время конференции расходуется N пакетиков чая.
Конференция длится 7 дней.
В пачке чая 100 пакетиков.
Какого наименьшего количества пачек чая хватит на все дни конференции?
Результат выведите в консоль в виде одного целого числа.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned short N;
    scanf("%hu", &N);

    unsigned char conference_days = 7;
    int total_tea_bags = N * conference_days;
    
    double count_of_tea_packaging = ceil(total_tea_bags / 100.0);

    printf("%d\n", (int)count_of_tea_packaging);

    // здесь продолжайте программу

    return 0;
}