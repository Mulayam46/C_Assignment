void check (int num)
{
    if(num%2==0)
        printf("%d is even\n",num);
    else
        printf("%d is odd",num);
}
void check (int num);
main()
{
    int arr[10],i;
    printf("enter the array element :");
    for (i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        check(arr[i]);
    }
    return 0;
}
