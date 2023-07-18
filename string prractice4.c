#include<stdio.h>
int main()
{
    char str[]="yes";
    char *ptr=str;
   // *(ptr+1)='s';
    printf("%s %s",ptr,str);
    return 0;
}
