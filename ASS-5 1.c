int main()
{
   int n,i,s=0;
   printf("enter a number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   printf("%d ",i*i);
      s=s+i*i;
   }
   printf("\n%d",s);
}
