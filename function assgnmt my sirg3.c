#include<stdio.h>
#include<conio.h>
int natural(int a);
main()
{
    int n,m;
    printf("enter a number");
    scanf("%d",&n);
   printf("The first %d natural no is :",n);
   natural(n);
}
int natural (int a)
{
    int i;
    for(i=1;i<=a;i++)
{   printf("%d",i);}
       return i;
}
