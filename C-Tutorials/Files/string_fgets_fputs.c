#include <stdio.h>
int main() {
  FILE *fp, *fw; // file pointers for the respective read and write mode.
  char s[30];

  fp = fopen("E://Doc1.txt", "r"); // The file that contains the String
  fw = fopen("E://Doc2.txt",
             "w"); // The file from which the string is being copied

  /*while runs until it gets NULL*/
  while (fgets(s, 30, fp) != NULL) { // reading the string from the file
                                     // Doc1.txt
    fputs(s, fw);                    // copying to the file Doc2.txt
    printf("%s", s);
  }
  fclose(fp);
  fclose(fw);
  return 0;
}
