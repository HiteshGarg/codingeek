#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fw;
    /*creating a structure to store the particulars of the students from the file Doc1.txt*/
    int count=3;//adding three records to the file. It can be any desired value.
    struct student {
        char name[20];
        int id;
        int age;
        float marks;
        };
    struct student s;

    fw=fopen("E://Doc2.dat","w");//the new file into which the data is copied

    while(count!=0) {
        printf("Enter the name,id,age and marks of a student:\n");
        scanf("%s%d%d%f",&s.name,&s.id,&s.age,&s.marks);
        fwrite(&s,sizeof(s),1,fw);//writes the data stored in the function to the file
        fflush(stdin);//to flush out the data remaining in the buffer
        count--;
    }
    fclose(fw);
    return 0;
}
