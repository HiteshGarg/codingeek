#include<stdio.h>
#include<time.h>
#define STRINGLENGTH 10

int main(void){
	
	clock_t begin1 = clock();
	char c1;
	printf("Enter the string of length STRINGLENGTH to check:\n");
	int i = 0;
	while(i++ != STRINGLENGTH)
		c1 = getchar();
	clock_t end1 = clock();
	printf("Time taken by getchar: %f seconds\n", (double)(end1 - begin1)/CLOCKS_PER_SEC);
	
	
	
	
	clock_t begin2 = clock();
	char c2;
	printf("\nEnter the string of length STRINGLENGTH to check:\n");
	int j = 0;
	while(j++ != STRINGLENGTH)
		c2 = getchar_unlocked();
	clock_t end2 = clock();
	printf("Time taken by getchar_unlocked: %f seconds\n", (double)(end2 - begin2)/CLOCKS_PER_SEC);
	
	
	
	getchar();
	return 0;
}

