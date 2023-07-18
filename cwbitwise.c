#include<stdio.h>
void displayBits(int x);
int main()
{
   int a=4,b=6;
   printf("%d",a);
   displayBits(a);
   printf("%d",b);
   displayBits(b);
   printf("%d",a/b);
   displayBits(a/b);
}
void displayBits(int x)
{
int i,mask;
for(i=31;i>=0;i--){
        mask=1<<i;
        putchar((x&mask)?'1':'o');
if(i%8==0)
    putchar('  ');
    }

    printf("\n");}
