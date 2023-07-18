#include<stdio.h>
int sum(int n);
int main()
{
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    printf("sum of digits of %d\n",sum(num));
    return 0;}
    int sum(int n)
    {
       int sum=0;
       while(n>0)
       {
           sum+=n%10;
           n/=10;}
           return sum;
    }

