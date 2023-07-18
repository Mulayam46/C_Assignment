#include<stdio.h>
#include<conio.h>
int isPrime(int a);
main()
{
   int n;
    printf("enter a number:");
    scanf("%d",&n);
    /*if(isPrime(n))
    printf("prime number");
    else
        printf("not a prime");*/
      //  printprime(10,30);
     nextPrime(n);
}
int isPrime(int a)
  {
    int i;
    for(i=2;i<a;i++)
        if(a%i==0)
        return 0;
        return 1;
}
void printprime(int a,int b)
{
    int x;
    for(x=a;x<=b;x++)
    if(isPrime(x))
        printf("%d ",x);
}
nextPrime(int k)
{
    while(!isPrime(++k));
    return k;
}
