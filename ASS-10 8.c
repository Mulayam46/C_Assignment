#include<stdio.h>
int sumevenN(int);
int main()
{
int a;
   printf("Enter a number");
   scanf("%d",&a);
   printf("\nsum is =%d",sumevenN(a));
}
int sumevenN(int n)
{ int s;
   if(n==0)
   return 0;
   else
      s=2*n+sumevenN(2*(n-1));
   printf("%d",n);
   return s;
}
