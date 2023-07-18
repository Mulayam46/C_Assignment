#include<stdio.h>
int main()
{   char *p;
    char str1[10]="yes";
    char str2[10]="hello";
    p=strcpy(str1,str2);
    printf("%s %s %s",str1,str2,p);
    return 0;
}
