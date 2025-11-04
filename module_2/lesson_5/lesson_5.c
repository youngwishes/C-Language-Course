// Урок №2.5. Функция scanf() для форматированного ввода

#include <stdio.h>

int main(void)
{
    printf("=== ОСНОВЫ SCANF() ===\n");
    
    // Ввод одного символа
    char byte;
    printf("Введите один символ: ");
    int count = scanf("%c", &byte);
    printf("count = %d, byte = %c\n", count, byte); 

    printf("\n=== ВВОД НЕСКОЛЬКИХ СИМВОЛОВ ===\n");
    
    char byte1, byte2;
    
    // Ввод двух символов через пробел
    printf("Введите два символа через пробел: ");
    int res = scanf("%c %c", &byte1, &byte2);
    printf("res = %d: byte1 = %c, byte2 = %c\n", res, byte1, byte2);
    
    // Ввод двух символов через запятую
    printf("Введите два символа через запятую: ");
    res = scanf("%c,%c", &byte1, &byte2);
    printf("res = %d: byte1 = %c, byte2 = %c\n", res, byte1, byte2);

    printf("\n=== ВВОД ЧИСЕЛ ===\n");
    
    int number = 0;
    double decimal = 0.0;
    
    printf("Введите целое и дробное число через пробел: ");
    res = scanf("%d %lf", &number, &decimal);
    printf("res = %d: number = %d, decimal = %.2f\n", res, number, decimal);

    return 0;
}
