int main()
{
   int x,p=1,i,y;
   printf("enter two  number");
   scanf("%d %d",&x,&y);
   //printf("%d ^ %d is: %d",x,y,power(x,y));
   for(i=1;i<=y;i++)
   p=p*x;
   printf("%d",p);
}
