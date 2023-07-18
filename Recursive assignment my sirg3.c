#include<stdio.h>
void printeven(int n);
int main()
{
   int a;
   scanf("%d",&a);
   printeven(a);

}
void printeven(int n)
{
   if(n>0)
   printeven(n-1);
   printf("%d ",2*n);
}
