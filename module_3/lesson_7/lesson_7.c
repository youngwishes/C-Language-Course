#include <stdio.h>

#define ONE   1
#define TWO   2

#define THREE 4
#undef THREE
#define THREE 3


int main(void)
{
    unsigned short digit;
    scanf("%hu", &digit);

    switch (digit) {
        case ONE:
            printf("Digit is equals 1\n");
            return 0;
        case TWO:
            printf("Digit is equals 2\n");
            return 0;
        case THREE:
            printf("Digit is equals 3\n");
            return 0;
    }

    return 0;
}
