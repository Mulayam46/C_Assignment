#include<stdio.h>
int lcm(int a,int b);
main()
{
   int a,b;
   printf("enter a number");
   scanf("%d%d",&a,&b);
  printf("lcm is %d",lcm(a,b));
}

int lcm(int a,int b)
{ int L;
   for(L=1;L<=a*b;L++)
   if(L%a==0&&L%b==0)
   break;
   return L;
}
