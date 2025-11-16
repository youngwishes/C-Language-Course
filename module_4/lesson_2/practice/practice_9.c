/*
Упражнение 9.
Напишите программу, которая читает из входного потока натуральное число n.
На его основе нужно сформировать другое число m, в котором цифры числа n будут
идти в обратном порядке. Например, при n = 235, получаем m = 532. Или, при n = 1,
получаем m = 1.
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, i, reminder;
    int result = 0;
    scanf("%d", &n);

    reminder = n;
    for (i = 0; n > 0; i++) {
        n /= 10;
    }

    for (; reminder > 0; i--) {
        int number = reminder % 10;
        reminder /= 10;
        result += number * pow(10, i - 1);
    }

    printf("%d", result);

    return 0;
}
