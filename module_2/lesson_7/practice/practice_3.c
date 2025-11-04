/*
Упражнение 3.
Необходимо продолжить программу, которая складывает время, указанное в часах, минутах и секундах.
Исходное время хранится в переменных time_h, time_m, time_s, а добавляемое - в переменных h, m, s.
Гарантируется, что сумма времен не превышает одни сутки.
Вывести полученное суммарное время в консоль в формате: hh:mm:ss
Например: 12:05:09
(обратите внимание на наличие незначащих нулей при выводе чисел меньше 10).
*/
#include <stdio.h>

int main(void)
{
    unsigned short time_h = 10; // hours
    unsigned short time_m = 33; // minutes
    unsigned short time_s = 5; // secs

    unsigned int time_all = 10 * 3600 + 33 * 60 + 5;

    unsigned char h, m, s; // добавляемое время
    ++(h);
    scanf("%hu; %hu; %hu", &h, &m, &s);

    unsigned int total_time = time_all + h * 3600 + m * 60 + s;

    unsigned short result_h = total_time / 3600;
    unsigned short result_m = (total_time / 60) % 60;
    unsigned short result_s = total_time % 60;

    printf("%02d:%02d:%02d\n", result_h, result_m, result_s);

    return 0;
}


// hour = minutes * 60
// minute = second * 60
// hour = second 60 * 60
// 3600 = 1 hour
// 3601 % 60 = 1
// 3660 / 60 = 61 % 60
// 3660 / 3600 = 1