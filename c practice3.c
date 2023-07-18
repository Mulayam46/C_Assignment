#include<stdio.h>
int returnmin(int array[],int n)
{
    int min=0;
    for (int i=0;i<n;i++)
    {
        if(array[i]>min);
        {
            min=array[i];
        }

    }
    return min ;
}
int main ()
{
    int arr[]={1,12,3,54,45,68,455};
    int min=returnmin(arr,7);
   printf("the minimum element in this array is %d",min);
    return 0;
}
