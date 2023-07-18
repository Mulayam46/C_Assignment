#include<stdio.h>
#define N 5
#define LEN 10
int main ()
{
   char arr[N][LEN]={"white",
                     "red",
                     "green",
                     "yellow",
                     "blue"
   };
   int i;
   for(i=0;i<N;i++)
   {
      printf("string=%s\t",arr[i]);
      printf("address of string=%p\n",arr[i]);
   }
}
