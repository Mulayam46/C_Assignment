#include<stdio.h>
union num
{
    int i;
    long int l;
    float f;
    double d;
};
int main()
{
    union num arr[10]; /*size of this array will be 10*sizeof(double)*/
    arr[0].i=12;
    arr[1].i=400000;
    arr[2].i=11.12;
    arr[3].i=23.34;
    printf("%d\t",arr[0].i);
    printf("%ld\t",arr[1].l);
    printf("%d\t",arr[2].f);
    printf("%d\n",arr[3].f);
    return 0;

}
