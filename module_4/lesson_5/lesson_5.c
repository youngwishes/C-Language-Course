#include <stdio.h>


int main(void)
{
    char d = 10;
    char *gpt; // инициализируем указатель
    gpt = &d; // присваиваем указателю адрес памяти переменной d

    // char *gpt = &d; - эквивалентно

    printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);

    *gpt = 100; // по адресу переменной d заносим значение 100

    printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);


    return 0;
}