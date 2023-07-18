int main()
{
   int i,small,large,arr[10]={1,2,3,4,5,6,7,4,2,9};
   small =large=arr[0];
   for(i=1;i<10;i++)
      {if(arr[i]<small)
      small=arr[i];
   if(arr[i]>large)
      large=arr[i];
}
printf("smallest is:%d largest is %d :",small,large);
}
