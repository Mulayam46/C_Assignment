#include<stdio.h>
#include<conio.h>
void Evennatural(int);
int main()
{
   int n;
   printf("enter a no ");
   scanf("%d",&n);
   Evennatural(n);
}
void Evennatural(int a)
{
   int i;
   for(i=1;i<=a;i++)
      if(i%2==0)
   printf("%d ",i);
    getch();
}

