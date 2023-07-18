#include<conio.h>
int main()
{
   int a,b,i,j;
   printf("Enter a number");
   scanf("%d%d",&a,&b);
   for(j=a;j<b;j++){
   for(i=2;i<j;i++)
      if(j%i==0)
      break;
   if(i==j)
      printf("%d ",i);}
   getch();

}

