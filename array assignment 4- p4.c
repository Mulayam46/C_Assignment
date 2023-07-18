
void reverse(int arr[],int size);
int main()
{
   int i,arr[5]={1,2,3,4,5};

  reverse(arr,5);
}
 void reverse(int arr[],int size)
 {   int i;
    for(i=0;i<5;i++)
   printf("%d\n",arr[i]);
   for(i=4;i>=0;i--)
      printf("%d ",arr[i]);
}
