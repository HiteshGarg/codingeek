#include <stdio.h>
//Using only if statement
int findGreatestOf3Numbers(int a, int b, int c) {
  // if a is greater than both b and c, a is the greatest
  if (a >= b && a >= c){
    return a;
  }
  // if b is greater than both a and c, b is the greatest
  if (b >= a && b >= c){
    return b;
  }
  // if c is greater than both a and b, c is the greatest
  if (c >= a && c >= b){
    return c;
  }
  return 0; // this will never run
}
/*
Using if-else-if Statement.

void findGreatestOf3Numbers(int a, int b, int c) {
  // if a is greater than both b and c than a is the greatest number.
  if ((a > b) && (a > c)) {
    return a;
  }
  // if b is greater than both a and c than b is the
  // greatest number or else c is the greatest number.
  else if ((b > c) && (b > a)) {
    return b;
  } else {
    return c;
  }
}*/

/*Using Nested if-else statement

void findGreatestOf3Numbers(int a, int b, int c) {
  if (a >= b) {
    if (a >= c)
      return a;
    else
      return c;
  }
  // if b is greater than both a and c then b is the greatest number.
  // or else c will be the greater number.
  else {
    if (b >= c)
      return b;
    else
      return c;
  }
}
*/

int main() {
  int a, b, c;
  printf("Enter three different numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  printf("\n%d is the greatest number using only if.",
         findGreatestUsingOnlyIf(a, b, c));
  return 0;
}
