#include<stdio.h>
#include<conio.h>
int print(int a);
main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("sum of first %d natural no is:",n);
    print(n);
}
int print(int a)
{
    int i,sum=0;
    for(i=1;i<=a;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return sum;
}
