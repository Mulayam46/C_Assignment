#include<stdio.h>
int main()
{
     int i,arr[]={1,2,4,8,6,45,2665,486,448};
    int min,max;
    min=max=arr[0];
    for(i=0;i<10;i++)
       {

    if(arr[i]<min)
    min=arr[i];
    if(arr[i]>max)
        max=arr[i];

}
printf("minimum=%d,maximum=%d\n",min,max);
return 0;

}
