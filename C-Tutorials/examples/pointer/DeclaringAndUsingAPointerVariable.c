#include <stdio.h>

int main() {
  // create char variable
  char cha;
  
  // Initialize the pointer to char variable
  char *ptrCha;
  
  // Initializing the pointer variable with
  // the address of variable cha
  ptrCha = &cha;
  
  // Assigning value to the variable cha
  cha = 'A';
  
  // access value and address of cha 
  // using variable cha
  printf("The Value of cha: %c\n", cha);
  printf("The Address of cha: %p\n", &cha);
  
  // access value and address of cha using 
  // pointer variable ptrCha
  printf("The Value of cha: %c\n", *ptrCha);
  printf("The Address of cha: %p", ptrCha);
  return 0;
}
