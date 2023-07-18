main()
{

    int z,x;
   printf("enter a no");
   scanf("%d",&x);
      printf("%d",nextprime(x));
   return 0;
}
int isPrime(int a)
{
   int i;
   for(i=2;i<=a;i++)
      if(a%i==0)
      break;
   if(a==i)
      return 1;
      return 0;}
 int nextprime(int k)
      {
         while(!isPrime(++k));
            return k;
      }

