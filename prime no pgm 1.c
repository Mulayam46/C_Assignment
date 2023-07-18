main()
{

   int i,n;
   printf("enter a no for check prime or not");
   scanf("%d",&n);
   for(i=2;i<=n;i++)
      if(n%i==0)
       goto mulayam;
       mulayam:
      if(i==n)
      printf("prime hai re ");
   else
      printf("not a prime");
}
