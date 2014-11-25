#include <stdio.h>
int main() {
    int a, b,c, x, h,u,o;
    float d, k;
    b=0;
    c=0;
    printf ("vvedite kol-vo tetradey\n");
    scanf("%d", &a);
    x=a;
    if (a>=400) {
        b=a/400;
        a=a%400;
    }
    if (a>=20) {
        c=a/20;
        a=a%20;
    }
    if ((((x%400)-400)>=(-23))&&(((x%400)-400)<=0)) {
        h=(b+1)*70;
        u=b+1;
        printf("vi mogete kupit %4.2d korobki tetradey i zaplatet %4.2d dollarov\n",u,h);
    }
    if (((((x%400)%20)-20)>=(-1))&&((((x%400)%20)-20)<=0)) {
        k=(c+1)*3.7;
        o=c+1;
        printf("vi mogete kulit %4.2d pachki tetradey i zaplatit %4.2f dollarov\n",o,k);
    }
    d=a*0.2+c*3.7+b*70;
    printf("obshaya summa = %.2f \n",  d);
    printf("kol-vo korobok = %d \n", b);
    printf("kol-vo pachek = %d \n", c);
    printf("kol-vo otdel tetradey = %d \n", a);
}
