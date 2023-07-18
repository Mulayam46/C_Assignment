#include<stdio.h>
int isprime(int a);
main()
{
   int x;
   scanf("%d",&x);
   if(isprime(x))
   printf("prime");
   else
      printf("not a prime");
}
int isprime(int a)
{
   int i;
   for(i=2;i<a;i++)
      if(a%i==0)

      return 0;
   return 1;
}
