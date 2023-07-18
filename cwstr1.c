#include<stdio.h>
int main()
{
    char str1[10]="hi";
    char str2[10]="hello";
    char *p=strncat(str1,str2,1);
    printf("%s %s %s",p,str1,str2);
    return 0;
}

