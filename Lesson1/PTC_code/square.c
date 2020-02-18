# include <cs50.h>
# include <stdio.h>

int square(int n);
int main(void)
{
	int input = get_int("Input: ");
	printf("%i\n", square(n));
}

int square(int n)
{
	return n * n;
}