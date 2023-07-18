#include<stdio.h>
int sumdigit(int n);
int main()
{
   int a;
   scanf("%d",&a);
   printf("digit of sum is :%d",sumdigit(a));

}
int sumdigit(int n)
{
   if(n==0)
   return 0;
   return n%10+sumdigit(n/10);
}

