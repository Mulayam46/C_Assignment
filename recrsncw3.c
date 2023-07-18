
#include<stdio.h>
int main()
{
    printf("%d",fun(3,8));
}
fun(int a,int b)
{
    if(a>b)
        return 1000;
    return a+fun(a+1,b);
}
