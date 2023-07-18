main()
{
   int arr1[5]={1,3,3,4,0};
   int arr2[5]={1,2,3,4,5};
   int arr3[5],i;
   /* for(i=0;i<=4;i++)
      scanf("%d",&arr1[i]);
    for(i=0;i<=4;i++)
      scanf("%d",&arr2[i]);*/
   for(i=0;i<=4;i++){
      arr3[i]=arr1[i]/arr2[i];
   printf("%d ",arr3[i]);}
}
