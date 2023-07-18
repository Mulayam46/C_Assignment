#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
};
void display (char name[],int rollno,int marks);
int main (void)
{
    struct student stu1={"jhon",12,87};
    struct student stu2;
    strcpy(stu2.name,"mary");
    stu.rollno=18;
    stu.marks=90;
    display(st1u.name,stu1.rollno,stu1.marks);
     display(st2u.name,stu2.rollno,stu2.marks);
     return 0;}
     void display(char name[],int rollno,int marks)
    {
    printf("name    - %s\t",name);
      printf("rollno - %d\t",rollno);
       printf("marks - %d\n",marks);
}
