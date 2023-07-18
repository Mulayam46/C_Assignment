#include<stdio.h>
int main ()
{
    int n;
//sub,math,mathscience,science;
    printf("enter you pass in which sub\n");
    printf("enter 1 if you pass in math and science both\n ");
    printf("enter 2 if you pass in mat\n ");
    printf("enter 3 if you pass in science both\n ");
    scanf("%d", &n);
        if ( n==1)
    {
        printf("you gifted is %d",45);}
        else if (n==2)
        {
            printf("you gifted is %d",15);
    }
    else if (n==3)
    {
        printf("you are won gift rs 15");
    }
    else
        printf("ur not eligible for any gift");
    return 0;
}
