#include<stdio.h>
int main()
{
   int a,b,c,i,j;
   printf("enter two no");
   scanf("%d%d",&a,&b);
   //for(i=a;i<=a*b;i++)
   for(j=a>b?a:b;j<=a*b;j++)
      if(i%a==0&&i%b==0)
         break;
      printf("%d",i);
}
