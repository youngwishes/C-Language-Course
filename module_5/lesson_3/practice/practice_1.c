/*
Упражнение 1.
В программе до функции main() объявлены два массива типа char с именами buff_1 и buff_2.
Эти массивы скрыты в коде, но они существуют. Необходимо в функции main() объявить массив
того же типа char с именем buffer длиной 128 элементов. Затем, сформировать указатель с
именем ptr_ar на массив buffer. Используя ptr_ar выполнить последовательное копирование
значений элементов из массивов buff_1 и buff_2 в массив buffer (то есть, оператор []
для массива buffer не применять). Гарантируется, что длины массива buffer достаточно для
хранения двух массивов buff_1 и buff_2.
*/

#include <stdio.h>

char buff_1[5];
char buff_2[4];

int main(void)
{
    char buffer[128];

    char *ptr_ar = buffer;
    short counter = 0;

    for (char i = 0; i < sizeof(buff_1) / sizeof(*buff_1); ++i) {
        *(ptr_ar + i) = buff_1[i];
        counter += 1;
    }

    for (char i = counter; (i - counter) < sizeof(buff_2) / sizeof(*buff_2); ++i) {
        *(ptr_ar + i) = buff_2[i - counter];
    }
    

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}