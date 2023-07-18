#include<stdio.h>
#include<conio.h>
int main()
{
   int N,i,j;
   printf("Enter a number");
   scanf("%d",&N);
   for(j=N+1; ;j++)
  {
   for(i=2;i<j;i++)
      if(j%i==0)
      break;
   if(i==j)
      {
      printf("Next prime is=%d ",i);
      return 0;
      }
   }
}

//isme maine ye logic socha tha ki 1 prime no ke baad isse return karna padega 1 baar return ho gya toh buss khtm
// aur 1st loop me toh initialize or condition same rehna chahiye tabhi chalta rahega jb tk ek baar return naah kr de
//OR IF condition me khali chhood denge toh true mana jata hai always
