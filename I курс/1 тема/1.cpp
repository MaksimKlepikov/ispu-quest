#include <stdio.h>

int main() {
    int year, color, animal;
    scanf("%d", &year);
    year-=4;
    color = year%60/12;
    animal = year%60%12;
    printf("%d год был годом ", year+4);
    switch (animal) {
        case 0: printf("крысы"); break;
        case 1: printf("коровы"); break;
        case 2: printf("тигра"); break;
        case 3: printf("зайца"); break;
        case 4: printf("дракона"); break;
        case 5: printf("змеи"); break;
        case 6: printf("лошади"); break;
        case 7: printf("овцы"); break;
        case 8: printf("обезьяны"); break;
        case 9: printf("курицы"); break;
        case 10: printf("собаки"); break;
        case 11: printf("свиньи"); break;
    }
    printf(" ");
    switch (color) {
        case 0: printf("зеленого"); break;
        case 1: printf("красного"); break;
        case 2: printf("желтого"); break;
        case 3: printf("белого"); break;
        case 4: printf("черного"); break;
    }
    printf(" цвета\n");
}
