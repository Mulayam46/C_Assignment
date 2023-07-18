#include<stdio.h>
int main ()
{
    fun1(10,18);
    fun2(10,18);
}
void fun1(int a,int b)
{
    if(a>b)
        return ;
    printf("%d",b);
    fun1(a,b-1);
    void fun2(int a,int b)
    {
        if(a>b)
            return ;
        fun2(a,b-1);
        {
        printf("%d",b);
    }}

