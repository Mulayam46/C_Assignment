#include<stdio.h>
int main()
{
    printf("%c\t","determination"[4]);
    printf("%c\t",*("determination"+5));
    printf("%s\t","determination"+2);
    printf("determination"+3);
    printf("\t");
    printf("determination"+strlen("deepali"));
    printf("\t");
    printf("determination"+sizeof("deepali"));
    printf("\n");
    return 0;
}
