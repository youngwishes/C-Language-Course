/*
Упражнение 2.
Продолжите программу, представленную ниже. Если число m делится нацело на число n,
то вывести на экран частное от деления (результат деления),
в противном случае вывести сообщение «division error».
*/
#include <stdio.h>

int main(void)
{
    int m, n;
    if(scanf("%d, %d", &m, &n) != 2) {
        printf("Input error.");
        return 0;
    }

    if (m % n == 0) printf("%d", m / n);
    else printf("division error\n");

    // здесь продолжайте программу

    return 0;
}