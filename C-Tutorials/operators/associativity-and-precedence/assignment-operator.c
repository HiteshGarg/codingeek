#include <stdio.h>

int main(void){		

    int x = 5, y = 5;
    x == y ? x = 10 : (y = 10); 

	/* x == y ? x = 10 : y = 10;
    * if we write above expression without parenthesis, there will be compiler error.
    * As y = 10 is the assignment operator that goes right to left.
    * 10 is assigned to y. Without parenthesis it says 10 is assigned to "x==y?x=10:".
    * Hence the compilation error will be Lvalue required	  
    */			

    printf("x = %d y = %d", x, y);
    return 0;
}