#include<stdio.h>
#include<conio.h>
int Sumnatural(int);
int main()
{
   int n,m;
   printf("enter a no ");
   scanf("%d",&n);
   m=Sumnatural(n);
   printf("sum of first %d natural no is  =%d",n,m);
    getch();
}
int Sumnatural(int a)
{
   int i,s=0;
   for(i=1;i<=a;i++)
   s=s+i;
   return s;
}

