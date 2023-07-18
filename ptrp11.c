#include<stdio.h>
int main()
{
    int arr[5]={3,5,6,7,9};
    int *p=arr;
    int (*ptr)[5]=&arr;
    printf("p=%d,ptr=%d\n",p,ptr);
     printf("*p=%d,*ptr=%d\n",*p,*ptr);
     printf("sizeof(p)=%u,sizeof(*P)=%u\n",sizeof(p),sizeof(*p));
       printf("sizeof(ptr)=%u,sizeof(*Ptr)=%u\n",sizeof(ptr),sizeof(*ptr));
    return 0;
}
