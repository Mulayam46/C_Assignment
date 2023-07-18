#include<stdio.h>
int main()
{
    int age;
    printf("enter ur age");
    scanf("%d",&age);
    switch (age){
    case 3:printf("age is 3");
    break;
    case 24:printf("age 24");
    break;
    case 75: printf("age is 75");
    break;
default:
printf("not valid");}
return 0;}
