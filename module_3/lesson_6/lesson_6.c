#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
    srand(time(NULL));
    int range = 10;

    int res_1 = rand() % range; // [0, range)
    int res_2 = rand() % range - 5; // [-5, range - 5)
    int res_3 = rand() + rand();

    double range_float = (double)rand() / (double)RAND_MAX; // [0; 1]

    printf("%d, %d\n", res_1, res_2);

    double a, b, c;
    double D, x1, x2;

    if (scanf("%lf, %lf, %lf", &a, &b, &c) != 3) {
        printf("Error input\n");
        return 0;
    }

    D = b*b - 4*a*c;

    if (D < 0) {
        printf("D = %.2f < 0\n", D);
        return 0;
    }

    D = sqrt(D);

    x1 = -(b + D) / (2.0 * a);
    x2 = -(b - D) / (2.0 * a);

    printf("x1 = %.2f, x2 = %.2f", x1, x2);

    return 0;
}
