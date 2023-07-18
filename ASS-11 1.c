#include<stdio.h>
int main()
{
   int i,s=0,arr[10];
   float avg;
   printf("Enter a number");
   for(i=1;i<=10;i++)
   scanf("%d",&arr[i]);
   for(i=1;i<=10;i++)
   s=s+arr[i];
       avg=s/10.0;
      printf("%0.2f",avg);
}
