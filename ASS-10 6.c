#include<stdio.h>
void printN(int);
int main()
{
int a;
   printf("Enter a number");
   scanf("%d",&a);
   printN(a);
}
void printN(int n)
{
   if(n>0)
   {
   printf("%d ",2*n-1);
   printN(n-1);
   }
}

