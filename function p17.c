#include<stdio.h>
void rev(int a);
main()
{
   int x;
   printf("enter a no");
   scanf("%d",&x);
   rev(x);

}
void rev(int a)
{
   int m,z;
   while(a)
   {
      m=a%10;
      a=a/10;
  printf("%d ",m);}}



