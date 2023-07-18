#include<stdio.h>
#include<conio.h>
int area(int l,int b);
main()
{
    int x,y,M;
    printf("enter a lenth of l and b");
    scanf("%d %d",&x,&y);
  //  M=;
    printf("Area Of Rectangle is :%d\n",area(x,y));
}
int area(int l,int b)
{
    int z;
    z=l*b;
    return z;
}
