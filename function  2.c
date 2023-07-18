#include<stdio.h>
void isvowel(char m);
int main ()
{
   char ch;
   printf("enter a number");
   scanf("%c",&ch);
   isvowel(ch);

}
void isvowel(char ch)
{
   switch(ch)
   {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
      printf("vowel");break;
      default: printf("consonant");
   }
}

