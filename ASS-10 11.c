int sumofdigit(int );
#include<stdio.h>
int main()
{
   int a;
   printf("enter digit=");
   scanf("%d",&a);
   printf("sum of digit is=%d",sumofdigit(a));
}
int sumofdigit(int n)
{
   if(n==0)
      return 0;
   return n%10+sumofdigit(n/10);

}
