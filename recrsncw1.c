#include<stdio.h>
//int fib(int n);
int main()
{
    int i,nterms;
    scanf("%d",&nterms);
    for(i=0;i<nterms;i++)
    printf("%d",fib(i));
}
int fib(int n)
{
    if(n==0||n==1)
        return (1);
    return (fib(n-1)+fib(n-2));
}
