main()
{
    void *p;
    int x=5;
    double y=3.14;
    p=&x;
    printf("%d\n",*(int*)p);
    p=&y;
    printf("%lf",*(double*)p);
    getch();
}
