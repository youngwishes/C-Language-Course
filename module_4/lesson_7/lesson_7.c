#include <stdio.h>


int main(void)
{
    unsigned int g = 4, i = 5;
    unsigned int *ptr_g = &g;
    unsigned int *ptr_i = &i;

    printf("ptr_g = %u\n", ptr_g);

    ptr_g++;
    printf("ptr_g = %u\n", ptr_g);
    ptr_g--;

    int difference = ptr_i - ptr_g; // difference = (104 - 100) / sizeof(int) = 1

    printf("difference = %d\n", difference);

    return 0;
}