#include <stdio.h>

#define SQ_PR(A, B) ((A) * (B))
#define TEXT(A, B)  "Square of rectangle (" #A ") * (" #B ")\n"
#define X_N(N)      x ## N
#define T_ADD(X, Y)     "Adding two values " # X " and " # Y

int main(void)
{
    int res = SQ_PR(2, 3);
    printf("res = %d\n", res);
    printf(TEXT(x-2, y-1));

    int x1 = 1, x2 = - 2, x4 = 10;
    printf("%d\n", X_N(4));

    T_ADD(i <> 2, j == 3);
    return 0;
}
