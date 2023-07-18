main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)

    if(n%i==0)
        break;

    if(n==i)
            printf("prime");
   else
        printf("not prime");

}
