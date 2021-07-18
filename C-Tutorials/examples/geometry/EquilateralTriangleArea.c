#include <math.h>
#include <stdio.h>
int main() {
  int side;
  float area;
  printf("\nEnter the side of the triangle:");
  scanf("%d", &side);

  area = (1.73 * side * side) / 4;

  printf("\nThe Area of an Equilateral Triangle is: %f", area);
  return (0);
}