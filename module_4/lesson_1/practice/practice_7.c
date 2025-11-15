/*
Упражнение 7.
Напишите программу, которая читает натуральное число,
содержащее одну и более цифр. Определить, что это число является палиндромом,
то есть, оно не меняет своего значения при просмотре слева-направо и справа-налево.
Например: 121, 23032, 11 и т.п. Если число является палиндромом,
то в консоль вывести строку "yes", иначе - строку "no".
*/
#include <stdio.h>
#include <math.h>


int main(void)
{
    unsigned int n;
    unsigned int s = 0, i = 0;
    scanf("%d", &n);
    int n_copy = n;

    while (n_copy > 0)
    {
        n_copy /= 10;
        i++;
    }

    n_copy = n;
    while (i-- > 0)
    {
        int digit = n_copy % 10;
        if (digit != 0) {
            s += digit * pow(10, i);
        }
        n_copy /= 10;
    }
    

    if (s == n)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}