main ()
{
    int num,sum=0;
    do
    {
        printf("enter a number(enter 0 to stop):");
        scanf("%d",&num);
        sum+=num;
    }
    while(num!=0);
    printf("sum is %d",sum);
    return 0;
}
