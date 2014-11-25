#include <stdio.h>

int main(){
    int x1, y1, x2, y2, x3, y3, x4, y4, x, y;
    printf("vvedi x1 u y1: ");
    scanf("%d %d", &x1, &y1);
    printf("vvedi x2 u y2: ");
    scanf("%d %d", &x2, &y2);
    printf("vvedi x3 u y3: ");
    scanf("%d %d", &x3, &y3);
    printf("vvedi x4 u y4: ");
    scanf("%d %d", &x4, &y4);
    
    x = ((x3 - x1)*(x2*y4 - x4*y2)-(x4 - x2)*(x1*y3-x3*y1)) / ((y1 - y3)*(x4 - x2)-(y2-y4)*(x3-x1));
    y = ((x1*y1 - x3*y1)*(y1-y2) - (x2*y4 - x4*y2)*(y1-y3)) / ((y1 - y3)*(x1-x2) - (y2-y4)*(x3 - x1));
    if(x>0 && y>0){
        printf("1");
    } else {
        if (x< 0 && y > 0) {
            printf("2");
        } else {
            if(x < 0 && y < 0){
                printf("3");
            } else {
                if (x > 0 && y <0) {
                    printf("4");
                } else {
                    if (x == 0 && y == 0) {
                        printf("center");
                    } else {
                        if (x == 0) {
                            printf("on X");
                        } else {
                            if (y == 0) {
                                printf("on Y");
                            } else {
                                printf("Some Error:(");
                            }
                        }
                    }
                    
                }
            }
        }
    }
}