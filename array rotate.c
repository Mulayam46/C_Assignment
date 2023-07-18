int main()
{
  int i,j,arr[6]={1,2,3,4,5,6},temp;
  for(i=0;i<6;i++)
  printf("%d ",arr[i]);
  printf("\nafter rotate array is:\n");
     temp=arr[5];
   for(i=4;i>=0;i--)
    arr[i+1]=arr[i];
    arr[0]=temp;
     printf("\n");
     for(i=0;i<6;i++)
     printf("%d ",arr[i]);
}
