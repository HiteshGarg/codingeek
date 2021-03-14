#include <stdio.h>
int isPalindrome(int number) {
  int reverse = 0;
  for (int i = number; i > 0; i /= 10)
    reverse = (reverse * 10) + (i % 10);
  return number == reverse;
}

// prints palindrome between min and max
void displayPalindrome(int min, int max) {
  for (int i = min; i <= max; i++) {
    if (isPalindrome(i)) {
      printf("%d  ", i);
    }
  }
}

int main() {
  displayPalindrome(1, 100);
  return 0;
}