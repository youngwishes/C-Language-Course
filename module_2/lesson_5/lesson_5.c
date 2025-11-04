// Урок №2.5. Функция scanf() для форматированного ввода.

#include <stdio.h>


int main(void)
{
    char byte;

    int count = scanf("%c", &byte);
    printf("count = %d, byte = %c\n", count, byte); 

    char byte1 = '0', byte2 = '0';

    int count1 = scanf("%c", &byte1);
    int count2 = scanf("%c", &byte2);

    int res = scanf("%c %c", &byte1, &byte2);
    int res = scanf("%c,%c", &byte1, &byte2);
    printf("res = %d: byte1 = %c, byte2 = %c\n", res, byte1, byte2);

    long long var_lli = 0;
    double var_d = 0;

    int res = scanf("%lld %lf", &var_lli, &var_d);
    printf("res = %d: var_lli = %lld, var_d = %.2f\n", res, var_lli, var_d);

    unsigned int price = 0;
    double weight = 0.0;

    int res = scanf("%*llu; %u; %lf", &price, &weight);
    printf("res = %d: price = %u, weight = %.2f\n", res, price, weight);

    return 0;
}
