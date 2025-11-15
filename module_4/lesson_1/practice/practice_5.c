/*
Упражнение 5.
Напишите программу, которая читает из входного потока два натуральных числа n и m,
записанных через пробел, причем n < m. Выведите в консоль в одну строчку через
пробел все числа кратные 3 (нацело делятся на 3) из интервала [n, m].
*/
#include <stdio.h>

int main(void)
{
    unsigned int n, m;
    scanf("%d %d", &n, &m);
    unsigned int left = n;

    if (left % 3 == 0) printf("%d ", left);

    while (left++ < m)
    {
        if (left % 3 == 0) printf("%d ", left);
    }
    

    return 0;
}