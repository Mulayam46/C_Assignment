#include<stdio.h>
/*int main ()
{
   int z;
   z=sub();
   printf("substract is : %d",z);
}
int sub()
{
   int a,b,x;
   printf("enter a no");
   scanf("%d%d",&a,&b);
   x=a-b;
   return x;
   printf("foooo");
}*/

void multi(float ,float);
main()
{
   float a=5,b=7;
   multi(a,b);
   printf("hello");
}
void multi(float x,float y)
{
   float m;
   m=x*y;
   printf("multiplication is %.2f\n",m);
}
