#include<stdio.h>
int main()
{
    int a=87;
    float b=4.5;
    int *p1=&a;
    float *p2=&b;
    printf("value of p1=address of a=%d\n",p1);
    printf("value of p2=address of b=%d\n",p2);
    //printf("address of p1=%d\n",&p1);
   // printf("address of p2=%d\n",&p2);
     printf("value of a=%d %d %d\n",a,*p1,*(&a));
    return 0;
}
