#include<stdio.h>
#include<conio.h>
float area(float );
int main()
{
    float i,Z ;
   printf("Enter a radious");
   scanf("%f",&i);
   Z=area(i);
   printf("Area of circle is= %f",Z);
   getch();
}
float area(float r)
{
   float A;
   A=3.14*r*r;
   return A;
}
