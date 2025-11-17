/*
Упражнение 1.
Перепишите следующую программу с использованием цикла do-while,
сохранив логику работы программы.
*/

#include <stdio.h>

int main(void)
{
    int p = 1, n;
    scanf("%d", &n);

    int i = 1;
    do {
        p *= i++;
    } while (i <= n);
    

    printf("%d", p);

    return 0;
}