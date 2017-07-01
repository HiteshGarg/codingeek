#include <stdio.h>
int main()
{
    FILE *fp,*fw;//we create a file read pointer and a file write pointer
    fp=fopen("E:\\Doc1.txt","r");//opens the txt file present in E:// drive in read mode
    char ch;

    /*We read the contents of the file Doc1.txt and print it*/
    while(1) {
        ch=fgetc(fp);//reading the content of the file
        if(ch==EOF)//checks whether the loop reached the end of file
            break;
        printf("%c",ch);
    }

    fw=fopen("E:\\Doc2.txt","w");//opens the file in write mode. Since there's no file with the name Doc2.txt, a new file is created.
    char ch1[20]="Codingeek..!!";
    int i=0;

    /*copying the string in the array ch1 to the file Doc2*/
    while(ch1[i]!='\0') {
        fputc(ch1[i],fw);
        i++;
    }

    fclose(fp);//close the file Doc1.txt
    fclose(fw);//close the file Doc2.txt
    return 0;
}
