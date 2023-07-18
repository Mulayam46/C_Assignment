#include<stdio.h>
int main ()
{
    int a=5;
   int  *p;p=&a;
   printf("value of p=address of a=%d\n",p);
   printf("value of p=%d\n",++p);
   printf("value of p=%d\n",p++);
     printf("value of p=%d\n",p);
      printf("value of p=%d\n",--p);
       printf("value of p=%d\n",p--);
    printf("value of p=%d\n",p);
return 0;
}
