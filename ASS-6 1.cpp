#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter a number");
   scanf("%d",&a);
   for(i=2;i<n;i++)
      if(n%i==0)
      break;
   if(i==n)
      printf("Prime");
   else printf("Not a prime");
   return 0;
}
