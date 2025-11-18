/*
Упражнение 7.
Напишите программу, которая читает из входного потока натуральное число n.
Определить, является ли число n простым (то есть, делится нацело только на само себя и на 1).
Вывести на экран "yes", если n простое и "no" - в противном случае.
*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned int n;
    bool is_simple = true;

    scanf("%d", &n);

    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            is_simple = false;
            break;
        }
    }

    is_simple ? printf("yes"): printf("no");

    return 0;
}