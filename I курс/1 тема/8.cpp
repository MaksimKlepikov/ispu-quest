#include <stdio.h>

int main() {
    int start;
    scanf("%d", &start);// читаем число

    printf("%d-", start); // выводим это первое число

    start = start + 2; //увеличиваем на два
    if(start > 8) start = start - 7; // если он больше 8 то вычитаем 7
    printf("%d-", start); //выводим

    start = start + 2;
    if(start > 8) start = start - 7; // если он больше 8 то вычитаем 7
    printf("%d-", start);

    start = start + 2;
    if(start > 8) start = start - 7; // если он больше 8 то вычитаем 7
    printf("%d-", start);

    start = start + 2;
    if(start > 8) start = start - 7; // если он больше 8 то вычитаем 7
    printf("%d\n", start);
}