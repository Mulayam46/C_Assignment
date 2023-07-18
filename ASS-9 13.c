#include<stdio.h>
void allprime(int ,int);
int main()
{
   int a,b;
   printf("Enter two no");
   scanf("%d%d",&a,&b);
   allprime(a,b);
}
void allprime(int a,int b)
 {
    int i,j;
    for(i=a;i<=b;i++)
   {
     for(j=2;j<=i;j++){
         if(i%j==0)
         break;}
     if(j==i){
         printf("%d ",j);
         }
   }

}
