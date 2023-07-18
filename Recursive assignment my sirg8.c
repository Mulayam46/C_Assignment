#include<stdio.h>
int  convert(int ,int );
int main()
{
   int n,base;
   scanf("%d",&n);
   convert(n,2);
   printf(" ");
}
int  convert(int n,int base)
{
   int rem=n%base;
   if(n==0)
   return ;
   convert(n/2,2);
   printf("%d",rem);
}
