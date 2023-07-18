
int main()
{   int arr[6]={1,2,3,4   },i,temp;
    for(i=0;i <4;i+=2)
    {
        temp    = arr[i];
        arr[i]  = arr[i+1];
        arr[i+1]= temp;}
    for(i=0;i < 4;i++)
        printf("%d ",arr[i]);
}

