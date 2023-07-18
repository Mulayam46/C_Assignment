#include<stdio.h>
#include<conio.h>
int even_odd(int a);
main()
{
    int n,x;
    printf("enter a number:");
    scanf("%d",&n);
    if(even_odd(n))
    printf("even");
    else
        printf("odd");
}
int even_odd(int a)
{
    //int z;
    return a%2==0;
    //return z;
}
