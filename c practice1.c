#include<stdio.h>
int main ()
{
    int num ;
    //take the number as an intput from the user
    printf("emter a value of num whose mltplctn table is to be printed:");
    scanf("%d",&num);
    for(int i=0;i<10;i++)
    {
        printf("%d x %d=%d\n",num,i+1,(i+1)*num);

    }
    return 0;
}
