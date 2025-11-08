#include <stdio.h>


int main(void)
{
    int item;

    printf(
        "1. Learning C language\n"
        "2. Learning Python language\n"
        "3. Learning Java language\n"
        "4. Learning C++ language\n"
        "5. Exit\n"
    );
    
    if (scanf("%d", &item) != 1) {
        printf("Input error\n");
        return 0;
    }

    switch (item) {
    
        case 1:
            printf("Your chose is C\n");
            break;
        case 2:
            printf("Your chose is Python\n");
            return 0;
        case 3:
            printf("Your chose is Java\n");
        case 4:
            printf("Your chose is C++\n");
        case 5:
            printf("Exit case\n");
        case 6:
        case 7:
        default:
            printf("Default case\n");
    }

    return 0;
}
