#include<stdio.h>
void add(int i, int j);
int main()
{
    add(10,20);
    add(5,5);
    return 0;
}
void add(int i,int j)
{
    int s;
    s=i+j;
    printf("%d\n",s);
}
