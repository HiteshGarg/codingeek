#include <stdio.h>
#include <string.h>
int main()
{
    char name[5][10],item[10];//declaring the string array and the character array that will contain the string to be matched
    int i,x,f=0;
    
    /*taking 5 string inputs*/
    printf("Enter 5 strings:\n");
    for(i=0 ;i<5 ;i++ )
        scanf("%s",&name[i][0]);
    
    /*entering the item to be found in the string array*/
    printf("Enter the string to be searched:\n");
    scanf("%s",&item);
    
    /*process for finding the item in the string array*/
    for(i=0; i<5 ;i++ ){
            x=strcmp(&name[i][0],item);//compares the string in the array with the item and if match is found returns 0 and stores it in variable x
            if(x == 0)
                f=i;
    }
    
    /*if match is not found*/
    if(f==0)
        printf("the item does not match any name in the list");
    /*If the match is found*/
    else
        printf("Item Found. Item in the array exists at index - %d", f);
    return 0;
}
