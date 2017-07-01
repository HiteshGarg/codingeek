#include<stdio.h>
#include<String.h>
#include<stdlib.h>
int main()
{
	char *names[5],a[5];//declaring the string pointer array as well as a char array
	int l,i;
	char *x;
	printf("Enter 5 strings:\n");
	/*taking inputs in char array as well as copying them to the string pointer array*/
	for(i=0 ;i<5 ;i++ )
	{

		scanf("%s",a);//taking values in char array
		l=strlen(a);
		x=(char*)malloc(l+1);//used malloc to allocate dynamic memory. l+1 to store "\0". 
		strcpy(x,a);
		names[i]=x;
	}
        printf("The strings are:\n");
	for(i=0 ;i<5 ;i++ )
		printf("%s\n",names[i]);
	return 0;
}
