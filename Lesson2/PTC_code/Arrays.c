# include <stdio.h>
# include <stdlib.h>
# include <cs50.h>

/*
bool 1 byte
char 1 byte
int 4 bytes
float 4 bytes
long 8 bytes
double 8 bytes
string ? bytes*/
/*
int main(void)
{
	char c1 = 'H';
	char c2 = 'I';
	char c3 = '!';
	printf("%i %i %i\n", (int) c1, (int) c2, (int) c3);
	printf("%c %c %c\n", c1, c2, c3);
}

*/
/*const int N = 3;
float average(int length, int array[]);
int main(void)
{
	int n = get_int("Numbers of scores: ");

	int scores[n];
	for (int i = 0; i < n; i++)
	{
		scores[i] = get_int("Score: %i", i);
	}
	printf("Average: %f\n", average(n, scores));
}
float average(int length, int array[])
{
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += array[i];
	}
	return (float) sum / (float) length;
}*/
/*int main(void)
{
	string names[4];
	names[0] = "EMMA";
	names[1] = "RODRIGO";
	names[2] = "BRIAN";
	names[3] = "DAVID";

	printf("%s\n", names[0]); // In string printf, system would recognized each characters in string, and print out if the character is not zero.
	printf("%c%c%c%c%i\n", names[0][0], names[0][1], names[0][2], names[0][3], names[0][4]); //After the brackes, only \0 which represent 0 when print out as an integer.
}*/


