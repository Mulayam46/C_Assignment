#include<stdio.h>
void func(void);
int main()
{
    int i=5;
    for(i=i+1;i<8;i++)
        func();
    return 0;

}
void func(void)
{
    int j;
    for(j=1;j<3;j++)
        printf("%d\t",++j);// in case of this program first call the fun and then pritn then
       // cursur will return then again call and again print .
}
