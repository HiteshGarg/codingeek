#include <stdio.h>
/*declaring the structure outside the main() function*/
struct student{
    char name[10];
    int id;
    float marks;
};
void display(struct student);//declaring the function to display the student details
int main()
{
    struct student s1={"Ram",101,79.0};//initializing structure
    display(s1);//sending the complete student details to the function display()
    return 0;
}
/*Function to display the student details*/
void display(struct student s)//formal parameter takes the entire structure as argument
{
    printf("The student details are as follows:\n");
    printf(" Name= %s\n ID= %d\n marks= %f\n\n",s.name,s.id,s.marks);
}
