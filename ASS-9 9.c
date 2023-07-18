#include<stdio.h>
int fact(int );
int permutation(int ,int );
int main()
{
   int p;
   p=permutation(5,3);
   printf("permutation is =%d",p);

}
int fact(int a)
{
   int i,fact=1;
   for(i=1;i<=a;i++)
      fact=fact*i;
   return fact;
}
int permutation(int n,int r)
{
   int p;
   p=(fact(n)/fact(n-r));
   return p;

}

