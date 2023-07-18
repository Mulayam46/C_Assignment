#include<stdio.h>
int sumN(int);
int main()
{
int a;
   printf("Enter a number");
   scanf("%d",&a);
   printf("sum are=%d",sumN(a));
}
int sumN(int n)
{
   if(n==0)
   return 0;
   return n+sumN(n-1);
}
