#include<stdio.h>
#include<conio.h>
int main()
{
   int N,i,j;
   printf("Enter a number");
   scanf("%d",&N);
   for(j=2;j<=5;j++)
      {
   for(i=2;i<j;i++)
      if(j%i==0)
      break;
   if(i==j)
      printf("%d ",i);
      }
}

