#include <stdio.h>
void display(char *, int,
             float); // declaring function to display the student details
int main() {
  struct student { // declaring the structure
    char name[10];
    int id;
    float marks;
  };
  struct student s1 = {"Rohan", 102, 55.0};
  struct student s2 = {"Mohan", 103, 99.0};
  /*sending individual values to the function display()*/
  display(s1.name, s1.id, s1.marks); // for student1
  display(s2.name, s2.id, s2.marks); // for student2
  return 0;
}
void display(char *n, int i, float m) {
  printf("The student details are as follows:\n");
  printf(" Name= %s\n ID= %d\n marks= %f\n\n", n, i, m);
}
