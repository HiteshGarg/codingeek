//Using Loop
#include <stdio.h>
int main() {
  int i, fact = 1, number;
  printf("Enter a number:");
  scanf("%d", &number);
  
  for (i = 1; i <= number; i++) {
    fact = fact * i;
  }
  printf("Factorial of %d is: %d", number, fact);
  return 0;
}
_____________________________________________________________________________________________________________________________________________________________________________________

//Using Recursion
#include<stdio.h>
int factorial(int x){
  if (x == 0)
    return 1;
  else
    return(x * factorial(x-1));
}
int main(){
  int number;
  int fact;
  printf("Enter a number: ");
  scanf("%d", &number);
  fact = factorial(number);
  printf("Factorial of %d is %d\n", number, fact);
  return 0;
}
