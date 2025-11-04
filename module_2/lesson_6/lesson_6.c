// Урок 2.6. Сложение, вычитание, умножение и деление

#include <stdio.h>

int main(void)
{
    printf("=== ОСНОВНЫЕ АРИФМЕТИЧЕСКИЕ ОПЕРАЦИИ ===\n");
    
    // Базовые операции с целыми числами
    int num1 = 15;
    int num2 = 4;
    
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("Сложение: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Вычитание: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Умножение: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Деление: %d / %d = %d (целочисленное)\n", num1, num2, num1 / num2);
    printf("Остаток от деления: %d %% %d = %d\n", num1, num2, num1 % num2);

    printf("\n=== ДЕЛЕНИЕ ЦЕЛЫХ И ВЕЩЕСТВЕННЫХ ЧИСЕЛ ===\n");
    
    // Проблема целочисленного деления
    short a = 5;
    short b = 10;
    printf("Целочисленное деление: %d / %d = %d\n", a, b, a / b);
    
    // Правильное деление с приведением типов
    double result = (double)a / (double)b;
    printf("Вещественное деление: %.1f / %.1f = %.2f\n", (double)a, (double)b, result);
    
    // Упрощенный вариант
    double result2 = (double)a / b;
    printf("Упрощенный вариант: %d / %d = %.2f\n", a, b, result2);

    printf("\n=== УНАРНЫЕ ОПЕРАЦИИ ===\n");
    
    // Унарные плюс и минус
    short value = +7 * -5;  // +7 умножить на -5
    printf("+7 * -5 = %d\n", value);
    
    short complex_expr = -(+7 * -5);  // меняем знак результата
    printf("-(+7 * -5) = %d\n", complex_expr);

    printf("\n=== ПРАКТИЧЕСКИЙ ПРИМЕР: ПЛОЩАДЬ ТРЕУГОЛЬНИКА ===\n");
    
    // Расчет площади треугольника
    double height, base;
    
    printf("Введите высоту и основание треугольника через пробел: ");
    int res = scanf("%lf %lf", &height, &base);
    
    // Проверка корректности ввода
    if (res != 2) {
        printf("Ошибка ввода! Нужно ввести два числа.\n");
        return 1;
    }

    // Вычисление площади треугольника
    double area = height * base / 2.0;
    printf("Площадь треугольника с высотой %.2f и основанием %.2f = %.2f\n", 
           height, base, area);

    printf("\n=== ДОПОЛНИТЕЛЬНЫЕ ПРИМЕРЫ ===\n");
    
    // Приоритет операций
    int x = 10, y = 3, z = 2;
    int expr1 = x + y * z;      // умножение выполняется первым
    int expr2 = (x + y) * z;    // скобки меняют приоритет
    
    printf("x + y * z = %d + %d * %d = %d\n", x, y, z, expr1);
    printf("(x + y) * z = (%d + %d) * %d = %d\n", x, y, z, expr2);
    
    // Комбинированные операции
    int total = 100;
    total = total + 50;         // обычная запись
    total += 30;                // сокращенная запись
    printf("Итоговое значение: %d\n", total);

    return 0;
}
