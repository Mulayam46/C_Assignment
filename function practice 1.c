#include<stdio.h>
 void sum(void);
int main()
{
    sum();
    sum();
    sub();
    sub();
    sub();
    sum();
    multiplies();
    divides();
    divisible();
}
//you can also take a different value in own defination body
void sum(void)
{
    int x,a=10,b=5;
    x=a+b;
    printf("sum is:%d\n",x);
}
void sub(void)
{
    int a=10,b=3, y;
    y=a-b;
    printf("substraction is %d\n",y);
}
void multiplies(void)
{
    int a,b,z;
    printf("Enter a number for multiplication a and b");
    scanf("%d %d",&a,&b);
    z=a*b;
    printf("multiplication is: %d\n",z);
}
void divides(void)
{
    int a,b,m;
    printf("Enter a number for divide a and b");
    scanf("%d %d",&a,&b);
    m=a/b;
    printf("divide is : %d\n",m);
}
void divisible(void)
{
    int a,b,n;
    printf("Enter a number for rem a and b");
    scanf("%d %d",&a,&b);
    n=a%b;
    printf("remainder is %d\n:",n);
}
