#include<stdio.h>
int main()
{
    int i,j,temp,arr[6]={5,4,3,2,1,0};
    for(i=0,j=5;i<j;i++,j--)
        {temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
        printf("after reversing the array is:");
        for(i=0;i<6;i++)
            printf("%d",arr[i]);
        printf("\n");
}
