#include <stdio.h>

#define STRINGIFY_(x) #x
#define STRINGIFY(x) STRINGIFY_(x)

#define STR "Hello! Welcome to "
#define DOMAIN Codingeek
#define S_DOMAIN STRINGIFY(DOMAIN)
#define WELCOME_MSG STR S_DOMAIN

int main() {
	
	//When we actually pass some value
	printf("%s",STRINGIFY(Hello));
	
	// When it is pre calculated
	printf("\n%s",WELCOME_MSG);
	return 0;
}
