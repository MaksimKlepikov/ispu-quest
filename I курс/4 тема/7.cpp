#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <mem.h>
int max1(int n, int x[] )
{
    int i,l;
    l=0;
    for (i=0;i<n;i++) if (x[i]>l) l=x[i];
    return l;
}
int main()
{
    int m,n,i,j,k,p;
    int *o;
    printf("vvedite kol-vo strok\n");
    scanf("%d", &m);
    printf("vvedite kol-co stolbcov\n");
    scanf("%d",&n);
    printf("\n");
    int **x;
    x=new int *[m];
    for (i=0;i<m;i++)
    {
        x[i]=new int[n];
    }
    srand(time(NULL));
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            x[i][j]=rand()/100000000;
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int *max;
    max=new int [m];
    for (i=0; i<m; i++)
    {
        max[i]=max1(n,x[i]);
        printf("max=%d\n",max[i]);
    }
    printf("\n");
    for (k=0;k<(m-1);k++) //сортировка
    {
        for (i=0;i<(m-1);i++)
        {
            if (max[i]<max[i+1])
            {
                o=x[i];
                x[i]=x[i+1];
                x[i+1]=o;
                p=max[i];
                max[i]=max[i+1];
                max[i+1]=p;
            }
        }
    }
    printf("\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
}