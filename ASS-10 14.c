#include<stdio.h>
int reverseofdigit(int );
int main()
{
   int a;
   printf("enter digit=");
   scanf("%d",&a);
   printf("reverse of digit is =");
   reverseofdigit(a);
}
int reverseofdigit(int n)
{
   int r,s;
   if(n>0){
      r=n%10;
   printf("%d",r);
   reverseofdigit(n/10);
   }
}

