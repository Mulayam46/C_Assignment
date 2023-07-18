#include<stdio.h>
int fibbonacci(int );
int main()
{
   int a;
   printf("enter nth term");
   scanf("%d",&a);
   fibbonacci(a);
}
int fibbonacci(int n)
{
   int a=0,b=1,c;
   while(n){
   a=b;
   b=a;
   c=a+b;
   }
   printf("%d",c);
   fibbonacci(n-1);

}
