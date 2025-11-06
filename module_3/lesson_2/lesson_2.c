#include <stdio.h>

int main(void)
{
    int x;
    if (scanf("%d", &x) != 1) {
        printf("Error input\n");
        return 0;
    }

    if (x < 0)
        printf("x < 0\n");
    else if (x > 0)
            printf("x >= 0\n");
    else
        printf("x == 0\n");

    if (x < 10)
        printf("x in [0, 9]\n");
    else if (x < 100)
            printf("x in [10, 99]\n");
    else if (x < 1000)
        printf("x in [100, 999]");
    else
        printf("x > 999\n");

    return 0;
}
