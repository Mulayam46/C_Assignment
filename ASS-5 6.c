
int main()
{
   int n,i,SUM=0,rem;
   printf("enter a number");
   scanf("%d",&n);
   while(n)
   {
      rem=n%10;
      SUM=SUM+rem;
      n=n/10;
}
printf("Sum of digit=%d",SUM);
}
