#include<stdio.h>
int main()
{
   int i,s=0,S=0,arr[10];
   printf("Enter a number");
   for(i=1;i<=10;i++)
   scanf("%d",&arr[i]);
   for(i=1;i<=10;i++)
      if(arr[i]%2==0)
         S=S+arr[i];
    else
         s=s+arr[i];
         printf("Sum of all even=%d\n sum of all odd=%d",S,s);
}

