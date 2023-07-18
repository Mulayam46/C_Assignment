#include<stdio.h>
sumsquare(int n);
int main()
{
   int a;
   scanf("%d",&a);
   printf("%d",sumsquare(a));

}
int sumsquare(int n)
{
   if(n==1)
      return 1;
      return n*n+sumsquare(n-1);


}


