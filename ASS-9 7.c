#include<stdio.h>
#include<conio.h>
int Iseven(int );
int main()
{
   int n,m;
   printf("enter a number");
   scanf("%d",&n);
   if(Iseven(n))
   printf("even");
   else
      printf("odd");
   getch();
}
int Iseven(int a)
{
   if(a%2==0)
   return 1;
   return 0;
}
