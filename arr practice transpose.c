#include<stdio.h>
int main()
{
    int i,j,arr [3][4]={2,3,4,5,6,7,8,9,10,11,12,13};
    for(i=0;i<3;i++)
      {
      for(j=0;j<4;j++)
       printf("%d  ",arr[i][j]);
        printf("\n");}
       for(i=0;i<4;i++)
      {
         for(j=0;j<3;j++)
         printf("%d ",arr[j][i]);
        printf("\n");
}}
