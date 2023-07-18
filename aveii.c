/*#include<stdio.h>
int main ()
{
    short unsigned int i=0;
    printf("%u\n",i++);
    return 0;
}*/

#include<stdio.h>
    int sum(int num);
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",sum(num));
    return 0;
}
      int sum(int num)
      {
          int sum=0;
    while (num>0)
    {
        sum+=num%10;
        num/=10;
     }   return sum;
    }

