#include <stdio.h>
#include <math.h>
int M,a,b,i,j;
int main()
{
    printf("Введите число:\n");
    scanf("%d",&M);
    a=0;
    b=0;
    for (i=1; i<=sqrt(M); i++)
    {
        for (j=i; j<=sqrt(M); j++)
            if (i*i+j*j==M)
            {
                a=i;
                b=j;
            }
    }
    if (a!=0 && b!=0) printf("\nМожно разложить на %d %d", a, b);
    else printf("\nЭти числа нельзя разложить");
    getchar();
    getchar();
}

