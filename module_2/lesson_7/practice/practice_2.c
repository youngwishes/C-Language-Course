/*
Упражнение 2.

На плоскости размером rect_width на rect_height (ширина x высота) размещены непересекающиеся
прямоугольники одинаковых размеров w x h, следующих друг за другом, как показано на рисунке ниже.

Необходимо продолжить программу, вычислив оставшуюся ширину и высоту не покрытую целыми прямоугольниками.
Результат вывести в консоль в виде двух целых чисел в одну строчку через пробел.
*/
#include <stdio.h>


int main(void)
{
    int rect_width = 1280, rect_height = 720;
    int w = 8, h = 8;
    scanf("%d; %d", &w, &h);

    int not_covered_w = rect_width % w;
    int not_covered_h = rect_height % h;

    printf("%d %d\n", not_covered_w, not_covered_h);

    return 0;
}