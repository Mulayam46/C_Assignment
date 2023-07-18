#include<conio.h>
int main()
{
   int a,b,i,j;
   printf("Enter a number ");
   for(j=2;j<100;j++){
   for(i=2;i<j;i++)
      if(j%i==0)
      break;
   if(i==j)
      printf("%d ",i);}
   getch();

}

