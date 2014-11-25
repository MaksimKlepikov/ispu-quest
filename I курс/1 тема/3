//Tema 1 zadacha 3
#include <stdio.h>
#include <math.h>
int main ()
 {
 float a,b,c,t1,t2;
 printf ("Vvedite a b c\n");
 scanf ("%f %f %f",&a,&b,&c);
 

 
 if (b*b - 4*a*c<0) printf("Korney net");
 
 if (b*b - 4*a*c==0) 
    {
    t1=(-b -sqrt(b*b - 4*a*c))/(2*a);
    t2=(-b +sqrt(b*b - 4*a*c))/(2*a);	
    if (t1>0) printf ("x=%f x=%f", sqrt(t1),-sqrt(t1));
    if (t1<0) printf ("Korney net");
    if (t1==0) printf ("x=0");
    }
    
 if (b*b - 4*a*c>0) 
    {
    t1=(-b -sqrt(b*b - 4*a*c))/(2*a);
    t2=(-b +sqrt(b*b - 4*a*c))/(2*a);
    if (t1>0) printf ("x=%f x=%f", sqrt(t1),-sqrt(t1));
    if (t2>0) printf ("x=%f x=%f", sqrt(t2),-sqrt(t2));
    if (t1==0 || t2==0) printf ("x=0");
    if (t1<0 && t2<0) printf ("Korney net");
    }
	
 }//By Maxim with love
