#include <stdio.h>

int main(void){
	int x = 10, y =5;
	
	y = x++ + y;    	
	printf("x = %d y = %d", x, y);
	
	/* post incr ++ is has highest priority, so x becomes 11 but
	 * it'll increase only after the statement is evaluated, so it is not reflectred in the value of 'y'
	 * y = 10 + 5
	 * x = x + 1 
	 * */
	return 0;
}