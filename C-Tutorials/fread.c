#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    /*creating a structure to store the particulars of the students from the file Doc1.txt*/
    struct student {
        char name[20];
        int id;
        int age;
        float marks;
        };
    struct student s;

    fp=fopen("E://Doc2.dat","rb");//the new file from which data is read
    if(fp==NULL) {
        printf("Cannot open file");
        exit(1);
    }
  /*reading the data from the file using fread()*/
    while(fread(&s,sizeof(s),1,fp)==1) {
        printf("%s %d %d %f ",&s.name,&s.id,&s.age,&s.marks);
        printf("\n");
    }
    fclose(fp);
    return 0;
}
