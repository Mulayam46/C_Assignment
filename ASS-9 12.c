#include<stdio.h>
int Nextprime(int );
int Isprime(int );
int main()
{
   int m,n;
   printf("Enter a number");
   scanf("%d",&m);
   printf("Nextprime is = %d",Nextprime(m));
   return 0;
}
int Isprime(int a)
{
   int i;
   for(i++; ;i++){
   for(i=2;i<=a;i++)
      if(a%i==0)
      break;
   if(i==a)
      return 1;
      return 0;}
}
int Nextprime(int x)
{
while(!Isprime(++x));
   return x;
}

