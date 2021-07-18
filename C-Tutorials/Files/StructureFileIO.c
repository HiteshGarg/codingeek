#include <stdio.h>
#include <stdlib.h>
int main() {
  FILE *fp, *fw;
  /*creating a structure to store the particulars of the students from the file
   * Doc1.txt*/
  struct student {
    char name[20];
    int id;
    float marks;
  };
  struct student s;

  fp = fopen("E://Doc1.txt", "r"); // The file from which data is copied
  fw = fopen("E://Doc2.txt", "w"); // the new file into which the data is copied

  /*copying the student record from Doc1.txt to Doc2.txt. The file runs until
   * end of file is reached*/
  while (fscanf(fp, "%s%d%f", &s.name, &s.id, &s.marks) != EOF) {
    fprintf(fw, "%s %d %f", s.name, s.id, s.marks);
    fprintf(
        fw,
        "\n"); // To add new line after every record that is read from the File
  }
  fclose(fp);
  fclose(fw);
  return 0;
}
