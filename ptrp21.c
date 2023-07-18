#include<stdio.h>
void func(double f[],int *i,char c[5]);
int main()
{
    double d_arr[5]={1.4,2.5,3.7,4.1,5.9};
    int i_arr[5]={1,2,3,4,5};
    char c_arr[5]={'a','b','c','d','e'};
    printf("inside main():");
    printf("sizeof(d_arr)=%u\t",sizeof(d_arr));
    //printf("sizeof(i_arr)=%u\t",sizeof(i_arr));
  // printf("sizeof(c_arr)=%u\t",sizeof(c_arr));
    //printf("%d %d %d\n",d_arr,i_arr,c_arr);
    return 0;
    void func(double d[],int *i,char c[5])
    {
        printf("sizeof(d)=%u\t",sizeof(d));
    }
}
