main()
{   int n;
   scanf("%d",&n);
   int a=0,b=1,i,c;
   for(i=1;i<=n;i++)
      {a=b;
      b=c;
      c=a+b;}
      printf("%d term of bibbonacci series =%d ",n,c);
}
