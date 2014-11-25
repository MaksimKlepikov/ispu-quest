#include <stdio.h>

bool is_leep(int ddd){
    if((ddd%4 == 0 && ddd%100 != 0) || ddd%400 == 0){
        return true;
    } else {
        return false;
    }
}
int days(int month, int year){
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
            break;
        case 4: case 6: case 9: case 11:
            return 30;
            break;
        case 2:
            if(is_leep(year)){
                return 29;
            } else {
                return 28;
            }
    }
    return 0;
}
int main (){
    int i, day = 0, week_day = 1, year, age, j, k, result = 0;
    printf("Для какого века сосчитать? Введите: ");
    scanf("%d", &age);
    age--;
    for(i = 1; i <= age * 100; i++){
        day = week_day;
        if(is_leep(i) && (i!=age)){
            week_day+=2;
        } else {
            week_day++;
        }
        if(week_day > 7) week_day = week_day - 7;
    }
    printf("%d\n", week_day);
    for(i = 0; i <= 99; i++){
        year = age * 100 + i;
        for(j = 1; j <= 12; j++){
            for(k = 1; k <= days(j, year); k++){
                if(week_day == 5 && k == 13){
                    result++;
                }
                week_day++;
                if(week_day>7) week_day-=7;
            }
        }
    }
    printf("%d\n", result);
}
