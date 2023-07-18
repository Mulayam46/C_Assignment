int main()
{
   int a=2,i,n;
   printf("enter a number for prime no ");
   scanf("%d",&n);
   while (n)
   {
     for(i=2;i<=a;i++)
      if(a%i==0)
       break;

       if(a==i)
         {printf("%d ",a);
      n--;}
   a++;
   }
}
/*main()
{

int a,i=2,n;
   printf("enter a number for prime no ");
   scanf("%d",&n);
   while(i<=n){
   //for(i=2;i<=n;i++)
      if(n%i==0)
      break;

      i++;}
   if(n==i)
      printf("%d",i);
      else
         printf("not");
      }
*/
