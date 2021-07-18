#include <stdio.h>

// declaring the structure
struct student {
  char name[10];
  int id;
  double marks;
};

void display(
    // declaring the function to display the contents of the
    // structure address passed to the function
    struct student *);

int main() {
  struct student s1 = {"Ram", 101, 79.0};
  struct student s2 = {"Mohan", 102, 99.0};
  struct student *x;
  x = &s1; // storing the address of the structure variable s1

  /*displaying the details of student1 using pointers*/
  printf("The student details are as follows:\n");
  printf(" Name= %s\n ID= %d\n marks= %f\n\n", x->name, x->id, x->marks);

  // sending the address of the structure variable s2 to function
  // display()
  display(&s2);

  return 0;
}

/**
 * displaying the contents of the address sent to the function
 */
void display(struct student *s) {
  printf("The student details are as follows:\n");
  printf(" Name= %s\n ID= %d\n marks= %f\n\n", s->name, s->id, s->marks);
}
