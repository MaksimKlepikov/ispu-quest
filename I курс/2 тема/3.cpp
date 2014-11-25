// Tema 2 zadacha 3
#include <stdio.h>
 int main()
{
	int t,i=2;
	printf("vvedite chislo\n");
	scanf("%d",&t);
	
	while(i<=t)
	{
		if(t%i==0)
		{
			printf("%d",i);
			t=t/i;
			if(t>1)
				printf("*");
		}
		else
			i=i+1;		
	}
	getchar;
}//By Maxim with love
