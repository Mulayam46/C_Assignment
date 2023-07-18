#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
};
void display(struct student *);
void inc_marks(struct student *);
int main(void)
{
    struct student stu1={"john",12,87};
    struct student stu2={"mary",18,90};
    inc_marks(&stu1);
    inc_marks(&stu2);
    display(&stu1);
    display(&stu2);
    return 0;
}
void inc_marks(struct student *stuptr)
{(stuptr->marks)++;
}
void display(struct student *stuptr)
{
    printf("name - %s\t",stuptr->name);
     printf("rollno - %d\t",stuptr->rollno);
      printf("marks - %d\n",stuptr->marks);
}
