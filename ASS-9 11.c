#include<stdio.h>
int main()
{
   int m;
   printf("Enter a number");
   scanf("%d",&m);
   if(Isprime(m))
      printf("Prime no=%d",m);
   else
      printf("Not Prime");
}
int Isprime(int a)
{
   int i;
   for(i=2;i<=a;i++)
      if(a%i==0)
      break;
   if(i==a)
      return 1;
      return 0;
}
