#include<stdio.h>
#include<conio.h>
void natural(int);
int main()
{
   int n;
   printf("enter a no ");
   scanf("%d",&n);
   natural(n);
}
void natural(int a)
{
   int i;
   for(i=1;i<=a;i++)
   printf("%d ",i);
    getch();
}
