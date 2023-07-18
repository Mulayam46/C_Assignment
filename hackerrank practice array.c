#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define N 6
int main() {
    int i,j,size,arr[N];
  for(i=0;i<N;i++){
        //scanf("%d ",&size);
   scanf("%d",&arr[i]);}
  //printf("%d ",arr[i]);
        int sum=0;
    for(i=0;i<N;i++)
    {
        sum=sum+arr[i];
  }sum=sum+N;
        printf("%d\n ",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
