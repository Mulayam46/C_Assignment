

 #include<stdio.h>
void printn(int n);
main()
{
   int a;
   scanf("%d",&a);
   printn(a);
}
void printn(int n)
{
 if(n>=1){
   printn(n-1);
   printf("%d ",n);}
}
