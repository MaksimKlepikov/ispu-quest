//Tema 3 zadacha 3
#include <stdio.h>
int main ()
{

   int n,m,i,j,k,flag;

   printf("vvedite razmer matrici A");
   scanf("%d%d",&m,&n);

   int a[m][n],x[m]; 

   printf("zapolnite matricu A\n");
   for (i=0;i<m;i++)
      for(j=0;j<n;j++)
         scanf("%d",&a[i][j]);
   
   printf("zapolnite massiv X");  
   for (k=0;k<m;k++)  
      scanf("%d",&x[k]);
  
   for (k=0;k<m;k++)  
   { 
      flag=0;               
      printf("\nElement (massiva X) %d (indeks %d)",x[k],k);
      if ((x[k]<=a[m-1][n-1]) && (x[k]>=a[0][0]))
         for (i=0;i<m && !flag;i++)
            for(j=0;j<n && a[i][j]<=x[k];j++)
               if (a[i][j]==x[k])
               {
                  flag++;
          	      printf("\n\traven elementy matrici A s indeksom %d;%d ",i,j);        
               } 
      if (flag==0) printf("\n\totsutstvuet v matrice A");   
   }
   getchar ();
   getchar ();
}//By Maxim with love

