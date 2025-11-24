/*
Упражнение 5.
В программе до функции main() объявлен массив с именем marks и типом элементов short.
Этот массив скрыт в коде, но он существует. В функции main() вычислите
среднее арифметическое значений элементов этого массива и выведите в консоль
полученное значение с точностью до сотых.
*/
#include <stdio.h>

int main(void)
{
    short marks[10] = {0};
    double middle = 0.0;
    short length = sizeof(marks) / sizeof(marks[0]);
    
    for (int i = 0; i < length; ++i) {
        middle += marks[i];
    }

    printf("%.2f", middle / length);

    return 0;
}