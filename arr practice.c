#include<stdio.h>
int main ()
{
    int n=11,i,even =0,odd=0;
    int arr[]={1,5,46,4,5,8,9,6,444,4};
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)

        even++;
        else
             odd++;

    }
    printf("even:%d odd:%d",even ,odd);

}
