#include<stdio.h>

int main()
{
      struct result
    {
        int marks;
        char grade;
        float per;
    }res;
    res.marks=90;
    printf("marks:%d\n",res.marks);
    res.grade='a';
    printf("grade:%c\n",res.grade);
    res.per=85.5;
    printf("percentage:%f\n",res.per);
    return 0;

}
