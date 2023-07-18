#include<stdio.h>
struct tag{int i;char c;};
void fun(struct tag);
int main()
{
    struct tag var={12,'c'};
    fun(var);
    printf("%d\n",var.i);
    return 0;

}
void fun(struct tag var)
{
    var.i++;}
    printf("%d",var.i);
    return 0;
    }
