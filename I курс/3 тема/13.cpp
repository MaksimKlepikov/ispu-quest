//Tema 3 zadacha 13
#include <stdio.h>;

int main()
{
   int min,max,min1,max1,N,M,i,j,k,l,f ;
   printf ("Vvedite chislo strok M=");
   scanf ("%d",&M);
   printf ("Vvedite chislo stolbcov N=");
   scanf ("%d",&N);
   int arr [M][N];
   printf("Vvedite elementi matrici:");
   for ( i=0; i<M; i++)
      for ( j=0; j<N; j++)
	     scanf ("%d",&arr[i][j]);

   for (i=0;i<M;i++) // ищем наим. элемент в строке, а потом наиб. в его столбце (min,max)
   { // паралельно ищем наиб. эл. в строке, а потом наим. в его столбце (min1,max1)
      min=arr[i][0];
      max1=arr[i][0];
      
      k,l,f=0;

      for(j=1;j<N;j++)
         if (arr[i][j]!=arr[i][j-1]) // проверяем - не состоит ли строка из одинаковых элементов
		    f=1;   
      if (f)
      {
         for(j=1;j<M;j++)
         if (arr[i][j]!=arr[i-1][j]) // проверяем - не состоит ли столбец из одинаковых элементов
		    f=1;   
		 if (f)  
		    {
		    
         for (j=1;j<N;j++)
         {
      
    	    if( arr[i][j]<min)
        	 {
    	    	min=arr[i][j];
    	    	k=j;
    	    }
    	    if( arr[i][j]>=max1)
    	    {
        	 	max1=arr[i][j];
        	 	l=j;
        	 }
         }

         max=min;
    	 min1=max1;	
	   
         for (j=0;j<M && min==max;j++) // условие min==max оптимизирует поиск
            if (arr [j][k]>max)
               max=arr [j][k];
            
         for (j=0;j<M && min1==max1;j++)
            if (arr [j][l]<=min1)
               min1=arr [j][l];
      
         if (min==max)
            printf("\n (%d %d)",i,k);   
		     
         if (min1==max1)
            printf("\n (%d %d)",i,l); 
            }
     }
  }
   


}//By Maxim with love
