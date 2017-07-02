#include <stdio.h>

int main(void){		
  
	int a = 1, b = 2, c = 3, x;
	x = a, b, c;
	/*act as separator a is assigned to x,
	*assignment operator has higher priority than comma operator*/
	
	printf("x = %d", x);

}