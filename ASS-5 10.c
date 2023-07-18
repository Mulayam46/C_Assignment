
int main()
{
   int n,i,s,a=0,b=1,c;
   printf("enter a number");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("%d ",a);
      s=a;
      c=a+b;
      a=b;
      b=c;
   }
         printf("\n%dth term of fibbonacci series is =%d ",n,s);

}
