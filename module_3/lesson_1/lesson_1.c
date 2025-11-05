#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // bool var = false/true;
    // int digit;
    // scanf("%d", &digit);

    // bool even = digit % 2 == 0;
    // printf("%d\n", even);

    double y = 1.86;
    bool in_range = y >= -2 && y <= 5;
    printf("%d\n", in_range);

    double x = 3;
    bool not_in_range = x < -2 || x > 5; // !in_range - логическая операция НЕ
    printf("%d\n", not_in_range);
    int i = 5;
    bool res = ++i > 5;
    printf("%d\n", res);
    return 0;
}