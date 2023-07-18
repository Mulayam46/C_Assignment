main()
{
    char str[10];
    int l;
    printf("enter a string");
    gets(str);
    l=length(str);
    printf("%d",l);
}
int length(char *p)
{
    int i;
    for(i=0;p[i];i++);
    return(i);
}
