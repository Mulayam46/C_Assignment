#include<stdio.h>
void printodd(int n);
int main()
{
   int a;
   scanf("%d",&a);
   printodd(a);

}
void printodd(int n)
{
   if(n>=1)
  {printodd(n-1);
   printf("%d ",2*n-1);}
}

