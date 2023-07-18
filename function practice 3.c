#include<stdio.h>
/*void isEvenodd(int );
main()
{
   int a;
   printf("enter a no");
   scanf("%d",&a);
   isEvenodd(a);
}
void isEvenodd(int x)
{
   if(x%2==0)
      printf("Even");
   else
      printf("odd");
}*/

void multi(int ,float);
main()
{
   int  a=5;
   float b=7.5;
   multi(a,b);
   printf("hello");
}
void multi(int x,float y)
{
   float m;
   m=x*y;
   printf("multiplication is %.2f\n",m);
}
