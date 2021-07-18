int main(void) {
  int a[5] = {0, 1, 2, 3, 4};
  int *p[5] = {a, a + 2, a + 1, a + 4, a + 3};

  printf("%u %u %u %u %u\n", &a[0], &a[2], &a[1], &a[4], &a[3]);
  printf("%u %u %u %u %u", p[0], p[1], p[2], p[3], p[4]);

  return 0;
}