#include<stdio.h>
#include<conio.h>
int isPrime(int a);
main()
{
   int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(isPrime(n))
    printf("prime number");
    else
        printf("not a prime");
}
int isPrime(int a)
  {
    int i;
    for(i=2;i<=a;i++)
        if(a%i==0)
         break;
        if(a==i)
        return 1;
        return 0;
        }
