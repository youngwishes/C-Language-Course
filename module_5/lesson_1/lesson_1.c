#include <stdio.h>

#define TOTAL_MARKS    13

int main(void)
{
    int marks[TOTAL_MARKS] = {}; // без "мусора"
    int marks[TOTAL_MARKS]; // с "мусором"
    printf("%ld\n", sizeof(marks)); // 13 * sizeof(int) = 52

    marks[2] = 4;
    marks[0] = 2;
    marks[12] = 7 -2;
    marks[13] = 1; // !!! не делать так

    printf("%d\n", marks[13]); // и так

    printf("%d\n", marks[0]);

    for (int i = 0; i < TOTAL_MARKS; i++) {
        printf("%d ", marks[i]);
    }

    return 0;
}