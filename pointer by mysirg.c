int square(int x)
{
    return (x*x);
}
int cube(int x)
{
    return (x*x*x);
}
int calculate(int (*p)(int),int n)
{
    return (p(n));
}

main()
{
    while(1)
    {int ch,n;
    printf("1.square\n");
    printf("2.cube\n");
    printf("3.exit\n");
    printf("enter ur choice\n :");
    scanf("%d",&ch);
    printf("enter a number:");
    scanf("%d",&n);
switch(ch)
{
    case 1: printf("%d",calculate(square,n));
    break;
    case 2: printf("%d",calculate(cube,n));
    break;
    case 3: exit(0);
    default : printf("uhh enter a wrong choice/exit:");

}
}}
