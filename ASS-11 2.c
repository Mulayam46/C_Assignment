#include<stdio.h>
int main()
{
   int i,s=0,arr[10];
   printf("Enter a number");
   for(i=0;i<10;i++)
   scanf("%d",&arr[i]);
   for(i=0;i<10;i++)
   s=s+arr[i];
      printf("Sum is=%d ",s);

}

