// Урок №2.1. Переменные и их базовые типы. Модификаторы unsigned и signed


int main(void)
{
    // Базовые целочисленные типы
    int var1, var2, var3;
    var1 = var2 = var3 = 4;
    
    int var4 = 5;

    // Модификаторы размера
    short int var5 = 5;          // короткое целое
    long int var6 = 6;           // длинное целое  
    long long int var7 = 7;      // очень длинное целое

    // Символьный тип
    char char1 = 255;            // может хранить числа от -128 до 127
    char char2 = 'a';            // или символы
    
    // Модификаторы знака
    signed char char3 = -100;    // знаковый символ (отрицательные числа разрешены)
    unsigned char char4 = 255;   // беззнаковый символ (только положительные)

    // Вещественные числа (дробные)
    double double1 = 10.1;       // двойной точности
    long double double2 = 10.2;  // длинный double
    float float1 = 10.3f;        // одинарной точности (f в конце)

    // ДЕМОНСТРАЦИЯ РАЗНИЦЫ SIGNED/UNSIGNED
    printf("=== Демонстрация signed/unsigned ===\n");
    
    signed char sc = -100;
    unsigned char uc = 200;
    
    printf("signed char: %d\n", sc);      // выведет -100
    printf("unsigned char: %d\n", uc);    // выведет 200
    
    // ПЕРЕПОЛНЕНИЕ
    printf("\n=== Демонстрация переполнения ===\n");
    
    unsigned char overflow = 255;
    printf("До переполнения: %d\n", overflow);
    overflow = overflow + 1;  // переполнение!
    printf("После переполнения: %d\n", overflow);  // будет 0
    
    // РАЗМЕРЫ ТИПОВ
    printf("\n=== Размеры типов в байтах ===\n");
    printf("short: %zu байт\n", sizeof(short));
    printf("int: %zu байт\n", sizeof(int));
    printf("long: %zu байт\n", sizeof(long));
    printf("char: %zu байт\n", sizeof(char));
    printf("float: %zu байт\n", sizeof(float));
    printf("double: %zu байт\n", sizeof(double));

    return 0;
}
