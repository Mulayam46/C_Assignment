#include<stdio.h>
int main ()
{
    int n,i,sum=0;
    printf("enter the last natural number you want to sum:");
    scanf("%d",&n);
    //sum=1+2+3+4+5+6+......+n
   for(i=0;i<=n;i++)
    {
       sum+=i;
  }
    //run in constant time
   // sum =(n*n+n)/2;
    printf("sum of first %d natural number is: %d\n",n, sum);
    return 0;
}
