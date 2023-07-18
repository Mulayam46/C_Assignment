#include<stdio.h>
int power(int a,int b);
int main()
{
   int x,y;
   printf("enter two  number");
   scanf("%d %d",&x,&y);
   printf("%d ^ %d is: %d",x,y,power(x,y));
 /*  for(i=1;i<=y;i++)
      p=p*x;
   printf("%d",p);*/
}
int power(int a, int b)
{
   int i,p=1;
   if(b==0)
      return 1;
   return a*power(a,b-1);

}
