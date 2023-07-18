


 #include<stdio.h>
void reverse(int n);
main()
{
   int a;
   scanf("%d",&a);
   reverse(a);
}
void reverse(int n)
{
 if(n>=1){
   printf("%d ",n);
   reverse(n-1);
   }
}
