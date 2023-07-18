#include<stdio.h>
int sum(int n);
int main()
{
   int a;
   scanf("%d",&a);
   printf(" %d ",sum(a));
}
int sum(int n)
{
  int s;
   if(n==0)
      return 0;
   s =n+sum(n-1);
      printf("%d + ",n);
    return s;
}
