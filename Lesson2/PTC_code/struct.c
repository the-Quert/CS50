#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct 
	{
		int length;
		int width;
	}rectangle;

	printf("Input the length");
	scanf("%d %d", &rectangle.length, &rectangle.width);

	printf("Length: %d, Width: %d\n", rectangle.length, rectangle.width);

	return 0;
}