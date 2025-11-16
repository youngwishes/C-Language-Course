/*
Упражнение 10.
Напишите программу, которая читает из входного потока шестизначное натуральное число n.
Определить, является ли оно счастливым.
(Счастливым называют такое шестизначное число, в котором сумма его первых
трех цифр равна сумме его последних трех цифр.). Вывести в консоль "yes",
если счастливое и "no" - в противном случае.
*/
#include <stdio.h>

int main(void)
{
    unsigned int number;
    scanf("%u", &number);

    int first_three = number / 1000;
    int last_three = number % 1000;

    int res1 = 0;
    int res2 = 0;

    for (int i = 0; i != 3; i++) {
        res1 += first_three % 10;
        res2 += last_three % 10;
        first_three /= 10;
        last_three /= 10;
    }
    res1 == res2 ? printf("yes"): printf("no");

    return 0;
}