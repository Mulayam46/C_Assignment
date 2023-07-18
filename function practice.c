#include<stdio.h>/*
int sum(int, int );
int main()
{   int x,y,z;
   scanf("%d %d",&x,&y);
   z= sum(x,y);
    printf("hello\n");
     printf("sum is:%d",z);
}
int sum(int a , int b)
{
    int s;
    s=a+b;
    printf("sum is:%d\n",s);
    return s;
}*/
/*void fun(int,int);
int main()
{
    int x,y;
    x=5,y=7;
    fun(x,y);
    printf("\nx=%d,y=%d",x,y);
}
void fun(int x,int y)
{
    x=7;
    y=5;
    printf("x=%d,y=%d",x,y);
}*/
void fun(int*,int*);
int main()
{
    int x=5,y=7;
    fun(&x,&y);
    printf("\nx=%d,y=%d",x,y);
}
void fun(int*x,int*y)
{
    *x=7;
    *y=5;
    printf("\tx=%d,y=%d",*x,*y);

}


