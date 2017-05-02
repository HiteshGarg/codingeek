#include <stdio.h>
int main()
{
    struct book{//declaring 1st structure
        char name[20];
        char author[20];
        int pages;
    };
    struct price{//declaring 2nd structure
        struct book b;//nested the 1st structure inside the second one
        float price1;
    };
    /*initializing values*/
    struct price b1={"TinyTales","G.Shaw",110,299.99};
    struct price b2={"FairyTales","P.Saha",270,449.99};
    /*displaying the book details*/
    printf("The 1st book details are as follows:\n");
    printf(" Name= %s\n Author= %s\n pages= %d\n price= %f\n\n",b1.b.name,b1.b.author,b1.b.pages,b1.price1);
    printf("The 2nd book details are as follows:\n");
    printf(" Name= %s\n Author= %s\n pages= %d\n price= %f\n\n",b2.b.name,b2.b.author,b2.b.pages,b2.price1);
	return 0;
}
