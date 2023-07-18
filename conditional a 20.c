 main()
{
    int a=10;
    begin:
        if(a)
        {
            printf("%d    ",a);
            a++;
            goto begin;
        }
        return 0;
}
