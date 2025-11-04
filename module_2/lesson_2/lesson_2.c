// Урок №2.2. Присваивание, числовые и символьные литералы, sizeof

#include <stdio.h>

int main(void)
{
    printf("=== ПРИСВАИВАНИЕ ===\n");
    
    // Простое присваивание
    int a = 10;
    int b = 20;
    
    // Множественное присваивание
    int x, y, z;
    x = y = z = 5;  // все переменные получают значение 5
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    
    // Присваивание с операцией
    int sum = 0;
    sum = sum + 10;  // увеличиваем sum на 10
    printf("sum после sum + 10: %d\n", sum);
    
    // Сокращенная форма присваивания
    sum += 5;        // то же что sum = sum + 5
    printf("sum после += 5: %d\n", sum);

    printf("\n=== ЧИСЛОВЫЕ ЛИТЕРАЛЫ ===\n");
    
    // Десятичные литералы
    int decimal = 123;
    printf("Десятичное 123: %d\n", decimal);
    
    // Восьмеричные литералы (начинаются с 0)
    int octal = 0123;  // 83 в десятичной
    printf("Восьмеричное 0123: %d (в десятичной)\n", octal);
    
    // Шестнадцатеричные литералы (начинаются с 0x)
    int hex = 0x1A3;   // 419 в десятичной
    printf("Шестнадцатеричное 0x1A3: %d (в десятичной)\n", hex);
    
    // Вещественные литералы
    float pi_float = 3.14f;     // float (f в конце)
    double pi_double = 3.14;    // double
    printf("float: %.2f, double: %.2f\n", pi_float, pi_double);

    printf("\n=== СИМВОЛЬНЫЕ ЛИТЕРАЛЫ ===\n");
    
    // Одиночные символы
    char letter = 'A';
    char digit = '7';
    char symbol = '$';
    printf("Символы: %c, %c, %c\n", letter, digit, symbol);
    
    // Специальные символы (escape-последовательности)
    char newline = '\n';        // новая строка
    char tab = '\t';            // табуляция
    char backslash = '\\';      // обратная косая черта
    char quote = '\'';          // одинарная кавычка
    
    printf("Табуляция:%cздесь отступ\n", tab);
    printf("Кавычка: %c, обратная черта: %c\n", quote, backslash);

    printf("\n=== ОПЕРАТОР SIZEOF ===\n");
    
    // sizeof для типов
    printf("Размеры типов:\n");
    printf("char: %zu байт\n", sizeof(char));
    printf("int: %zu байт\n", sizeof(int));
    printf("short: %zu байт\n", sizeof(short));
    printf("long: %zu байт\n", sizeof(long));
    printf("float: %zu байт\n", sizeof(float));
    printf("double: %zu байт\n", sizeof(double));
    
    // sizeof для переменных
    printf("\nРазмеры переменных:\n");
    printf("a (int): %zu байт\n", sizeof(a));
    printf("pi_float (float): %zu байт\n", sizeof(pi_float));
    printf("letter (char): %zu байт\n", sizeof(letter));
    
    // sizeof для литералов
    printf("\nРазмеры литералов:\n");
    printf("100: %zu байт\n", sizeof(100));        // int
    printf("3.14: %zu байт\n", sizeof(3.14));      // double
    printf("3.14f: %zu байт\n", sizeof(3.14f));    // float
    printf("'A': %zu байт\n", sizeof('A'));        // int в C!

    printf("\n=== РАЗНЫЕ ФОРМЫ ПРИСВАИВАНИЯ ===\n");
    
    int num = 10;
    printf("Начальное значение: %d\n", num);
    
    num += 3;   // num = num + 3
    printf("После += 3: %d\n", num);
    
    num -= 2;   // num = num - 2
    printf("После -= 2: %d\n", num);
    
    num *= 2;   // num = num * 2
    printf("После *= 2: %d\n", num);
    
    num /= 4;   // num = num / 4
    printf("После /= 4: %d\n", num);

    return 0;
}