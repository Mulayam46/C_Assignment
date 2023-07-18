#include<stdio.h>
int main ()
{
    char str[3][20]={"monday","tuesday","wednesday"};
    printf("%s\n",str[0]);
    printf("%s\n",str[2]);
    printf("%c",str[0][3]);
}
