main()
{
   int diff,i,j,small, large, arr[5]={1,2,3,4,5};
   small=large=arr[0];
   for(i=1;i<5;i++){
    if(arr[i]<small)
    small=arr[i];
   if(arr[i]>large)
   large=arr[i];}
   printf("small:%d\n large:%d\n difference is: %d",small ,large ,large-small);
}
