void func(char,void(*fp)(float));
void fun1(float);
int main(void)
{
   void(*p)(float);
   p=fun1;
   printf("function main() called\n");
   func('a',p);
   return 0;
}
void func(char b,void(*fp)(float))
{
   printf("function func() called\n");
   (*fp)(8.5);
}
void fun1(float f)
{
   printf("funcion fun1() called\n");
}
