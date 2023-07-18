#include<stdio.h>
#include<conio.h>
float area(float r);
main()
{
    float n,x;
    printf("enter a number:");
    scanf("%f",&n);
    x=area(n);
    printf("%f",x);
}
float area(float r)
{
    float z;
    z=3.14*r*r;
    return z;
}
