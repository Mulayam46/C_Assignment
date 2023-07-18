#include<stdio.h>
enum month{jan,feb,mar,apr,may};
int main ()
{
    enum month m;
    m=feb+1;
    printf("%d\n",m);
    return 0;


}
