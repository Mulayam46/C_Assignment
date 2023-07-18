#include<stdio.h>
int fact(int );
int main()
{
   int m,z;
   printf("enter a number");
   scanf("%d",&m);
  z= fact(m);
 printf("%d",z);
}
int fact(int a)
{
   int i,fact=1;
   for(i=1;i<=a;i++)
      fact=fact*i;
   return fact;
}
