main()
{
    int n;
    for(n=1;n<=5;n++)
    {
        if(n==2)
            continue;
        printf("number=%d\n",n);
    }
    printf("out of for loop\n");
}
