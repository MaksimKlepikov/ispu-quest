#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, x3, x4, y1, y2, y3, y4, alpha;
    printf("Введите координаты точек первой прямой: ");
    scanf("%f, %f %f, %f", &x1, &y1, &x2, &y2);
    printf("Введите координаты точек второй прямой: ");
    scanf("%f, %f %f, %f", &x3, &y3, &x4, &y4);
    if((y2 - y1) * (x3 - x4) == (y4 - y3) * (x1 - x2)){
        printf("Прямые паралельны!");
    } else {
        if((y2 - y1) * (y4 - x3) == -1 * (x1 - x2) * (x3 - x4)){
            printf("Прямые перпендикулярны!");
        } else {
            alpha = atan(((y2-y1)*(x3-x4) - (y4-y3)*(x1-x2))/((y2-y1)*(y4-y3) + (x1-x2)*(x3-x4)));
            printf("Прямамя пересекает другую под углом %f˚", alpha);
        }
    }
    printf("\n");
}
