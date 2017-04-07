#include <stdio.h>
#include <String.h>
int main()
{
    struct student{//declaring a structure to store student details
        char name[10];
        int id;
        float marks;
    };
    struct student s1={"Ram",101,79.0};//we store the details of the first student
    struct student s2,s3;
    /*the piece meal copying or copying each element separately*/
    strcpy(s2.name,s1.name);
    s2.id=s1.id;
    s2.marks=s1.marks;
    /*copying the elements directly using '=' operator*/
    s3=s1;
    /*Displaying the copied details*/
    printf("The details copied in s2:\n");
    printf(" Name= %s\n ID= %d\n marks= %f\n\n",s2.name,s2.id,s2.marks);
    printf("The details copied in s3:\n");
    printf(" Name= %s\n ID= %d\n marks= %f\n\n",s3.name,s3.id,s3.marks);
    return 0;
}
