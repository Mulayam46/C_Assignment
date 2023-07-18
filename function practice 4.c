#include<stdio.h>/*
int max(int x,int y);
int main()
{
   int a,b;
   printf("enter a no");
   scanf("%d %d",&a,&b);
   //m=max(a,b);
   printf("max is %d\n",max(a,b));
}
int max(int x,int y)
{
   return(x>y?x:y);
}*/

int max(int x,int y,int z);
int main()
{
   int a,b,c,m;
   printf("enter a no");
   scanf("%d %d %d",&a,&b,&c);
   m=max(a,b,c);
   printf("max is %d\n",m);
}
int max(int x,int y,int z)
{
   return(x>y&&x>z?x:y>z?y:z);
}

