int main ()
{
    int i,n;
    scanf("%d",&n);
   for(i=n;i>0;i-=2)
     {
    printf("%d ",i);
    i=i-1;}
}
 int sum=0,n;
    scanf("%d",&n);
while (n)
{
    sum=sum+n%10;
    n=n/10;
}
printf("sum is : %d",sum);}
int i,n;
scanf("%d",&n);
for(i=1;i<n;i++)
    n=n/10;
printf("digit in this no is : %d",i);}

