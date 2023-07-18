#include<stdio.h>
#include<limits.h>
int main()
{
  short a=40000;
    unsigned short b=40000;
    printf("a=%d,b=%u\n",a,b);
    printf("%d, %u\n",SHRT_MAX,USHRT_MAX);
    return 0;
}
