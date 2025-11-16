#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for (
        int x = rand() % 10;
        x != 0;
        x = rand() % 10
    )
        printf("x = %d\n", x);
    
    return 0;
}
