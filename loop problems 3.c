main()
{

   /* int i ,n,even_sum=0,odd_sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    if(i%2==0)
    even_sum=even_sum+i;
    else

        odd_sum=odd_sum+i;
    printf("%d\t%d",even_sum,odd_sum);}*/

    //take only div by 2&3 add n natural no
    int i ,n,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
if(i%2==0 && i%3==0)
sum=sum+i;
printf("%d",sum);}

