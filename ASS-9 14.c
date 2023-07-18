#include<stdio.h>
void Isarmstrong(int);
main()
{
   int a;
   printf("Enter a number");
   scanf("%d",&a);
   Isarmstrong(a);
}
void Isarmstrong(int a)
{
   int c,n,s=0,r,temp;
  temp=a;
   while(a>0)
   {
     r=a%10;
     c=r*r*r;
     s=s+c;
     a=a/10;
   }
   a=temp;
   if(a==s)
      printf("Armstrong number=%d",s);
   else
      printf("Not Armstrong ");
}

