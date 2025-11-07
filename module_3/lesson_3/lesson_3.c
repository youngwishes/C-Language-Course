#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main(void)
{   
    double a = 7.5, b = 33.43;
    double max = (a > b) ? a + 1 : b + 1;    
    printf("%.2f\n", max);

    double res_abs = (a < b) ? fabs(a): fabs(b);
    printf("%.2f\n", res_abs);
    return 0;
}
