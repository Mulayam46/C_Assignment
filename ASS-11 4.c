#include<stdio.h>
int main()
{
   int G,i,arr[10]={2,3,4,5,9,6,1,7,8,0};
      G=arr;
   for(i=0;i<=9;i++)
   {
      if(G>arr+i)
         G=arr;
      else
         G=arr+i;
   }
      printf("%d",G);
   }
