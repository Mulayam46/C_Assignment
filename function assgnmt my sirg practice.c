int sumofnatural(int a);
main()
{
   int x;
   scanf("%d",&x);
   printf("%d",sumofnatural(x));
}
int sumofnatural(int a )
{
   int i,sum=0;
   for(i=0;i<=a;i++)
      sum=sum+i;
   return sum;
}/*
#include<stdio.h>
int iseven(int a);
int main()
{
   int x;
   scanf("%d",&x);
   if(iseven(x))
      printf("even");
   else printf("odd");
}
int iseven(int a)
{
   if(a%2==0)
      return 1;
   return 0;
}
*//*
#include<stdio.h>
int isPrime(int a);
int main()
{
   int x;
   scanf("%d",&x);
   if(isPrime(x))
   printf("prime");
   else printf("not a prime");
}
int isPrime(int a)
{
   int i;
   for(i=2;i<a;i++)
      if(a%i==0)
         break;
      if(i==a)

      return 1;
     return 0;
}
*//*
#include<stdio.h>
int fact(int x);
int main()
{
  int a;
   scanf("%d",&a);
   printf("%d",fact(a));
}
int fact(int x)
{
   int i,fact=1;
   for(i=1;i<=x;i++)
      fact=fact*i;
   return fact;
}
*/
