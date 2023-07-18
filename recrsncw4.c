#include<stdio.h>
int main()
{
    printf("%d",fun(6));
}
int fun(int a)
{
    if(a==10)
        return a;
    return a+fun(a+1);
}
