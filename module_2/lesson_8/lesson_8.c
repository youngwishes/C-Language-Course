#include <stdio.h>


int main(void)
{
    int count = 1;
    double var_d = 10.0;
    double p = 2.0;
    count -= 3 + 5 + (p -= 1);
    var_d /= 3.0 + p;
    p *= 20.0 - 5;

    printf("count = %d, var_d = %.2f, p = %.2f\n", count, var_d, p);
    return 0;
}