# include <stdio.h>

/*int max(int num1, int num2);

int main(void)
{
	int a = 100;
	int b = 200;
	int ret;

	ret = max(a, b);
	printf("Max value is %d\n", ret);

	return 0;
}

int max(int num1, int num2)
{
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return result;
}*/

void swap(int *x, int *y);

int main()
{
	int a = 100;
	int b = 200;

	printf("Before swapping, a is %d\n", a);
	printf("Before swapping, b is %d\n", b);

	swap(&a, &b);
	printf("After swapping, a is %d\n", a);
	printf("After swapping, b is %d\n", b);

	return 0;
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}
