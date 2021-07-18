int main(void) {
  int a[5];
  printf("%u %u %u %u\n", (void *)a, (void *)(a + 1), (void *)(&a),
         (void *)(&a + 1));
}