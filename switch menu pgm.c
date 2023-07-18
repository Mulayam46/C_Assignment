#include<stdio.h>
int main()
{
    int a,b,s,choice;
    while(1)
    {
        printf("1.Addition of two number\n");
        printf("2.check odd-even\n");
        printf("3.print first n natural no\n");
        printf("4.exit\n");
    printf("Enter your choice\n:");
    scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("enter your number a and b:");
                    scanf("%d%d",&a,&b);
                    s=a+b;
                    printf("sum of a and b is: %d\n",s); break;

            case 2: printf("enter your number for checking even odd:");
                    scanf("%d",&a);
                    if(a%2==0)
                    printf("even\n");
                    else
                        printf("odd\n");
                    break;
            case 3: printf("enter your number ");
                    scanf("%d",&b);
                    for(a=0;a<=b;a++)
                        printf("%d ",a);
                    break;
            case 4: exit(0);

            default : printf("invalid choice yrr sahi enter karo\n");


        }
    }

}

