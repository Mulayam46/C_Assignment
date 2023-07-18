#include<stdio.h>
int main()
{
     int arr[5]={5,10,15,20,25};
     int i,*p;
     p=arr;
    for(i=0;i<5;i++)
printf("address of arr[%d]=%p\n %p\n %p\n %p\n",i,&arr[i],p+i,&p[i]);
return 0;
}
