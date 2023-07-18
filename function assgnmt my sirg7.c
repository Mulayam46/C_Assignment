#include<stdio.h>
int fact (int a);
int main()
{
int a;
scanf("%d",&a);
printf("%d",fact(a));

}
int fact(int a)
{
   int i,fact=1;
   for(i=1;i<=a;i++)
      fact=fact*i;
   return fact;
}
