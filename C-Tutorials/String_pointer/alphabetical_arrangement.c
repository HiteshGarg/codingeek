#include <stdio.h>
#include <String.h>
int main()
{
	//initializing the pointer string array
    char *names[]={
                    "tree",
                    "bowl",
                    "hat",
                    "mice",
                    "toon"
                    };
    char *temp;//temporary variable for swaping the values
    int i,j,a;
    printf("The names are:\n");
    for(i=0 ;i<5 ;i++ )
        printf("%s\n",names[i]);
    //arranging names in alphabetically using selection sort
    for(i=0 ;i<5 ;i++ ){
        for(j=i+1 ;j<5 ;j++ ){
            a=strcmp(names[i],names[j]);//compares the two string and returns an integer value
			//if the value of a is greater than 0 then swapping begins
            if(a>0){
                temp=names[i];
                names[i]=names[j];
                names[j]=temp;
            }
        }
    }
    printf("The arranged names are:\n");
    for(i=0 ;i<5 ;i++ )
        printf("%s\n",names[i]);
    return 0;
}
