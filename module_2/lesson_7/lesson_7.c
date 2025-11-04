#include <stdio.h>

int main(void)
{
    int digit = 0;
    int range = 10;
    scanf("%d", &digit);

    int digit_in_range = digit % range;
    printf("The digit %d in range [0, %d]\n", digit_in_range, range);

    unsigned time = 4*3600 + 32*60 + 18;
    // часы : минуты : секунды

    unsigned secs = time % 60;
    unsigned minutes = (time / 60) % 60;
    unsigned hours = time / 3600;

    printf("%02d:%02d:%02d\n", hours, minutes, secs);

    int count = 0;
    printf("count = %d\n", count);
    count++;
    printf("count = %d\n", count);
    count--;
    printf("count = %d\n", count);

    int size = 5;
    int current = count++;
    int width = ++size;

    printf("count = %d, size = %d, current = %d, width = %d\n", count, size, current, width);

    return 0;
}
