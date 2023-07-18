#include<stdio.h>
int main()
{
char str1[10]="hi";
char str2[10]="welcome";
char *p=strncpy(str1,str2,2);
//str1="welcome"
printf("%s %s %s",p,str1,str2);
return 0;
}
