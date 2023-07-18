#include<stdio.h>
int main()
{
#if (a>b && a>c)

       printf("a is bigger");
#elif b>a && b>c
        printf("b is bigger");
#else c>a&&b
         printf("c is bigger");}
#endif
