
int main(){
int a=5,*pi=&a;
char b='x',*pc=&b;
float c=5.5,*pf=&c;
printf("value of pi=add of a =%p\n",pi);
printf("value of pc=add of b =%p\n",pc);
printf("value of pf=add of c =%p\n",pf);
pi++;
pc++;
pf++;
printf("now value of pi=%p\n",pi);
printf("now value of pi=%p\n",pc);
printf("now value of pf=%p\n",pf);}
