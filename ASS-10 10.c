#include<stdio.h>
int Squaresum(int );
int main()
{
  int x;
  printf("Enter a number");
  scanf("%d",&x);
  printf("\nsum of square=%d",Squaresum(x));

}
int Squaresum(int n)
   if(n==0)
{ int s;
      return 0;
   s=n*n+Squaresum(n-1);
      printf("%d ",n*n);
      return s;
}
