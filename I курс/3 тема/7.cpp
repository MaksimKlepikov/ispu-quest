#include <stdio.h>
#include <mem.h>
//поворот массива с использованием одного единственного массива
int n,k,i,j,p1,x,p2;
int main()
{
    printf("vvedite chislo\n");
    scanf("%d",&n);
    int mas[n][n];
    k=1;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            mas[i][j]=k;
            k++;
            printf("%d ",mas[i][j]);
        }
        printf("\n");
    }
    p1=n/2;
    printf("\n");
    for (i=0; i<p1; i++)
    {
        for (j=i;j<(n-i-1);j++){
            x=mas[i][j];
            mas[i][j]=mas[j][n-1-i];
            mas[j][n-1-i]=mas[n-1-i][n-1-j];
            mas[n-1-i][n-1-j]=mas[n-1-j][i];
            mas[n-1-j][i]=x;
        }
    }
    printf("\n");
    printf("massiv perevernutiy\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d ",mas[i][j]);
        }
        printf("\n");
    } 
}