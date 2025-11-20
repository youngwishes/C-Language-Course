#include <stdio.h>

int main(void)
{
    int arg = 777;
    int *ptr_arg;
    char *ptr;

    ptr_arg = &arg;
    ptr = (char *)ptr_arg; 

    *ptr = 1;

    printf("*ptr = %d, *ptr_arg = %d, arg = %d\n", *ptr, *ptr_arg, arg);

    return 0;
}