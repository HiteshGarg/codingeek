#include <stdio.h>
int main() {
  int radius;
  float PI = 3.14, area, circumference;

  printf("Enter the radius of circle: ");
  scanf("%d", &radius);

  area = PI * radius * radius;
  printf("The Area of circle is: %f", area);

  circumference = 2 * PI * radius;
  printf("\nThe Circumference of circle is: %f", circumference);
  return 0;
}