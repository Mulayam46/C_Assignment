void display(int *,int);
void input(int *,int);
main()
{   int a [10];
   input(a,10);
   display(a,10);
   getch();
}
void display(int *p,int size)
{
    int i;
        printf("enter %d number",size);
    for(i=0;i<size;i++)
        printf("%d\t",*(p+i));
}
void input(int *p,int size)
{
    int i;
    printf("enter %d number",size);
    for(i=0;i<size;i++)
        scanf("%d",p+i);
}

