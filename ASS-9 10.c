#include<stdio.h>
int fact(int );
int combination(int ,int );
int main()
{
   int c;
   c=combination(5,3);
   printf("combination is =%d",c);
}
int fact(int a)
{
   int i,fact=1;
   for(i=1;i<=a;i++)
      fact=fact*i;
   return fact;
}
int combination(int n,int r)
{
   int c;
   c=(fact(n)/(fact(r)*fact(n-r)));
   return c;
}


