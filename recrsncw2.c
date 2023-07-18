#include<stdio.h>
int main()
{
    printf("%d",fun(3,8));
}
fun(int a,int b)
{
    if(a>b)
        return 0;
    return b+fun(a,b-1);
}

