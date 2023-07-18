#include<stdio.h>
int main()
{

int arr[10];
int num=10,i,j;
while(num!=0)
{
    arr[i]=num%2;
    num=num/2;
       i++;
}
for(j=i-1;j>=0;j--){
printf("%d",arr[j]);}

}


