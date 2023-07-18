// add only even number of n natural no
/*main()
{

int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      if(i%2==0)
        sum=sum+i;
    printf("%d\t",sum);
}*/
//add only even no

main()
{
    int i ,n,odd_sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(i%2!=0)
        odd_sum=odd_sum+i;
    printf("%d\t",odd_sum);

}
