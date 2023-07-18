#include<stdio.h>
int main()
{
    char str[]="lucknow";
    char *p=str;
    p=p+3;
   p[3]='t';
    printf("%s %s\n",str,p);
    return 0;
}
