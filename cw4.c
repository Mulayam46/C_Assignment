#include<stdio.h>
int main()
{
int i,arr[6]={1,4,8,6,2,3};
int small,large,avg;
small=large=arr[0];
for(i=1;i<6;i++)
{
if(arr[i]<small)
    small=arr[i];
        if(arr[i]>large)
        large=arr[i];
        avg=arr[i]/6;
}
    printf("smallest=%d,largest=%d\n,avg=%d",small,large,avg);
return 0;
}

