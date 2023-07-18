#include<stdio.h>
int main()
{
    char str1[10]="yes";
    char str2[10]="Hello";
    int i=0,j=0;
   //while(str1[i]=str2[i])
   // while(j<2)
    while(str1[i]!='\o');
    i++;j++;
    (str1[i++]=str2[j++]);
    //while(str2[i]!='\o')
    printf("%s %s",str1,str2);
    return 0;
}
