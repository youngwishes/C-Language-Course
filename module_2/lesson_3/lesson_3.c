// Урок №2.3. Потоки ввода/вывода. Функции putchar() и getchar()

#include <stdio.h>

int main(void)
{
    printf("=== ПРОСТОЙ ВВОД/ВЫВОД СИМВОЛОВ ===\n");

    // putchar() - вывод одного символа
    printf("putchar() выводит: ");
    putchar('A');           // выводим символ 'A'
    putchar('\n');          // выводим символ новой строки
    putchar('B');
    putchar('\n');

    // getchar() - ввод одного символа
    printf("Введите один символ и нажмите Enter: ");
    int ch = getchar();     // читаем символ из потока ввода
    printf("Вы ввели: ");
    putchar(ch);            // выводим введенный символ
    putchar('\n');

    printf("\n=== ЧТЕНИЕ НЕСКОЛЬКИХ СИМВОЛОВ ===\n");

    printf("Введите три символа подряд (без пробелов): ");
    char c1 = getchar();
    char c2 = getchar();
    char c3 = getchar();

    printf("Вы ввели: ");
    putchar(c1);
    putchar('-');
    putchar(c2);
    putchar('-');
    putchar(c3);
    putchar('\n');

    return 0;
}