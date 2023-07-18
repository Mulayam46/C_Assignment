int main()
{
   int n,i,s=0;
   printf("enter a number");
   scanf("%d",&n);
   for(i=1;i<=2*n;i++)
   {
      if(i%2!=0)
      {
         printf("%d ",i);
         s=s+i;
      }
   }
   printf("\nsum=%d",s);
}

