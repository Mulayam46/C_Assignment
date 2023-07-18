
#include<stdio.h>
int main(void)
{
    char str[]="india";
    char *p;
     p=str;
    while(*p!='\0')
    {
        printf("character=%c\t",*p);
        printf("address=%p\n",p);
        p++;
    }
        return 0;
        }
