#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="parul",str2[]="devanshi";
    //char str2[]=""
    //char str2={'d','e','e','p'};
    if(strlen(str1)-strlen(str2) >=0)
        puts(str1);
        //printf("same/n");
    else
       // printf("different\n");
       puts(str2);
//printf("%s %s\n",x,y);
    return 0;
}

/*#include<stdio.h>
#include<string.h>
int main()
{
   char str2[10];
   char str1[]="Parul";
   strcpy(str2,str1);
   if(str1==str2)
      printf("same\n");
   else
      printf("different\n");
   return 0;
}*/
