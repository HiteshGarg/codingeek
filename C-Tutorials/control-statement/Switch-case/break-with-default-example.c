#include <stdio.h>

int main()
{
    int ch;
    printf("Enter 1 for square, 2 for triangle, 3 for rectangle and 4 for circle :\n");
    scanf("%d",&ch);
	
    switch(ch)
    {
    case 1:
        printf("You chose Square\n");
        break;
    case 2:
        printf("You chose Triangle\n");
    case 3:
        printf("You chose Rectangle\n");
        break;
    case 4:
        printf("You chose Circle\n");
        break;
    default:
        printf("Wrong Choice\n");
    }
    return 0;
}
