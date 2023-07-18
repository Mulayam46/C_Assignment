#include<stdio.h>
void printprime(int a ,int b);
 main()
 {   int a,b;
    printf("enter two no");
    scanf("%d %d",&a,&b);
      printprime(a,b);
}
 void printprime(int a ,int b)
 {
    int i,x;
       for(x=a;x<b;x++){
      for(i=2;i<=x;i++)
         if(x%i==0)
            break;
       if(i==x)
        printf("%d ",i);
 }}


