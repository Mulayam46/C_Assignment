main ()
{
  /* int  i,n,rem,product=1;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
     rem=n%10;
     n=n/10;
    if(rem%2==0)
      product=product*rem;}
        printf("%d ",product);
}
int i,n,s=0,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
   {

   s=s+i;
printf("%d ",s+1);
sum=sum+s+1;}
printf("\nsum is : %d\n",sum);
}*/
int num,sum=1;
do
{
    scanf("%d",&num);
    sum= sum*num;
    printf("\nproduct is: %d",sum);
}
 while (num!=0);
   // printf("%d",sum);
}
