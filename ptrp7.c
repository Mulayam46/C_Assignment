#include<stdio.h>
int main()
{
    int a=5,*pi=&a;
    char b='x',*pc=&b;
    float c=5.5,*pf=&c;
    printf("value of pi=address of a=%d\n",pi);
    printf("value of pc=address of b=%d\n",pc);
    printf("value of pf=address of c=%d\n",pf);
    pi++;
    pc++;
    pf++;
    printf("now value of pi=%d\n",pi);
     printf("now value of pc=%d\n",pc);
      printf("now value of pf=%d\n",pf);


    return 0;

}
