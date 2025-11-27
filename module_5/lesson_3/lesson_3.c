#include <stdio.h>

int main(void)
{
    short ar[] = {4, 3, 2, 1, 5, 6, 7}; // ar - указатель на массив

    short a_1 = *ar; // первый элемент

    for (int i = 0; i < sizeof(ar) / sizeof(*ar); ++i) {
        printf("%d ", *(ar + i));
    }

    short *ptr_ar;
    ptr_ar = ar;
    // тоже самое ptr_ar = &ar[0];

    short x = *ptr_ar;
    *(ptr_ar + 1) = -3;

    size_t len1 = sizeof(ar); 
    size_t len2 = sizeof(ptr_ar);

    short x2 = ptr_ar[2]; // arr[index] = *(ar + index)
    short x3 = 2[ptr_ar]; // тоже самое

    return 0;
}