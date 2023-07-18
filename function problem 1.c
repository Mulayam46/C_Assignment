#include<stdio.h>
void sqrt (float  a);
main()

{
   float   a;
   printf("enter a no");
   scanf("%f",&a);
   sqrt(a);
}
void sqrt (float n)
{
   float  n,s;
   scanf("%f",&n);
   printf("%.3f",sqrt(n));
}
