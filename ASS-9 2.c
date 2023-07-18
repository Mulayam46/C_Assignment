#include<stdio.h>
#include<conio.h>
float circumference(float );
int main()
{
    float i,Z ;
   printf("Enter a radious");
   scanf("%f",&i);
   Z=circumference(i);
   printf("Circmference of circle is= %f",Z);
   getch();
}
float circumference(float r)
{
   float A;
   A=2*3.14*r;
   return A;
}

