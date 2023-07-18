#include<stdio.h>
void func(char str[]);
int main()
{
    char str[]="vijaynagar";
    func(str);
    return 0;}
    void func(char str[]){

   str = str+5;
       printf("%s\n",str);}

