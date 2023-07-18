#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
    };
    int main()
    {
    struct student stu={"mary",25,68};
    struct student *ptr=&stu;
    printf("name - %s\t",ptr->name);
    printf("rollno - %d\t",ptr->rollno);
    printf("marks - %d\t",ptr->marks);
    return 0;

}
