#include <stdio.h>
int main()
{
    struct student//declaring the structure with name student
    {
    char name[10];//stores the name of the student
    int id;//stores the ID of the student
    float marks;//stores the marks of the student
    };
    /*initializing values to all the structure variables*/
    struct student s1={"Ram",101,79.0};
    struct student s2={"Mohan",102,99.0};
    struct student s3={"Rohan",103,55.0};
    struct student s4={0};//all values initialized as 0
    /*displaying student details*/
    printf("Details of student1:\n");
    printf(" Name= %s\n ID= %d\n marks= %f\n\n",s1.name,s1.id,s1.marks);
    printf("Details of student2:\n");
    printf(" Name= %s\n ID= %d\n marks= %f\n\n",s2.name,s2.id,s2.marks);
    printf("Details of student3:\n");
    printf(" Name= %s\n ID= %d\n marks= %f\n\n",s3.name,s3.id,s3.marks);
    printf("Details of student4:\n");
    printf(" Name= %s\n ID= %d\n marks= %f\n\n",s4.name,s4.id,s4.marks);
    return 0;
}
