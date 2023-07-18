
#include<stdio.h>
int isPrime(int a);
 void printprime(int a ,int b);
 main()
 { int a,b;
    printf("enter two no ");
scanf("%d%d",&a,&b);
printprime(a,b);
 }
/*main()
{
   int z,x;
   printf("enter a no for isprime");
   scanf("%d",&x);
  if(isPrime(x))
      printf("PRIME ");
   else
      printf("NOT A PRIME");
   return 0;
}*/
int isPrime(int a)
{
   int i;
   for(i=2;i<=a;i++)
      if(a%i==0)
      break;
   if(a==i)
      return 1;
      return 0;
}void printprime(int a ,int b)
 {

    int i ;
    for(i=a;i<=b;i++)
      if(isPrime(i))
      printf("%d ",i);
 }
  int nextprime(int k)
      {
         while(!isPrime(++k));
            return k;
      }
