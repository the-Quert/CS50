#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct book
	{
		char title[30];
		int price;
	}m1, m2;

	struct book *ptr;

	printf("The name of m1: \n");
	scanf("%s", m1.title);
	printf("The price of m1: \n");
	scanf("%d", &m1.price);

	printf("The name of m2: \n");
	scanf("%s", m2.title);
	printf("The price of m2: \n");
	scanf("%d", &m2.price);

	printf("==================\n");

	ptr = &m1;
	printf("Struct implementation...\n");

	printf("The title of first book: %s\n", ptr->title);
	printf("The price of fist book: %d\n", ptr->price);

	ptr = &m2;
	printf("The title of second book: %s\n", ptr->title);
	printf("The price of second book: %d\n", ptr->price);


	return 0;

}