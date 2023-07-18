
#include<stdio.h>
int main()
{
    char str[20];
    unsigned int len;
    printf("enter a string");
    gets(str);
    len=strlen(str);
    printf("length of '%s' is :'%d'",str,len);
    return 0;
}
