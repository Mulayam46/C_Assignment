main ()
{
    int x,y,quo,rem;
    printf("enter two no");
    scanf("%d%d",&x,&y);
    if (y)
    {
        rem=x%y;
       quo=x/y;
       printf("%d\t%d",rem ,quo);
    }else
    printf("divide by zero error");

}
