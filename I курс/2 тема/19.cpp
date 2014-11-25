#include <stdio.h>

int main ()
{
    int n1,n2, end, b, a;
    long k, z;
    scanf ("%d %d", &n1, &n2);
    scanf ("%d", &end);
    b=0;
    for (int i=n1; i<=n2; i++)
    {
        k=i;
        while (k!=0)
        {
            k=k/10;
            b++;
        }
        k=i; a=1; z=0;
        for (int j=0; j<b; j++)
        {
            z = z+(k%(10*a))/a;
            a = a*10;
        }
        b = 0;
        if (z == end) printf ("%d \n", i);
    }
}
