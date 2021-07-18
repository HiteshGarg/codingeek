#include <stdio.h>
typedef struct {
  int feet;
  int inch;
} Distance;

int main() {
  Distance d1, d2, Sum;

  printf("Enter the feet and inch of first distance: ");
  scanf("%d%d", &d1.feet, &d1.inch);
  printf("Enter the feet and inch of second distance: ");
  scanf("%d%d", &d2.feet, &d2.inch);

  Sum.inch = d1.inch + d2.inch;
  Sum.feet = d1.feet + d2.feet;

  if (Sum.inch >= 12.0) {
    Sum.inch = Sum.inch - 12.0;
    ++Sum.feet;
  }
  printf("The Sum is %d' %d''", Sum.feet, Sum.inch);
  return 0;
}