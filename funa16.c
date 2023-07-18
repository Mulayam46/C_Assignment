#include<stdio.h>
int main()
{
    int fun(int a,int b)
    {
        return (a+b);
    }
    int c;
    c=fun(3,5);
    printf("%d",c);
    return 0;
}
